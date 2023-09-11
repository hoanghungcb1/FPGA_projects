module binh_phuong(num_i, num_2_o);
  input [15:0] num_i; //num1 is multiplicand and num2 is multiplier
  reg [31:0] mid [15:0]; //shifted values
  reg [31:0] midB[3:0]; //addition of shifted values
  output [31:0] num_2_o; //32-bit results
  /* verilator lint_off UNUSED */
  wire [31:0] num1_ext;
  wire [31:0] num2;
  /* verilator lint_on UNUSED */

/* verilator lint_off WIDTH */
  assign num1_ext = num_i;
  assign num2 = num_i;
  assign num_2_o = midB[0] + midB[1] + midB[2] + midB[3];
  always@* //midB wires are added for readability
    begin
      midB[0] = mid[0] + mid[4] + mid[8] + mid[15];
      midB[1] = mid[1] + mid[5] + mid[9] + mid[14];
      midB[2] = mid[2] + mid[6] + mid[10] + mid[13];
      midB[3] = mid[3] + mid[7] + mid[11] + mid[12];
    end
  always@* //shift and enable control
    begin
      mid[0]  =  num1_ext & {32{num2[0]}};
      mid[1]  = (num1_ext <<  1) & {32{num2[1]}};
      mid[2]  = (num1_ext <<  2) & {32{num2[2]}};
      mid[3]  = (num1_ext <<  3) & {32{num2[3]}};
      mid[4]  = (num1_ext <<  4) & {32{num2[4]}};
      mid[5]  = (num1_ext <<  5) & {32{num2[5]}};
      mid[6]  = (num1_ext <<  6) & {32{num2[6]}};
      mid[7]  = (num1_ext <<  7) & {32{num2[7]}};
      mid[8]  = (num1_ext <<  8) & {32{num2[8]}};
      mid[9]  = (num1_ext <<  9) & {32{num2[9]}};
      mid[10] = (num1_ext << 10) & {32{num2[10]}};
      mid[11] = (num1_ext << 11) & {32{num2[11]}};
      mid[12] = (num1_ext << 12) & {32{num2[12]}};
      mid[13] = (num1_ext << 13) & {32{num2[13]}};
      mid[14] = (num1_ext << 14) & {32{num2[14]}};
      mid[15] = (num1_ext << 15) & {32{num2[15]}};
    end
	/* verilator lint_on WIDTH */
endmodule
