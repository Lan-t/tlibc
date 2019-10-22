/*
 * $ gcc -E -dD _use_header.h >use.h
 *
 * and edit...
 */

#pragma once

# 1 "src/includes/_use_header.h"
# 1 "<組み込み>"
#define __GNUC__ 9
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __VERSION__ "9.2.1 20190827 (Red Hat 9.2.1-1)"
#define __GNUC_RH_RELEASE__ 1
#define __ATOMIC_RELAXED 0
#define __ATOMIC_SEQ_CST 5
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __FINITE_MATH_ONLY__ 0
#define _LP64 1
#define __LP64__ 1
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 8
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_LONG_DOUBLE__ 16
#define __SIZEOF_SIZE_T__ 8
#define __CHAR_BIT__ 8
#define __BIGGEST_ALIGNMENT__ 16
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_PDP_ENDIAN__ 3412
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define __PTRDIFF_TYPE__ long int
#define __WCHAR_TYPE__ int
#define __WINT_TYPE__ unsigned int
#define __INTMAX_TYPE__ long int
#define __UINTMAX_TYPE__ long unsigned int
#define __CHAR16_TYPE__ short unsigned int
#define __CHAR32_TYPE__ unsigned int
#define __SIG_ATOMIC_TYPE__ int
#define __INT8_TYPE__ signed char
#define __INT16_TYPE__ short int
#define __INT32_TYPE__ int
#define __INT64_TYPE__ long int
#define __UINT8_TYPE__ unsigned char
#define __UINT16_TYPE__ short unsigned int
#define __UINT32_TYPE__ unsigned int
#define __UINT64_TYPE__ long unsigned int
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST16_TYPE__ short int
#define __INT_LEAST32_TYPE__ int
#define __INT_LEAST64_TYPE__ long int
#define __UINT_LEAST8_TYPE__ unsigned char
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __INT_FAST8_TYPE__ signed char
#define __INT_FAST16_TYPE__ long int
#define __INT_FAST32_TYPE__ long int
#define __INT_FAST64_TYPE__ long int
#define __UINT_FAST8_TYPE__ unsigned char
#define __UINT_FAST16_TYPE__ long unsigned int
#define __UINT_FAST32_TYPE__ long unsigned int
#define __UINT_FAST64_TYPE__ long unsigned int
#define __INTPTR_TYPE__ long int
#define __UINTPTR_TYPE__ long unsigned int
#define __has_include(STR) __has_include__(STR)
#define __has_include_next(STR) __has_include_next__(STR)
#define __GXX_ABI_VERSION 1013
#define __SCHAR_MAX__ 0x7f
#define __SHRT_MAX__ 0x7fff
#define __INT_MAX__ 0x7fffffff
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __WCHAR_MAX__ 0x7fffffff
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define __WINT_MAX__ 0xffffffffU
#define __WINT_MIN__ 0U
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __SCHAR_WIDTH__ 8
#define __SHRT_WIDTH__ 16
#define __INT_WIDTH__ 32
#define __LONG_WIDTH__ 64
#define __LONG_LONG_WIDTH__ 64
#define __WCHAR_WIDTH__ 32
#define __WINT_WIDTH__ 32
#define __PTRDIFF_WIDTH__ 64
#define __SIZE_WIDTH__ 64
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __INTMAX_C(c) c ## L
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __UINTMAX_C(c) c ## UL
#define __INTMAX_WIDTH__ 64
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT8_MAX__ 0x7f
#define __INT16_MAX__ 0x7fff
#define __INT32_MAX__ 0x7fffffff
#define __INT64_MAX__ 0x7fffffffffffffffL
#define __UINT8_MAX__ 0xff
#define __UINT16_MAX__ 0xffff
#define __UINT32_MAX__ 0xffffffffU
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define __INT_LEAST8_MAX__ 0x7f
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT16_C(c) c
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __INT32_C(c) c
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __INT64_C(c) c ## L
#define __INT_LEAST64_WIDTH__ 64
#define __UINT_LEAST8_MAX__ 0xff
#define __UINT8_C(c) c
#define __UINT_LEAST16_MAX__ 0xffff
#define __UINT16_C(c) c
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __UINT32_C(c) c ## U
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define __UINT64_C(c) c ## UL
#define __INT_FAST8_MAX__ 0x7f
#define __INT_FAST8_WIDTH__ 8
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __INT_FAST16_WIDTH__ 64
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define __INT_FAST32_WIDTH__ 64
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define __INT_FAST64_WIDTH__ 64
#define __UINT_FAST8_MAX__ 0xff
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define __INTPTR_WIDTH__ 64
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __GCC_IEC_559 2
#define __GCC_IEC_559_COMPLEX 2
#define __FLT_EVAL_METHOD__ 0
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __DEC_EVAL_METHOD__ 2
#define __FLT_RADIX__ 2
#define __FLT_MANT_DIG__ 24
#define __FLT_DIG__ 6
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX_10_EXP__ 38
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __DBL_MANT_DIG__ 53
#define __DBL_DIG__ 15
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX_10_EXP__ 308
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 64
#define __LDBL_DIG__ 18
#define __LDBL_MIN_EXP__ (-16381)
#define __LDBL_MIN_10_EXP__ (-4931)
#define __LDBL_MAX_EXP__ 16384
#define __LDBL_MAX_10_EXP__ 4932
#define __DECIMAL_DIG__ 21
#define __LDBL_DECIMAL_DIG__ 21
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT32_MANT_DIG__ 24
#define __FLT32_DIG__ 6
#define __FLT32_MIN_EXP__ (-125)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32_MAX_EXP__ 128
#define __FLT32_MAX_10_EXP__ 38
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __FLT32_HAS_DENORM__ 1
#define __FLT32_HAS_INFINITY__ 1
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64_DIG__ 15
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define __FLT64_MAX_EXP__ 1024
#define __FLT64_MAX_10_EXP__ 308
#define __FLT64_DECIMAL_DIG__ 17
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __FLT64_HAS_DENORM__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __FLT128_MANT_DIG__ 113
#define __FLT128_DIG__ 33
#define __FLT128_MIN_EXP__ (-16381)
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT128_MAX_EXP__ 16384
#define __FLT128_MAX_10_EXP__ 4932
#define __FLT128_DECIMAL_DIG__ 36
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define __FLT128_HAS_DENORM__ 1
#define __FLT128_HAS_INFINITY__ 1
#define __FLT128_HAS_QUIET_NAN__ 1
#define __FLT32X_MANT_DIG__ 53
#define __FLT32X_DIG__ 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32X_MIN_10_EXP__ (-307)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32X_MAX_10_EXP__ 308
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __FLT32X_HAS_DENORM__ 1
#define __FLT32X_HAS_INFINITY__ 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __FLT64X_MANT_DIG__ 64
#define __FLT64X_DIG__ 18
#define __FLT64X_MIN_EXP__ (-16381)
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __FLT64X_MAX_EXP__ 16384
#define __FLT64X_MAX_10_EXP__ 4932
#define __FLT64X_DECIMAL_DIG__ 21
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __FLT64X_HAS_DENORM__ 1
#define __FLT64X_HAS_INFINITY__ 1
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __DEC32_MANT_DIG__ 7
#define __DEC32_MIN_EXP__ (-94)
#define __DEC32_MAX_EXP__ 97
#define __DEC32_MIN__ 1E-95DF
#define __DEC32_MAX__ 9.999999E96DF
#define __DEC32_EPSILON__ 1E-6DF
#define __DEC32_SUBNORMAL_MIN__ 0.000001E-95DF
#define __DEC64_MANT_DIG__ 16
#define __DEC64_MIN_EXP__ (-382)
#define __DEC64_MAX_EXP__ 385
#define __DEC64_MIN__ 1E-383DD
#define __DEC64_MAX__ 9.999999999999999E384DD
#define __DEC64_EPSILON__ 1E-15DD
#define __DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD
#define __DEC128_MANT_DIG__ 34
#define __DEC128_MIN_EXP__ (-6142)
#define __DEC128_MAX_EXP__ 6145
#define __DEC128_MIN__ 1E-6143DL
#define __DEC128_MAX__ 9.999999999999999999999999999999999E6144DL
#define __DEC128_EPSILON__ 1E-33DL
#define __DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL
#define __REGISTER_PREFIX__ 
#define __USER_LABEL_PREFIX__ 
#define __GNUC_STDC_INLINE__ 1
#define __NO_INLINE__ 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZEOF_INT128__ 16
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZEOF_PTRDIFF_T__ 8
#define __amd64 1
#define __amd64__ 1
#define __x86_64 1
#define __x86_64__ 1
#define __SIZEOF_FLOAT80__ 16
#define __SIZEOF_FLOAT128__ 16
#define __ATOMIC_HLE_ACQUIRE 65536
#define __ATOMIC_HLE_RELEASE 131072
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __k8 1
#define __k8__ 1
#define __code_model_small__ 1
#define __MMX__ 1
#define __SSE__ 1
#define __SSE2__ 1
#define __FXSR__ 1
#define __SSE_MATH__ 1
#define __SSE2_MATH__ 1
#define __SEG_FS 1
#define __SEG_GS 1
#define __gnu_linux__ 1
#define __linux 1
#define __linux__ 1
#define linux 1
#define __unix 1
#define __unix__ 1
#define unix 1
#define __ELF__ 1
#define __DECIMAL_BID_FORMAT__ 1
# 1 "<コマンドライン>"
# 31 "<コマンドライン>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 19 "/usr/include/stdc-predef.h" 3 4
#define _STDC_PREDEF_H 1
# 38 "/usr/include/stdc-predef.h" 3 4
#define __STDC_IEC_559__ 1







