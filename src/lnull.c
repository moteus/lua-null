#include "lua.h"

static int push_null(lua_State *L){
  lua_pushlightuserdata(L, NULL);
  return 1;
}

int luaopen_null(lua_State *L){
  lua_newtable(L);
  push_null(L); lua_setfield(L, -2, "null");
  return 1;
}