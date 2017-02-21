package = "null"
version = "scm-0"

source = {
  url = "https://github.com/moteus/lua-null/archive/master.zip",
  dir = "lua-null-master",
}

description = {
  summary    = "Provide special value null for Lua",
  homepage   = "https://github.com/moteus/lua-null",
  license    = "MIT/X11",
  maintainer = "Alexey Melnichuk",
  detailed   = [[]],
}

dependencies = {
  "lua >= 5.1, < 5.4",
}

build = {
  copy_directories = {},

  type = "builtin",

  modules = {
    null = "src/lnull.c",
  }
}






