#define __STDC_IEC_559_COMPLEX__ 1
# 58 "/usr/include/stdc-predef.h" 3 4
#define __STDC_ISO_10646__ 201706L
# 32 "<コマンドライン>" 2
# 1 "src/includes/_use_header.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 24 "/usr/include/stdio.h" 3 4
#define _STDIO_H 1

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 31 "/usr/include/bits/libc-header-start.h" 3 4
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION

# 1 "/usr/include/features.h" 1 3 4
# 19 "/usr/include/features.h" 3 4
#define _FEATURES_H 1
# 119 "/usr/include/features.h" 3 4
#undef __USE_ISOC11
#undef __USE_ISOC99
#undef __USE_ISOC95
#undef __USE_ISOCXX11
#undef __USE_POSIX
#undef __USE_POSIX2
#undef __USE_POSIX199309
#undef __USE_POSIX199506
#undef __USE_XOPEN
#undef __USE_XOPEN_EXTENDED
#undef __USE_UNIX98
#undef __USE_XOPEN2K
#undef __USE_XOPEN2KXSI
#undef __USE_XOPEN2K8
#undef __USE_XOPEN2K8XSI
#undef __USE_LARGEFILE
#undef __USE_LARGEFILE64
#undef __USE_FILE_OFFSET64
#undef __USE_MISC
#undef __USE_ATFILE
#undef __USE_GNU
#undef __USE_FORTIFY_LEVEL
#undef __KERNEL_STRICT_NAMES
#undef __GLIBC_USE_DEPRECATED_GETS
#undef __GLIBC_USE_DEPRECATED_SCANF




#define __KERNEL_STRICT_NAMES 
# 159 "/usr/include/features.h" 3 4
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
# 173 "/usr/include/features.h" 3 4
#define __glibc_clang_prereq(maj,min) 0



#define __GLIBC_USE(F) __GLIBC_USE_ ## F
# 221 "/usr/include/features.h" 3 4
#undef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE 1





#define __USE_ISOC11 1





#define __USE_ISOC99 1





#define __USE_ISOC95 1
# 261 "/usr/include/features.h" 3 4
#define __USE_POSIX_IMPLICITLY 1

#undef _POSIX_SOURCE
#define _POSIX_SOURCE 1
#undef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
# 301 "/usr/include/features.h" 3 4
#define __USE_POSIX 1



