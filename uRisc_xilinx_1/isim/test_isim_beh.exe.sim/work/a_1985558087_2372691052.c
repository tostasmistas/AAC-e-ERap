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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Nmac/Documents/GitHub/AAC/uRisc_xilinx_1/test.vhd";



static void work_a_1985558087_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2760);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2760);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1985558087_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int64 t11;
    int64 t12;
    int64 t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(95, ng0);
    t3 = (15 * 1000LL);
    t2 = (t0 + 3648);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t3);
    t5 = (15 * 1000LL);
    t9 = (t0 + 1968U);
    t10 = *((char **)t9);
    t11 = *((int64 *)t10);
    t12 = (t11 * 2);
    t13 = (t5 + t12);
    t9 = (t0 + 3648);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t9, 0U, 1, t13);
    t18 = (t0 + 3648);
    xsi_driver_intertial_reject(t18, t3, t3);
    xsi_set_current_line(100, ng0);
    t3 = (35 * 1000LL);
    t2 = (t0 + 5988);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(101, ng0);
    t3 = (55 * 1000LL);
    t2 = (t0 + 6004);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(102, ng0);
    t3 = (75 * 1000LL);
    t2 = (t0 + 6020);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(103, ng0);
    t3 = (95 * 1000LL);
    t2 = (t0 + 6036);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(104, ng0);
    t3 = (115 * 1000LL);
    t2 = (t0 + 6052);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(105, ng0);
    t3 = (135 * 1000LL);
    t2 = (t0 + 6068);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(106, ng0);
    t3 = (155 * 1000LL);
    t2 = (t0 + 6084);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(107, ng0);
    t3 = (175 * 1000LL);
    t2 = (t0 + 6100);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(108, ng0);
    t3 = (195 * 1000LL);
    t2 = (t0 + 6116);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(109, ng0);
    t3 = (215 * 1000LL);
    t2 = (t0 + 6132);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(110, ng0);
    t3 = (235 * 1000LL);
    t2 = (t0 + 6148);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(111, ng0);
    t3 = (255 * 1000LL);
    t2 = (t0 + 6164);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(112, ng0);
    t3 = (275 * 1000LL);
    t2 = (t0 + 6180);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(113, ng0);
    t3 = (295 * 1000LL);
    t2 = (t0 + 6196);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t3);
    t14 = (t0 + 3712);
    xsi_driver_intertial_reject(t14, t3, t3);
    xsi_set_current_line(194, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_1985558087_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1985558087_2372691052_p_0,(void *)work_a_1985558087_2372691052_p_1};
	xsi_register_didat("work_a_1985558087_2372691052", "isim/test_isim_beh.exe.sim/work/a_1985558087_2372691052.didat");
	xsi_register_executes(pe);
}
