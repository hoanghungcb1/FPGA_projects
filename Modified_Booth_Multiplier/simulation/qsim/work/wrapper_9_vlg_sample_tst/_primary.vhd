library verilog;
use verilog.vl_types.all;
entity wrapper_9_vlg_sample_tst is
    port(
        M               : in     vl_logic_vector(7 downto 0);
        N               : in     vl_logic_vector(7 downto 0);
        sampler_tx      : out    vl_logic
    );
end wrapper_9_vlg_sample_tst;