#define __USE_POSIX2 1



#define __USE_POSIX199309 1



#define __USE_POSIX199506 1



#define __USE_XOPEN2K 1
#undef __USE_ISOC95
#define __USE_ISOC95 1
#undef __USE_ISOC99
#define __USE_ISOC99 1



#define __USE_XOPEN2K8 1
#undef _ATFILE_SOURCE
#define _ATFILE_SOURCE 1
# 369 "/usr/include/features.h" 3 4
#define __USE_MISC 1



#define __USE_ATFILE 1
# 392 "/usr/include/features.h" 3 4
#define __USE_FORTIFY_LEVEL 0







#define __GLIBC_USE_DEPRECATED_GETS 0
# 423 "/usr/include/features.h" 3 4
#define __GLIBC_USE_DEPRECATED_SCANF 0
# 436 "/usr/include/features.h" 3 4
#undef __GNU_LIBRARY__
#define __GNU_LIBRARY__ 6



#define __GLIBC__ 2
#define __GLIBC_MINOR__ 29

#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))





# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 19 "/usr/include/sys/cdefs.h" 3 4
#define _SYS_CDEFS_H 1
# 34 "/usr/include/sys/cdefs.h" 3 4
#undef __P
#undef __PMT






#define __LEAF , __leaf__
#define __LEAF_ATTR __attribute__ ((__leaf__))
# 55 "/usr/include/sys/cdefs.h" 3 4
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define __THROWNL __attribute__ ((__nothrow__))
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
# 94 "/usr/include/sys/cdefs.h" 3 4
#define __glibc_clang_has_extension(ext) 0




#define __P(args) args
#define __PMT(args) args




#define __CONCAT(x,y) x ## y
#define __STRING(x) #x


#define __ptr_t void *







#define __BEGIN_DECLS 
#define __END_DECLS 




#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define __bos0(ptr) __builtin_object_size (ptr, 0)


#define __warndecl(name,msg) extern void name (void) __attribute__((__warning__ (msg)))

#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
# 143 "/usr/include/sys/cdefs.h" 3 4
#define __flexarr []
#define __glibc_c99_flexarr_available 1
# 174 "/usr/include/sys/cdefs.h" 3 4
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))






#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW

#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL


#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
# 208 "/usr/include/sys/cdefs.h" 3 4
#define __attribute_malloc__ __attribute__ ((__malloc__))







#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
# 226 "/usr/include/sys/cdefs.h" 3 4
#define __attribute_pure__ __attribute__ ((__pure__))






#define __attribute_const__ __attribute__ ((__const__))
# 242 "/usr/include/sys/cdefs.h" 3 4
#define __attribute_used__ __attribute__ ((__used__))
#define __attribute_noinline__ __attribute__ ((__noinline__))







#define __attribute_deprecated__ __attribute__ ((__deprecated__))
# 261 "/usr/include/sys/cdefs.h" 3 4
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
# 274 "/usr/include/sys/cdefs.h" 3 4
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
# 284 "/usr/include/sys/cdefs.h" 3 4
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
# 293 "/usr/include/sys/cdefs.h" 3 4
#define __nonnull(params) __attribute__ ((__nonnull__ params))







#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
# 310 "/usr/include/sys/cdefs.h" 3 4
#define __wur 







#undef __always_inline
#define __always_inline __inline __attribute__ ((__always_inline__))
# 328 "/usr/include/sys/cdefs.h" 3 4
#define __attribute_artificial__ __attribute__ ((__artificial__))
# 346 "/usr/include/sys/cdefs.h" 3 4
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
# 356 "/usr/include/sys/cdefs.h" 3 4
#define __fortify_function __extern_always_inline __attribute_artificial__





#define __va_arg_pack() __builtin_va_arg_pack ()
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
# 387 "/usr/include/sys/cdefs.h" 3 4
#define __restrict_arr __restrict
# 402 "/usr/include/sys/cdefs.h" 3 4
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)






#define __glibc_has_attribute(attr) __has_attribute (attr)







#define __glibc_has_include __has_include
# 437 "/usr/include/sys/cdefs.h" 3 4
#define __attribute_nonstring__ __attribute__ ((__nonstring__))





#undef __attribute_copy__



#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
# 460 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4



#define __WORDSIZE 64







#define __WORDSIZE_TIME64_COMPAT32 1

#define __SYSCALL_WORDSIZE 64
# 461 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 462 "/usr/include/sys/cdefs.h" 2 3 4
# 483 "/usr/include/sys/cdefs.h" 3 4
#define __LDBL_REDIR1(name,proto,alias) name proto
#define __LDBL_REDIR(name,proto) name proto
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __LDBL_REDIR_DECL(name) 

#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
# 501 "/usr/include/sys/cdefs.h" 3 4
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
# 520 "/usr/include/sys/cdefs.h" 3 4
#define __HAVE_GENERIC_SELECTION 1
# 451 "/usr/include/features.h" 2 3 4
# 474 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs-64.h" 3 4
#define __stub___compat_bdflush 
#define __stub_chflags 
#define __stub_fattach 
#define __stub_fchflags 
#define __stub_fdetach 
#define __stub_getmsg 
#define __stub_gtty 
#define __stub_lchmod 
#define __stub_putmsg 
#define __stub_revoke 
#define __stub_setlogin 
#define __stub_sigreturn 
#define __stub_sstk 
#define __stub_stty 
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 475 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/bits/libc-header-start.h" 2 3 4



#undef __GLIBC_USE_LIB_EXT2




#define __GLIBC_USE_LIB_EXT2 0




#undef __GLIBC_USE_IEC_60559_BFP_EXT



#define __GLIBC_USE_IEC_60559_BFP_EXT 0




#undef __GLIBC_USE_IEC_60559_FUNCS_EXT



#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0




#undef __GLIBC_USE_IEC_60559_TYPES_EXT



#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
# 28 "/usr/include/stdio.h" 2 3 4



