// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v17;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__LCD__DOT__i;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__LCD__DOT__j;
    // Body
    __Vdly__top__DOT__dut__DOT__LCD__DOT__j = vlSelf->top__DOT__dut__DOT__LCD__DOT__j;
    __Vdly__top__DOT__dut__DOT__LCD__DOT__i = vlSelf->top__DOT__dut__DOT__LCD__DOT__i;
    vlSelf->lcd_rw = 0U;
    vlSelf->lcd_blon = 1U;
    vlSelf->lcd_on = 1U;
    if (VL_GTES_III(32, 0xf4240U, vlSelf->top__DOT__dut__DOT__LCD__DOT__i)) {
        __Vdly__top__DOT__dut__DOT__LCD__DOT__i = ((IData)(1U) 
                                                   + vlSelf->top__DOT__dut__DOT__LCD__DOT__i);
        vlSelf->lcd_e = 1U;
        vlSelf->data = ((0x18U >= (0x1fU & (vlSelf->top__DOT__dut__DOT__LCD__DOT__j 
                                            - (IData)(1U))))
                         ? vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas
                        [(0x1fU & (vlSelf->top__DOT__dut__DOT__LCD__DOT__j 
                                   - (IData)(1U)))]
                         : (IData)(vlSelf->top__DOT__dut__DOT__LCD__DOT____Vxrand_h96fdabed__0));
    } else if ((VL_LTS_III(32, 0xf4240U, vlSelf->top__DOT__dut__DOT__LCD__DOT__i) 
                & VL_GTS_III(32, 0x1e8480U, vlSelf->top__DOT__dut__DOT__LCD__DOT__i))) {
        __Vdly__top__DOT__dut__DOT__LCD__DOT__i = ((IData)(1U) 
                                                   + vlSelf->top__DOT__dut__DOT__LCD__DOT__i);
        vlSelf->lcd_e = 0U;
    } else if ((0x1e8480U == vlSelf->top__DOT__dut__DOT__LCD__DOT__i)) {
        __Vdly__top__DOT__dut__DOT__LCD__DOT__j = ((IData)(1U) 
                                                   + vlSelf->top__DOT__dut__DOT__LCD__DOT__j);
        __Vdly__top__DOT__dut__DOT__LCD__DOT__i = 0U;
    } else {
        __Vdly__top__DOT__dut__DOT__LCD__DOT__i = 0U;
    }
    if (VL_GTES_III(32, 5U, vlSelf->top__DOT__dut__DOT__LCD__DOT__j)) {
        vlSelf->lcd_rs = 0U;
    } else if ((VL_LTS_III(32, 5U, vlSelf->top__DOT__dut__DOT__LCD__DOT__j) 
                & VL_GTS_III(32, 0x16U, vlSelf->top__DOT__dut__DOT__LCD__DOT__j))) {
        vlSelf->lcd_rs = 1U;
    } else if ((0x16U == vlSelf->top__DOT__dut__DOT__LCD__DOT__j)) {
        vlSelf->lcd_rs = 0U;
    } else if (VL_LTS_III(32, 0x16U, vlSelf->top__DOT__dut__DOT__LCD__DOT__j)) {
        __Vdly__top__DOT__dut__DOT__LCD__DOT__j = 5U;
        vlSelf->lcd_rs = 1U;
    }
    __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v13 
        = (0xffU & ((IData)(0x30U) + vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i
                    [0U]));
    __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v14 
        = (0xffU & ((IData)(0x30U) + vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i
                    [1U]));
    __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v16 
        = (0xffU & ((IData)(0x30U) + vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i
                    [2U]));
    __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v17 
        = (0xffU & ((IData)(0x30U) + vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i
                    [3U]));
    vlSelf->top__DOT__dut__DOT__LCD__DOT__i = __Vdly__top__DOT__dut__DOT__LCD__DOT__i;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__j = __Vdly__top__DOT__dut__DOT__LCD__DOT__j;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0U] = 0x38U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[1U] = 0xcU;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[2U] = 6U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[3U] = 1U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[4U] = 0x80U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[5U] = 0x4cU;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[6U] = 0x6fU;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[7U] = 0x67U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[8U] = 0x32U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[9U] = 0x28U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0xaU] = 0x58U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0xbU] = 0x29U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0xcU] = 0x3dU;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0xdU] 
        = __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v13;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0xeU] 
        = __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v14;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0xfU] = 0x2eU;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0x10U] 
        = __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v16;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0x11U] 
        = __Vdlyvval__top__DOT__dut__DOT__LCD__DOT__Datas__v17;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0x12U] = 0x21U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0x13U] = 0x21U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0x14U] = 0x21U;
    vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0x15U] = 0xc0U;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
