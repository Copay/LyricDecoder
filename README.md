## LyricDecoder
slightly modified version of https://github.com/SuJiKiNen/LyricDecoder for easier build with emscripten.

build the project with simply 
```bash
emcc LyricDecoder.c lrcdec.c QQMusicDES/des.c -s USE_ZLIB=1 -o lrcdec.cjs
```

ensure that you have emscripten installed in your machine in advance.

example build command with ccall and without async or wasm (fuck vercel for ignore my wasm files.)
```bash
emcc LyricDecoder.c lrcdec.c QQMusicDES/des.c -sUSE_ZLIB=1 -sWASM=0 -o lrcdec.cjs -sEXPORTED_FUNCTIONS=_qrcd -sEXPORTED_RUNTIME_METHODS=ccall -sBINARYEN_ASYNC_COMPILATION=0
```

### Licence
https://github.com/SuJiKiNen/LyricDecoder/blob/master/LICENSE