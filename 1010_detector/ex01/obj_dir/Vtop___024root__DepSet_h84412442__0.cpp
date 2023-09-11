// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(((IData)(vlSelf->z) > (4U == (IData)(vlSelf->top__DOT__dut__DOT__y))))) {
            VL_WRITEF("[%0t] %%Error: design_4.sv:40: Assertion failed in %Ntop.dut: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/design_4.sv", 40, "");
        }
    }
}
