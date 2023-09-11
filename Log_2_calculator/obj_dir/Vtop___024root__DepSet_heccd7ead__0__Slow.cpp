// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__log_2__DOT__x = vlSelf->data_log;
    vlSelf->top__DOT__dut__DOT__log_2__DOT__y = 0xeU;
    if ((0x80U > (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = 
            (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                        << 8U));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y = 
            (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y) 
                     - (IData)(8U)));
    }
    if ((0x800U > (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = 
            (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                        << 4U));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y = 
            (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y) 
                     - (IData)(4U)));
    }
    if ((0x2000U > (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = 
            (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                        << 2U));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y = 
            (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y) 
                     - (IData)(2U)));
    }
    if ((0x4000U > (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = 
            (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                        << 1U));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y = 
            (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y) 
                     - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp = 0x64U;
    vlSelf->top__DOT__dut__DOT__log_2__DOT__t = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                    + 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                     >> 1U)));
    if ((0U == (0x8000U & (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__t)))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp 
            = (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                        - (IData)(0x3aU)));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = vlSelf->top__DOT__dut__DOT__log_2__DOT__t;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__t = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                    + 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                     >> 2U)));
    if ((0U == (0x8000U & (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__t)))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp 
            = (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                        - (IData)(0x20U)));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = vlSelf->top__DOT__dut__DOT__log_2__DOT__t;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__t = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                    + 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                     >> 3U)));
    if ((0U == (0x8000U & (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__t)))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp 
            = (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                        - (IData)(0x11U)));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = vlSelf->top__DOT__dut__DOT__log_2__DOT__t;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__t = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                    + 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                     >> 4U)));
    if ((0U == (0x8000U & (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__t)))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp 
            = (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                        - (IData)(9U)));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = vlSelf->top__DOT__dut__DOT__log_2__DOT__t;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__t = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                    + 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                     >> 5U)));
    if ((0U == (0x8000U & (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__t)))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp 
            = (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                        - (IData)(4U)));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = vlSelf->top__DOT__dut__DOT__log_2__DOT__t;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__t = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                    + 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                     >> 6U)));
    if ((0U == (0x8000U & (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__t)))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp 
            = (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                        - (IData)(2U)));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = vlSelf->top__DOT__dut__DOT__log_2__DOT__t;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__t = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                    + 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__x) 
                                                     >> 7U)));
    if ((0U == (0x8000U & (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__t)))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp 
            = (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                        - (IData)(1U)));
        vlSelf->top__DOT__dut__DOT__log_2__DOT__x = vlSelf->top__DOT__dut__DOT__log_2__DOT__t;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp = 
        (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                  - (IData)(1U)));
    if ((0U == (IData)(vlSelf->data_log))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y = 0U;
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp = 0U;
    }
    if ((0x8000U <= (IData)(vlSelf->data_log))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y = 0xfU;
        vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp = 0U;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__temp = 0U;
    if ((9U < (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk1__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk1__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__log_2__DOT__y 
                    = (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y) 
                               - (IData)(0xaU)));
                vlSelf->top__DOT__dut__DOT__log_2__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__temp)));
                if ((9U > (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y))) {
                    goto __Vlabel1;
                }
                vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk1__DOT__i);
            }
            __Vlabel1: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[0U] 
            = vlSelf->top__DOT__dut__DOT__log_2__DOT__temp;
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[1U] 
            = vlSelf->top__DOT__dut__DOT__log_2__DOT__y;
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[0U] = 0U;
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[1U] 
            = vlSelf->top__DOT__dut__DOT__log_2__DOT__y;
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__temp = 0U;
    if ((9U < (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp))) {
        vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk2__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp 
                    = (0x7fU & ((IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp) 
                                - (IData)(0xaU)));
                vlSelf->top__DOT__dut__DOT__log_2__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__temp)));
                if ((9U > (IData)(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp))) {
                    goto __Vlabel2;
                }
                vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel2: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[2U] 
            = vlSelf->top__DOT__dut__DOT__log_2__DOT__temp;
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[3U] 
            = vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp;
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[2U] = 0U;
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[3U] 
            = vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp;
    }
    vlSelf->top__DOT__dut__DOT__data_i[3U] = vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result
        [3U];
    vlSelf->top__DOT__dut__DOT__data_i[2U] = vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result
        [2U];
    vlSelf->top__DOT__dut__DOT__data_i[1U] = vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result
        [1U];
    vlSelf->top__DOT__dut__DOT__data_i[0U] = vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result
        [0U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[3U] 
        = vlSelf->top__DOT__dut__DOT__data_i[3U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[2U] 
        = vlSelf->top__DOT__dut__DOT__data_i[2U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[1U] 
        = vlSelf->top__DOT__dut__DOT__data_i[1U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[0U] 
        = vlSelf->top__DOT__dut__DOT__data_i[0U];
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__LCD__DOT____Vxrand_h96fdabed__0 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__dut__DOT__LCD__DOT__i = 0U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__j = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->data_log = VL_RAND_RESET_I(16);
    vlSelf->lcd_e = VL_RAND_RESET_I(1);
    vlSelf->lcd_rs = VL_RAND_RESET_I(1);
    vlSelf->lcd_on = VL_RAND_RESET_I(1);
    vlSelf->lcd_blon = VL_RAND_RESET_I(1);
    vlSelf->lcd_rw = VL_RAND_RESET_I(1);
    vlSelf->data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__data_i[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__dut__DOT__log_2__DOT__y = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__log_2__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__log_2__DOT__x = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__log_2__DOT__t = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__LCD__DOT____Vxrand_h96fdabed__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__LCD__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__LCD__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
