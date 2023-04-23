## LyricDecoder
slightly modified version of https://github.com/SuJiKiNen/LyricDecoder for easier build with emscripten.

build the project with simply 
```bash
emcc LyricDecoder.c lrcdec.c QQMusicDES/des.c -s USE_ZLIB=1 -o lrcdec.cjs
```

ensure that you have emscripten installed in your machine in advance.

### Licence
https://github.com/SuJiKiNen/LyricDecoder/blob/master/LICENSE