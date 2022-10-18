-- Register with nvim-treesitter so it knows to use the queries for indent and folding
local exists, parsers = pcall(require, 'nvim-treesitter.parsers')
if exists then
  local parser_config = parsers.get_parser_configs()
  parser_config.tcl = { filetype = "tcl" }
end
