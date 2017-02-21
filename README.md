# lua-null
Provide special value `null` for Lua

The may purpose is provide way to use same `NULL` value to
separate modules. E.g. this value already uses cjson, ODBC and nginx.
So if you want to write function that can produce value that can be 
encoded e.g. with cjson library without any changes then you can use
this library.

### Usage
```Lua
local null = require "null".null

-- cjson support this value
str = cjson.encode{key = null}

-- ODBC library also support this
stm = cnn:prepare(sql)
stm:bind(1, null)
```