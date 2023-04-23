#include "emscripten.h"
#include "LyricDecoder.h"

EMSCRIPTEN_KEEPALIVE
char *qrcd(char *src, int src_len){
    return qrcdecode(src, src_len);
}
