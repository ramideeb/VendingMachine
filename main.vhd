Library ieee;
use IEEE.STD_LOGIC_1164.ALL;
entity main is
    Port ( C : in  STD_LOGIC_VECTOR (3 downto 0);
           P : in  STD_LOGIC_VECTOR (2 downto 0);
           RESET : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           R : out  bit_VECTOR (2 downto 0);
           Vend : out  bit_VECTOR (2 downto 0));
end main;
architecture Behavioral of main is
	Type State is (S0,S1,S2,S3);
	Signal CurrentState, NextState: State;
	Signal v: bit;
begin

process(Reset, CLK, CurrentState,v,p(0),p(1),p(2),c(0),c(1),c(2),c(3))
		Variable PR, Price, Sum, Change: INTEGER;
begin
case CurrentState is

when S0 =>
	if(P(0) = '1' or P(1) = '1' or P(2) = '1' )then
	   NextState <= S1;
	else
		NextState <= S0;
   end if;	
				
when S1=>
	if(price < sum or price=sum ) then
		NextState <= S2;
	else 
		NextState <= S1;	
	end if;
  
when S2=>
   NextState<=S3;
	
when S3=>
if(change=0) then
	NextState <= S0;
	else
	NextState <= S3;
end if;
end case;


if(clk' event and clk='1' ) then 

	if(currentstate=s0) then
		vend<="000";
		r<="000";
		sum:=0;	
		change:=0;
		price:=0;
   if(P= "001")then
	   price:=5;
	elsif(P= "010")then
   	price:= 6;
   else
		price:=7;
end if;	


elsif(CurrentState=s1) then

if(price>sum) then
	if(C = "0001")then
		Sum:=sum+1;
	elsif(C = "0010")then
		Sum:=sum+2;
	elsif(C = "0100")then
		Sum:=sum+4;
	elsif(C = "1000")then
		Sum:=sum+10;
end if;
		NextState <= S2;
		CurrentState<=NextState;
	else 
	change:=sum-price;	
	end if;


elsif(currentstate=s2) then
	if(p(0)='1')then
		Vend<="001";
	elsif (p(1)='1') then
		Vend<="010";
	elsif (p(2)='1') then
		Vend<="100";
	end if;

elsif(currentstate=s3) then
	vend<="000";
	r<="000";
	if ( change >= 4) then 
		R <= "100";
		change := change -4;
	elsif ( change >= 2) then 
		R<="010";
		change := change - 2;
	elsif (change >= 1)then
		R <= "001"; 
		change :=  change - 1; 
	end if; 

end if;

	CurrentState<=NextState;
end if;
end process;
end Behavioral;