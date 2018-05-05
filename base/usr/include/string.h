#include <stdint.h>
#include <stddef.h>

extern void * memset(void * dest, int c, size_t n);
extern void * memcpy(void * restrict dest, const void * restrict src, size_t n);
extern void * memmove(void * dest, const void * src, size_t n);

extern void * memchr(const void * src, int c, size_t n);
extern void * memrchr(const void * m, int c, size_t n);
extern int memcmp(const void *vl, const void *vr, size_t n);

extern void * __attribute__ ((malloc)) malloc(uintptr_t size);
extern void * __attribute__ ((malloc)) realloc(void * ptr, uintptr_t size);
extern void * __attribute__ ((malloc)) calloc(uintptr_t nmemb, uintptr_t size);
extern void * __attribute__ ((malloc)) valloc(uintptr_t size);
extern void free(void * ptr);

extern char * strdup(const char * s);
extern char * stpcpy(char * restrict d, const char * restrict s);
extern char * strcpy(char * restrict dest, const char * restrict src);
extern char * strchrnul(const char * s, int c);
extern char * strchr(const char * s, int c);
extern char * strrchr(const char * s, int c);
extern char * strpbrk(const char * s, const char * b);
extern char * strstr(const char * h, const char * n);

extern int strcmp(const char * l, const char * r);
extern int strncmp(const char *s1, const char *s2, size_t n);

extern size_t strcspn(const char * s, const char * c);
extern size_t strspn(const char * s, const char * c);
extern size_t strlen(const char * s);

extern int atoi(const char * s);

extern char * strcat(char *dest, const char *src);

extern char * strtok_r(char * str, const char * delim, char ** saveptr);

extern char * strncpy(char *dest, const char *src, size_t n);
