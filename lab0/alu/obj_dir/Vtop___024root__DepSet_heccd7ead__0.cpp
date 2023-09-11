// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h45883b35_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__dut__DOT__temp = ((IData)(1U) 
                                        + (vlSelf->operand_a_i 
                                           + (~ vlSelf->operand_b_i)));
    __Vtableidx1 = vlSelf->alu_op_i;
    vlSelf->top__DOT__dut__DOT__alu_op = Vtop__ConstPool__TABLE_h45883b35_0
        [__Vtableidx1];
    vlSelf->alu_data_o = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                           ? ((4U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                               ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                   ? (vlSelf->operand_a_i 
                                      + vlSelf->operand_b_i)
                                   : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                       ? (vlSelf->operand_a_i 
                                          >> (0x1fU 
                                              & vlSelf->operand_b_i))
                                       : (vlSelf->operand_a_i 
                                          + vlSelf->operand_b_i)))
                               : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                   ? (vlSelf->operand_a_i 
                                      + vlSelf->operand_b_i)
                                   : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                       ? (vlSelf->operand_a_i 
                                          + vlSelf->operand_b_i)
                                       : (vlSelf->operand_a_i 
                                          >> (0x1fU 
                                              & vlSelf->operand_b_i)))))
                           : ((4U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                               ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                   ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                       ? (vlSelf->operand_a_i 
                                          << (0x1fU 
                                              & vlSelf->operand_b_i))
                                       : (vlSelf->operand_a_i 
                                          & vlSelf->operand_b_i))
                                   : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                       ? (vlSelf->operand_a_i 
                                          | vlSelf->operand_b_i)
                                       : (vlSelf->operand_a_i 
                                          ^ vlSelf->operand_b_i)))
                               : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                   ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                       ? ((1U & (IData)(
                                                        (1ULL 
                                                         & ((1ULL 
                                                             + 
                                                             ((QData)((IData)(vlSelf->operand_a_i)) 
                                                              + 
                                                              (~ (QData)((IData)(vlSelf->operand_b_i))))) 
                                                            >> 0x20U))))
                                           ? 1U : 0U)
                                       : ((vlSelf->top__DOT__dut__DOT__temp 
                                           >> 0x1fU)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                       ? vlSelf->top__DOT__dut__DOT__temp
                                       : (vlSelf->operand_a_i 
                                          + vlSelf->operand_b_i)))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->alu_op_i & 0xf0U))) {
        Verilated::overWidthError("alu_op_i");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
