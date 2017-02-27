#include "lua.h"

#define _LNULL_NAME      "null"
#define _LNULL_VERSION   "0.1.0-dev"
#define _LNULL_COPYRIGHT "Copyright (C) 2017 Alexey Melnichuk"
#define _LNULL_LICENSE   "MIT"

/*export*/
#ifdef _WIN32
#  define LNULL_EXPORT_API __declspec(dllexport)
#else
#  define LNULL_EXPORT_API LUALIB_API
#endif

static int push_null(lua_State *L){
  lua_pushlightuserdata(L, NULL);
  return 1;
}

LNULL_EXPORT_API
int luaopen_null(lua_State *L){
  lua_newtable(L);

  push_null(L); lua_setfield(L, -2, "null");

  lua_pushliteral(L, _LNULL_NAME);      lua_setfield(L, -2, "_NAME");
  lua_pushliteral(L, _LNULL_VERSION);   lua_setfield(L, -2, "_LVERSION");
  lua_pushliteral(L, _LNULL_COPYRIGHT); lua_setfield(L, -2, "_LCOPYRIGHT");
  lua_pushliteral(L, _LNULL_LICENSE);   lua_setfield(L, -2, "_LLICENSE");

  return 1;
}