#define __need_size_t 
#define __need_NULL 
# 1 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 1 3 4
# 181 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 






#define __size_t 






# 209 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 231 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef __need_size_t
# 390 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL
# 34 "/usr/include/stdio.h" 2 3 4

#define __need___va_list 
# 1 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stdarg.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stdarg.h" 3 4
#undef __need___va_list




#define __GNUC_VA_LIST 
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 24 "/usr/include/bits/types.h" 3 4
#define _BITS_TYPES_H 1


# 1 "/usr/include/bits/wordsize.h" 1 3 4



#define __WORDSIZE 64







#define __WORDSIZE_TIME64_COMPAT32 1

#define __SYSCALL_WORDSIZE 64
# 28 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 24 "/usr/include/bits/timesize.h" 3 4
#define __TIMESIZE __WORDSIZE
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 109 "/usr/include/bits/types.h" 3 4
#define __S16_TYPE short int
#define __U16_TYPE unsigned short int
#define __S32_TYPE int
#define __U32_TYPE unsigned int
#define __SLONGWORD_TYPE long int
#define __ULONGWORD_TYPE unsigned long int
# 128 "/usr/include/bits/types.h" 3 4
#define __SQUAD_TYPE long int
#define __UQUAD_TYPE unsigned long int
#define __SWORD_TYPE long int
#define __UWORD_TYPE unsigned long int
#define __SLONG32_TYPE int
#define __ULONG32_TYPE unsigned int
#define __S64_TYPE long int
#define __U64_TYPE unsigned long int

#define __STD_TYPE typedef



# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 24 "/usr/include/bits/typesizes.h" 3 4
#define _BITS_TYPESIZES_H 1
# 34 "/usr/include/bits/typesizes.h" 3 4
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE


#define __DEV_T_TYPE __UQUAD_TYPE
#define __UID_T_TYPE __U32_TYPE
#define __GID_T_TYPE __U32_TYPE
#define __INO_T_TYPE __SYSCALL_ULONG_TYPE
#define __INO64_T_TYPE __UQUAD_TYPE
#define __MODE_T_TYPE __U32_TYPE

#define __NLINK_T_TYPE __SYSCALL_ULONG_TYPE
#define __FSWORD_T_TYPE __SYSCALL_SLONG_TYPE




#define __OFF_T_TYPE __SYSCALL_SLONG_TYPE
#define __OFF64_T_TYPE __SQUAD_TYPE
#define __PID_T_TYPE __S32_TYPE
#define __RLIM_T_TYPE __SYSCALL_ULONG_TYPE
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define __BLKCNT_T_TYPE __SYSCALL_SLONG_TYPE
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __FSBLKCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define __FSFILCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __ID_T_TYPE __U32_TYPE
#define __CLOCK_T_TYPE __SYSCALL_SLONG_TYPE
#define __TIME_T_TYPE __SYSCALL_SLONG_TYPE
#define __USECONDS_T_TYPE __U32_TYPE
#define __SUSECONDS_T_TYPE __SYSCALL_SLONG_TYPE
#define __DADDR_T_TYPE __S32_TYPE
#define __KEY_T_TYPE __S32_TYPE
#define __CLOCKID_T_TYPE __S32_TYPE
#define __TIMER_T_TYPE void *
#define __BLKSIZE_T_TYPE __SYSCALL_SLONG_TYPE
#define __FSID_T_TYPE struct { int __val[2]; }
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __CPU_MASK_TYPE __SYSCALL_ULONG_TYPE





#define __OFF_T_MATCHES_OFF64_T 1


#define __INO_T_MATCHES_INO64_T 1


#define __RLIM_T_MATCHES_RLIM64_T 1





#define __FD_SETSIZE 1024
# 142 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/time64.h" 1 3 4
# 24 "/usr/include/bits/time64.h" 3 4
#define _BITS_TIME64_H 1





#define __TIME64_T_TYPE __TIME_T_TYPE
# 143 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;


#define __time64_t __time_t




#undef __STD_TYPE
# 39 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos_t.h" 1 3 4

#define _____fpos_t_defined 1


# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4

#define ____mbstate_t_defined 1
# 13 "/usr/include/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos64_t.h" 1 3 4

#define _____fpos64_t_defined 1







typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__FILE.h" 1 3 4

#define ____FILE_defined 1

struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/FILE.h" 1 3 4

#define __FILE_defined 1

struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/struct_FILE.h" 1 3 4
# 19 "/usr/include/bits/types/struct_FILE.h" 3 4
#define __struct_FILE_defined 1
# 35 "/usr/include/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};


#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)



#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))




#define _IO_EOF_SEEN 0x0010
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)

#define _IO_ERR_SEEN 0x0020
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)

#define _IO_USER_LOCK 0x8000
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
#define _VA_LIST_DEFINED 
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;



#define __off_t_defined 
# 77 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;
#define __ssize_t_defined 





typedef __fpos_t fpos_t;
# 93 "/usr/include/stdio.h" 3 4
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2



#define BUFSIZ 8192




#define EOF (-1)




#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
# 120 "/usr/include/stdio.h" 3 4
#define P_tmpdir "/tmp"
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 19 "/usr/include/bits/stdio_lim.h" 3 4
#define _BITS_STDIO_LIM_H 1





#define L_tmpnam 20
#define TMP_MAX 238328
#define FILENAME_MAX 4096


#define L_ctermid 9





#undef FOPEN_MAX
#define FOPEN_MAX 16
# 134 "/usr/include/stdio.h" 2 3 4


# 2 "src/includes/_use_header.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 31 "/usr/include/bits/libc-header-start.h" 3 4
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION





#undef __GLIBC_USE_LIB_EXT2




#define __GLIBC_USE_LIB_EXT2 0




#undef __GLIBC_USE_IEC_60559_BFP_EXT



#define __GLIBC_USE_IEC_60559_BFP_EXT 0




#undef __GLIBC_USE_IEC_60559_FUNCS_EXT



#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0




#undef __GLIBC_USE_IEC_60559_TYPES_EXT



