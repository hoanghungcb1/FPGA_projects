// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->operand_a_i),32);
    bufp->chgIData(oldp+1,(vlSelf->operand_b_i),32);
    bufp->chgCData(oldp+2,(vlSelf->alu_op_i),4);
    bufp->chgBit(oldp+3,(vlSelf->clk_i));
    bufp->chgIData(oldp+4,(vlSelf->alu_data_o),32);
    bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__alu_op),4);
    bufp->chgIData(oldp+6,(vlSelf->top__DOT__dut__DOT__temp),32);
    bufp->chgQData(oldp+7,((QData)((IData)(vlSelf->operand_a_i))),33);
    bufp->chgQData(oldp+9,((QData)((IData)(vlSelf->operand_b_i))),33);
    bufp->chgQData(oldp+11,((0x1ffffffffULL & (1ULL 
                                               + ((QData)((IData)(vlSelf->operand_a_i)) 
                                                  + 
                                                  (~ (QData)((IData)(vlSelf->operand_b_i))))))),33);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
