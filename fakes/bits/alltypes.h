
#ifndef __fake_bits__alltypes_h
#define __fake_bits__alltypes_h

typedef __SIZE_TYPE__ size_t;
typedef __SIZE_TYPE__ locale_t;
// Wrong
typedef __SIZE_TYPE__ ssize_t;
// Wrong
typedef __INTMAX_TYPE__ off_t;

typedef __INT8_TYPE__ int8_t;
typedef __INT16_TYPE__ int16_t;
typedef __INT32_TYPE__ int32_t;
typedef __INT64_TYPE__ int64_t;

typedef __UINT8_TYPE__ uint8_t;
typedef __UINT16_TYPE__ uint16_t;
typedef __UINT32_TYPE__ uint32_t;
typedef __UINT64_TYPE__ uint64_t;

typedef __INTPTR_TYPE__ intptr_t;
typedef __UINTPTR_TYPE__ uintptr_t;

typedef __WCHAR_TYPE__ wchar_t;
typedef __WINT_TYPE__ wint_t;

typedef __INTMAX_TYPE__ intmax_t;
typedef __UINTMAX_TYPE__ uintmax_t;

typedef float float_t;
typedef double double_t;

// wrong
typedef struct _mbstate_t {

} mbstate_t;

// Wrong
typedef struct _file_t {

} FILE;

typedef __builtin_va_list __isoc_va_list;

// Wrong
typedef int wctype_t;

#endif // __fake_bits__alltypes_h