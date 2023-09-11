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
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[25]),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[26]),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[27]),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[28]),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[29]),8);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[30]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[0]),8);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[1]),8);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[2]),8);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[3]),8);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__dut__DOT__sqrt_lcd[4]),8);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[0]),8);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[1]),8);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[2]),8);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[3]),8);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[4]),8);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__dut__DOT__sqrt_o),17);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__dut__DOT__sqrt_o_tp),17);
        bufp->chgQData(oldp+45,((0x1ffffffffULL & ((QData)((IData)(
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
        bufp->chgSData(oldp+47,(vlSelf->top__DOT__dut__DOT__A),16);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__dut__DOT__B),16);
        bufp->chgIData(oldp+49,((((vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                   [0U] + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                   [1U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                  [2U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB
                                 [3U])),32);
        bufp->chgIData(oldp+50,((((vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                   [0U] + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                   [1U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                  [2U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB
                                 [3U])),32);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[0]),8);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[1]),8);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[2]),8);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[3]),8);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[4]),8);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[0]),8);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[1]),8);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[2]),8);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[3]),8);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[4]),8);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[0]),8);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[1]),8);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[2]),8);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[3]),8);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[4]),8);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp),4);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y),17);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk4__DOT__i),32);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[0]),8);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[1]),8);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[2]),8);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[3]),8);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[4]),8);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp),4);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y),17);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[1]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[2]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[3]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[4]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[5]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[6]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[7]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[8]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[9]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[10]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[11]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[12]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[13]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[14]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[15]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[0]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[1]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[2]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[3]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__dut__DOT__A),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[1]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[2]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[3]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[4]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[5]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[6]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[7]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[8]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[9]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[10]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[11]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[12]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[13]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[14]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[15]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[0]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[1]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[2]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[3]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__dut__DOT__B),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[0]),17);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[1]),17);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[2]),17);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[3]),17);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[4]),17);
        bufp->chgWData(oldp+130,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y),91);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P),43);
        bufp->chgQData(oldp+135,(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i),43);
    }
    bufp->chgSData(oldp+137,(vlSelf->data_i),16);
    bufp->chgBit(oldp+138,(vlSelf->clk_i));
    bufp->chgBit(oldp+139,(vlSelf->data_clk_A));
    bufp->chgBit(oldp+140,(vlSelf->data_clk_B));
    bufp->chgBit(oldp+141,(vlSelf->rstn));
    bufp->chgBit(oldp+142,(vlSelf->lcd_e));
    bufp->chgBit(oldp+143,(vlSelf->lcd_rs));
    bufp->chgBit(oldp+144,(vlSelf->lcd_on));
    bufp->chgBit(oldp+145,(vlSelf->lcd_blon));
    bufp->chgBit(oldp+146,(vlSelf->lcd_rw));
    bufp->chgCData(oldp+147,(vlSelf->data_lcd),8);
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
