// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

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

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h8772bdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc208d77__0;
    VlWide<3>/*95:0*/ __Vtemp_h775fc7b3__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__0;
    VlWide<3>/*95:0*/ __Vtemp_h8d2ffdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__1;
    VlWide<3>/*95:0*/ __Vtemp_hf66b4681__0;
    VlWide<3>/*95:0*/ __Vtemp_hf9a852f6__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__1;
    VlWide<3>/*95:0*/ __Vtemp_h9cadadf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__2;
    VlWide<3>/*95:0*/ __Vtemp_h5dfdab30__0;
    VlWide<3>/*95:0*/ __Vtemp_hf88ec715__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__2;
    VlWide<3>/*95:0*/ __Vtemp_h9cb1e9f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__3;
    VlWide<3>/*95:0*/ __Vtemp_h95a9ed0a__0;
    VlWide<3>/*95:0*/ __Vtemp_h855679b7__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__3;
    VlWide<3>/*95:0*/ __Vtemp_h9cb0c4f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__4;
    VlWide<3>/*95:0*/ __Vtemp_h9eb5c666__0;
    VlWide<3>/*95:0*/ __Vtemp_h03f85b01__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__4;
    VlWide<3>/*95:0*/ __Vtemp_h9c3e0138__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__5;
    VlWide<3>/*95:0*/ __Vtemp_h955b22a7__0;
    VlWide<3>/*95:0*/ __Vtemp_h16dd821b__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__5;
    VlWide<3>/*95:0*/ __Vtemp_h9c3e1168__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__6;
    VlWide<3>/*95:0*/ __Vtemp_hbba42ecf__0;
    VlWide<3>/*95:0*/ __Vtemp_h85c7ec49__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__6;
    VlWide<3>/*95:0*/ __Vtemp_h9c3df1e4__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__7;
    VlWide<3>/*95:0*/ __Vtemp_h6ad346ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h25e44fb3__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__7;
    VlWide<3>/*95:0*/ __Vtemp_h9c3ddedd__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__8;
    VlWide<3>/*95:0*/ __Vtemp_h90eef6f2__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b64f414__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__8;
    VlWide<3>/*95:0*/ __Vtemp_h9c3df49b__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__9;
    VlWide<3>/*95:0*/ __Vtemp_hae6243c9__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3319601__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__9;
    VlWide<3>/*95:0*/ __Vtemp_h703dbdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__10;
    VlWide<3>/*95:0*/ __Vtemp_h493cb0c9__0;
    VlWide<3>/*95:0*/ __Vtemp_hca417037__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__10;
    VlWide<3>/*95:0*/ __Vtemp_ha93dbdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__11;
    VlWide<3>/*95:0*/ __Vtemp_h8c6b9501__0;
    VlWide<3>/*95:0*/ __Vtemp_hc6ac61c5__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__11;
    VlWide<3>/*95:0*/ __Vtemp_hc27dbdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__12;
    VlWide<3>/*95:0*/ __Vtemp_hda2ca57c__0;
    VlWide<3>/*95:0*/ __Vtemp_h2fe4748e__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__12;
    VlWide<3>/*95:0*/ __Vtemp_h5aedbdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__13;
    VlWide<3>/*95:0*/ __Vtemp_hae981f40__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f781aa6__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__13;
    VlWide<3>/*95:0*/ __Vtemp_hee29bdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__14;
    VlWide<3>/*95:0*/ __Vtemp_h58500eee__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e888795__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__14;
    VlWide<3>/*95:0*/ __Vtemp_h8240bdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__15;
    VlWide<3>/*95:0*/ __Vtemp_h30715f20__0;
    VlWide<3>/*95:0*/ __Vtemp_h4b640ff6__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__15;
    VlWide<3>/*95:0*/ __Vtemp_hdcb37df8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__16;
    VlWide<3>/*95:0*/ __Vtemp_hda4a59e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h8642f80e__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__16;
    VlWide<3>/*95:0*/ __Vtemp_hac9dcdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__17;
    VlWide<3>/*95:0*/ __Vtemp_h7799233d__0;
    VlWide<3>/*95:0*/ __Vtemp_h295e621e__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__17;
    VlWide<3>/*95:0*/ __Vtemp_h886d79f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__18;
    VlWide<3>/*95:0*/ __Vtemp_h5c330479__0;
    VlWide<3>/*95:0*/ __Vtemp_hbaec4a64__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__18;
    VlWide<3>/*95:0*/ __Vtemp_h8975e2f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__19;
    VlWide<3>/*95:0*/ __Vtemp_h8c9e37d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e50eb8c__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__19;
    VlWide<3>/*95:0*/ __Vtemp_h8d314238__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__20;
    VlWide<3>/*95:0*/ __Vtemp_h6b82e582__0;
    VlWide<3>/*95:0*/ __Vtemp_h56aac720__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__20;
    VlWide<3>/*95:0*/ __Vtemp_h9cad7ea8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__21;
    VlWide<3>/*95:0*/ __Vtemp_ha004c2cc__0;
    VlWide<3>/*95:0*/ __Vtemp_had98f7a8__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__21;
    VlWide<3>/*95:0*/ __Vtemp_h9c997dbc__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__22;
    VlWide<3>/*95:0*/ __Vtemp_h41eb2288__0;
    VlWide<3>/*95:0*/ __Vtemp_h38d35814__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__22;
    VlWide<3>/*95:0*/ __Vtemp_h9c3ef5e7__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__23;
    VlWide<3>/*95:0*/ __Vtemp_h5c96ad47__0;
    VlWide<3>/*95:0*/ __Vtemp_ha0f752a6__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__23;
    VlWide<3>/*95:0*/ __Vtemp_h9c3b9f75__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__24;
    VlWide<3>/*95:0*/ __Vtemp_h14bc8d4d__0;
    VlWide<3>/*95:0*/ __Vtemp_hae9a4a06__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__24;
    VlWide<3>/*95:0*/ __Vtemp_h9c3e11a7__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__25;
    VlWide<3>/*95:0*/ __Vtemp_h324fabc0__0;
    VlWide<3>/*95:0*/ __Vtemp_hf3aca946__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__25;
    VlWide<3>/*95:0*/ __Vtemp_h153dbdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__26;
    VlWide<3>/*95:0*/ __Vtemp_hc8a2e076__0;
    VlWide<3>/*95:0*/ __Vtemp_h9504ded9__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__26;
    VlWide<3>/*95:0*/ __Vtemp_h637dbdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__27;
    VlWide<3>/*95:0*/ __Vtemp_h420ab4d8__0;
    VlWide<3>/*95:0*/ __Vtemp_hf1f08ce1__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__27;
    VlWide<3>/*95:0*/ __Vtemp_h2d2dbdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__28;
    VlWide<3>/*95:0*/ __Vtemp_h524d9b75__0;
    VlWide<3>/*95:0*/ __Vtemp_h591db30c__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__28;
    VlWide<3>/*95:0*/ __Vtemp_hc0f9bdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__29;
    VlWide<3>/*95:0*/ __Vtemp_hcfdf95b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h02021bb0__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__29;
    VlWide<3>/*95:0*/ __Vtemp_hd6fcbdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__30;
    VlWide<3>/*95:0*/ __Vtemp_h2994aa47__0;
    VlWide<3>/*95:0*/ __Vtemp_h51f9f70b__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__30;
    VlWide<3>/*95:0*/ __Vtemp_h653c7df8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__31;
    VlWide<3>/*95:0*/ __Vtemp_h27193a58__0;
    VlWide<3>/*95:0*/ __Vtemp_hd2b8205f__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__31;
    VlWide<3>/*95:0*/ __Vtemp_h1dee0df8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__32;
    VlWide<3>/*95:0*/ __Vtemp_h498f7620__0;
    VlWide<3>/*95:0*/ __Vtemp_hfa90d07d__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__32;
    VlWide<3>/*95:0*/ __Vtemp_hb92209f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__33;
    VlWide<3>/*95:0*/ __Vtemp_h8bfd788d__0;
    VlWide<3>/*95:0*/ __Vtemp_h7af99ab1__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__33;
    VlWide<3>/*95:0*/ __Vtemp_h8b487ef8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__34;
    VlWide<3>/*95:0*/ __Vtemp_hcc274705__0;
    VlWide<3>/*95:0*/ __Vtemp_h1655040d__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__34;
    VlWide<3>/*95:0*/ __Vtemp_hc9303338__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__35;
    VlWide<3>/*95:0*/ __Vtemp_hfa5c0f83__0;
    VlWide<3>/*95:0*/ __Vtemp_hc4620393__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__35;
    VlWide<3>/*95:0*/ __Vtemp_hd68193e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__36;
    VlWide<3>/*95:0*/ __Vtemp_h373ddcab__0;
    VlWide<3>/*95:0*/ __Vtemp_hda3217ff__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__36;
    VlWide<3>/*95:0*/ __Vtemp_h88597acc__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__37;
    VlWide<3>/*95:0*/ __Vtemp_h7f1443d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h595bcf9a__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__37;
    VlWide<3>/*95:0*/ __Vtemp_h8770b949__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__38;
    VlWide<3>/*95:0*/ __Vtemp_hb02582d5__0;
    VlWide<3>/*95:0*/ __Vtemp_hf2289755__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__38;
    VlWide<3>/*95:0*/ __Vtemp_h86b6aca1__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__39;
    VlWide<3>/*95:0*/ __Vtemp_h81d0afee__0;
    VlWide<3>/*95:0*/ __Vtemp_hd33c26ad__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__39;
    VlWide<3>/*95:0*/ __Vtemp_h86a73797__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__40;
    VlWide<3>/*95:0*/ __Vtemp_h112feecc__0;
    VlWide<3>/*95:0*/ __Vtemp_he7193521__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__40;
    VlWide<3>/*95:0*/ __Vtemp_h9c4ff80d__0;
    VlWide<3>/*95:0*/ __Vtemp_h46f89362__41;
    VlWide<3>/*95:0*/ __Vtemp_hcccb4c3c__0;
    VlWide<3>/*95:0*/ __Vtemp_h22afa6e3__0;
    VlWide<3>/*95:0*/ __Vtemp_heade7785__41;
    // Body
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0U] 
        = ((IData)(vlSelf->top__DOT__dut__DOT__A) & 
           (- (IData)((1U & (IData)(vlSelf->top__DOT__dut__DOT__A)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[1U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 1U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 1U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[2U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 2U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 2U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[3U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 3U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 3U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[4U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 4U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 4U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[5U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 5U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 5U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[6U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 6U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 6U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[7U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 7U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 7U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[8U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 8U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 8U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[9U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 9U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                       >> 9U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0xaU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 0xaU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                         >> 0xaU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0xbU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 0xbU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                         >> 0xbU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0xcU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 0xcU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                         >> 0xcU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0xdU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 0xdU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                         >> 0xdU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0xeU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 0xeU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                         >> 0xeU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[0xfU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__A) 
            << 0xfU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A) 
                                         >> 0xfU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0U] 
        = ((IData)(vlSelf->top__DOT__dut__DOT__B) & 
           (- (IData)((1U & (IData)(vlSelf->top__DOT__dut__DOT__B)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[1U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 1U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 1U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[2U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 2U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 2U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[3U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 3U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 3U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[4U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 4U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 4U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[5U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 5U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 5U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[6U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 6U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 6U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[7U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 7U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 7U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[8U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 8U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 8U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[9U] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 9U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                       >> 9U)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0xaU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 0xaU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                         >> 0xaU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0xbU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 0xbU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                         >> 0xbU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0xcU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 0xcU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                         >> 0xcU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0xdU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 0xdU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                         >> 0xdU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0xeU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 0xeU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                         >> 0xeU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[0xfU] 
        = (((IData)(vlSelf->top__DOT__dut__DOT__B) 
            << 0xfU) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__dut__DOT__B) 
                                         >> 0xfU)))));
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[0U] 
        = (((vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
             [0U] + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
             [4U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
            [8U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
           [0xfU]);
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[1U] 
        = (((vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
             [1U] + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
             [5U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
            [9U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
           [0xeU]);
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[2U] 
        = (((vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
             [2U] + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
             [6U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
            [0xaU]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
           [0xdU]);
    vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[3U] 
        = (((vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
             [3U] + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
             [7U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
            [0xbU]) + vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid
           [0xcU]);
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[0U] 
        = (((vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
             [0U] + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
             [4U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
            [8U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
           [0xfU]);
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[1U] 
        = (((vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
             [1U] + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
             [5U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
            [9U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
           [0xeU]);
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[2U] 
        = (((vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
             [2U] + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
             [6U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
            [0xaU]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
           [0xdU]);
    vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[3U] 
        = (((vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
             [3U] + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
             [7U]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
            [0xbU]) + vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid
           [0xcU]);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 0ULL;
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i = (0x7fffffffc00ULL 
                                                   & (((QData)((IData)(
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
                                                                          [3U])))) 
                                                      << 0xaU));
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = (0x3ffffffffffULL 
                                                 & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    __Vtemp_h8772bdf8__0[0U] = 0U;
    __Vtemp_h8772bdf8__0[1U] = 0U;
    __Vtemp_h8772bdf8__0[2U] = 0x40000U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__0, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hcc208d77__0, __Vtemp_h46f89362__0, 0x2aU);
    VL_ADD_W(3, __Vtemp_h775fc7b3__0, __Vtemp_h8772bdf8__0, __Vtemp_hcc208d77__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h775fc7b3__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h775fc7b3__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h775fc7b3__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__0, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__0)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x20000000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x5ffffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h8d2ffdf8__0[0U] = 0U;
    __Vtemp_h8d2ffdf8__0[1U] = 0U;
    __Vtemp_h8d2ffdf8__0[2U] = 0x10000U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__1, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hf66b4681__0, __Vtemp_h46f89362__1, 0x29U);
    VL_ADD_W(3, __Vtemp_hf9a852f6__0, __Vtemp_h8d2ffdf8__0, __Vtemp_hf66b4681__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hf9a852f6__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hf9a852f6__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hf9a852f6__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__1, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__1)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x10000000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x6ffffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9cadadf8__0[0U] = 0U;
    __Vtemp_h9cadadf8__0[1U] = 0U;
    __Vtemp_h9cadadf8__0[2U] = 0x4000U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__2, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h5dfdab30__0, __Vtemp_h46f89362__2, 0x28U);
    VL_ADD_W(3, __Vtemp_hf88ec715__0, __Vtemp_h9cadadf8__0, __Vtemp_h5dfdab30__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hf88ec715__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hf88ec715__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hf88ec715__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__2, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__2)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x8000000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x77fffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9cb1e9f8__0[0U] = 0U;
    __Vtemp_h9cb1e9f8__0[1U] = 0U;
    __Vtemp_h9cb1e9f8__0[2U] = 0x1000U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h95a9ed0a__0, __Vtemp_h46f89362__3, 0x27U);
    VL_ADD_W(3, __Vtemp_h855679b7__0, __Vtemp_h9cb1e9f8__0, __Vtemp_h95a9ed0a__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h855679b7__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h855679b7__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h855679b7__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__3)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x4000000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7bfffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9cb0c4f8__0[0U] = 0U;
    __Vtemp_h9cb0c4f8__0[1U] = 0U;
    __Vtemp_h9cb0c4f8__0[2U] = 0x400U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__4, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h9eb5c666__0, __Vtemp_h46f89362__4, 0x26U);
    VL_ADD_W(3, __Vtemp_h03f85b01__0, __Vtemp_h9cb0c4f8__0, __Vtemp_h9eb5c666__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h03f85b01__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h03f85b01__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h03f85b01__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__4, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__4)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x2000000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7dfffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c3e0138__0[0U] = 0U;
    __Vtemp_h9c3e0138__0[1U] = 0U;
    __Vtemp_h9c3e0138__0[2U] = 0x100U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__5, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h955b22a7__0, __Vtemp_h46f89362__5, 0x25U);
    VL_ADD_W(3, __Vtemp_h16dd821b__0, __Vtemp_h9c3e0138__0, __Vtemp_h955b22a7__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h16dd821b__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h16dd821b__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h16dd821b__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__5, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__5)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x1000000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7efffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c3e1168__0[0U] = 0U;
    __Vtemp_h9c3e1168__0[1U] = 0U;
    __Vtemp_h9c3e1168__0[2U] = 0x40U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__6, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hbba42ecf__0, __Vtemp_h46f89362__6, 0x24U);
    VL_ADD_W(3, __Vtemp_h85c7ec49__0, __Vtemp_h9c3e1168__0, __Vtemp_hbba42ecf__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h85c7ec49__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h85c7ec49__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h85c7ec49__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__6, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__6)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x800000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7f7ffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c3df1e4__0[0U] = 0U;
    __Vtemp_h9c3df1e4__0[1U] = 0U;
    __Vtemp_h9c3df1e4__0[2U] = 0x10U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__7, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h6ad346ca__0, __Vtemp_h46f89362__7, 0x23U);
    VL_ADD_W(3, __Vtemp_h25e44fb3__0, __Vtemp_h9c3df1e4__0, __Vtemp_h6ad346ca__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h25e44fb3__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h25e44fb3__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h25e44fb3__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__7, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__7)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x400000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fbffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c3ddedd__0[0U] = 0U;
    __Vtemp_h9c3ddedd__0[1U] = 0U;
    __Vtemp_h9c3ddedd__0[2U] = 4U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__8, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h90eef6f2__0, __Vtemp_h46f89362__8, 0x22U);
    VL_ADD_W(3, __Vtemp_h2b64f414__0, __Vtemp_h9c3ddedd__0, __Vtemp_h90eef6f2__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h2b64f414__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h2b64f414__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h2b64f414__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__8, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__8)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x200000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fdffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c3df49b__0[0U] = 0U;
    __Vtemp_h9c3df49b__0[1U] = 0U;
    __Vtemp_h9c3df49b__0[2U] = 1U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__9, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hae6243c9__0, __Vtemp_h46f89362__9, 0x21U);
    VL_ADD_W(3, __Vtemp_hd3319601__0, __Vtemp_h9c3df49b__0, __Vtemp_hae6243c9__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hd3319601__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hd3319601__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hd3319601__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__9, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__9)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x100000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7feffffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h703dbdf8__0[0U] = 0U;
    __Vtemp_h703dbdf8__0[1U] = 0x40000000U;
    __Vtemp_h703dbdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__10, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h493cb0c9__0, __Vtemp_h46f89362__10, 0x20U);
    VL_ADD_W(3, __Vtemp_hca417037__0, __Vtemp_h703dbdf8__0, __Vtemp_h493cb0c9__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hca417037__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hca417037__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hca417037__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__10, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__10)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x80000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ff7fffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_ha93dbdf8__0[0U] = 0U;
    __Vtemp_ha93dbdf8__0[1U] = 0x10000000U;
    __Vtemp_ha93dbdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__11, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h8c6b9501__0, __Vtemp_h46f89362__11, 0x1fU);
    VL_ADD_W(3, __Vtemp_hc6ac61c5__0, __Vtemp_ha93dbdf8__0, __Vtemp_h8c6b9501__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hc6ac61c5__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hc6ac61c5__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hc6ac61c5__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__11, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__11)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x40000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffbfffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hc27dbdf8__0[0U] = 0U;
    __Vtemp_hc27dbdf8__0[1U] = 0x4000000U;
    __Vtemp_hc27dbdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__12, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hda2ca57c__0, __Vtemp_h46f89362__12, 0x1eU);
    VL_ADD_W(3, __Vtemp_h2fe4748e__0, __Vtemp_hc27dbdf8__0, __Vtemp_hda2ca57c__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h2fe4748e__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h2fe4748e__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h2fe4748e__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__12, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__12)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x20000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffdfffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h5aedbdf8__0[0U] = 0U;
    __Vtemp_h5aedbdf8__0[1U] = 0x1000000U;
    __Vtemp_h5aedbdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__13, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hae981f40__0, __Vtemp_h46f89362__13, 0x1dU);
    VL_ADD_W(3, __Vtemp_h9f781aa6__0, __Vtemp_h5aedbdf8__0, __Vtemp_hae981f40__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h9f781aa6__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h9f781aa6__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h9f781aa6__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__13, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__13)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x10000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffefffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hee29bdf8__0[0U] = 0U;
    __Vtemp_hee29bdf8__0[1U] = 0x400000U;
    __Vtemp_hee29bdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__14, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h58500eee__0, __Vtemp_h46f89362__14, 0x1cU);
    VL_ADD_W(3, __Vtemp_h5e888795__0, __Vtemp_hee29bdf8__0, __Vtemp_h58500eee__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h5e888795__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h5e888795__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h5e888795__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__14, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__14)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x8000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fff7ffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h8240bdf8__0[0U] = 0U;
    __Vtemp_h8240bdf8__0[1U] = 0x100000U;
    __Vtemp_h8240bdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__15, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h30715f20__0, __Vtemp_h46f89362__15, 0x1bU);
    VL_ADD_W(3, __Vtemp_h4b640ff6__0, __Vtemp_h8240bdf8__0, __Vtemp_h30715f20__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h4b640ff6__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h4b640ff6__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h4b640ff6__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__15, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__15)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x4000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffbffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hdcb37df8__0[0U] = 0U;
    __Vtemp_hdcb37df8__0[1U] = 0x40000U;
    __Vtemp_hdcb37df8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__16, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hda4a59e9__0, __Vtemp_h46f89362__16, 0x1aU);
    VL_ADD_W(3, __Vtemp_h8642f80e__0, __Vtemp_hdcb37df8__0, __Vtemp_hda4a59e9__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h8642f80e__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h8642f80e__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h8642f80e__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__16, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__16)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x2000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffdffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hac9dcdf8__0[0U] = 0U;
    __Vtemp_hac9dcdf8__0[1U] = 0x10000U;
    __Vtemp_hac9dcdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__17, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h7799233d__0, __Vtemp_h46f89362__17, 0x19U);
    VL_ADD_W(3, __Vtemp_h295e621e__0, __Vtemp_hac9dcdf8__0, __Vtemp_h7799233d__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h295e621e__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h295e621e__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h295e621e__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__17, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__17)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x1000000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffeffffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h886d79f8__0[0U] = 0U;
    __Vtemp_h886d79f8__0[1U] = 0x4000U;
    __Vtemp_h886d79f8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__18, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h5c330479__0, __Vtemp_h46f89362__18, 0x18U);
    VL_ADD_W(3, __Vtemp_hbaec4a64__0, __Vtemp_h886d79f8__0, __Vtemp_h5c330479__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hbaec4a64__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hbaec4a64__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hbaec4a64__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__18, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__18)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x800000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffff7fffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h8975e2f8__0[0U] = 0U;
    __Vtemp_h8975e2f8__0[1U] = 0x1000U;
    __Vtemp_h8975e2f8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__19, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h8c9e37d1__0, __Vtemp_h46f89362__19, 0x17U);
    VL_ADD_W(3, __Vtemp_h5e50eb8c__0, __Vtemp_h8975e2f8__0, __Vtemp_h8c9e37d1__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h5e50eb8c__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h5e50eb8c__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h5e50eb8c__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__19, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__19)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x400000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffbfffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h8d314238__0[0U] = 0U;
    __Vtemp_h8d314238__0[1U] = 0x400U;
    __Vtemp_h8d314238__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__20, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h6b82e582__0, __Vtemp_h46f89362__20, 0x16U);
    VL_ADD_W(3, __Vtemp_h56aac720__0, __Vtemp_h8d314238__0, __Vtemp_h6b82e582__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h56aac720__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h56aac720__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h56aac720__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__20, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__20)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x200000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffdfffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9cad7ea8__0[0U] = 0U;
    __Vtemp_h9cad7ea8__0[1U] = 0x100U;
    __Vtemp_h9cad7ea8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__21, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_ha004c2cc__0, __Vtemp_h46f89362__21, 0x15U);
    VL_ADD_W(3, __Vtemp_had98f7a8__0, __Vtemp_h9cad7ea8__0, __Vtemp_ha004c2cc__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_had98f7a8__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_had98f7a8__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_had98f7a8__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__21, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__21)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x100000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffefffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c997dbc__0[0U] = 0U;
    __Vtemp_h9c997dbc__0[1U] = 0x40U;
    __Vtemp_h9c997dbc__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__22, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h41eb2288__0, __Vtemp_h46f89362__22, 0x14U);
    VL_ADD_W(3, __Vtemp_h38d35814__0, __Vtemp_h9c997dbc__0, __Vtemp_h41eb2288__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h38d35814__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h38d35814__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h38d35814__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__22, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__22)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x80000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffff7ffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c3ef5e7__0[0U] = 0U;
    __Vtemp_h9c3ef5e7__0[1U] = 0x10U;
    __Vtemp_h9c3ef5e7__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__23, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h5c96ad47__0, __Vtemp_h46f89362__23, 0x13U);
    VL_ADD_W(3, __Vtemp_ha0f752a6__0, __Vtemp_h9c3ef5e7__0, __Vtemp_h5c96ad47__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_ha0f752a6__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_ha0f752a6__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_ha0f752a6__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__23, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__23)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x40000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffbffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c3b9f75__0[0U] = 0U;
    __Vtemp_h9c3b9f75__0[1U] = 4U;
    __Vtemp_h9c3b9f75__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__24, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h14bc8d4d__0, __Vtemp_h46f89362__24, 0x12U);
    VL_ADD_W(3, __Vtemp_hae9a4a06__0, __Vtemp_h9c3b9f75__0, __Vtemp_h14bc8d4d__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hae9a4a06__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hae9a4a06__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hae9a4a06__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__24, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__24)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x20000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffdffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c3e11a7__0[0U] = 0U;
    __Vtemp_h9c3e11a7__0[1U] = 1U;
    __Vtemp_h9c3e11a7__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__25, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h324fabc0__0, __Vtemp_h46f89362__25, 0x11U);
    VL_ADD_W(3, __Vtemp_hf3aca946__0, __Vtemp_h9c3e11a7__0, __Vtemp_h324fabc0__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hf3aca946__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hf3aca946__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hf3aca946__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__25, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__25)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x10000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffeffffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h153dbdf8__0[0U] = 0x40000000U;
    __Vtemp_h153dbdf8__0[1U] = 0U;
    __Vtemp_h153dbdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__26, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hc8a2e076__0, __Vtemp_h46f89362__26, 0x10U);
    VL_ADD_W(3, __Vtemp_h9504ded9__0, __Vtemp_h153dbdf8__0, __Vtemp_hc8a2e076__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h9504ded9__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h9504ded9__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h9504ded9__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__26, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__26)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x8000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffff7fffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h637dbdf8__0[0U] = 0x10000000U;
    __Vtemp_h637dbdf8__0[1U] = 0U;
    __Vtemp_h637dbdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__27, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h420ab4d8__0, __Vtemp_h46f89362__27, 0xfU);
    VL_ADD_W(3, __Vtemp_hf1f08ce1__0, __Vtemp_h637dbdf8__0, __Vtemp_h420ab4d8__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hf1f08ce1__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hf1f08ce1__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hf1f08ce1__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__27, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__27)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x4000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffffbfffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h2d2dbdf8__0[0U] = 0x4000000U;
    __Vtemp_h2d2dbdf8__0[1U] = 0U;
    __Vtemp_h2d2dbdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__28, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h524d9b75__0, __Vtemp_h46f89362__28, 0xeU);
    VL_ADD_W(3, __Vtemp_h591db30c__0, __Vtemp_h2d2dbdf8__0, __Vtemp_h524d9b75__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h591db30c__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h591db30c__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h591db30c__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__28, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__28)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x2000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffffdfffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hc0f9bdf8__0[0U] = 0x1000000U;
    __Vtemp_hc0f9bdf8__0[1U] = 0U;
    __Vtemp_hc0f9bdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__29, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hcfdf95b7__0, __Vtemp_h46f89362__29, 0xdU);
    VL_ADD_W(3, __Vtemp_h02021bb0__0, __Vtemp_hc0f9bdf8__0, __Vtemp_hcfdf95b7__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h02021bb0__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h02021bb0__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h02021bb0__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__29, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__29)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x1000ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffffefffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hd6fcbdf8__0[0U] = 0x400000U;
    __Vtemp_hd6fcbdf8__0[1U] = 0U;
    __Vtemp_hd6fcbdf8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__30, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h2994aa47__0, __Vtemp_h46f89362__30, 0xcU);
    VL_ADD_W(3, __Vtemp_h51f9f70b__0, __Vtemp_hd6fcbdf8__0, __Vtemp_h2994aa47__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h51f9f70b__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h51f9f70b__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h51f9f70b__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__30, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__30)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x800ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffff7ffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h653c7df8__0[0U] = 0x100000U;
    __Vtemp_h653c7df8__0[1U] = 0U;
    __Vtemp_h653c7df8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__31, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h27193a58__0, __Vtemp_h46f89362__31, 0xbU);
    VL_ADD_W(3, __Vtemp_hd2b8205f__0, __Vtemp_h653c7df8__0, __Vtemp_h27193a58__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hd2b8205f__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hd2b8205f__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hd2b8205f__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__31, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__31)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x400ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffffbffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h1dee0df8__0[0U] = 0x40000U;
    __Vtemp_h1dee0df8__0[1U] = 0U;
    __Vtemp_h1dee0df8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__32, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h498f7620__0, __Vtemp_h46f89362__32, 0xaU);
    VL_ADD_W(3, __Vtemp_hfa90d07d__0, __Vtemp_h1dee0df8__0, __Vtemp_h498f7620__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hfa90d07d__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hfa90d07d__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hfa90d07d__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__32, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__32)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x200ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffffdffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hb92209f8__0[0U] = 0x10000U;
    __Vtemp_hb92209f8__0[1U] = 0U;
    __Vtemp_hb92209f8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__33, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h8bfd788d__0, __Vtemp_h46f89362__33, 9U);
    VL_ADD_W(3, __Vtemp_h7af99ab1__0, __Vtemp_hb92209f8__0, __Vtemp_h8bfd788d__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h7af99ab1__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h7af99ab1__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h7af99ab1__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__33, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__33)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x100ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffffeffULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h8b487ef8__0[0U] = 0x4000U;
    __Vtemp_h8b487ef8__0[1U] = 0U;
    __Vtemp_h8b487ef8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__34, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hcc274705__0, __Vtemp_h46f89362__34, 8U);
    VL_ADD_W(3, __Vtemp_h1655040d__0, __Vtemp_h8b487ef8__0, __Vtemp_hcc274705__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h1655040d__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h1655040d__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h1655040d__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__34, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__34)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x80ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffffff7fULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hc9303338__0[0U] = 0x1000U;
    __Vtemp_hc9303338__0[1U] = 0U;
    __Vtemp_hc9303338__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__35, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hfa5c0f83__0, __Vtemp_h46f89362__35, 7U);
    VL_ADD_W(3, __Vtemp_hc4620393__0, __Vtemp_hc9303338__0, __Vtemp_hfa5c0f83__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hc4620393__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hc4620393__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hc4620393__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__35, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__35)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x40ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffffffbfULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_hd68193e8__0[0U] = 0x400U;
    __Vtemp_hd68193e8__0[1U] = 0U;
    __Vtemp_hd68193e8__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__36, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h373ddcab__0, __Vtemp_h46f89362__36, 6U);
    VL_ADD_W(3, __Vtemp_hda3217ff__0, __Vtemp_hd68193e8__0, __Vtemp_h373ddcab__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hda3217ff__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hda3217ff__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hda3217ff__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__36, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__36)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x20ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffffffdfULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h88597acc__0[0U] = 0x100U;
    __Vtemp_h88597acc__0[1U] = 0U;
    __Vtemp_h88597acc__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__37, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h7f1443d0__0, __Vtemp_h46f89362__37, 5U);
    VL_ADD_W(3, __Vtemp_h595bcf9a__0, __Vtemp_h88597acc__0, __Vtemp_h7f1443d0__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h595bcf9a__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h595bcf9a__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h595bcf9a__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__37, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__37)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x10ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7ffffffffefULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h8770b949__0[0U] = 0x40U;
    __Vtemp_h8770b949__0[1U] = 0U;
    __Vtemp_h8770b949__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__38, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hb02582d5__0, __Vtemp_h46f89362__38, 4U);
    VL_ADD_W(3, __Vtemp_hf2289755__0, __Vtemp_h8770b949__0, __Vtemp_hb02582d5__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hf2289755__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hf2289755__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hf2289755__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__38, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__38)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (8ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffffff7ULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h86b6aca1__0[0U] = 0x10U;
    __Vtemp_h86b6aca1__0[1U] = 0U;
    __Vtemp_h86b6aca1__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__39, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h81d0afee__0, __Vtemp_h46f89362__39, 3U);
    VL_ADD_W(3, __Vtemp_hd33c26ad__0, __Vtemp_h86b6aca1__0, __Vtemp_h81d0afee__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_hd33c26ad__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_hd33c26ad__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_hd33c26ad__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__39, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__39)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (4ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffffffbULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h86a73797__0[0U] = 4U;
    __Vtemp_h86a73797__0[1U] = 0U;
    __Vtemp_h86a73797__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__40, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_h112feecc__0, __Vtemp_h46f89362__40, 2U);
    VL_ADD_W(3, __Vtemp_he7193521__0, __Vtemp_h86a73797__0, __Vtemp_h112feecc__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_he7193521__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_he7193521__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_he7193521__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__40, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__40)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (2ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffffffdULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    __Vtemp_h9c4ff80d__0[0U] = 1U;
    __Vtemp_h9c4ff80d__0[1U] = 0U;
    __Vtemp_h9c4ff80d__0[2U] = 0U;
    VL_EXTEND_WQ(91,43, __Vtemp_h46f89362__41, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    VL_SHIFTL_WWI(91,91,32, __Vtemp_hcccb4c3c__0, __Vtemp_h46f89362__41, 1U);
    VL_ADD_W(3, __Vtemp_h22afa6e3__0, __Vtemp_h9c4ff80d__0, __Vtemp_hcccb4c3c__0);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U] = 
        __Vtemp_h22afa6e3__0[0U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U] = 
        __Vtemp_h22afa6e3__0[1U];
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[2U] = 
        (0x7ffffffU & __Vtemp_h22afa6e3__0[2U]);
    VL_EXTEND_WQ(91,43, __Vtemp_heade7785__41, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i);
    if (VL_LTE_W(3, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y, __Vtemp_heade7785__41)) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
            = (0x7ffffffffffULL & (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i 
                                   - (((QData)((IData)(
                                                       vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y[0U])))));
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (1ULL | vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    } else {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = 
            (0x7fffffffffeULL & vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P);
    }
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[4U] 
        = (0xc350U & (- (IData)((1U & (IData)((vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P 
                                               >> 4U))))));
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[3U] 
        = (0x61a8U & (- (IData)((1U & (IData)((vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P 
                                               >> 3U))))));
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[2U] 
        = (0x30d4U & (- (IData)((1U & (IData)((vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P 
                                               >> 2U))))));
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[1U] 
        = (0x186aU & (- (IData)((1U & (IData)((vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P 
                                               >> 1U))))));
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[0U] 
        = (0xc35U & (- (IData)((1U & (IData)(vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P)))));
    vlSelf->top__DOT__dut__DOT__sqrt_o_tp = (0x1ffffU 
                                             & ((((vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac
                                                   [0U] 
                                                   + 
                                                   vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac
                                                   [1U]) 
                                                  + 
                                                  vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac
                                                  [2U]) 
                                                 + 
                                                 vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac
                                                 [3U]) 
                                                + vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac
                                                [4U]));
    vlSelf->top__DOT__dut__DOT__sqrt_o = (0x1ffffU 
                                          & (IData)(
                                                    (vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P 
                                                     >> 5U)));
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y = vlSelf->top__DOT__dut__DOT__sqrt_o_tp;
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp = 0U;
    if ((0x270fU < vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y)) {
        vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk1__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk1__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y 
                    = (0x1ffffU & (vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y 
                                   - (IData)(0x2710U)));
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp)));
                if ((0x270fU > vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y)) {
                    goto __Vlabel1;
                }
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk1__DOT__i);
            }
            __Vlabel1: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[4U] 
            = vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp;
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[4U] = 0U;
    }
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp = 0U;
    if ((0x3e7U < vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y)) {
        vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk2__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y 
                    = (0x1ffffU & (vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y 
                                   - (IData)(0x3e8U)));
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp)));
                if ((0x3e7U > vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y)) {
                    goto __Vlabel2;
                }
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel2: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[3U] 
            = vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp;
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[3U] = 0U;
    }
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp = 0U;
    if ((0x63U < vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y)) {
        vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk3__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk3__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y 
                    = (0x1ffffU & (vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y 
                                   - (IData)(0x64U)));
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp)));
                if ((0x63U > vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y)) {
                    goto __Vlabel3;
                }
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk3__DOT__i);
            }
            __Vlabel3: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[2U] 
            = vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp;
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[2U] = 0U;
    }
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp = 0U;
    if ((9U < vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y)) {
        vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk4__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk4__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y 
                    = (0x1ffffU & (vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y 
                                   - (IData)(0xaU)));
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp)));
                if ((9U > vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y)) {
                    goto __Vlabel4;
                }
                vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk4__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk4__DOT__i);
            }
            __Vlabel4: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[1U] 
            = vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp;
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[0U] 
            = (0xffU & vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y);
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[1U] = 0U;
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[0U] 
            = (0xffU & vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y);
    }
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y = vlSelf->top__DOT__dut__DOT__sqrt_o;
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp = 0U;
    if ((0x270fU < vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y)) {
        vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk1__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk1__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y 
                    = (0x1ffffU & (vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y 
                                   - (IData)(0x2710U)));
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp)));
                if ((0x270fU > vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y)) {
                    goto __Vlabel5;
                }
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk1__DOT__i);
            }
            __Vlabel5: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[4U] 
            = vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp;
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[4U] = 0U;
    }
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp = 0U;
    if ((0x3e7U < vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y)) {
        vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk2__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y 
                    = (0x1ffffU & (vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y 
                                   - (IData)(0x3e8U)));
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp)));
                if ((0x3e7U > vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y)) {
                    goto __Vlabel6;
                }
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel6: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[3U] 
            = vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp;
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[3U] = 0U;
    }
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp = 0U;
    if ((0x63U < vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y)) {
        vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk3__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk3__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y 
                    = (0x1ffffU & (vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y 
                                   - (IData)(0x64U)));
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp)));
                if ((0x63U > vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y)) {
                    goto __Vlabel7;
                }
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk3__DOT__i);
            }
            __Vlabel7: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[2U] 
            = vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp;
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[2U] = 0U;
    }
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp = 0U;
    if ((9U < vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y)) {
        vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk4__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 0xaU, vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk4__DOT__i)) {
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y 
                    = (0x1ffffU & (vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y 
                                   - (IData)(0xaU)));
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp)));
                if ((9U > vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y)) {
                    goto __Vlabel8;
                }
                vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk4__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk4__DOT__i);
            }
            __Vlabel8: ;
        }
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[1U] 
            = vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp;
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[0U] 
            = (0xffU & vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y);
    } else {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[1U] = 0U;
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[0U] 
            = (0xffU & vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y);
    }
    vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[4U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o
        [4U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[3U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o
        [3U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[2U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o
        [2U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[1U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o
        [1U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[0U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o
        [0U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd[4U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o
        [4U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd[3U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o
        [3U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd[2U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o
        [2U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd[1U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o
        [1U];
    vlSelf->top__DOT__dut__DOT__sqrt_lcd[0U] = vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o
        [0U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[4U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[4U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[3U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[3U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[2U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[2U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[1U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[1U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[0U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[0U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[4U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd[4U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[3U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd[3U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[2U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd[2U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[1U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd[1U];
    vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[0U] 
        = vlSelf->top__DOT__dut__DOT__sqrt_lcd[0U];
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__data_clk_A = vlSelf->data_clk_A;
    vlSelf->__Vclklast__TOP__data_clk_B = vlSelf->data_clk_B;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
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
    vlSelf->data_i = VL_RAND_RESET_I(16);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->data_clk_A = VL_RAND_RESET_I(1);
    vlSelf->data_clk_B = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->lcd_e = VL_RAND_RESET_I(1);
    vlSelf->lcd_rs = VL_RAND_RESET_I(1);
    vlSelf->lcd_on = VL_RAND_RESET_I(1);
    vlSelf->lcd_blon = VL_RAND_RESET_I(1);
    vlSelf->lcd_rw = VL_RAND_RESET_I(1);
    vlSelf->data_lcd = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__sqrt_lcd[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__sqrt_lcd_tp[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__dut__DOT__sqrt_o = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__dut__DOT__sqrt_o_tp = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__dut__DOT__A = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__B = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec0__dec_o[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT____Vcellout__bin2dec1__dec_o[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i_tp[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT____Vcellinp__LCD__data_i[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__mid[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__binh_phuong_A__DOT__midB[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__mid[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__binh_phuong_B__DOT__midB[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__sqrt0__DOT__frac[__Vi0] = VL_RAND_RESET_I(17);
    }
    VL_RAND_RESET_W(91, vlSelf->top__DOT__dut__DOT__sqrt0__DOT__Y);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__P = VL_RAND_RESET_Q(43);
    vlSelf->top__DOT__dut__DOT__sqrt0__DOT__X_i = VL_RAND_RESET_Q(43);
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__y = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__bin2dec0__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__y = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__bin2dec1__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__LCD__DOT____Vxrand_h96fdabed__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__LCD__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__LCD__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__LCD__DOT__Datas[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
