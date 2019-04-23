--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:57:12 04/13/2019
-- Design Name:   
-- Module Name:   C:/Users/khameesiyadjamoos/Desktop/Digital2Project/prdigital2/testing.vhd
-- Project Name:  prdigital2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: main
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testing IS
END testing;
 
ARCHITECTURE behavior OF testing IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT main
    PORT(
         C : IN  std_logic_vector(3 downto 0);
         P : IN  std_logic_vector(2 downto 0);
         RESET : IN  std_logic;
         CLK : IN  std_logic;
           R : out  bit_VECTOR (2 downto 0);
         Vend : OUT bit_VECTOR(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal C : std_logic_vector(3 downto 0) := (others => '0');
   signal P : std_logic_vector(2 downto 0) := (others => '0');
   signal RESET : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal R : bit_vector(2 downto 0);
   signal Vend : bit_vector(2 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 200 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: main PORT MAP (
          C => C,
          P => P,
          RESET => RESET,
          CLK => CLK,
          R => R,
          Vend => Vend
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.


p<="001";
 wait for CLK_period ;
c<="0001";
 wait for CLK_period ;
c<="0001";
 wait for CLK_period ;
c<="0001";
 wait for CLK_period ;
c<="1000";
 wait for CLK_period ;
c<="0000";
wait;
end process;
END;