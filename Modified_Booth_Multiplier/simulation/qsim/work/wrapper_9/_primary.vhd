library verilog;
use verilog.vl_types.all;
entity wrapper_9 is
    port(
        M               : in     vl_logic_vector(7 downto 0);
        N               : in     vl_logic_vector(7 downto 0);
        P               : out    vl_logic_vector(15 downto 0)
    );
end wrapper_9;
