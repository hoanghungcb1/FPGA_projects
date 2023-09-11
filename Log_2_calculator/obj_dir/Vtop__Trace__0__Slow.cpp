// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+47,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"data_log",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+49,"lcd_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"lcd_rs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"lcd_on",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"lcd_blon",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"lcd_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+47,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"data_log",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+49,"lcd_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"lcd_rs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"lcd_on",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"lcd_blon",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"lcd_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+47,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"data_log",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+49,"lcd_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"lcd_rs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"lcd_on",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"lcd_blon",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"lcd_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+28+i*1,"data_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->pushNamePrefix("LCD ");
    tracep->declBit(c+47,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+32+i*1,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBit(c+49,"lcd_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"lcd_rs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"lcd_on",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"lcd_blon",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"lcd_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2,"j",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+3+i*1,"Datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("log_2 ");
    tracep->declBus(c+48,"data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+40,"y",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,"y_tp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,"x",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,"t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+45,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+46,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__dut__DOT__LCD__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__dut__DOT__LCD__DOT__j),32);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[0]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[1]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[2]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[3]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[4]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[5]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[6]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[7]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[8]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[9]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[10]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[11]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[12]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[13]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[14]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[15]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[16]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[17]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[18]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[19]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[20]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[21]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[22]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[23]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[24]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__dut__DOT__data_i[0]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__dut__DOT__data_i[1]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__dut__DOT__data_i[2]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__dut__DOT__data_i[3]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[0]),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[1]),8);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[2]),8);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[3]),8);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[0]),8);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[1]),8);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[2]),8);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__dut__DOT____Vcellout__log_2__result[3]),8);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__dut__DOT__log_2__DOT__y),4);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__dut__DOT__log_2__DOT__temp),4);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__dut__DOT__log_2__DOT__y_tp),7);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__dut__DOT__log_2__DOT__x),16);
    bufp->fullSData(oldp+44,(vlSelf->top__DOT__dut__DOT__log_2__DOT__t),16);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__dut__DOT__log_2__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+47,(vlSelf->clk_i));
    bufp->fullSData(oldp+48,(vlSelf->data_log),16);
    bufp->fullBit(oldp+49,(vlSelf->lcd_e));
    bufp->fullBit(oldp+50,(vlSelf->lcd_rs));
    bufp->fullBit(oldp+51,(vlSelf->lcd_on));
    bufp->fullBit(oldp+52,(vlSelf->lcd_blon));
    bufp->fullBit(oldp+53,(vlSelf->lcd_rw));
    bufp->fullCData(oldp+54,(vlSelf->data),8);
}
