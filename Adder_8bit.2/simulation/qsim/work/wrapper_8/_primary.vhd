library verilog;
use verilog.vl_types.all;
entity wrapper_8 is
    port(
        clk_i           : in     vl_logic;
        M               : in     vl_logic_vector(7 downto 0);
        N               : in     vl_logic_vector(7 downto 0);
        \OUT\           : out    vl_logic_vector(8 downto 0)
    );
end wrapper_8;
