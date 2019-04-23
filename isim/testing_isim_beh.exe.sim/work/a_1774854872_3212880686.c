/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/khameesiyadjamoos/Desktop/Digital2Project/prdigital2/main.vhd";



static void work_a_1774854872_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1472U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    t1 = (t0 + 4272);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(23, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t8 = (0 - 2);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t6 = (t7 + t11);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t14 = (t0 + 1192U);
    t15 = *((char **)t14);
    t16 = (1 - 2);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = (t20 == (unsigned char)3);
    t5 = t21;

LAB15:    if (t5 == 1)
        goto LAB10;

LAB11:    t22 = (t0 + 1192U);
    t23 = *((char **)t22);
    t24 = (2 - 2);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t28 = *((unsigned char *)t22);
    t29 = (t28 == (unsigned char)3);
    t4 = t29;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t1 = (t0 + 2848U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t4 = (t8 < t16);
    if (t4 == 1)
        goto LAB19;

LAB20:    t1 = (t0 + 2728U);
    t7 = *((char **)t1);
    t24 = *((int *)t7);
    t1 = (t0 + 2848U);
    t14 = *((char **)t1);
    t35 = *((int *)t14);
    t5 = (t24 == t35);
    t3 = t5;

LAB21:    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB2;

LAB5:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 == 0);
    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(24, ng0);
    t30 = (t0 + 4352);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = (unsigned char)1;
    xsi_driver_first_trans_fast(t30);
    goto LAB8;

LAB10:    t4 = (unsigned char)1;
    goto LAB12;

LAB13:    t5 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 4352);
    t15 = (t1 + 56U);
    t22 = *((char **)t15);
    t23 = (t22 + 56U);
    t30 = *((char **)t23);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    t3 = (unsigned char)1;
    goto LAB21;

LAB22:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 4352);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1992U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t20 = (t13 == (unsigned char)0);
    if (t20 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB51;

LAB52:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB89;

LAB90:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB98;

LAB99:
LAB32:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4544);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t5 = *((unsigned char *)t6);
    t12 = (t5 == (unsigned char)3);
    t3 = t12;
    goto LAB30;

LAB31:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 7388);
    t15 = (t0 + 4416);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    t30 = (t23 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t2, 3U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 7391);
    t6 = (t0 + 4480);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 7394);
    t3 = 1;
    if (3U == 3U)
        goto LAB37;

LAB38:    t3 = 0;

LAB39:    if (t3 != 0)
        goto LAB34;

LAB36:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 7397);
    t3 = 1;
    if (3U == 3U)
        goto LAB45;

LAB46:    t3 = 0;

LAB47:    if (t3 != 0)
        goto LAB43;

LAB44:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 7;

LAB35:    goto LAB32;

LAB34:    xsi_set_current_line(57, ng0);
    t15 = (t0 + 2728U);
    t22 = *((char **)t15);
    t15 = (t22 + 0);
    *((int *)t15) = 5;
    goto LAB35;

LAB37:    t9 = 0;

LAB40:    if (t9 < 3U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t7 = (t2 + t9);
    t14 = (t1 + t9);
    if (*((unsigned char *)t7) != *((unsigned char *)t14))
        goto LAB38;

LAB42:    t9 = (t9 + 1);
    goto LAB40;

LAB43:    xsi_set_current_line(59, ng0);
    t15 = (t0 + 2728U);
    t22 = *((char **)t15);
    t15 = (t22 + 0);
    *((int *)t15) = 6;
    goto LAB35;

LAB45:    t9 = 0;

LAB48:    if (t9 < 3U)
        goto LAB49;
    else
        goto LAB47;

LAB49:    t7 = (t2 + t9);
    t14 = (t1 + t9);
    if (*((unsigned char *)t7) != *((unsigned char *)t14))
        goto LAB46;

LAB50:    t9 = (t9 + 1);
    goto LAB48;

LAB51:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2728U);
    t6 = *((char **)t1);
    t8 = *((int *)t6);
    t1 = (t0 + 2848U);
    t7 = *((char **)t1);
    t16 = *((int *)t7);
    t5 = (t8 > t16);
    if (t5 != 0)
        goto LAB53;

LAB55:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t1 = (t0 + 2728U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t24 = (t8 - t16);
    t1 = (t0 + 2968U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t24;

LAB54:    goto LAB32;

LAB53:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1032U);
    t14 = *((char **)t1);
    t1 = (t0 + 7400);
    t12 = 1;
    if (4U == 4U)
        goto LAB59;

LAB60:    t12 = 0;

LAB61:    if (t12 != 0)
        goto LAB56;

LAB58:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7404);
    t3 = 1;
    if (4U == 4U)
        goto LAB67;

LAB68:    t3 = 0;

LAB69:    if (t3 != 0)
        goto LAB65;

LAB66:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7408);
    t3 = 1;
    if (4U == 4U)
        goto LAB75;

LAB76:    t3 = 0;

LAB77:    if (t3 != 0)
        goto LAB73;

LAB74:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7412);
    t3 = 1;
    if (4U == 4U)
        goto LAB83;

LAB84:    t3 = 0;

LAB85:    if (t3 != 0)
        goto LAB81;

LAB82:
LAB57:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4544);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB54;

