module encoder(variable,d)
  input variable;
  output [3:0]d;
  assign d=variable;
endmodule

module decoder()
  output [3:0]d1;
endmodule

module toppp()
  input data;
  encoder(data,d);
  decoder();
endmodule