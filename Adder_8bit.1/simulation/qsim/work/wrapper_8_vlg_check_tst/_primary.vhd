library verilog;
use verilog.vl_types.all;
entity wrapper_8_vlg_check_tst is
    port(
        \OUT\           : in     vl_logic_vector(8 downto 0);
        sampler_rx      : in     vl_logic
    );
end wrapper_8_vlg_check_tst;