LAB56:    xsi_set_current_line(69, ng0);
    t30 = (t0 + 2848U);
    t31 = *((char **)t30);
    t24 = *((int *)t31);
    t35 = (t24 + 1);
    t30 = (t0 + 2848U);
    t32 = *((char **)t30);
    t30 = (t32 + 0);
    *((int *)t30) = t35;
    goto LAB57;

LAB59:    t9 = 0;

LAB62:    if (t9 < 4U)
        goto LAB63;
    else
        goto LAB61;

LAB63:    t22 = (t14 + t9);
    t23 = (t1 + t9);
    if (*((unsigned char *)t22) != *((unsigned char *)t23))
        goto LAB60;

LAB64:    t9 = (t9 + 1);
    goto LAB62;

LAB65:    xsi_set_current_line(71, ng0);
    t15 = (t0 + 2848U);
    t22 = *((char **)t15);
    t8 = *((int *)t22);
    t16 = (t8 + 2);
    t15 = (t0 + 2848U);
    t23 = *((char **)t15);
    t15 = (t23 + 0);
    *((int *)t15) = t16;
    goto LAB57;

LAB67:    t9 = 0;

LAB70:    if (t9 < 4U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t7 = (t2 + t9);
    t14 = (t1 + t9);
    if (*((unsigned char *)t7) != *((unsigned char *)t14))
        goto LAB68;

LAB72:    t9 = (t9 + 1);
    goto LAB70;

LAB73:    xsi_set_current_line(73, ng0);
    t15 = (t0 + 2848U);
    t22 = *((char **)t15);
    t8 = *((int *)t22);
    t16 = (t8 + 4);
    t15 = (t0 + 2848U);
    t23 = *((char **)t15);
    t15 = (t23 + 0);
    *((int *)t15) = t16;
    goto LAB57;

LAB75:    t9 = 0;

LAB78:    if (t9 < 4U)
        goto LAB79;
    else
        goto LAB77;

LAB79:    t7 = (t2 + t9);
    t14 = (t1 + t9);
    if (*((unsigned char *)t7) != *((unsigned char *)t14))
        goto LAB76;

LAB80:    t9 = (t9 + 1);
    goto LAB78;

LAB81:    xsi_set_current_line(75, ng0);
    t15 = (t0 + 2848U);
    t22 = *((char **)t15);
    t8 = *((int *)t22);
    t16 = (t8 + 10);
    t15 = (t0 + 2848U);
    t23 = *((char **)t15);
    t15 = (t23 + 0);
    *((int *)t15) = t16;
    goto LAB57;

LAB83:    t9 = 0;

LAB86:    if (t9 < 4U)
        goto LAB87;
    else
        goto LAB85;

LAB87:    t7 = (t2 + t9);
    t14 = (t1 + t9);
    if (*((unsigned char *)t7) != *((unsigned char *)t14))
        goto LAB84;

LAB88:    t9 = (t9 + 1);
    goto LAB86;

LAB89:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t8 = (0 - 2);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t6 + t11);
    t5 = *((unsigned char *)t1);
    t12 = (t5 == (unsigned char)3);
    if (t12 != 0)
        goto LAB91;

LAB93:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t8 = (1 - 2);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB94;

LAB95:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t8 = (2 - 2);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB96;

LAB97:
LAB92:    goto LAB32;

LAB91:    xsi_set_current_line(86, ng0);
    t7 = (t0 + 7416);
    t15 = (t0 + 4416);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    t30 = (t23 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t7, 3U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB92;

LAB94:    xsi_set_current_line(88, ng0);
    t6 = (t0 + 7419);
    t14 = (t0 + 4416);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    t23 = (t22 + 56U);
    t30 = *((char **)t23);
    memcpy(t30, t6, 3U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB92;

LAB96:    xsi_set_current_line(90, ng0);
    t6 = (t0 + 7422);
    t14 = (t0 + 4416);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    t23 = (t22 + 56U);
    t30 = *((char **)t23);
    memcpy(t30, t6, 3U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB92;

LAB98:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 7425);
    t7 = (t0 + 4416);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 7428);
    t6 = (t0 + 4480);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 >= 4);
    if (t3 != 0)
        goto LAB100;

LAB102:    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 >= 2);
    if (t3 != 0)
        goto LAB103;

LAB104:    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 >= 1);
    if (t3 != 0)
        goto LAB105;

LAB106:
LAB101:    goto LAB32;

LAB100:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 7431);
    t7 = (t0 + 4480);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t16 = (t8 - 4);
    t1 = (t0 + 2968U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t16;
    goto LAB101;

LAB103:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 7434);
    t7 = (t0 + 4480);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t16 = (t8 - 2);
    t1 = (t0 + 2968U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t16;
    goto LAB101;

LAB105:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 7437);
    t7 = (t0 + 4480);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t16 = (t8 - 1);
    t1 = (t0 + 2968U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t16;
    goto LAB101;

}


extern void work_a_1774854872_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1774854872_3212880686_p_0};
	xsi_register_didat("work_a_1774854872_3212880686", "isim/testing_isim_beh.exe.sim/work/a_1774854872_3212880686.didat");
	xsi_register_executes(pe);
}
