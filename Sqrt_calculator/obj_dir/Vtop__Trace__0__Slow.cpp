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
    tracep->declBus(c+138,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"data_clk_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"data_clk_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"lcd_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"lcd_rs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"lcd_on",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"lcd_blon",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"lcd_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+148,"data_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+138,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"data_clk_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"data_clk_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"lcd_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"lcd_rs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"lcd_on",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"lcd_blon",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"lcd_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+148,"data_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+138,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"data_clk_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"data_clk_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"lcd_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"lcd_rs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"lcd_on",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"lcd_blon",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"lcd_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+148,"data_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+34+i*1,"sqrt_lcd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+39+i*1,"sqrt_lcd_tp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+44,"sqrt_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+45,"sqrt_o_tp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declQuad(c+46,"Sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+48,"A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,"B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,"A_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"B_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("LCD ");
    tracep->declBit(c+139,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+52+i*1,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+57+i*1,"data_i_tp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBit(c+143,"lcd_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"lcd_rs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"lcd_on",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"lcd_blon",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"lcd_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+148,"data_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2,"j",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+3+i*1,"Datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bin2dec0 ");
    tracep->declBus(c+44,"bin_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+62+i*1,"dec_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+67,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,"y",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+69,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+70,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+71,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+72,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("bin2dec1 ");
    tracep->declBus(c+45,"bin_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+73+i*1,"dec_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+78,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,"y",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+80,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+81,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+82,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+83,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("binh_phuong_A ");
    tracep->declBus(c+48,"num_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+84+i*1,"mid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+100+i*1,"midB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+50,"num_2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"num1_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"num2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("binh_phuong_B ");
    tracep->declBus(c+49,"num_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+105+i*1,"mid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+121+i*1,"midB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+51,"num_2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"num1_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"num2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sqrt0 ");
    tracep->declQuad(c+46,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declBus(c+44,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+45,"result_o_tp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+126+i*1,"frac",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 16,0);
    }
    tracep->declBus(c+149,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declArray(c+131,"Y",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 90,0);
    tracep->declQuad(c+134,"P",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 42,0);
    tracep->declQuad(c+136,"X_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 42,0);
    tracep->popNamePrefix(3);
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
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[25]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[26]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[27]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[28]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[29]),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[30]),8);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[0]),8);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[1]),8);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[2]),8);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[3]),8);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[4]),8);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[0]),8);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[1]),8);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[2]),8);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[3]),8);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[4]),8);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__dut__DOT__sqrt_o),17);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__dut__DOT__sqrt_o_tp),17);
    bufp->fullQData(oldp+46,((0x1ffffffffULL & ((QData)((IData)(
                                                                (((vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                                                   [0U] 
                                                                   + 
                                                                   vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                                                   [1U]) 
                                                                  + 
                                                                  vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                                                  [2U]) 
                                                                 + 
                                                                 vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                                                 [3U]))) 
                                                + (QData)((IData)(
                                                                  (((vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                                                     [0U] 
                                                                     + 
                                                                     vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                                                     [1U]) 
                                                                    + 
                                                                    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                                                   [3U])))))),33);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__dut__DOT__A),16);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__dut__DOT__B),16);
    bufp->fullIData(oldp+50,((((vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                [0U] + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                [1U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                               [2U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                              [3U])),32);
    bufp->fullIData(oldp+51,((((vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                [0U] + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                [1U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                               [2U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                              [3U])),32);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[0]),8);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[1]),8);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[2]),8);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[3]),8);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[4]),8);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[0]),8);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[1]),8);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[2]),8);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[3]),8);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[4]),8);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[0]),8);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[1]),8);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[2]),8);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[3]),8);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[4]),8);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp),4);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y),17);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk4__DOT__i),32);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[0]),8);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[1]),8);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[2]),8);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[3]),8);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[4]),8);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp),4);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y),17);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[1]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[2]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[3]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[4]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[5]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[6]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[7]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[8]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[9]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[10]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[11]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[12]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[13]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[14]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[15]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[0]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[1]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[2]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[3]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__dut__DOT__A),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[1]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[2]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[3]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[4]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[5]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[6]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[7]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[8]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[9]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[10]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[11]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[12]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[13]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[14]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[15]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[0]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[1]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[2]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[3]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__dut__DOT__B),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[0]),17);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[1]),17);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[2]),17);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[3]),17);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[4]),17);
    bufp->fullWData(oldp+131,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y),91);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P),43);
    bufp->fullQData(oldp+136,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i),43);
    bufp->fullSData(oldp+138,(vlSelf->data_i),16);
    bufp->fullBit(oldp+139,(vlSelf->clk_i));
    bufp->fullBit(oldp+140,(vlSelf->data_clk_A));
    bufp->fullBit(oldp+141,(vlSelf->data_clk_B));
    bufp->fullBit(oldp+142,(vlSelf->rstn));
    bufp->fullBit(oldp+143,(vlSelf->lcd_e));
    bufp->fullBit(oldp+144,(vlSelf->lcd_rs));
    bufp->fullBit(oldp+145,(vlSelf->lcd_on));
    bufp->fullBit(oldp+146,(vlSelf->lcd_blon));
    bufp->fullBit(oldp+147,(vlSelf->lcd_rw));
    bufp->fullCData(oldp+148,(vlSelf->data_lcd),8);
    bufp->fullIData(oldp+149,(0xffffffffU),32);
}