#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
# 26 "/usr/include/stdlib.h" 2 3 4


#define __need_size_t 
#define __need_wchar_t 
#define __need_NULL 
# 1 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 1 3 4
# 231 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef __need_size_t
# 260 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
# 287 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 321 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
typedef int wchar_t;
# 340 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL
# 32 "/usr/include/stdlib.h" 2 3 4



#define _STDLIB_H 1



# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 25 "/usr/include/bits/waitflags.h" 3 4
#define WNOHANG 1
#define WUNTRACED 2



#define WSTOPPED 2
#define WEXITED 4
#define WCONTINUED 8
#define WNOWAIT 0x01000000


#define __WNOTHREAD 0x20000000

#define __WALL 0x40000000
#define __WCLONE 0x80000000
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 28 "/usr/include/bits/waitstatus.h" 3 4
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)


#define __WTERMSIG(status) ((status) & 0x7f)


#define __WSTOPSIG(status) __WEXITSTATUS(status)


#define __WIFEXITED(status) (__WTERMSIG(status) == 0)


#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)



#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)




#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)



#define __WCOREDUMP(status) ((status) & __WCOREFLAG)


#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __W_CONTINUED 0xffff
#define __WCOREFLAG 0x80
# 41 "/usr/include/stdlib.h" 2 3 4


#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define WTERMSIG(status) __WTERMSIG (status)
#define WSTOPSIG(status) __WSTOPSIG (status)
#define WIFEXITED(status) __WIFEXITED (status)
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define WIFSTOPPED(status) __WIFSTOPPED (status)

#define WIFCONTINUED(status) __WIFCONTINUED (status)




# 1 "/usr/include/bits/floatn.h" 1 3 4
# 20 "/usr/include/bits/floatn.h" 3 4
#define _BITS_FLOATN_H 
# 32 "/usr/include/bits/floatn.h" 3 4
#define __HAVE_FLOAT128 1







#define __HAVE_DISTINCT_FLOAT128 1







#define __HAVE_FLOAT64X 1





#define __HAVE_FLOAT64X_LONG_DOUBLE 1
# 65 "/usr/include/bits/floatn.h" 3 4
#define __f128(x) x ##f128
# 77 "/usr/include/bits/floatn.h" 3 4
#define __CFLOAT128 _Complex _Float128
# 119 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/floatn-common.h" 1 3 4
# 21 "/usr/include/bits/floatn-common.h" 3 4
#define _BITS_FLOATN_COMMON_H 


# 1 "/usr/include/bits/long-double.h" 1 3 4
# 25 "/usr/include/bits/floatn-common.h" 2 3 4
# 34 "/usr/include/bits/floatn-common.h" 3 4
#define __HAVE_FLOAT16 0
#define __HAVE_FLOAT32 1
#define __HAVE_FLOAT64 1
#define __HAVE_FLOAT32X 1
#define __HAVE_FLOAT128X 0
# 52 "/usr/include/bits/floatn-common.h" 3 4
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __HAVE_DISTINCT_FLOAT32 0
#define __HAVE_DISTINCT_FLOAT64 0
#define __HAVE_DISTINCT_FLOAT32X 0
#define __HAVE_DISTINCT_FLOAT64X 0
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X





#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)






#define __HAVE_FLOATN_NOT_TYPEDEF 1
# 93 "/usr/include/bits/floatn-common.h" 3 4
#define __f32(x) x ##f32
# 105 "/usr/include/bits/floatn-common.h" 3 4
#define __f64(x) x ##f64







#define __f32x(x) x ##f32x
# 125 "/usr/include/bits/floatn-common.h" 3 4
#define __f64x(x) x ##f64x
# 151 "/usr/include/bits/floatn-common.h" 3 4
#define __CFLOAT32 _Complex _Float32
# 163 "/usr/include/bits/floatn-common.h" 3 4
#define __CFLOAT64 _Complex _Float64







#define __CFLOAT32X _Complex _Float32x
# 183 "/usr/include/bits/floatn-common.h" 3 4
#define __CFLOAT64X _Complex _Float64x
# 120 "/usr/include/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;
#define __ldiv_t_defined 1




__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
#define __lldiv_t_defined 1




#define RAND_MAX 2147483647




#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0



#define MB_CUR_MAX (__ctype_get_mb_cur_max ())


# 1 "/usr/include/sys/types.h" 1 3 4
# 23 "/usr/include/sys/types.h" 3 4
#define _SYS_TYPES_H 1









typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
#define __u_char_defined 

typedef __loff_t loff_t;




typedef __ino_t ino_t;



#define __ino_t_defined 







typedef __dev_t dev_t;
#define __dev_t_defined 



typedef __gid_t gid_t;
#define __gid_t_defined 



typedef __mode_t mode_t;
#define __mode_t_defined 



typedef __nlink_t nlink_t;
#define __nlink_t_defined 



typedef __uid_t uid_t;
#define __uid_t_defined 
# 97 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;
#define __pid_t_defined 




typedef __id_t id_t;
#define __id_t_defined 
# 114 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
#define __daddr_t_defined 




typedef __key_t key_t;
#define __key_t_defined 



# 1 "/usr/include/bits/types/clock_t.h" 1 3 4

#define __clock_t_defined 1




typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4

#define __clockid_t_defined 1




typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/time_t.h" 1 3 4

#define __time_t_defined 1




typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4

#define __timer_t_defined 1




typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2 3 4
# 143 "/usr/include/sys/types.h" 3 4
#define __need_size_t 
# 1 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 1 3 4
# 231 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef __need_size_t
# 401 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef __need_NULL
# 145 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/bits/stdint-intn.h" 1 3 4
# 20 "/usr/include/bits/stdint-intn.h" 3 4
#define _BITS_STDINT_INTN_H 1



typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));






#define __BIT_TYPES_DEFINED__ 1




# 1 "/usr/include/endian.h" 1 3 4
# 19 "/usr/include/endian.h" 3 4
#define _ENDIAN_H 1
# 31 "/usr/include/endian.h" 3 4
#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN 4321
#define __PDP_ENDIAN 3412


