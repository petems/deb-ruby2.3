/* $Id: md5ossl.h 55918 2016-08-16 03:13:24Z nagachika $ */

#ifndef MD5OSSL_H_INCLUDED
#define MD5OSSL_H_INCLUDED

#include <stddef.h>
#include <openssl/md5.h>

#define MD5_BLOCK_LENGTH	MD5_CBLOCK

static DEFINE_FINISH_FUNC_FROM_FINAL(MD5)
#undef MD5_Finish
#define MD5_Finish rb_digest_MD5_finish

#endif
