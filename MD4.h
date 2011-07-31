#ifndef MD4_H
#define MD4_H

#include <stdint.h>
#include <stdbool.h>

typedef char uchar;

uchar *auth_md4Sum( uchar *dst, const uchar *src, const int srclen );

#endif