# 1 "/usr/include/bits/endian.h" 1 3 4






#define __BYTE_ORDER __LITTLE_ENDIAN
# 37 "/usr/include/endian.h" 2 3 4




#define __FLOAT_WORD_ORDER __BYTE_ORDER



#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define BIG_ENDIAN __BIG_ENDIAN
#define PDP_ENDIAN __PDP_ENDIAN
#define BYTE_ORDER __BYTE_ORDER



#define __LONG_LONG_PAIR(HI,LO) LO, HI







# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 24 "/usr/include/bits/byteswap.h" 3 4
#define _BITS_BYTESWAP_H 1





#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))


static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}


#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))



static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}


#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
# 69 "/usr/include/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4
# 24 "/usr/include/bits/uintn-identity.h" 3 4
#define _BITS_UINTN_IDENTITY_H 1







static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 62 "/usr/include/endian.h" 2 3 4


#define htobe16(x) __bswap_16 (x)
#define htole16(x) __uint16_identity (x)
#define be16toh(x) __bswap_16 (x)
#define le16toh(x) __uint16_identity (x)

#define htobe32(x) __bswap_32 (x)
#define htole32(x) __uint32_identity (x)
#define be32toh(x) __bswap_32 (x)
#define le32toh(x) __uint32_identity (x)

#define htobe64(x) __bswap_64 (x)
#define htole64(x) __uint64_identity (x)
#define be64toh(x) __bswap_64 (x)
#define le64toh(x) __uint64_identity (x)
# 177 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 22 "/usr/include/sys/select.h" 3 4
#define _SYS_SELECT_H 1







# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4



#define __WORDSIZE 64







#define __WORDSIZE_TIME64_COMPAT32 1

#define __SYSCALL_WORDSIZE 64
# 23 "/usr/include/bits/select.h" 2 3 4





#define __FD_ZERO_STOS "stosq"




#define __FD_ZERO(fdsp) do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " __FD_ZERO_STOS : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&__FDS_BITS (fdsp)[0]) : "memory"); } while (0)
# 58 "/usr/include/bits/select.h" 3 4
#define __FD_SET(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] |= __FD_MASK (d)))

#define __FD_CLR(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] &= ~__FD_MASK (d)))

#define __FD_ISSET(d,set) ((__FDS_BITS (set)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/types/sigset_t.h" 1 3 4

#define __sigset_t_defined 1

# 1 "/usr/include/bits/types/__sigset_t.h" 1 3 4

#define ____sigset_t_defined 

#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4

#define __timeval_defined 1





struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4


#define _STRUCT_TIMESPEC 1





struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 40 "/usr/include/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;
#define __suseconds_t_defined 




typedef long int __fd_mask;


#undef __NFDBITS

#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define __FD_ELT(d) ((d) / __NFDBITS)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))


typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
#define __FDS_BITS(set) ((set)->__fds_bits)

  } fd_set;


#define FD_SETSIZE __FD_SETSIZE



typedef __fd_mask fd_mask;


#define NFDBITS __NFDBITS




#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)



typedef __blksize_t blksize_t;
#define __blksize_t_defined 





typedef __blkcnt_t blkcnt_t;
#define __blkcnt_t_defined 


typedef __fsblkcnt_t fsblkcnt_t;
#define __fsblkcnt_t_defined 


typedef __fsfilcnt_t fsfilcnt_t;
#define __fsfilcnt_t_defined 
# 227 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 20 "/usr/include/bits/pthreadtypes.h" 3 4
#define _BITS_PTHREADTYPES_COMMON_H 1


# 1 "/usr/include/bits/thread-shared-types.h" 1 3 4
# 20 "/usr/include/bits/thread-shared-types.h" 3 4
#define _THREAD_SHARED_TYPES_H 1
# 77 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1 3 4
# 19 "/usr/include/bits/pthreadtypes-arch.h" 3 4
#define _BITS_PTHREADTYPES_ARCH_H 1

# 1 "/usr/include/bits/wordsize.h" 1 3 4



#define __WORDSIZE 64







#define __WORDSIZE_TIME64_COMPAT32 1

#define __SYSCALL_WORDSIZE 64
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2 3 4



#define __SIZEOF_PTHREAD_MUTEX_T 40
#define __SIZEOF_PTHREAD_ATTR_T 56
#define __SIZEOF_PTHREAD_MUTEX_T 40
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define __SIZEOF_PTHREAD_BARRIER_T 32
# 44 "/usr/include/bits/pthreadtypes-arch.h" 3 4
#define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#define __SIZEOF_PTHREAD_COND_T 48
#define __SIZEOF_PTHREAD_CONDATTR_T 4
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define __SIZEOF_PTHREAD_BARRIERATTR_T 4


#define __PTHREAD_COMPAT_PADDING_MID 
#define __PTHREAD_COMPAT_PADDING_END 
#define __PTHREAD_MUTEX_LOCK_ELISION 1

#define __PTHREAD_MUTEX_NUSERS_AFTER_KIND 0
#define __PTHREAD_MUTEX_USE_UNION 0





#define __LOCK_ALIGNMENT 
#define __ONCE_ALIGNMENT 

struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];
#define __PTHREAD_RWLOCK_ELISION_EXTRA 0, { 0, 0, 0, 0, 0, 0, 0 }

  unsigned long int __pad2;


  unsigned int __flags;
#define __PTHREAD_RWLOCK_INT_FLAGS_SHARED 1
# 99 "/usr/include/bits/pthreadtypes-arch.h" 3 4
};
# 78 "/usr/include/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 97 "/usr/include/bits/thread-shared-types.h" 3 4
#define __PTHREAD_SPINS_DATA short __spins; short __elision


#define __PTHREAD_SPINS 0, 0
# 118 "/usr/include/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;
# 148 "/usr/include/bits/thread-shared-types.h" 3 4
  int __kind;
 




  short __spins; short __elision;
  __pthread_list_t __list;
