// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+569,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+570,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+569,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+570,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+282,"spi_sck", false,-1);
    tracep->declBus(c+283,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+514,"spi_mosi", false,-1);
    tracep->declBit(c+571,"spi_miso", false,-1);
    tracep->declBit(c+569,"uart_rx", false,-1);
    tracep->declBit(c+570,"uart_tx", false,-1);
    tracep->declBit(c+572,"sdram_clk", false,-1);
    tracep->declBit(c+515,"sdram_cke", false,-1);
    tracep->declBit(c+516,"sdram_cs", false,-1);
    tracep->declBit(c+517,"sdram_ras", false,-1);
    tracep->declBit(c+518,"sdram_cas", false,-1);
    tracep->declBit(c+519,"sdram_we", false,-1);
    tracep->declBus(c+520,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+521,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+522,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+573,"sdram_dq", false,-1, 15,0);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBus(c+532,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+7,"in_psel", false,-1);
    tracep->declBit(c+8,"in_penable", false,-1);
    tracep->declBus(c+599,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+9,"in_pwrite", false,-1);
    tracep->declBus(c+508,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+556,"in_pready", false,-1);
    tracep->declBus(c+557,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+600,"in_pslverr", false,-1);
    tracep->declBus(c+532,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+7,"out_psel", false,-1);
    tracep->declBit(c+8,"out_penable", false,-1);
    tracep->declBus(c+599,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+9,"out_pwrite", false,-1);
    tracep->declBus(c+508,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+556,"out_pready", false,-1);
    tracep->declBus(c+557,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+600,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+7,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+8,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+9,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+532,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+599,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+508,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+556,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+600,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+557,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+574,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+575,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+9,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+532,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+599,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+508,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+284,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+600,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+285,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+533,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+534,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+9,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+535,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+599,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+508,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+536,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+600,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+576,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+577,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+578,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+9,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+537,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+599,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+508,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+579,"auto_anon_out_0_pready", false,-1);
    tracep->declBus(c+580,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+538,"sel_0", false,-1);
    tracep->declBit(c+539,"sel_1", false,-1);
    tracep->declBit(c+540,"sel_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+11,"auto_in_awready", false,-1);
    tracep->declBit(c+12,"auto_in_awvalid", false,-1);
    tracep->declBus(c+13,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+16,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+11,"auto_in_wready", false,-1);
    tracep->declBit(c+17,"auto_in_wvalid", false,-1);
    tracep->declBus(c+18,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+20,"auto_in_bready", false,-1);
    tracep->declBit(c+558,"auto_in_bvalid", false,-1);
    tracep->declBus(c+21,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_arready", false,-1);
    tracep->declBit(c+24,"auto_in_arvalid", false,-1);
    tracep->declBus(c+25,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+26,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+27,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+28,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+29,"auto_in_rready", false,-1);
    tracep->declBit(c+559,"auto_in_rvalid", false,-1);
    tracep->declBus(c+30,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+581,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+7,"auto_out_psel", false,-1);
    tracep->declBit(c+8,"auto_out_penable", false,-1);
    tracep->declBit(c+9,"auto_out_pwrite", false,-1);
    tracep->declBus(c+532,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+508,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+556,"auto_out_pready", false,-1);
    tracep->declBit(c+600,"auto_out_pslverr", false,-1);
    tracep->declBus(c+557,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+8,"nodeOut_penable", false,-1);
    tracep->declBus(c+31,"state", false,-1, 1,0);
    tracep->declBit(c+23,"accept_read", false,-1);
    tracep->declBit(c+11,"accept_write", false,-1);
    tracep->declBit(c+32,"is_write_r", false,-1);
    tracep->declBit(c+9,"is_write", false,-1);
    tracep->declBus(c+30,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+21,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+33,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+34,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+35,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+36,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+601,"resp", false,-1, 1,0);
    tracep->declBus(c+37,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+22,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+559,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+38,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+558,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+39,"auto_in_awready", false,-1);
    tracep->declBit(c+40,"auto_in_awvalid", false,-1);
    tracep->declBus(c+602,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+603,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+601,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_in_wready", false,-1);
    tracep->declBit(c+44,"auto_in_wvalid", false,-1);
    tracep->declBus(c+45,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+604,"auto_in_wlast", false,-1);
    tracep->declBit(c+47,"auto_in_bready", false,-1);
    tracep->declBit(c+48,"auto_in_bvalid", false,-1);
    tracep->declBus(c+49,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"auto_in_arready", false,-1);
    tracep->declBit(c+52,"auto_in_arvalid", false,-1);
    tracep->declBus(c+602,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+603,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+601,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_in_rready", false,-1);
    tracep->declBit(c+56,"auto_in_rvalid", false,-1);
    tracep->declBus(c+57,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_in_rlast", false,-1);
    tracep->declBit(c+11,"auto_out_awready", false,-1);
    tracep->declBit(c+12,"auto_out_awvalid", false,-1);
    tracep->declBus(c+13,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+16,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+11,"auto_out_wready", false,-1);
    tracep->declBit(c+17,"auto_out_wvalid", false,-1);
    tracep->declBus(c+18,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+20,"auto_out_bready", false,-1);
    tracep->declBit(c+558,"auto_out_bvalid", false,-1);
    tracep->declBus(c+21,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_out_arready", false,-1);
    tracep->declBit(c+24,"auto_out_arvalid", false,-1);
    tracep->declBus(c+25,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+26,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+27,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+28,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+29,"auto_out_rready", false,-1);
    tracep->declBit(c+559,"auto_out_rvalid", false,-1);
    tracep->declBus(c+30,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+581,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+20,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBus(c+21,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+22,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+47,"io_deq_ready", false,-1);
    tracep->declBit(c+48,"io_deq_valid", false,-1);
    tracep->declBus(c+49,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+50,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+61,"wrap", false,-1);
    tracep->declBit(c+62,"wrap_1", false,-1);
    tracep->declBit(c+63,"maybe_full", false,-1);
    tracep->declBit(c+64,"ptr_match", false,-1);
    tracep->declBit(c+65,"empty", false,-1);
    tracep->declBit(c+66,"full", false,-1);
    tracep->declBit(c+560,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+62,"R0_addr", false,-1);
    tracep->declBit(c+604,"R0_en", false,-1);
    tracep->declBit(c+567,"R0_clk", false,-1);
    tracep->declBus(c+67,"R0_data", false,-1, 5,0);
    tracep->declBit(c+61,"W0_addr", false,-1);
    tracep->declBit(c+560,"W0_en", false,-1);
    tracep->declBit(c+567,"W0_clk", false,-1);
    tracep->declBus(c+68,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+69+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+71,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+29,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBus(c+30,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+581,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+22,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+55,"io_deq_ready", false,-1);
    tracep->declBit(c+56,"io_deq_valid", false,-1);
    tracep->declBus(c+57,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+58,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+59,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+60,"io_deq_bits_last", false,-1);
    tracep->declBit(c+72,"wrap", false,-1);
    tracep->declBit(c+73,"wrap_1", false,-1);
    tracep->declBit(c+74,"maybe_full", false,-1);
    tracep->declBit(c+75,"ptr_match", false,-1);
    tracep->declBit(c+76,"empty", false,-1);
    tracep->declBit(c+77,"full", false,-1);
    tracep->declBit(c+561,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+73,"R0_addr", false,-1);
    tracep->declBit(c+604,"R0_en", false,-1);
    tracep->declBit(c+567,"R0_clk", false,-1);
    tracep->declQuad(c+78,"R0_data", false,-1, 38,0);
    tracep->declBit(c+72,"W0_addr", false,-1);
    tracep->declBit(c+561,"W0_en", false,-1);
    tracep->declBit(c+567,"W0_clk", false,-1);
    tracep->declQuad(c+582,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+80+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+84,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+51,"io_enq_ready", false,-1);
    tracep->declBit(c+52,"io_enq_valid", false,-1);
    tracep->declBus(c+602,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+53,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+603,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+54,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+601,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+24,"io_deq_valid", false,-1);
    tracep->declBus(c+25,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+26,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+27,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+28,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+85,"wrap", false,-1);
    tracep->declBit(c+86,"wrap_1", false,-1);
    tracep->declBit(c+87,"maybe_full", false,-1);
    tracep->declBit(c+88,"ptr_match", false,-1);
    tracep->declBit(c+89,"empty", false,-1);
    tracep->declBit(c+90,"full", false,-1);
    tracep->declBit(c+91,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+86,"R0_addr", false,-1);
    tracep->declBit(c+604,"R0_en", false,-1);
    tracep->declBit(c+567,"R0_clk", false,-1);
    tracep->declQuad(c+92,"R0_data", false,-1, 46,0);
    tracep->declBit(c+85,"W0_addr", false,-1);
    tracep->declBit(c+91,"W0_en", false,-1);
    tracep->declBit(c+567,"W0_clk", false,-1);
    tracep->declQuad(c+94,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+96+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+100,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+39,"io_enq_ready", false,-1);
    tracep->declBit(c+40,"io_enq_valid", false,-1);
    tracep->declBus(c+602,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+41,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+603,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+42,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+601,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+12,"io_deq_valid", false,-1);
    tracep->declBus(c+13,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+14,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+15,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+16,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+101,"wrap", false,-1);
    tracep->declBit(c+102,"wrap_1", false,-1);
    tracep->declBit(c+103,"maybe_full", false,-1);
    tracep->declBit(c+104,"ptr_match", false,-1);
    tracep->declBit(c+105,"empty", false,-1);
    tracep->declBit(c+106,"full", false,-1);
    tracep->declBit(c+107,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+102,"R0_addr", false,-1);
    tracep->declBit(c+604,"R0_en", false,-1);
    tracep->declBit(c+567,"R0_clk", false,-1);
    tracep->declQuad(c+108,"R0_data", false,-1, 46,0);
    tracep->declBit(c+101,"W0_addr", false,-1);
    tracep->declBit(c+107,"W0_en", false,-1);
    tracep->declBit(c+567,"W0_clk", false,-1);
    tracep->declQuad(c+110,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+112+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+116,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+43,"io_enq_ready", false,-1);
    tracep->declBit(c+44,"io_enq_valid", false,-1);
    tracep->declBus(c+45,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+46,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+604,"io_enq_bits_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+17,"io_deq_valid", false,-1);
    tracep->declBus(c+18,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+19,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+117,"wrap", false,-1);
    tracep->declBit(c+118,"wrap_1", false,-1);
    tracep->declBit(c+119,"maybe_full", false,-1);
    tracep->declBit(c+120,"ptr_match", false,-1);
    tracep->declBit(c+121,"empty", false,-1);
    tracep->declBit(c+122,"full", false,-1);
    tracep->declBit(c+123,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+118,"R0_addr", false,-1);
    tracep->declBit(c+604,"R0_en", false,-1);
    tracep->declBit(c+567,"R0_clk", false,-1);
    tracep->declQuad(c+124,"R0_data", false,-1, 35,0);
    tracep->declBit(c+117,"W0_addr", false,-1);
    tracep->declBit(c+123,"W0_en", false,-1);
    tracep->declBit(c+567,"W0_clk", false,-1);
    tracep->declQuad(c+126,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+128+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+132,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+39,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+40,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+602,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+603,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+601,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+44,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+604,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+47,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+48,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+49,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+52,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+602,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+603,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+601,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+56,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+57,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+39,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+40,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+602,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+603,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+601,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+604,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+47,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+48,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+49,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+52,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+602,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+603,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+601,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+56,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+57,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+584,"reset", false,-1);
    tracep->declBit(c+39,"auto_master_out_awready", false,-1);
    tracep->declBit(c+40,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+602,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+603,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+601,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_master_out_wready", false,-1);
    tracep->declBit(c+44,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+45,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+604,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+47,"auto_master_out_bready", false,-1);
    tracep->declBit(c+48,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+49,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"auto_master_out_arready", false,-1);
    tracep->declBit(c+52,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+602,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+603,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+601,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_master_out_rready", false,-1);
    tracep->declBit(c+56,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+57,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_master_out_rlast", false,-1);
    tracep->declBit(c+600,"io_interrupt", false,-1);
    tracep->declBit(c+600,"io_slave_awready", false,-1);
    tracep->declBit(c+600,"io_slave_awvalid", false,-1);
    tracep->declBus(c+602,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+605,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+603,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+606,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+601,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+600,"io_slave_wready", false,-1);
    tracep->declBit(c+600,"io_slave_wvalid", false,-1);
    tracep->declBus(c+605,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+602,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+600,"io_slave_wlast", false,-1);
    tracep->declBit(c+600,"io_slave_bready", false,-1);
    tracep->declBit(c+600,"io_slave_bvalid", false,-1);
    tracep->declBus(c+602,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+601,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+600,"io_slave_arready", false,-1);
    tracep->declBit(c+600,"io_slave_arvalid", false,-1);
    tracep->declBus(c+602,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+605,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+603,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+606,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+601,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+600,"io_slave_rready", false,-1);
    tracep->declBit(c+600,"io_slave_rvalid", false,-1);
    tracep->declBus(c+602,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+605,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+601,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+600,"io_slave_rlast", false,-1);
    tracep->pushNamePrefix("bridge ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+584,"reset", false,-1);
    tracep->declBus(c+133,"io_ifu_addr", false,-1, 31,0);
    tracep->declBit(c+134,"io_ifu_reqValid", false,-1);
    tracep->declBus(c+135,"io_ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+136,"io_ifu_respValid", false,-1);
    tracep->declBus(c+41,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+137,"io_lsu_reqValid", false,-1);
    tracep->declBus(c+58,"io_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+138,"io_lsu_respValid", false,-1);
    tracep->declBus(c+139,"io_lsu_size", false,-1, 1,0);
    tracep->declBit(c+140,"io_lsu_wen", false,-1);
    tracep->declBus(c+45,"io_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"io_lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+39,"io_master_awready", false,-1);
    tracep->declBit(c+40,"io_master_awvalid", false,-1);
    tracep->declBus(c+602,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+41,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+603,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+42,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+601,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+43,"io_master_wready", false,-1);
    tracep->declBit(c+44,"io_master_wvalid", false,-1);
    tracep->declBus(c+45,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+604,"io_master_wlast", false,-1);
    tracep->declBit(c+47,"io_master_bready", false,-1);
    tracep->declBit(c+48,"io_master_bvalid", false,-1);
    tracep->declBus(c+49,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+50,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"io_master_arready", false,-1);
    tracep->declBit(c+52,"io_master_arvalid", false,-1);
    tracep->declBus(c+602,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+53,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+603,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+601,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"io_master_rready", false,-1);
    tracep->declBit(c+56,"io_master_rvalid", false,-1);
    tracep->declBus(c+57,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+58,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+60,"io_master_rlast", false,-1);
    tracep->declBit(c+141,"isValidLoad", false,-1);
    tracep->declBit(c+142,"isValidStore", false,-1);
    tracep->declBus(c+143,"stateI", false,-1, 1,0);
    tracep->declBus(c+144,"stateD", false,-1, 2,0);
    tracep->declBit(c+47,"io_master_bready_0", false,-1);
    tracep->declBit(c+145,"lsuRead", false,-1);
    tracep->declBit(c+136,"instReturn", false,-1);
    tracep->declBus(c+146,"io_ifu_rdata_r", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+584,"reset", false,-1);
    tracep->declBit(c+136,"io_ifu_respValid", false,-1);
    tracep->declBus(c+135,"io_ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"io_ifu_addr", false,-1, 31,0);
    tracep->declBit(c+134,"io_ifu_reqValid", false,-1);
    tracep->declBus(c+58,"io_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+138,"io_lsu_respValid", false,-1);
    tracep->declBit(c+137,"io_lsu_reqValid", false,-1);
    tracep->declBus(c+41,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+140,"io_lsu_wen", false,-1);
    tracep->declBus(c+45,"io_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"io_lsu_wmask", false,-1, 3,0);
    tracep->declBus(c+139,"io_lsu_size", false,-1, 1,0);
    tracep->declBit(c+147,"I_csrrw", false,-1);
    tracep->declBit(c+148,"I_csrrs", false,-1);
    tracep->declBus(c+149,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+150,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+151,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+607,"PC_plus_4", false,-1, 31,0);
    tracep->declBus(c+152,"ALU_OUT", false,-1, 31,0);
    tracep->declBus(c+153,"R1_data", false,-1, 31,0);
    tracep->declBus(c+154,"R2_data", false,-1, 31,0);
    tracep->declBus(c+608,"RegWriteData", false,-1, 31,0);
    tracep->declBit(c+609,"Reg_WE", false,-1);
    tracep->declBit(c+155,"I_jalr", false,-1);
    tracep->declBus(c+156,"r1", false,-1, 4,0);
    tracep->declBus(c+157,"r2", false,-1, 4,0);
    tracep->declBus(c+158,"rd", false,-1, 4,0);
    tracep->declBus(c+159,"imm", false,-1, 31,0);
    tracep->declBit(c+160,"R_TYPE", false,-1);
    tracep->declBit(c+161,"I_TYPE_ARITH", false,-1);
    tracep->declBit(c+162,"L_TYPE_LOAD", false,-1);
    tracep->declBit(c+163,"S_TYPE", false,-1);
    tracep->declBit(c+164,"U_TYPE", false,-1);
    tracep->declBit(c+165,"I_TYPE", false,-1);
    tracep->declBit(c+166,"B_TYPE", false,-1);
    tracep->declBit(c+167,"J_TYPE", false,-1);
    tracep->declBit(c+168,"U_lui", false,-1);
    tracep->declBit(c+169,"R_add", false,-1);
    tracep->declBit(c+170,"l_lw", false,-1);
    tracep->declBit(c+171,"l_lbu", false,-1);
    tracep->declBit(c+172,"I_add", false,-1);
    tracep->declBit(c+173,"S_sw", false,-1);
    tracep->declBit(c+174,"S_sb", false,-1);
    tracep->declBit(c+175,"I_ebreak", false,-1);
    tracep->declBus(c+176,"wmask", false,-1, 3,0);
    tracep->declBit(c+610,"ifu_reqValid", false,-1);
    tracep->declBit(c+611,"ifu_respValid", false,-1);
    tracep->declBit(c+177,"ifu_valid", false,-1);
    tracep->declBit(c+178,"pc_valid", false,-1);
    tracep->declBus(c+179,"PC", false,-1, 31,0);
    tracep->declBit(c+612,"cpu_en", false,-1);
    tracep->declBit(c+180,"lsu_ready", false,-1);
    tracep->declBit(c+181,"lsu_working", false,-1);
    tracep->declBit(c+182,"lsu_valid", false,-1);
    tracep->declBit(c+183,"wbu_ready", false,-1);
    tracep->declBit(c+184,"wbu_valid", false,-1);
    tracep->declBus(c+185,"next_pc", false,-1, 31,0);
    tracep->declBus(c+186,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+150,"csr_wdata_out", false,-1, 31,0);
    tracep->declBus(c+187,"inst", false,-1, 31,0);
    tracep->declBus(c+188,"load_wdata", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+160,"R_TYPE", false,-1);
    tracep->declBit(c+165,"I_TYPE", false,-1);
    tracep->declBit(c+163,"S_TYPE", false,-1);
    tracep->declBit(c+166,"B_TYPE", false,-1);
    tracep->declBit(c+167,"J_TYPE", false,-1);
    tracep->declBit(c+164,"U_TYPE", false,-1);
    tracep->declBit(c+169,"R_add", false,-1);
    tracep->declBit(c+172,"I_add", false,-1);
    tracep->declBit(c+155,"I_jalr", false,-1);
    tracep->declBit(c+171,"l_lbu", false,-1);
    tracep->declBit(c+170,"l_lw", false,-1);
    tracep->declBit(c+147,"I_csrrw", false,-1);
    tracep->declBit(c+148,"I_csrrs", false,-1);
    tracep->declBus(c+153,"rdata_1", false,-1, 31,0);
    tracep->declBus(c+154,"rdata_2", false,-1, 31,0);
    tracep->declBus(c+159,"imm", false,-1, 31,0);
    tracep->declBus(c+179,"pc", false,-1, 31,0);
    tracep->declBus(c+150,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+152,"ALU_OUT", false,-1, 31,0);
    tracep->declBus(c+189,"A", false,-1, 31,0);
    tracep->declBus(c+190,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBit(c+148,"I_csrrs", false,-1);
    tracep->declBit(c+147,"I_csrrw", false,-1);
    tracep->declBus(c+149,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+150,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+151,"csr_rdata", false,-1, 31,0);
    tracep->declQuad(c+191,"mcycle", false,-1, 63,0);
    tracep->declBus(c+613,"MVENDORID", false,-1, 31,0);
    tracep->declBus(c+614,"MARCHID", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+187,"inst", false,-1, 31,0);
    tracep->declBit(c+160,"R_TYPE", false,-1);
    tracep->declBit(c+161,"I_TYPE_ARITH", false,-1);
    tracep->declBit(c+162,"L_TYPE_LOAD", false,-1);
    tracep->declBit(c+163,"S_TYPE", false,-1);
    tracep->declBit(c+164,"U_TYPE", false,-1);
    tracep->declBit(c+165,"I_TYPE", false,-1);
    tracep->declBit(c+193,"MemWEn", false,-1);
    tracep->declBit(c+166,"B_TYPE", false,-1);
    tracep->declBit(c+167,"J_TYPE", false,-1);
    tracep->declBit(c+155,"I_jalr", false,-1);
    tracep->declBit(c+168,"U_lui", false,-1);
    tracep->declBit(c+169,"R_add", false,-1);
    tracep->declBit(c+170,"l_lw", false,-1);
    tracep->declBit(c+171,"l_lbu", false,-1);
    tracep->declBit(c+172,"I_add", false,-1);
    tracep->declBit(c+173,"S_sw", false,-1);
    tracep->declBit(c+174,"S_sb", false,-1);
    tracep->declBit(c+175,"I_ebreak", false,-1);
    tracep->declBit(c+147,"I_csrrw", false,-1);
    tracep->declBit(c+148,"I_csrrs", false,-1);
    tracep->declBus(c+149,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+159,"imm", false,-1, 31,0);
    tracep->declBus(c+156,"r1", false,-1, 4,0);
    tracep->declBus(c+157,"r2", false,-1, 4,0);
    tracep->declBus(c+158,"rd", false,-1, 4,0);
    tracep->declBus(c+176,"wmask", false,-1, 3,0);
    tracep->declBus(c+194,"opcode", false,-1, 6,0);
    tracep->declBus(c+195,"funct3", false,-1, 2,0);
    tracep->declBus(c+196,"funct7", false,-1, 6,0);
    tracep->declBus(c+197,"immI", false,-1, 31,0);
    tracep->declBus(c+198,"immS", false,-1, 31,0);
    tracep->declBus(c+199,"immB", false,-1, 31,0);
    tracep->declBus(c+200,"immU", false,-1, 31,0);
    tracep->declBus(c+201,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBus(c+179,"PC", false,-1, 31,0);
    tracep->declBit(c+178,"pc_valid", false,-1);
    tracep->declBit(c+180,"lsu_ready", false,-1);
    tracep->declBit(c+183,"wbu_ready", false,-1);
    tracep->declBus(c+187,"inst", false,-1, 31,0);
    tracep->declBit(c+177,"ifu_valid", false,-1);
    tracep->declBit(c+615,"ifu_wen", false,-1);
    tracep->declBit(c+134,"ifu_reqValid", false,-1);
    tracep->declBit(c+136,"ifu_respValid", false,-1);
    tracep->declBus(c+133,"ifu_raddr", false,-1, 31,0);
    tracep->declBus(c+135,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+616,"IFU_IDLE", false,-1, 0,0);
    tracep->declBus(c+617,"IFU_WAIT", false,-1, 0,0);
    tracep->declBit(c+202,"ifu_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBus(c+154,"R2_data", false,-1, 31,0);
    tracep->declBus(c+152,"ALU_OUT", false,-1, 31,0);
    tracep->declBit(c+170,"l_lw", false,-1);
    tracep->declBit(c+171,"l_lbu", false,-1);
    tracep->declBit(c+174,"S_sb", false,-1);
    tracep->declBit(c+173,"S_sw", false,-1);
    tracep->declBit(c+160,"R_TYPE", false,-1);
    tracep->declBit(c+161,"I_TYPE_ARITH", false,-1);
    tracep->declBit(c+165,"I_TYPE", false,-1);
    tracep->declBit(c+164,"U_TYPE", false,-1);
    tracep->declBit(c+167,"J_TYPE", false,-1);
    tracep->declBit(c+147,"I_csrrw", false,-1);
    tracep->declBus(c+151,"CSR_RDATA", false,-1, 31,0);
    tracep->declBus(c+158,"rd", false,-1, 4,0);
    tracep->declBus(c+176,"wmask", false,-1, 3,0);
    tracep->declBit(c+177,"ifu_valid", false,-1);
    tracep->declBit(c+183,"wbu_ready", false,-1);
    tracep->declBit(c+182,"lsu_valid", false,-1);
    tracep->declBit(c+137,"lsu_reqValid", false,-1);
    tracep->declBit(c+138,"lsu_respValid", false,-1);
    tracep->declBus(c+41,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+140,"lsu_wen", false,-1);
    tracep->declBus(c+45,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"lsu_wmask", false,-1, 3,0);
    tracep->declBus(c+58,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+180,"lsu_ready", false,-1);
    tracep->declBit(c+181,"lsu_working", false,-1);
    tracep->declBus(c+139,"io_lsu_size", false,-1, 1,0);
    tracep->declBus(c+188,"RegWriteData", false,-1, 31,0);
    tracep->declBus(c+616,"LSU_IDLE", false,-1, 0,0);
    tracep->declBus(c+617,"LSU_WAIT", false,-1, 0,0);
    tracep->declBit(c+203,"state", false,-1);
    tracep->declBus(c+204,"deviation_rdata", false,-1, 31,0);
    tracep->declBit(c+205,"wen", false,-1);
    tracep->declBit(c+206,"ren", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBus(c+185,"next_pc", false,-1, 31,0);
    tracep->declBit(c+184,"wbu_valid", false,-1);
    tracep->declBit(c+178,"pc_valid", false,-1);
    tracep->declBus(c+179,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+618,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+619,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBus(c+186,"wdata", false,-1, 31,0);
    tracep->declBus(c+158,"waddr", false,-1, 4,0);
    tracep->declBit(c+207,"L_wen", false,-1);
    tracep->declBus(c+156,"raddr_1", false,-1, 4,0);
    tracep->declBus(c+157,"raddr_2", false,-1, 4,0);
    tracep->declBus(c+153,"rdata_1", false,-1, 31,0);
    tracep->declBus(c+154,"rdata_2", false,-1, 31,0);
    tracep->declBus(c+605,"zero", false,-1, 31,0);
    tracep->declBus(c+208,"ra", false,-1, 31,0);
    tracep->declBus(c+209,"sp", false,-1, 31,0);
    tracep->declBus(c+210,"gp", false,-1, 31,0);
    tracep->declBus(c+211,"tp", false,-1, 31,0);
    tracep->declBus(c+212,"s0", false,-1, 31,0);
    tracep->declBus(c+213,"s1", false,-1, 31,0);
    tracep->declBus(c+214,"a0", false,-1, 31,0);
    tracep->declBus(c+215,"a1", false,-1, 31,0);
    tracep->declBus(c+216,"a2", false,-1, 31,0);
    tracep->declBus(c+217,"a3", false,-1, 31,0);
    tracep->declBus(c+218,"a4", false,-1, 31,0);
    tracep->declBus(c+219,"a5", false,-1, 31,0);
    tracep->declBus(c+620,"ZERO", false,-1, 31,0);
    tracep->declBus(c+621,"RA", false,-1, 31,0);
    tracep->declBus(c+622,"SP", false,-1, 31,0);
    tracep->declBus(c+623,"GP", false,-1, 31,0);
    tracep->declBus(c+624,"TP", false,-1, 31,0);
    tracep->declBus(c+625,"S0", false,-1, 31,0);
    tracep->declBus(c+626,"S1", false,-1, 31,0);
    tracep->declBus(c+627,"A0", false,-1, 31,0);
    tracep->declBus(c+628,"A1", false,-1, 31,0);
    tracep->declBus(c+629,"A2", false,-1, 31,0);
    tracep->declBus(c+630,"A3", false,-1, 31,0);
    tracep->declBus(c+631,"A4", false,-1, 31,0);
    tracep->declBus(c+632,"A5", false,-1, 31,0);
    tracep->declBit(c+207,"wen", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+220+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBus(c+152,"ALU_OUT", false,-1, 31,0);
    tracep->declBus(c+151,"CSR_RDATA", false,-1, 31,0);
    tracep->declBus(c+150,"i_csr_wdata", false,-1, 31,0);
    tracep->declBit(c+170,"l_lw", false,-1);
    tracep->declBit(c+171,"l_lbu", false,-1);
    tracep->declBit(c+155,"I_jalr", false,-1);
    tracep->declBit(c+174,"S_sb", false,-1);
    tracep->declBit(c+173,"S_sw", false,-1);
    tracep->declBit(c+172,"I_add", false,-1);
    tracep->declBit(c+169,"R_add", false,-1);
    tracep->declBit(c+168,"U_lui", false,-1);
    tracep->declBit(c+147,"I_csrrw", false,-1);
    tracep->declBit(c+148,"I_csrrs", false,-1);
    tracep->declBus(c+188,"load_wdata", false,-1, 31,0);
    tracep->declBit(c+181,"lsu_busy", false,-1);
    tracep->declBit(c+182,"lsu_valid", false,-1);
    tracep->declBit(c+177,"ifu_valid", false,-1);
    tracep->declBus(c+179,"PC", false,-1, 31,0);
    tracep->declBit(c+183,"wbu_ready", false,-1);
    tracep->declBit(c+184,"wbu_valid", false,-1);
    tracep->declBus(c+185,"next_pc", false,-1, 31,0);
    tracep->declBus(c+186,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+150,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+601,"IDLE", false,-1, 1,0);
    tracep->declBus(c+633,"WAIT", false,-1, 1,0);
    tracep->declBus(c+634,"LSUWAIT", false,-1, 1,0);
    tracep->declBus(c+236,"state", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"io_d", false,-1);
    tracep->declBit(c+237,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"io_d", false,-1);
    tracep->declBit(c+237,"io_q", false,-1);
    tracep->declBit(c+237,"sync_0", false,-1);
    tracep->declBit(c+238,"sync_1", false,-1);
    tracep->declBit(c+239,"sync_2", false,-1);
    tracep->declBit(c+240,"sync_3", false,-1);
    tracep->declBit(c+241,"sync_4", false,-1);
    tracep->declBit(c+242,"sync_5", false,-1);
    tracep->declBit(c+243,"sync_6", false,-1);
    tracep->declBit(c+244,"sync_7", false,-1);
    tracep->declBit(c+245,"sync_8", false,-1);
    tracep->declBit(c+246,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+574,"auto_in_psel", false,-1);
    tracep->declBit(c+575,"auto_in_penable", false,-1);
    tracep->declBit(c+9,"auto_in_pwrite", false,-1);
    tracep->declBus(c+532,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+599,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+508,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+284,"auto_in_pready", false,-1);
    tracep->declBit(c+600,"auto_in_pslverr", false,-1);
    tracep->declBus(c+285,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+572,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+515,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+516,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+517,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+518,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+519,"sdram_bundle_we", false,-1);
    tracep->declBus(c+520,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+521,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+522,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+573,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBus(c+532,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+574,"in_psel", false,-1);
    tracep->declBit(c+575,"in_penable", false,-1);
    tracep->declBus(c+599,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+9,"in_pwrite", false,-1);
    tracep->declBus(c+508,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+284,"in_pready", false,-1);
    tracep->declBus(c+285,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+600,"in_pslverr", false,-1);
    tracep->declBit(c+572,"sdram_clk", false,-1);
    tracep->declBit(c+515,"sdram_cke", false,-1);
    tracep->declBit(c+516,"sdram_cs", false,-1);
    tracep->declBit(c+517,"sdram_ras", false,-1);
    tracep->declBit(c+518,"sdram_cas", false,-1);
    tracep->declBit(c+519,"sdram_we", false,-1);
    tracep->declBus(c+520,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+521,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+522,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+573,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+286,"sdram_dout_en", false,-1);
    tracep->declBus(c+287,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+247,"state", false,-1, 1,0);
    tracep->declBit(c+523,"req_accept", false,-1);
    tracep->declBit(c+541,"is_read", false,-1);
    tracep->declBit(c+542,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+567,"clk_i", false,-1);
    tracep->declBit(c+568,"rst_i", false,-1);
    tracep->declBus(c+543,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+541,"inport_rd_i", false,-1);
    tracep->declBus(c+603,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+532,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+508,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+573,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+523,"inport_accept_o", false,-1);
    tracep->declBit(c+284,"inport_ack_o", false,-1);
    tracep->declBit(c+600,"inport_error_o", false,-1);
    tracep->declBus(c+285,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+572,"sdram_clk_o", false,-1);
    tracep->declBit(c+515,"sdram_cke_o", false,-1);
    tracep->declBit(c+516,"sdram_cs_o", false,-1);
    tracep->declBit(c+517,"sdram_ras_o", false,-1);
    tracep->declBit(c+518,"sdram_cas_o", false,-1);
    tracep->declBit(c+519,"sdram_we_o", false,-1);
    tracep->declBus(c+522,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+520,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+521,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+287,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+286,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+635,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+636,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+626,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+622,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+622,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+622,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+624,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+630,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+637,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+638,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+639,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+624,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+640,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+641,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+642,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+643,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+644,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+645,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+646,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+602,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+647,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+624,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+602,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+646,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+645,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+641,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+643,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+642,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+644,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+640,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+648,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+649,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+627,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+627,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+650,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+627,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+622,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+622,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+651,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+532,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+543,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+541,"ram_rd_w", false,-1);
    tracep->declBit(c+523,"ram_accept_w", false,-1);
    tracep->declBus(c+508,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+285,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+284,"ram_ack_w", false,-1);
    tracep->declBit(c+544,"ram_req_w", false,-1);
    tracep->declBus(c+524,"command_q", false,-1, 3,0);
    tracep->declBus(c+520,"addr_q", false,-1, 12,0);
    tracep->declBus(c+287,"data_q", false,-1, 15,0);
    tracep->declBit(c+288,"data_rd_en_q", false,-1);
    tracep->declBus(c+522,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+515,"cke_q", false,-1);
    tracep->declBus(c+521,"bank_q", false,-1, 1,0);
    tracep->declBus(c+289,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+525,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+573,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+290,"refresh_q", false,-1);
    tracep->declBus(c+291,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+292+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+526,"state_q", false,-1, 3,0);
    tracep->declBus(c+562,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+563,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+296,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+297,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+545,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+546,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+547,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+624,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+298,"delay_q", false,-1, 3,0);
    tracep->declBus(c+564,"delay_r", false,-1, 3,0);
    tracep->declBus(c+652,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+527,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+299,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+300,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+301,"idx", false,-1, 31,0);
    tracep->declBus(c+302,"rd_q", false,-1, 3,0);
    tracep->declBit(c+284,"ack_q", false,-1);
    tracep->declArray(c+528,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+577,"auto_in_psel", false,-1);
    tracep->declBit(c+578,"auto_in_penable", false,-1);
    tracep->declBit(c+9,"auto_in_pwrite", false,-1);
    tracep->declBus(c+537,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+599,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+508,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+579,"auto_in_pready", false,-1);
    tracep->declBus(c+580,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+282,"spi_bundle_sck", false,-1);
    tracep->declBus(c+283,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+514,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+571,"spi_bundle_miso", false,-1);
    tracep->declBus(c+248,"cmd_state", false,-1, 3,0);
    tracep->declBus(c+509,"spi_state", false,-1, 1,0);
    tracep->declBit(c+510,"mspi_in_psel", false,-1);
    tracep->declBit(c+585,"spi_ack", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+653,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+654,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+625,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBus(c+548,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+510,"in_psel", false,-1);
    tracep->declBit(c+511,"in_penable", false,-1);
    tracep->declBus(c+599,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+512,"in_pwrite", false,-1);
    tracep->declBus(c+549,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+513,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+303,"in_pready", false,-1);
    tracep->declBus(c+304,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+600,"in_pslverr", false,-1);
    tracep->declBit(c+282,"spi_sck", false,-1);
    tracep->declBus(c+283,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+514,"spi_mosi", false,-1);
    tracep->declBit(c+571,"spi_miso", false,-1);
    tracep->declBit(c+305,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+621,"Tp", false,-1, 31,0);
    tracep->declBit(c+567,"wb_clk_i", false,-1);
    tracep->declBit(c+568,"wb_rst_i", false,-1);
    tracep->declBus(c+550,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+549,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+304,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+513,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+512,"wb_we_i", false,-1);
    tracep->declBit(c+510,"wb_stb_i", false,-1);
    tracep->declBit(c+511,"wb_cyc_i", false,-1);
    tracep->declBit(c+303,"wb_ack_o", false,-1);
    tracep->declBit(c+600,"wb_err_o", false,-1);
    tracep->declBit(c+305,"wb_int_o", false,-1);
    tracep->declBus(c+283,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+282,"sclk_pad_o", false,-1);
    tracep->declBit(c+514,"mosi_pad_o", false,-1);
    tracep->declBit(c+571,"miso_pad_i", false,-1);
    tracep->declBus(c+306,"divider", false,-1, 15,0);
    tracep->declBus(c+307,"ctrl", false,-1, 13,0);
    tracep->declBus(c+308,"ss", false,-1, 7,0);
    tracep->declBus(c+565,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+309,"rx", false,-1, 127,0);
    tracep->declBit(c+313,"rx_negedge", false,-1);
    tracep->declBit(c+314,"tx_negedge", false,-1);
    tracep->declBus(c+315,"char_len", false,-1, 6,0);
    tracep->declBit(c+316,"go", false,-1);
    tracep->declBit(c+317,"lsb", false,-1);
    tracep->declBit(c+318,"ie", false,-1);
    tracep->declBit(c+319,"ass", false,-1);
    tracep->declBit(c+586,"spi_divider_sel", false,-1);
    tracep->declBit(c+587,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+588,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+589,"spi_ss_sel", false,-1);
    tracep->declBit(c+320,"tip", false,-1);
    tracep->declBit(c+321,"pos_edge", false,-1);
    tracep->declBit(c+322,"neg_edge", false,-1);
    tracep->declBit(c+323,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+621,"Tp", false,-1, 31,0);
    tracep->declBit(c+567,"clk_in", false,-1);
    tracep->declBit(c+568,"rst", false,-1);
    tracep->declBit(c+320,"enable", false,-1);
    tracep->declBit(c+316,"go", false,-1);
    tracep->declBit(c+323,"last_clk", false,-1);
    tracep->declBus(c+306,"divider", false,-1, 15,0);
    tracep->declBit(c+282,"clk_out", false,-1);
    tracep->declBit(c+321,"pos_edge", false,-1);
    tracep->declBit(c+322,"neg_edge", false,-1);
    tracep->declBus(c+324,"cnt", false,-1, 15,0);
    tracep->declBit(c+325,"cnt_zero", false,-1);
    tracep->declBit(c+326,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+621,"Tp", false,-1, 31,0);
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+568,"rst", false,-1);
    tracep->declBus(c+551,"latch", false,-1, 3,0);
    tracep->declBus(c+513,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+315,"len", false,-1, 6,0);
    tracep->declBit(c+317,"lsb", false,-1);
    tracep->declBit(c+316,"go", false,-1);
    tracep->declBit(c+321,"pos_edge", false,-1);
    tracep->declBit(c+322,"neg_edge", false,-1);
    tracep->declBit(c+313,"rx_negedge", false,-1);
    tracep->declBit(c+314,"tx_negedge", false,-1);
    tracep->declBit(c+320,"tip", false,-1);
    tracep->declBit(c+323,"last", false,-1);
    tracep->declBus(c+549,"p_in", false,-1, 31,0);
    tracep->declArray(c+309,"p_out", false,-1, 127,0);
    tracep->declBit(c+282,"s_clk", false,-1);
    tracep->declBit(c+571,"s_in", false,-1);
    tracep->declBit(c+514,"s_out", false,-1);
    tracep->declBus(c+327,"cnt", false,-1, 7,0);
    tracep->declArray(c+309,"data", false,-1, 127,0);
    tracep->declBus(c+328,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+329,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+330,"rx_clk", false,-1);
    tracep->declBit(c+331,"tx_clk", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+533,"auto_in_psel", false,-1);
    tracep->declBit(c+534,"auto_in_penable", false,-1);
    tracep->declBit(c+9,"auto_in_pwrite", false,-1);
    tracep->declBus(c+535,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+599,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+508,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+536,"auto_in_pready", false,-1);
    tracep->declBit(c+600,"auto_in_pslverr", false,-1);
    tracep->declBus(c+576,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+569,"uart_rx", false,-1);
    tracep->declBit(c+570,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+568,"reset", false,-1);
    tracep->declBit(c+567,"clock", false,-1);
    tracep->declBit(c+533,"in_psel", false,-1);
    tracep->declBit(c+534,"in_penable", false,-1);
    tracep->declBus(c+599,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+536,"in_pready", false,-1);
    tracep->declBit(c+600,"in_pslverr", false,-1);
    tracep->declBus(c+552,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+9,"in_pwrite", false,-1);
    tracep->declBus(c+576,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+508,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+10,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+569,"uart_rx", false,-1);
    tracep->declBit(c+570,"uart_tx", false,-1);
    tracep->declBit(c+332,"rtsn", false,-1);
    tracep->declBit(c+600,"ctsn", false,-1);
    tracep->declBit(c+333,"dtr_pad_o", false,-1);
    tracep->declBit(c+600,"dsr_pad_i", false,-1);
    tracep->declBit(c+600,"ri_pad_i", false,-1);
    tracep->declBit(c+600,"dcd_pad_i", false,-1);
    tracep->declBit(c+334,"interrupt", false,-1);
    tracep->declBit(c+590,"reg_we", false,-1);
    tracep->declBit(c+591,"reg_re", false,-1);
    tracep->declBus(c+553,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+554,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+249,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+566,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+335,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+568,"wb_rst_i", false,-1);
    tracep->declBus(c+553,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+555,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+566,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+590,"wb_we_i", false,-1);
    tracep->declBit(c+591,"wb_re_i", false,-1);
    tracep->declBit(c+570,"stx_pad_o", false,-1);
    tracep->declBit(c+569,"srx_pad_i", false,-1);
    tracep->declBus(c+648,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+335,"rts_pad_o", false,-1);
    tracep->declBit(c+333,"dtr_pad_o", false,-1);
    tracep->declBit(c+334,"int_o", false,-1);
    tracep->declBit(c+336,"enable", false,-1);
    tracep->declBit(c+337,"srx_pad", false,-1);
    tracep->declBus(c+338,"ier", false,-1, 3,0);
    tracep->declBus(c+339,"iir", false,-1, 3,0);
    tracep->declBus(c+340,"fcr", false,-1, 1,0);
    tracep->declBus(c+341,"mcr", false,-1, 4,0);
    tracep->declBus(c+342,"lcr", false,-1, 7,0);
    tracep->declBus(c+343,"msr", false,-1, 7,0);
    tracep->declBus(c+344,"dl", false,-1, 15,0);
    tracep->declBus(c+345,"scratch", false,-1, 7,0);
    tracep->declBit(c+346,"start_dlc", false,-1);
    tracep->declBit(c+347,"lsr_mask_d", false,-1);
    tracep->declBit(c+348,"msi_reset", false,-1);
    tracep->declBus(c+349,"dlc", false,-1, 15,0);
    tracep->declBus(c+350,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+351,"rx_reset", false,-1);
    tracep->declBit(c+352,"tx_reset", false,-1);
    tracep->declBit(c+353,"dlab", false,-1);
    tracep->declBit(c+604,"cts_pad_i", false,-1);
    tracep->declBit(c+600,"dsr_pad_i", false,-1);
    tracep->declBit(c+600,"ri_pad_i", false,-1);
    tracep->declBit(c+600,"dcd_pad_i", false,-1);
    tracep->declBit(c+354,"loopback", false,-1);
    tracep->declBit(c+600,"cts", false,-1);
    tracep->declBit(c+604,"dsr", false,-1);
    tracep->declBit(c+604,"ri", false,-1);
    tracep->declBit(c+604,"dcd", false,-1);
    tracep->declBit(c+355,"cts_c", false,-1);
    tracep->declBit(c+356,"dsr_c", false,-1);
    tracep->declBit(c+357,"ri_c", false,-1);
    tracep->declBit(c+358,"dcd_c", false,-1);
    tracep->declBus(c+359,"lsr", false,-1, 7,0);
    tracep->declBit(c+360,"lsr0", false,-1);
    tracep->declBit(c+361,"lsr1", false,-1);
    tracep->declBit(c+362,"lsr2", false,-1);
    tracep->declBit(c+363,"lsr3", false,-1);
    tracep->declBit(c+364,"lsr4", false,-1);
    tracep->declBit(c+365,"lsr5", false,-1);
    tracep->declBit(c+366,"lsr6", false,-1);
    tracep->declBit(c+367,"lsr7", false,-1);
    tracep->declBit(c+368,"lsr0r", false,-1);
    tracep->declBit(c+369,"lsr1r", false,-1);
    tracep->declBit(c+370,"lsr2r", false,-1);
    tracep->declBit(c+371,"lsr3r", false,-1);
    tracep->declBit(c+372,"lsr4r", false,-1);
    tracep->declBit(c+373,"lsr5r", false,-1);
    tracep->declBit(c+374,"lsr6r", false,-1);
    tracep->declBit(c+375,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+376,"rls_int", false,-1);
    tracep->declBit(c+377,"rda_int", false,-1);
    tracep->declBit(c+378,"ti_int", false,-1);
    tracep->declBit(c+379,"thre_int", false,-1);
    tracep->declBit(c+380,"ms_int", false,-1);
    tracep->declBit(c+381,"tf_push", false,-1);
    tracep->declBit(c+382,"rf_pop", false,-1);
    tracep->declBus(c+592,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+383,"rf_error_bit", false,-1);
    tracep->declBit(c+361,"rf_overrun", false,-1);
    tracep->declBit(c+384,"rf_push_pulse", false,-1);
    tracep->declBus(c+385,"rf_count", false,-1, 4,0);
    tracep->declBus(c+386,"tf_count", false,-1, 4,0);
    tracep->declBus(c+387,"tstate", false,-1, 2,0);
    tracep->declBus(c+388,"rstate", false,-1, 3,0);
    tracep->declBus(c+389,"counter_t", false,-1, 9,0);
    tracep->declBit(c+390,"thre_set_en", false,-1);
    tracep->declBus(c+391,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+392,"block_value", false,-1, 7,0);
    tracep->declBit(c+393,"serial_out", false,-1);
    tracep->declBit(c+394,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+395,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+396,"lsr0_d", false,-1);
    tracep->declBit(c+397,"lsr1_d", false,-1);
    tracep->declBit(c+398,"lsr2_d", false,-1);
    tracep->declBit(c+399,"lsr3_d", false,-1);
    tracep->declBit(c+400,"lsr4_d", false,-1);
    tracep->declBit(c+401,"lsr5_d", false,-1);
    tracep->declBit(c+402,"lsr6_d", false,-1);
    tracep->declBit(c+403,"lsr7_d", false,-1);
    tracep->declBit(c+404,"rls_int_d", false,-1);
    tracep->declBit(c+405,"thre_int_d", false,-1);
    tracep->declBit(c+406,"ms_int_d", false,-1);
    tracep->declBit(c+407,"ti_int_d", false,-1);
    tracep->declBit(c+408,"rda_int_d", false,-1);
    tracep->declBit(c+409,"rls_int_rise", false,-1);
    tracep->declBit(c+410,"thre_int_rise", false,-1);
    tracep->declBit(c+411,"ms_int_rise", false,-1);
    tracep->declBit(c+412,"ti_int_rise", false,-1);
    tracep->declBit(c+413,"rda_int_rise", false,-1);
    tracep->declBit(c+414,"rls_int_pnd", false,-1);
    tracep->declBit(c+415,"rda_int_pnd", false,-1);
    tracep->declBit(c+416,"thre_int_pnd", false,-1);
    tracep->declBit(c+417,"ms_int_pnd", false,-1);
    tracep->declBit(c+418,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+621,"Tp", false,-1, 31,0);
    tracep->declBus(c+621,"width", false,-1, 31,0);
    tracep->declBus(c+617,"init_value", false,-1, 0,0);
    tracep->declBit(c+568,"rst_i", false,-1);
    tracep->declBit(c+567,"clk_i", false,-1);
    tracep->declBit(c+600,"stage1_rst_i", false,-1);
    tracep->declBit(c+604,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+569,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+337,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+419,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+568,"wb_rst_i", false,-1);
    tracep->declBus(c+342,"lcr", false,-1, 7,0);
    tracep->declBit(c+382,"rf_pop", false,-1);
    tracep->declBit(c+394,"srx_pad_i", false,-1);
    tracep->declBit(c+336,"enable", false,-1);
    tracep->declBit(c+351,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+389,"counter_t", false,-1, 9,0);
    tracep->declBus(c+385,"rf_count", false,-1, 4,0);
    tracep->declBus(c+592,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+361,"rf_overrun", false,-1);
    tracep->declBit(c+383,"rf_error_bit", false,-1);
    tracep->declBus(c+388,"rstate", false,-1, 3,0);
    tracep->declBit(c+384,"rf_push_pulse", false,-1);
    tracep->declBus(c+420,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+421,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+422,"rshift", false,-1, 7,0);
    tracep->declBit(c+423,"rparity", false,-1);
    tracep->declBit(c+424,"rparity_error", false,-1);
    tracep->declBit(c+425,"rframing_error", false,-1);
    tracep->declBit(c+426,"rbit_in", false,-1);
    tracep->declBit(c+427,"rparity_xor", false,-1);
    tracep->declBus(c+428,"counter_b", false,-1, 7,0);
    tracep->declBit(c+429,"rf_push_q", false,-1);
    tracep->declBus(c+430,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+431,"rf_push", false,-1);
    tracep->declBit(c+432,"break_error", false,-1);
    tracep->declBit(c+433,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+434,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+435,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+436,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+602,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+646,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+645,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+641,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+643,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+642,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+644,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+640,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+648,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+649,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+655,"sr_push", false,-1, 3,0);
    tracep->declBus(c+437,"toc_value", false,-1, 9,0);
    tracep->declBus(c+438,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+628,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+650,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+624,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+618,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+568,"wb_rst_i", false,-1);
    tracep->declBit(c+384,"push", false,-1);
    tracep->declBit(c+382,"pop", false,-1);
    tracep->declBus(c+430,"data_in", false,-1, 10,0);
    tracep->declBit(c+351,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+592,"data_out", false,-1, 10,0);
    tracep->declBit(c+361,"overrun", false,-1);
    tracep->declBus(c+385,"count", false,-1, 4,0);
    tracep->declBit(c+383,"error_bit", false,-1);
    tracep->declBus(c+593,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+439+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+455,"top", false,-1, 3,0);
    tracep->declBus(c+456,"bottom", false,-1, 3,0);
    tracep->declBus(c+457,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+458,"word0", false,-1, 2,0);
    tracep->declBus(c+459,"word1", false,-1, 2,0);
    tracep->declBus(c+460,"word2", false,-1, 2,0);
    tracep->declBus(c+461,"word3", false,-1, 2,0);
    tracep->declBus(c+462,"word4", false,-1, 2,0);
    tracep->declBus(c+463,"word5", false,-1, 2,0);
    tracep->declBus(c+464,"word6", false,-1, 2,0);
    tracep->declBus(c+465,"word7", false,-1, 2,0);
    tracep->declBus(c+466,"word8", false,-1, 2,0);
    tracep->declBus(c+467,"word9", false,-1, 2,0);
    tracep->declBus(c+468,"word10", false,-1, 2,0);
    tracep->declBus(c+469,"word11", false,-1, 2,0);
    tracep->declBus(c+470,"word12", false,-1, 2,0);
    tracep->declBus(c+471,"word13", false,-1, 2,0);
    tracep->declBus(c+472,"word14", false,-1, 2,0);
    tracep->declBus(c+473,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+624,"addr_width", false,-1, 31,0);
    tracep->declBus(c+625,"data_width", false,-1, 31,0);
    tracep->declBus(c+650,"depth", false,-1, 31,0);
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+384,"we", false,-1);
    tracep->declBus(c+455,"a", false,-1, 3,0);
    tracep->declBus(c+456,"dpra", false,-1, 3,0);
    tracep->declBus(c+474,"di", false,-1, 7,0);
    tracep->declBus(c+593,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+250+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+568,"wb_rst_i", false,-1);
    tracep->declBus(c+342,"lcr", false,-1, 7,0);
    tracep->declBit(c+381,"tf_push", false,-1);
    tracep->declBus(c+555,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+336,"enable", false,-1);
    tracep->declBit(c+352,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+393,"stx_pad_o", false,-1);
    tracep->declBus(c+387,"tstate", false,-1, 2,0);
    tracep->declBus(c+386,"tf_count", false,-1, 4,0);
    tracep->declBus(c+475,"counter", false,-1, 4,0);
    tracep->declBus(c+476,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+477,"shift_out", false,-1, 6,0);
    tracep->declBit(c+478,"stx_o_tmp", false,-1);
    tracep->declBit(c+479,"parity_xor", false,-1);
    tracep->declBit(c+480,"tf_pop", false,-1);
    tracep->declBit(c+481,"bit_out", false,-1);
    tracep->declBus(c+555,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+594,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+482,"tf_overrun", false,-1);
    tracep->declBus(c+606,"s_idle", false,-1, 2,0);
    tracep->declBus(c+599,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+656,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+657,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+658,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+659,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+625,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+650,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+624,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+618,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+568,"wb_rst_i", false,-1);
    tracep->declBit(c+381,"push", false,-1);
    tracep->declBit(c+480,"pop", false,-1);
    tracep->declBus(c+555,"data_in", false,-1, 7,0);
    tracep->declBit(c+352,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+594,"data_out", false,-1, 7,0);
    tracep->declBit(c+482,"overrun", false,-1);
    tracep->declBus(c+386,"count", false,-1, 4,0);
    tracep->declBus(c+483,"top", false,-1, 3,0);
    tracep->declBus(c+484,"bottom", false,-1, 3,0);
    tracep->declBus(c+485,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+624,"addr_width", false,-1, 31,0);
    tracep->declBus(c+625,"data_width", false,-1, 31,0);
    tracep->declBus(c+650,"depth", false,-1, 31,0);
    tracep->declBit(c+567,"clk", false,-1);
    tracep->declBit(c+381,"we", false,-1);
    tracep->declBus(c+483,"a", false,-1, 3,0);
    tracep->declBus(c+484,"dpra", false,-1, 3,0);
    tracep->declBus(c+555,"di", false,-1, 7,0);
    tracep->declBus(c+594,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+266+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(7);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+282,"sck", false,-1);
    tracep->declBit(c+486,"ss", false,-1);
    tracep->declBit(c+514,"mosi", false,-1);
    tracep->declBit(c+604,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+282,"sck", false,-1);
    tracep->declBit(c+487,"ss", false,-1);
    tracep->declBit(c+514,"mosi", false,-1);
    tracep->declBit(c+571,"miso", false,-1);
    tracep->declBit(c+487,"reset", false,-1);
    tracep->declBus(c+502,"state", false,-1, 2,0);
    tracep->declBus(c+503,"counter", false,-1, 7,0);
    tracep->declBus(c+504,"cmd", false,-1, 7,0);
    tracep->declBus(c+505,"addr", false,-1, 23,0);
    tracep->declBus(c+506,"data", false,-1, 31,0);
    tracep->declBit(c+507,"ren", false,-1);
    tracep->declBus(c+595,"rdata", false,-1, 31,0);
    tracep->declBus(c+596,"raddr", false,-1, 31,0);
    tracep->declBus(c+597,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+282,"clock", false,-1);
    tracep->declBit(c+507,"valid", false,-1);
    tracep->declBus(c+504,"cmd", false,-1, 7,0);
    tracep->declBus(c+596,"addr", false,-1, 31,0);
    tracep->declBus(c+595,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+572,"io_clk", false,-1);
    tracep->declBit(c+515,"io_cke", false,-1);
    tracep->declBit(c+516,"io_cs", false,-1);
    tracep->declBit(c+517,"io_ras", false,-1);
    tracep->declBit(c+518,"io_cas", false,-1);
    tracep->declBit(c+519,"io_we", false,-1);
    tracep->declBus(c+520,"io_a", false,-1, 12,0);
    tracep->declBus(c+521,"io_ba", false,-1, 1,0);
    tracep->declBus(c+522,"io_dqm", false,-1, 1,0);
    tracep->declBus(c+573,"io_dq", false,-1, 15,0);
    tracep->declBus(c+488,"word_remain_1", false,-1, 3,0);
    tracep->declBus(c+524,"cmd", false,-1, 3,0);
    tracep->declBus(c+489,"mode", false,-1, 12,0);
    tracep->declBus(c+490,"word_remain", false,-1, 3,0);
    tracep->declBus(c+491,"raddr_s1", false,-1, 23,0);
    tracep->declBus(c+492,"waddr_s1", false,-1, 23,0);
    tracep->declBit(c+493,"di_REG", false,-1);
    tracep->declBus(c+494,"REG", false,-1, 15,0);
    tracep->declBus(c+495,"r", false,-1, 1,0);
    tracep->pushNamePrefix("di_buf ");
    tracep->declBus(c+650,"width", false,-1, 31,0);
    tracep->declBus(c+573,"dio", false,-1, 15,0);
    tracep->declBus(c+496,"dout", false,-1, 15,0);
    tracep->declBit(c+493,"out_en", false,-1);
    tracep->declBus(c+573,"din", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+491,"R0_addr", false,-1, 23,0);
    tracep->declBit(c+604,"R0_en", false,-1);
    tracep->declBit(c+572,"R0_clk", false,-1);
    tracep->declBus(c+496,"R0_data", false,-1, 15,0);
    tracep->declBus(c+492,"W0_addr", false,-1, 23,0);
    tracep->declBit(c+497,"W0_en", false,-1);
    tracep->declBit(c+572,"W0_clk", false,-1);
    tracep->declBus(c+494,"W0_data", false,-1, 15,0);
    tracep->declBus(c+495,"W0_mask", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rowReg_ext ");
    tracep->declBus(c+521,"R0_addr", false,-1, 1,0);
    tracep->declBit(c+604,"R0_en", false,-1);
    tracep->declBit(c+572,"R0_clk", false,-1);
    tracep->declBus(c+598,"R0_data", false,-1, 12,0);
    tracep->declBus(c+521,"W0_addr", false,-1, 1,0);
    tracep->declBit(c+531,"W0_en", false,-1);
    tracep->declBit(c+572,"W0_clk", false,-1);
    tracep->declBus(c+520,"W0_data", false,-1, 12,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+498+i*1,"Memory", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+8,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+12,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+13,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+14,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+15,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+16,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+17,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+18,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+19,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+24,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+25,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+26,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+27,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+28,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT____VdfgTmp_h1913f1ad__0) 
                            | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD)) 
                               | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD))))));
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_addr),32);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_size),3);
    bufp->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT____VdfgTmp_h1913f1ad__0) 
                            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD)))));
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_wdata),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_wmask),4);
    bufp->fullBit(oldp+47,((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD))));
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+49,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                      [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                                      >> 2U))),4);
    bufp->fullCData(oldp+50,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1])),2);
    bufp->fullBit(oldp+51,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+52,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateI)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_reqValid)) 
                            | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateI)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)))));
    bufp->fullIData(oldp+53,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_addr
                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_addr)),32);
    bufp->fullCData(oldp+54,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_size)
                               : 2U)),3);
    bufp->fullBit(oldp+55,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateI)) 
                            | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD)))));
    bufp->fullBit(oldp+56,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+57,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+58,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+59,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+60,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                             [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1]),6);
    bufp->fullCData(oldp+68,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                               << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+94,((((QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_addr
                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_addr))) 
                               << 0xbU) | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_size)
                                                            : 2U))))),47);
    bufp->fullQData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+110,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_addr)) 
                                << 0xbU) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_size)))),47);
    bufp->fullQData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+126,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_wdata)) 
                                << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_wmask)))),36);
    bufp->fullQData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullIData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_addr),32);
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_reqValid));
    bufp->fullIData(oldp+135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__instReturn)
                                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                           >> 3U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__io_ifu_rdata_r)),32);
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__instReturn));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_reqValid));
    bufp->fullBit(oldp+138,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD))) 
                             | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                                & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD))))));
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_size),2);
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_wen));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__isValidLoad));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__isValidStore));
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateI),2);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD),3);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead));
    bufp->fullIData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__io_ifu_rdata_r),32);
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrw));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrs));
    bufp->fullSData(oldp+149,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+150,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrw) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrs))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__R1_data
                                : 0U)),32);
    bufp->fullIData(oldp+151,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrs) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrw))
                                ? ((0xb00U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                               >> 0x14U))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcycle)
                                    : ((0xb80U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                   >> 0x14U))
                                        ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcycle 
                                                   >> 0x20U))
                                        : ((0xf11U 
                                            == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U))
                                            ? 0x79737978U
                                            : ((0xf12U 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                 >> 0x14U))
                                                ? 0x17eb18aU
                                                : 0U))))
                                : 0U)),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_OUT),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__R1_data),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__R2_data),32);
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_jalr));
    bufp->fullCData(oldp+156,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+157,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+158,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__R_TYPE));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_TYPE_ARITH));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__L_TYPE_LOAD));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S_TYPE));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_TYPE));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_TYPE));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__B_TYPE));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__J_TYPE));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_lui));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__R_add));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__l_lw));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__l_lbu));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_add));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S_sw));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S_sb));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_ebreak));
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask),4);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_valid));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_valid));
    bufp->fullIData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PC),32);
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready));
    bufp->fullBit(oldp+181,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ren) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__wen))));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid));
    bufp->fullIData(oldp+185,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_jalr)
                                ? (0xfffffffeU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_OUT)
                                : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PC))),32);
    bufp->fullIData(oldp+186,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_jalr)
                                ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PC)
                                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrs) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrw))
                                    ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrs) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__I_csrrw))
                                        ? ((0xb00U 
                                            == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcycle)
                                            : ((0xb80U 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                 >> 0x14U))
                                                ? (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcycle 
                                                           >> 0x20U))
                                                : (
                                                   (0xf11U 
                                                    == 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                     >> 0x14U))
                                                    ? 0x79737978U
                                                    : 
                                                   ((0xf12U 
                                                     == 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                      >> 0x14U))
                                                     ? 0x17eb18aU
                                                     : 0U))))
                                        : 0U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_wdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_OUT)))),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_wdata),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu__DOT__A),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu__DOT__B),32);
    bufp->fullQData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcycle),64);
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemWEn));
    bufp->fullCData(oldp+194,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+195,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+196,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+197,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+198,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+199,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+200,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+201,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_state));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    bufp->fullIData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__deviation_rdata),32);
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__wen));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ren));
    bufp->fullBit(oldp+207,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__wen)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid))));
    bufp->fullIData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [1U]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [2U]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [3U]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [4U]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [8U]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [9U]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [0xbU]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [0xcU]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [0xdU]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [0xeU]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state),4);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+285,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullSData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready));
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata),32);
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out));
    bufp->fullSData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+313,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+314,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+315,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+316,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+317,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+318,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+319,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+323,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+325,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+326,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+328,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+332,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+333,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+335,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+353,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+354,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+355,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+356,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+357,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+358,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+359,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+362,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+363,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+364,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+383,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+390,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+409,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+410,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+411,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+412,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+413,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+432,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+433,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+434,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+435,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+436,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+438,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+457,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+474,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+485,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+486,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__word_remain_1),4);
    bufp->fullSData(oldp+489,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode),13);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__word_remain),4);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__raddr_s1),24);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__waddr_s1),24);
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__di_REG));
    bufp->fullSData(oldp+494,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__REG),16);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__r),2);
    bufp->fullSData(oldp+496,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mem_ext__DOT___R0_en_d0)
                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__mem_ext__DOT__Memory
                               [vlSelf->ysyxSoCFull__DOT__sdram__DOT__mem_ext__DOT___R0_addr_d0]
                                : 0U)),16);
    bufp->fullBit(oldp+497,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__word_remain_1))));
    bufp->fullSData(oldp+498,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rowReg_ext__DOT__Memory[0]),13);
    bufp->fullSData(oldp+499,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rowReg_ext__DOT__Memory[1]),13);
    bufp->fullSData(oldp+500,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rowReg_ext__DOT__Memory[2]),13);
    bufp->fullSData(oldp+501,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rowReg_ext__DOT__Memory[3]),13);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+507,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state),2);
    bufp->fullBit(oldp+510,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite));
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb),4);
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+516,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+517,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+519,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullBit(oldp+523,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullIData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullIData(oldp+535,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+537,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+545,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+546,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+547,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+548,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0) 
                               << 2U)),32);
    bufp->fullIData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata),32);
    bufp->fullCData(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0) 
                               << 2U)),5);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullIData(oldp+552,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+553,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+567,(vlSelf->clock));
    bufp->fullBit(oldp+568,(vlSelf->reset));
    bufp->fullBit(oldp+569,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+570,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+571,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),16);
    bufp->fullBit(oldp+574,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+575,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+576,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+577,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+578,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+579,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state)) 
                              | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack))));
    bufp->fullIData(oldp+580,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                    << 0x18U) | ((0xff0000U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                     << 8U)) 
                                                 | ((0xff00U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                        >> 8U)) 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                       >> 0x18U))))
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata)),32);
    bufp->fullIData(oldp+581,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+582,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                << 0x23U) | (((QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                   << 1U))))))),39);
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack));
    bufp->fullBit(oldp+586,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0)))));
    bufp->fullBit(oldp+587,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0)))));
    bufp->fullCData(oldp+588,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))))))),4);
    bufp->fullBit(oldp+589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0)))));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+592,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+596,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullSData(oldp+598,(vlSelf->ysyxSoCFull__DOT__sdram__DOT___rowReg_ext_R0_data),13);
    bufp->fullCData(oldp+599,(1U),3);
    bufp->fullBit(oldp+600,(0U));
    bufp->fullCData(oldp+601,(0U),2);
    bufp->fullCData(oldp+602,(0U),4);
    bufp->fullCData(oldp+603,(0U),8);
    bufp->fullBit(oldp+604,(1U));
    bufp->fullIData(oldp+605,(0U),32);
    bufp->fullCData(oldp+606,(0U),3);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PC_plus_4),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWriteData),32);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg_WE));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_reqValid));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_respValid));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cpu_en));
    bufp->fullIData(oldp+613,(0x79737978U),32);
    bufp->fullIData(oldp+614,(0x17eb18aU),32);
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_wen));
    bufp->fullBit(oldp+616,(0U));
    bufp->fullBit(oldp+617,(1U));
    bufp->fullIData(oldp+618,(5U),32);
    bufp->fullIData(oldp+619,(0x20U),32);
    bufp->fullIData(oldp+620,(0U),32);
    bufp->fullIData(oldp+621,(1U),32);
    bufp->fullIData(oldp+622,(2U),32);
    bufp->fullIData(oldp+623,(3U),32);
    bufp->fullIData(oldp+624,(4U),32);
    bufp->fullIData(oldp+625,(8U),32);
    bufp->fullIData(oldp+626,(9U),32);
    bufp->fullIData(oldp+627,(0xaU),32);
    bufp->fullIData(oldp+628,(0xbU),32);
    bufp->fullIData(oldp+629,(0xcU),32);
    bufp->fullIData(oldp+630,(0xdU),32);
    bufp->fullIData(oldp+631,(0xeU),32);
    bufp->fullIData(oldp+632,(0xfU),32);
    bufp->fullCData(oldp+633,(1U),2);
    bufp->fullCData(oldp+634,(2U),2);
    bufp->fullIData(oldp+635,(0x64U),32);
    bufp->fullIData(oldp+636,(0x18U),32);
    bufp->fullIData(oldp+637,(0x2000U),32);
    bufp->fullIData(oldp+638,(0x2710U),32);
    bufp->fullIData(oldp+639,(0x30cU),32);
    bufp->fullCData(oldp+640,(7U),4);
    bufp->fullCData(oldp+641,(3U),4);
    bufp->fullCData(oldp+642,(5U),4);
    bufp->fullCData(oldp+643,(4U),4);
    bufp->fullCData(oldp+644,(6U),4);
    bufp->fullCData(oldp+645,(2U),4);
    bufp->fullCData(oldp+646,(1U),4);
    bufp->fullSData(oldp+647,(0x21U),13);
    bufp->fullCData(oldp+648,(8U),4);
    bufp->fullCData(oldp+649,(9U),4);
    bufp->fullIData(oldp+650,(0x10U),32);
    bufp->fullIData(oldp+651,(6U),32);
    bufp->fullIData(oldp+652,(0x11U),32);
    bufp->fullIData(oldp+653,(0x30000000U),32);
    bufp->fullIData(oldp+654,(0x3fffffffU),32);
    bufp->fullCData(oldp+655,(0xaU),4);
    bufp->fullCData(oldp+656,(2U),3);
    bufp->fullCData(oldp+657,(3U),3);
    bufp->fullCData(oldp+658,(4U),3);
    bufp->fullCData(oldp+659,(5U),3);
}
