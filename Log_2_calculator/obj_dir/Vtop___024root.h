// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_OUT8(lcd_e,0,0);
    VL_OUT8(lcd_rs,0,0);
    VL_OUT8(lcd_on,0,0);
    VL_OUT8(lcd_blon,0,0);
    VL_OUT8(lcd_rw,0,0);
    VL_OUT8(data,7,0);
    CData/*3:0*/ top__DOT__dut__DOT__log_2__DOT__y;
    CData/*3:0*/ top__DOT__dut__DOT__log_2__DOT__temp;
    CData/*6:0*/ top__DOT__dut__DOT__log_2__DOT__y_tp;
    CData/*7:0*/ top__DOT__dut__DOT__LCD__DOT____Vxrand_h96fdabed__0;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN16(data_log,15,0);
    SData/*15:0*/ top__DOT__dut__DOT__log_2__DOT__x;
    SData/*15:0*/ top__DOT__dut__DOT__log_2__DOT__t;
    IData/*31:0*/ top__DOT__dut__DOT__log_2__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__dut__DOT__log_2__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ top__DOT__dut__DOT__LCD__DOT__i;
    IData/*31:0*/ top__DOT__dut__DOT__LCD__DOT__j;
    VlUnpacked<CData/*7:0*/, 4> top__DOT__dut__DOT__data_i;
    VlUnpacked<CData/*7:0*/, 4> top__DOT__dut__DOT____Vcellout__log_2__result;
    VlUnpacked<CData/*7:0*/, 4> top__DOT__dut__DOT____Vcellinp__LCD__data_i;
    VlUnpacked<CData/*7:0*/, 25> top__DOT__dut__DOT__LCD__DOT__Datas;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