#define __PTHREAD_MUTEX_HAVE_PREV 1
# 165 "/usr/include/bits/thread-shared-types.h" 3 4
 
};




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
#define __have_pthread_attr_t 1



typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };


struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


# 1 "/usr/include/alloca.h" 1 3 4
# 19 "/usr/include/alloca.h" 3 4
#define _ALLOCA_H 1



#define __need_size_t 
# 1 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 1 3 4
# 231 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef __need_size_t
# 401 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stddef.h" 3 4
#undef __need_NULL
# 25 "/usr/include/alloca.h" 2 3 4




#undef alloca

#define alloca(size) __builtin_alloca (size)



# 567 "/usr/include/stdlib.h" 2 3 4




#define __COMPAR_FN_T 
typedef int (*__compar_fn_t) (const void *, const void *);
# 817 "/usr/include/stdlib.h" 3 4


# 1020 "/usr/include/stdlib.h" 3 4

# 3 "src/includes/_use_header.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 23 "/usr/include/inttypes.h" 3 4
#define _INTTYPES_H 1



# 1 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 23 "/usr/include/stdint.h" 3 4
#define _STDINT_H 1

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 31 "/usr/include/bits/libc-header-start.h" 3 4
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION





#undef __GLIBC_USE_LIB_EXT2




#define __GLIBC_USE_LIB_EXT2 0




#undef __GLIBC_USE_IEC_60559_BFP_EXT



#define __GLIBC_USE_IEC_60559_BFP_EXT 0




#undef __GLIBC_USE_IEC_60559_FUNCS_EXT



#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0




#undef __GLIBC_USE_IEC_60559_TYPES_EXT



#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 20 "/usr/include/bits/wchar.h" 3 4
#define _BITS_WCHAR_H 1
# 34 "/usr/include/bits/wchar.h" 3 4
#define __WCHAR_MAX __WCHAR_MAX__







#define __WCHAR_MIN __WCHAR_MIN__
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4



#define __WORDSIZE 64







#define __WORDSIZE_TIME64_COMPAT32 1

#define __SYSCALL_WORDSIZE 64
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/bits/stdint-uintn.h" 1 3 4
# 20 "/usr/include/bits/stdint-uintn.h" 3 4
#define _BITS_STDINT_UINTN_H 1



typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;
#define __intptr_t_defined 

typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;



#define __INT64_C(c) c ## L
#define __UINT64_C(c) c ## UL
# 116 "/usr/include/stdint.h" 3 4
#define INT8_MIN (-128)
#define INT16_MIN (-32767-1)
#define INT32_MIN (-2147483647-1)
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)

#define INT8_MAX (127)
#define INT16_MAX (32767)
#define INT32_MAX (2147483647)
#define INT64_MAX (__INT64_C(9223372036854775807))


#define UINT8_MAX (255)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295U)
#define UINT64_MAX (__UINT64_C(18446744073709551615))



#define INT_LEAST8_MIN (-128)
#define INT_LEAST16_MIN (-32767-1)
#define INT_LEAST32_MIN (-2147483647-1)
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)

#define INT_LEAST8_MAX (127)
#define INT_LEAST16_MAX (32767)
#define INT_LEAST32_MAX (2147483647)
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))


#define UINT_LEAST8_MAX (255)
#define UINT_LEAST16_MAX (65535)
#define UINT_LEAST32_MAX (4294967295U)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))



#define INT_FAST8_MIN (-128)

#define INT_FAST16_MIN (-9223372036854775807L-1)
#define INT_FAST32_MIN (-9223372036854775807L-1)




#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)

#define INT_FAST8_MAX (127)

#define INT_FAST16_MAX (9223372036854775807L)
#define INT_FAST32_MAX (9223372036854775807L)




#define INT_FAST64_MAX (__INT64_C(9223372036854775807))


#define UINT_FAST8_MAX (255)

#define UINT_FAST16_MAX (18446744073709551615UL)
#define UINT_FAST32_MAX (18446744073709551615UL)




#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))




#define INTPTR_MIN (-9223372036854775807L-1)
#define INTPTR_MAX (9223372036854775807L)
#define UINTPTR_MAX (18446744073709551615UL)
# 197 "/usr/include/stdint.h" 3 4
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)

#define INTMAX_MAX (__INT64_C(9223372036854775807))


#define UINTMAX_MAX (__UINT64_C(18446744073709551615))






#define PTRDIFF_MIN (-9223372036854775807L-1)
#define PTRDIFF_MAX (9223372036854775807L)
# 222 "/usr/include/stdint.h" 3 4
#define SIG_ATOMIC_MIN (-2147483647-1)
#define SIG_ATOMIC_MAX (2147483647)



#define SIZE_MAX (18446744073709551615UL)
# 239 "/usr/include/stdint.h" 3 4
#define WCHAR_MIN __WCHAR_MIN
#define WCHAR_MAX __WCHAR_MAX



#define WINT_MIN (0u)
#define WINT_MAX (4294967295u)


#define INT8_C(c) c
#define INT16_C(c) c
#define INT32_C(c) c

#define INT64_C(c) c ## L





#define UINT8_C(c) c
#define UINT16_C(c) c
#define UINT32_C(c) c ## U

#define UINT64_C(c) c ## UL






#define INTMAX_C(c) c ## L
#define UINTMAX_C(c) c ## UL
# 10 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;





#define ____gwchar_t_defined 1



#define __PRI64_PREFIX "l"
#define __PRIPTR_PREFIX "l"
# 54 "/usr/include/inttypes.h" 3 4
#define PRId8 "d"
#define PRId16 "d"
#define PRId32 "d"
#define PRId64 __PRI64_PREFIX "d"

#define PRIdLEAST8 "d"
#define PRIdLEAST16 "d"
#define PRIdLEAST32 "d"
#define PRIdLEAST64 __PRI64_PREFIX "d"

#define PRIdFAST8 "d"
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define PRIdFAST64 __PRI64_PREFIX "d"


