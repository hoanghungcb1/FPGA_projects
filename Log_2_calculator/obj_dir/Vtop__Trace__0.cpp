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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__dut__DOT__LCD__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__dut__DOT__LCD__DOT__j),32);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[1]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[2]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[3]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[4]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[5]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[6]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[7]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[8]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[9]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[10]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[11]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[12]),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[13]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[14]),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[15]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[16]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[17]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[18]),8);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[19]),8);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[20]),8);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[21]),8);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[22]),8);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[23]),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[24]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__dut__DOT__data_i[0]),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__dut__DOT__data_i[1]),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__dut__DOT__data_i[2]),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__dut__DOT__data_i[3]),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[0]),8);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[1]),8);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[2]),8);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[3]),8);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[0]),8);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[1]),8);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[2]),8);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[3]),8);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__dut__DOT__log_2__DOT__y),4);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__dut__DOT__log_2__DOT__temp),4);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp),7);
        bufp->chgSData(oldp+42,(vlSelf->top__DOT__dut__DOT__log_2__DOT__x),16);
        bufp->chgSData(oldp+43,(vlSelf->top__DOT__dut__DOT__log_2__DOT__t),16);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+46,(vlSelf->clk_i));
    bufp->chgSData(oldp+47,(vlSelf->data_log),16);
    bufp->chgBit(oldp+48,(vlSelf->lcd_e));
    bufp->chgBit(oldp+49,(vlSelf->lcd_rs));
    bufp->chgBit(oldp+50,(vlSelf->lcd_on));
    bufp->chgBit(oldp+51,(vlSelf->lcd_blon));
    bufp->chgBit(oldp+52,(vlSelf->lcd_rw));
    bufp->chgCData(oldp+53,(vlSelf->data),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
