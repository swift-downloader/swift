#ifndef MD4_H
#define MD4_H

typedef wchar_t uchar;

uchar *auth_md4Sum( uchar *dst, const uchar *src, const int srclen );

#endif MD4_H