#define PRIi8 "i"
#define PRIi16 "i"
#define PRIi32 "i"
#define PRIi64 __PRI64_PREFIX "i"

#define PRIiLEAST8 "i"
#define PRIiLEAST16 "i"
#define PRIiLEAST32 "i"
#define PRIiLEAST64 __PRI64_PREFIX "i"

#define PRIiFAST8 "i"
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define PRIiFAST64 __PRI64_PREFIX "i"


#define PRIo8 "o"
#define PRIo16 "o"
#define PRIo32 "o"
#define PRIo64 __PRI64_PREFIX "o"

#define PRIoLEAST8 "o"
#define PRIoLEAST16 "o"
#define PRIoLEAST32 "o"
#define PRIoLEAST64 __PRI64_PREFIX "o"

#define PRIoFAST8 "o"
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define PRIoFAST64 __PRI64_PREFIX "o"


#define PRIu8 "u"
#define PRIu16 "u"
#define PRIu32 "u"
#define PRIu64 __PRI64_PREFIX "u"

#define PRIuLEAST8 "u"
#define PRIuLEAST16 "u"
#define PRIuLEAST32 "u"
#define PRIuLEAST64 __PRI64_PREFIX "u"

#define PRIuFAST8 "u"
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define PRIuFAST64 __PRI64_PREFIX "u"


#define PRIx8 "x"
#define PRIx16 "x"
#define PRIx32 "x"
#define PRIx64 __PRI64_PREFIX "x"

#define PRIxLEAST8 "x"
#define PRIxLEAST16 "x"
#define PRIxLEAST32 "x"
#define PRIxLEAST64 __PRI64_PREFIX "x"

#define PRIxFAST8 "x"
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define PRIxFAST64 __PRI64_PREFIX "x"


#define PRIX8 "X"
#define PRIX16 "X"
#define PRIX32 "X"
#define PRIX64 __PRI64_PREFIX "X"

#define PRIXLEAST8 "X"
#define PRIXLEAST16 "X"
#define PRIXLEAST32 "X"
#define PRIXLEAST64 __PRI64_PREFIX "X"

#define PRIXFAST8 "X"
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define PRIXFAST64 __PRI64_PREFIX "X"



#define PRIdMAX __PRI64_PREFIX "d"
#define PRIiMAX __PRI64_PREFIX "i"
#define PRIoMAX __PRI64_PREFIX "o"
#define PRIuMAX __PRI64_PREFIX "u"
#define PRIxMAX __PRI64_PREFIX "x"
#define PRIXMAX __PRI64_PREFIX "X"



#define PRIdPTR __PRIPTR_PREFIX "d"
#define PRIiPTR __PRIPTR_PREFIX "i"
#define PRIoPTR __PRIPTR_PREFIX "o"
#define PRIuPTR __PRIPTR_PREFIX "u"
#define PRIxPTR __PRIPTR_PREFIX "x"
#define PRIXPTR __PRIPTR_PREFIX "X"





#define SCNd8 "hhd"
#define SCNd16 "hd"
#define SCNd32 "d"
#define SCNd64 __PRI64_PREFIX "d"

#define SCNdLEAST8 "hhd"
#define SCNdLEAST16 "hd"
#define SCNdLEAST32 "d"
#define SCNdLEAST64 __PRI64_PREFIX "d"

#define SCNdFAST8 "hhd"
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define SCNdFAST64 __PRI64_PREFIX "d"


#define SCNi8 "hhi"
#define SCNi16 "hi"
#define SCNi32 "i"
#define SCNi64 __PRI64_PREFIX "i"

#define SCNiLEAST8 "hhi"
#define SCNiLEAST16 "hi"
#define SCNiLEAST32 "i"
#define SCNiLEAST64 __PRI64_PREFIX "i"

#define SCNiFAST8 "hhi"
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define SCNiFAST64 __PRI64_PREFIX "i"


#define SCNu8 "hhu"
#define SCNu16 "hu"
#define SCNu32 "u"
#define SCNu64 __PRI64_PREFIX "u"

#define SCNuLEAST8 "hhu"
#define SCNuLEAST16 "hu"
#define SCNuLEAST32 "u"
#define SCNuLEAST64 __PRI64_PREFIX "u"

#define SCNuFAST8 "hhu"
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define SCNuFAST64 __PRI64_PREFIX "u"


#define SCNo8 "hho"
#define SCNo16 "ho"
#define SCNo32 "o"
#define SCNo64 __PRI64_PREFIX "o"

#define SCNoLEAST8 "hho"
#define SCNoLEAST16 "ho"
#define SCNoLEAST32 "o"
#define SCNoLEAST64 __PRI64_PREFIX "o"

#define SCNoFAST8 "hho"
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define SCNoFAST64 __PRI64_PREFIX "o"


#define SCNx8 "hhx"
#define SCNx16 "hx"
#define SCNx32 "x"
#define SCNx64 __PRI64_PREFIX "x"

#define SCNxLEAST8 "hhx"
#define SCNxLEAST16 "hx"
#define SCNxLEAST32 "x"
#define SCNxLEAST64 __PRI64_PREFIX "x"

#define SCNxFAST8 "hhx"
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define SCNxFAST64 __PRI64_PREFIX "x"



#define SCNdMAX __PRI64_PREFIX "d"
#define SCNiMAX __PRI64_PREFIX "i"
#define SCNoMAX __PRI64_PREFIX "o"
#define SCNuMAX __PRI64_PREFIX "u"
#define SCNxMAX __PRI64_PREFIX "x"


#define SCNdPTR __PRIPTR_PREFIX "d"
#define SCNiPTR __PRIPTR_PREFIX "i"
#define SCNoPTR __PRIPTR_PREFIX "o"
#define SCNuPTR __PRIPTR_PREFIX "u"
#define SCNxPTR __PRIPTR_PREFIX "x"


#define _STDBOOL_H



#define bool _Bool
#define true 1
#define false 0
# 52 "/usr/lib/gcc/x86_64-redhat-linux/9/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 1 "<stdin>" 2

