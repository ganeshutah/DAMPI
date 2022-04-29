# 1 "piggyback.c"
# 1 "/home/avo/research/DMA/pnmpidev/modules/piggyback//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "piggyback.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 330 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 348 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 349 "/usr/include/sys/cdefs.h" 2 3 4
# 331 "/usr/include/features.h" 2 3 4
# 354 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 355 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
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







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


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
typedef long int __swblk_t;
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

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 78 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

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
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 416 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 488 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4
# 89 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 141 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));














extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 186 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 229 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 243 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 272 "/usr/include/stdio.h" 3 4

# 283 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
# 304 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 398 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (__const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 441 "/usr/include/stdio.h" 3 4

# 504 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 528 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 539 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 572 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__));






extern char *gets (char *__s) __attribute__ ((__warn_unused_result__));

# 653 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) __attribute__ ((__warn_unused_result__));

# 706 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);

# 742 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 761 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 784 "/usr/include/stdio.h" 3 4

# 793 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 823 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
# 842 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 882 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 903 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 44 "/usr/include/bits/stdio.h" 3 4
extern __inline int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 125 "/usr/include/bits/stdio.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline int
__attribute__ ((__nothrow__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 904 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/stdio2.h" 1 3 4
# 24 "/usr/include/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      __const char *__restrict __format,
      __gnuc_va_list __ap) __attribute__ ((__nothrow__));


extern __inline __attribute__ ((__always_inline__)) int
__attribute__ ((__nothrow__)) sprintf (char *__restrict __s, __const char *__restrict __fmt, ...)
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) int
__attribute__ ((__nothrow__)) vsprintf (char *__restrict __s, __const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, __const char *__restrict __format,
      ...) __attribute__ ((__nothrow__));
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, __const char *__restrict __format,
       __gnuc_va_list __ap) __attribute__ ((__nothrow__));


extern __inline __attribute__ ((__always_inline__)) int
__attribute__ ((__nothrow__)) snprintf (char *__restrict __s, size_t __n, __const char *__restrict __fmt, ...)

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) int
__attribute__ ((__nothrow__)) vsnprintf (char *__restrict __s, size_t __n, __const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     __const char *__restrict __format, ...);
extern int __printf_chk (int __flag, __const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      __const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, __const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) int
fprintf (FILE *__restrict __stream, __const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) int
printf (__const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) int
vfprintf (FILE *__restrict __stream,
   __const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}
# 220 "/usr/include/bits/stdio2.h" 3 4
extern char *__gets_chk (char *__str, size_t) __attribute__ ((__warn_unused_result__));
extern char *__gets_warn (char *__str) __asm__ ("" "gets")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use fgets or getline instead, gets can't " "specify buffer size")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__warn_unused_result__)) char *
gets (char *__str)
{
  if (__builtin_object_size (__str, 2 > 1) != (size_t) -1)
    return __gets_chk (__str, __builtin_object_size (__str, 2 > 1));
  return __gets_warn (__str);
}

extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets") __attribute__ ((__warn_unused_result__));


extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__warn_unused_result__)) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread") __attribute__ ((__warn_unused_result__));



extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}
# 319 "/usr/include/bits/stdio2.h" 3 4
extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked") __attribute__ ((__warn_unused_result__));



extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_unlocked_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
         __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_unlocked_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
       __stream);
    }


  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
 return 0;

      for (; __cnt > 0; --__cnt)
 {
   int __c = (__builtin_expect (((__stream)->_IO_read_ptr >= (__stream)->_IO_read_end), 0) ? __uflow (__stream) : *(unsigned char *) (__stream)->_IO_read_ptr++);
   if (__c == (-1))
     break;
   *__cptr++ = __c;
 }
      return (__cptr - (char *) __ptr) / __size;
    }

  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
# 907 "/usr/include/stdio.h" 2 3 4






# 2 "piggyback.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 326 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 3 4
typedef int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


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



# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

# 182 "/usr/include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

# 277 "/usr/include/stdlib.h" 3 4

extern __inline double
__attribute__ ((__nothrow__)) atof (__const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
extern __inline int
__attribute__ ((__nothrow__)) atoi (__const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline long int
__attribute__ ((__nothrow__)) atol (__const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline long long int
__attribute__ ((__nothrow__)) atoll (__const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));


__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 271 "/usr/include/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







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

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

# 543 "/usr/include/stdlib.h" 3 4


extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 583 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 594 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 614 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 640 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) __attribute__ ((__warn_unused_result__));

# 662 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 680 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 699 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));












extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));

# 735 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 840 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));
# 875 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





# 1 "/usr/include/bits/stdlib.h" 1 3 4
# 24 "/usr/include/bits/stdlib.h" 3 4
extern char *__realpath_chk (__const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (__const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));


extern char *__realpath_chk_warn (__const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__))



     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__)) realpath (__const char *__restrict __name, char *__restrict __resolved)
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {




      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__))

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")));


extern __inline __attribute__ ((__always_inline__)) int
__attribute__ ((__nothrow__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__)) wctomb (char *__s, wchar_t __wchar)
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         __const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__));



extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__))



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")));


extern __inline __attribute__ ((__always_inline__)) size_t
__attribute__ ((__nothrow__)) mbstowcs (wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         __const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__));
extern size_t __wcstombs_alias (char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__));



extern size_t __wcstombs_chk_warn (char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__))



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) size_t
__attribute__ ((__nothrow__)) wcstombs (char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 883 "/usr/include/stdlib.h" 2 3 4
# 891 "/usr/include/stdlib.h" 3 4

# 3 "piggyback.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 294 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 331 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 354 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 420 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 421 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/bits/string2.h" 1 3 4
# 394 "/usr/include/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 969 "/usr/include/bits/string2.h" 3 4
extern __inline size_t __strcspn_c1 (__const char *__s, int __reject);
extern __inline size_t
__strcspn_c1 (__const char *__s, int __reject)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c2 (__const char *__s, int __reject1,
         int __reject2);
extern __inline size_t
__strcspn_c2 (__const char *__s, int __reject1, int __reject2)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c3 (__const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline size_t
__strcspn_c3 (__const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1045 "/usr/include/bits/string2.h" 3 4
extern __inline size_t __strspn_c1 (__const char *__s, int __accept);
extern __inline size_t
__strspn_c1 (__const char *__s, int __accept)
{
  register size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c2 (__const char *__s, int __accept1,
        int __accept2);
extern __inline size_t
__strspn_c2 (__const char *__s, int __accept1, int __accept2)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c3 (__const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline size_t
__strspn_c3 (__const char *__s, int __accept1, int __accept2, int __accept3)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1121 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strpbrk_c2 (__const char *__s, int __accept1,
         int __accept2);
extern __inline char *
__strpbrk_c2 (__const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline char *__strpbrk_c3 (__const char *__s, int __accept1,
         int __accept2, int __accept3);
extern __inline char *
__strpbrk_c3 (__const char *__s, int __accept1, int __accept2,
       int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1172 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1204 "/usr/include/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, __const char *__delim);
# 1222 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strsep_1c (char **__s, char __reject);
extern __inline char *
__strsep_1c (char **__s, char __reject)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 1303 "/usr/include/bits/string2.h" 3 4
extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 1322 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 424 "/usr/include/string.h" 2 3 4




# 1 "/usr/include/bits/string3.h" 1 3 4
# 23 "/usr/include/bits/string3.h" 3 4
extern void __warn_memset_zero_len (void) __attribute__((__warning__ ("memset used with constant zero length parameter; this could be due to transposed parameters")));
# 48 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) void *
__attribute__ ((__nothrow__)) memcpy (void *__restrict __dest, __const void *__restrict __src, size_t __len)

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) void *
__attribute__ ((__nothrow__)) memmove (void *__restrict __dest, __const void *__restrict __src, size_t __len)

{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 77 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) void *
__attribute__ ((__nothrow__)) memset (void *__dest, int __ch, size_t __len)
{
  if (__builtin_constant_p (__len) && __len == 0)
    {
      __warn_memset_zero_len ();
      return __dest;
    }
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) void
__attribute__ ((__nothrow__)) bcopy (__const void *__restrict __src, void *__restrict __dest, size_t __len)

{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) void
__attribute__ ((__nothrow__)) bzero (void *__dest, size_t __len)
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) char *
__attribute__ ((__nothrow__)) strcpy (char *__restrict __dest, __const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}
# 118 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) char *
__attribute__ ((__nothrow__)) strncpy (char *__restrict __dest, __const char *__restrict __src, size_t __len)

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, __const char *__src, size_t __n,
       size_t __destlen) __attribute__ ((__nothrow__));
extern char *__stpncpy_alias (char *__dest, __const char *__src, size_t __n) __asm__ ("" "stpncpy") __attribute__ ((__nothrow__));



extern __inline __attribute__ ((__always_inline__)) char *
__attribute__ ((__nothrow__)) stpncpy (char *__dest, __const char *__src, size_t __n)
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n <= __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) char *
__attribute__ ((__nothrow__)) strcat (char *__restrict __dest, __const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) char *
__attribute__ ((__nothrow__)) strncat (char *__restrict __dest, __const char *__restrict __src, size_t __len)

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 429 "/usr/include/string.h" 2 3 4




# 4 "piggyback.c" 2

# 1 "/usr/local/include/mpi.h" 1 3
# 23 "/usr/local/include/mpi.h" 3
typedef int MPI_Datatype;
# 94 "/usr/local/include/mpi.h" 3
typedef int MPI_Comm;




typedef int MPI_Group;



typedef int MPI_Win;







typedef struct ADIOI_FileD *MPI_File;



typedef int MPI_Op;
# 181 "/usr/local/include/mpi.h" 3
typedef enum MPIR_Topo_type { MPI_GRAPH=1, MPI_CART=2 } MPIR_Topo_type;
# 194 "/usr/local/include/mpi.h" 3
typedef void (MPI_Handler_function) ( MPI_Comm *, int *, ... );
typedef int (MPI_Comm_copy_attr_function)(MPI_Comm, int, void *, void *,
       void *, int *);
typedef int (MPI_Comm_delete_attr_function)(MPI_Comm, int, void *, void *);
typedef int (MPI_Type_copy_attr_function)(MPI_Datatype, int, void *, void *,
       void *, int *);
typedef int (MPI_Type_delete_attr_function)(MPI_Datatype, int, void *, void *);
typedef int (MPI_Win_copy_attr_function)(MPI_Win, int, void *, void *, void *,
      int *);
typedef int (MPI_Win_delete_attr_function)(MPI_Win, int, void *, void *);
typedef void (MPI_Comm_errhandler_fn)(MPI_Comm *, int *, ...);
typedef void (MPI_File_errhandler_fn)(MPI_File *, int *, ...);
typedef void (MPI_Win_errhandler_fn)(MPI_Win *, int *, ...);
# 217 "/usr/local/include/mpi.h" 3
typedef int MPI_Errhandler;
# 238 "/usr/local/include/mpi.h" 3
typedef int MPI_Request;


typedef void (MPI_User_function) ( void *, void *, int *, MPI_Datatype * );


typedef int (MPI_Copy_function) ( MPI_Comm, int, void *, void *, void *, int * );
typedef int (MPI_Delete_function) ( MPI_Comm, int, void *, void * );
# 289 "/usr/local/include/mpi.h" 3
enum MPI_COMBINER_ENUM {
    MPI_COMBINER_NAMED = 1,
    MPI_COMBINER_DUP = 2,
    MPI_COMBINER_CONTIGUOUS = 3,
    MPI_COMBINER_VECTOR = 4,
    MPI_COMBINER_HVECTOR_INTEGER = 5,
    MPI_COMBINER_HVECTOR = 6,
    MPI_COMBINER_INDEXED = 7,
    MPI_COMBINER_HINDEXED_INTEGER = 8,
    MPI_COMBINER_HINDEXED = 9,
    MPI_COMBINER_INDEXED_BLOCK = 10,
    MPI_COMBINER_STRUCT_INTEGER = 11,
    MPI_COMBINER_STRUCT = 12,
    MPI_COMBINER_SUBARRAY = 13,
    MPI_COMBINER_DARRAY = 14,
    MPI_COMBINER_F90_REAL = 15,
    MPI_COMBINER_F90_COMPLEX = 16,
    MPI_COMBINER_F90_INTEGER = 17,
    MPI_COMBINER_RESIZED = 18
};


typedef int MPI_Info;
# 334 "/usr/local/include/mpi.h" 3
typedef long MPI_Aint;
typedef int MPI_Fint;
# 344 "/usr/local/include/mpi.h" 3
typedef long long MPI_Offset;


typedef struct MPI_Status {
    int count;
    int cancelled;
    int MPI_SOURCE;
    int MPI_TAG;
    int MPI_ERROR;

} MPI_Status;
# 400 "/usr/local/include/mpi.h" 3
extern MPI_Fint * MPI_F_STATUS_IGNORE;
extern MPI_Fint * MPI_F_STATUSES_IGNORE;
# 419 "/usr/local/include/mpi.h" 3
typedef int (MPI_Grequest_cancel_function)(void *, int);
typedef int (MPI_Grequest_free_function)(void *);
typedef int (MPI_Grequest_query_function)(void *, MPI_Status *);
# 505 "/usr/local/include/mpi.h" 3
typedef int (MPI_Datarep_conversion_function)(void *, MPI_Datatype, int,
             void *, MPI_Offset, void *);
typedef int (MPI_Datarep_extent_function)(MPI_Datatype datatype, MPI_Aint *,
       void *);
# 528 "/usr/local/include/mpi.h" 3
int MPI_Send(void*, int, MPI_Datatype, int, int, MPI_Comm);
int MPI_Recv(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Status *);
int MPI_Get_count(MPI_Status *, MPI_Datatype, int *);
int MPI_Bsend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int MPI_Ssend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int MPI_Rsend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int MPI_Buffer_attach( void*, int);
int MPI_Buffer_detach( void*, int *);
int MPI_Isend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Ibsend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Issend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Irsend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Irecv(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Wait(MPI_Request *, MPI_Status *);
int MPI_Test(MPI_Request *, int *, MPI_Status *);
int MPI_Request_free(MPI_Request *);
int MPI_Waitany(int, MPI_Request *, int *, MPI_Status *);
int MPI_Testany(int, MPI_Request *, int *, int *, MPI_Status *);
int MPI_Waitall(int, MPI_Request *, MPI_Status *);
int MPI_Testall(int, MPI_Request *, int *, MPI_Status *);
int MPI_Waitsome(int, MPI_Request *, int *, int *, MPI_Status *);
int MPI_Testsome(int, MPI_Request *, int *, int *, MPI_Status *);
int MPI_Iprobe(int, int, MPI_Comm, int *, MPI_Status *);
int MPI_Probe(int, int, MPI_Comm, MPI_Status *);
int MPI_Cancel(MPI_Request *);
int MPI_Test_cancelled(MPI_Status *, int *);
int MPI_Send_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Bsend_init(void*, int, MPI_Datatype, int,int, MPI_Comm, MPI_Request *);
int MPI_Ssend_init(void*, int, MPI_Datatype, int,int, MPI_Comm, MPI_Request *);
int MPI_Rsend_init(void*, int, MPI_Datatype, int,int, MPI_Comm, MPI_Request *);
int MPI_Recv_init(void*, int, MPI_Datatype, int,int, MPI_Comm, MPI_Request *);
int MPI_Start(MPI_Request *);
int MPI_Startall(int, MPI_Request *);
int MPI_Sendrecv(void *, int, MPI_Datatype,int, int, void *, int, MPI_Datatype, int, int, MPI_Comm, MPI_Status *);
int MPI_Sendrecv_replace(void*, int, MPI_Datatype, int, int, int, int, MPI_Comm, MPI_Status *);
int MPI_Type_contiguous(int, MPI_Datatype, MPI_Datatype *);
int MPI_Type_vector(int, int, int, MPI_Datatype, MPI_Datatype *);
int MPI_Type_hvector(int, int, MPI_Aint, MPI_Datatype, MPI_Datatype *);
int MPI_Type_indexed(int, int *, int *, MPI_Datatype, MPI_Datatype *);
int MPI_Type_hindexed(int, int *, MPI_Aint *, MPI_Datatype, MPI_Datatype *);
int MPI_Type_struct(int, int *, MPI_Aint *, MPI_Datatype *, MPI_Datatype *);
int MPI_Address(void*, MPI_Aint *);

int MPI_Type_extent(MPI_Datatype, MPI_Aint *);



int MPI_Type_size(MPI_Datatype, int *);

int MPI_Type_lb(MPI_Datatype, MPI_Aint *);
int MPI_Type_ub(MPI_Datatype, MPI_Aint *);
int MPI_Type_commit(MPI_Datatype *);
int MPI_Type_free(MPI_Datatype *);
int MPI_Get_elements(MPI_Status *, MPI_Datatype, int *);
int MPI_Pack(void*, int, MPI_Datatype, void *, int, int *, MPI_Comm);
int MPI_Unpack(void*, int, int *, void *, int, MPI_Datatype, MPI_Comm);
int MPI_Pack_size(int, MPI_Datatype, MPI_Comm, int *);
int MPI_Barrier(MPI_Comm );
int MPI_Bcast(void*, int, MPI_Datatype, int, MPI_Comm );
int MPI_Gather(void* , int, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int MPI_Gatherv(void* , int, MPI_Datatype, void*, int *, int *, MPI_Datatype, int, MPI_Comm);
int MPI_Scatter(void* , int, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int MPI_Scatterv(void* , int *, int *, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int MPI_Allgather(void* , int, MPI_Datatype, void*, int, MPI_Datatype, MPI_Comm);
int MPI_Allgatherv(void* , int, MPI_Datatype, void*, int *, int *, MPI_Datatype, MPI_Comm);
int MPI_Alltoall(void* , int, MPI_Datatype, void*, int, MPI_Datatype, MPI_Comm);
int MPI_Alltoallv(void* , int *, int *, MPI_Datatype, void*, int *, int *, MPI_Datatype, MPI_Comm);
int MPI_Reduce(void* , void*, int, MPI_Datatype, MPI_Op, int, MPI_Comm);
int MPI_Op_create(MPI_User_function *, int, MPI_Op *);
int MPI_Op_free( MPI_Op *);
int MPI_Allreduce(void* , void*, int, MPI_Datatype, MPI_Op, MPI_Comm);
int MPI_Reduce_scatter(void* , void*, int *, MPI_Datatype, MPI_Op, MPI_Comm);
int MPI_Scan(void* , void*, int, MPI_Datatype, MPI_Op, MPI_Comm );
int MPI_Group_size(MPI_Group, int *);
int MPI_Group_rank(MPI_Group, int *);
int MPI_Group_translate_ranks (MPI_Group, int, int *, MPI_Group, int *);
int MPI_Group_compare(MPI_Group, MPI_Group, int *);
int MPI_Comm_group(MPI_Comm, MPI_Group *);
int MPI_Group_union(MPI_Group, MPI_Group, MPI_Group *);
int MPI_Group_intersection(MPI_Group, MPI_Group, MPI_Group *);
int MPI_Group_difference(MPI_Group, MPI_Group, MPI_Group *);
int MPI_Group_incl(MPI_Group, int, int *, MPI_Group *);
int MPI_Group_excl(MPI_Group, int, int *, MPI_Group *);
int MPI_Group_range_incl(MPI_Group, int, int [][3], MPI_Group *);
int MPI_Group_range_excl(MPI_Group, int, int [][3], MPI_Group *);
int MPI_Group_free(MPI_Group *);
int MPI_Comm_size(MPI_Comm, int *);
int MPI_Comm_rank(MPI_Comm, int *);
int MPI_Comm_compare(MPI_Comm, MPI_Comm, int *);
int MPI_Comm_dup(MPI_Comm, MPI_Comm *);
int MPI_Comm_create(MPI_Comm, MPI_Group, MPI_Comm *);
int MPI_Comm_split(MPI_Comm, int, int, MPI_Comm *);
int MPI_Comm_free(MPI_Comm *);
int MPI_Comm_test_inter(MPI_Comm, int *);
int MPI_Comm_remote_size(MPI_Comm, int *);
int MPI_Comm_remote_group(MPI_Comm, MPI_Group *);
int MPI_Intercomm_create(MPI_Comm, int, MPI_Comm, int, int, MPI_Comm * );
int MPI_Intercomm_merge(MPI_Comm, int, MPI_Comm *);
int MPI_Keyval_create(MPI_Copy_function *, MPI_Delete_function *, int *, void*);
int MPI_Keyval_free(int *);
int MPI_Attr_put(MPI_Comm, int, void*);
int MPI_Attr_get(MPI_Comm, int, void *, int *);
int MPI_Attr_delete(MPI_Comm, int);
int MPI_Topo_test(MPI_Comm, int *);
int MPI_Cart_create(MPI_Comm, int, int *, int *, int, MPI_Comm *);
int MPI_Dims_create(int, int, int *);
int MPI_Graph_create(MPI_Comm, int, int *, int *, int, MPI_Comm *);
int MPI_Graphdims_get(MPI_Comm, int *, int *);
int MPI_Graph_get(MPI_Comm, int, int, int *, int *);
int MPI_Cartdim_get(MPI_Comm, int *);
int MPI_Cart_get(MPI_Comm, int, int *, int *, int *);
int MPI_Cart_rank(MPI_Comm, int *, int *);
int MPI_Cart_coords(MPI_Comm, int, int, int *);
int MPI_Graph_neighbors_count(MPI_Comm, int, int *);
int MPI_Graph_neighbors(MPI_Comm, int, int, int *);
int MPI_Cart_shift(MPI_Comm, int, int, int *, int *);
int MPI_Cart_sub(MPI_Comm, int *, MPI_Comm *);
int MPI_Cart_map(MPI_Comm, int, int *, int *, int *);
int MPI_Graph_map(MPI_Comm, int, int *, int *, int *);
int MPI_Get_processor_name(char *, int *);
int MPI_Get_version(int *, int *);
int MPI_Errhandler_create(MPI_Handler_function *, MPI_Errhandler *);
int MPI_Errhandler_set(MPI_Comm, MPI_Errhandler);
int MPI_Errhandler_get(MPI_Comm, MPI_Errhandler *);
int MPI_Errhandler_free(MPI_Errhandler *);
int MPI_Error_string(int, char *, int *);
int MPI_Error_class(int, int *);
double MPI_Wtime(void);
double MPI_Wtick(void);

double PMPI_Wtime(void);
double PMPI_Wtick(void);

int MPI_Init(int *, char ***);
int MPI_Finalize(void);
int MPI_Initialized(int *);
int MPI_Abort(MPI_Comm, int);




int MPI_Pcontrol(const int, ...);

int MPIR_Dup_fn ( MPI_Comm, int, void *, void *, void *, int * );





int MPI_Close_port(char *);
int MPI_Comm_accept(char *, MPI_Info, int, MPI_Comm, MPI_Comm *);
int MPI_Comm_connect(char *, MPI_Info, int, MPI_Comm, MPI_Comm *);
int MPI_Comm_disconnect(MPI_Comm *);
int MPI_Comm_get_parent(MPI_Comm *);
int MPI_Comm_join(int, MPI_Comm *);
int MPI_Comm_spawn(char *, char *[], int, MPI_Info, int, MPI_Comm, MPI_Comm *,
                   int []);
int MPI_Comm_spawn_multiple(int, char *[], char **[], int [], MPI_Info [], int,
       MPI_Comm, MPI_Comm *, int []);
int MPI_Lookup_name(char *, MPI_Info, char *);
int MPI_Open_port(MPI_Info, char *);
int MPI_Publish_name(char *, MPI_Info, char *);
int MPI_Unpublish_name(char *, MPI_Info, char *);


int MPI_Accumulate(void *, int, MPI_Datatype, int, MPI_Aint, int,
     MPI_Datatype, MPI_Op, MPI_Win);
int MPI_Get(void *, int, MPI_Datatype, int, MPI_Aint, int, MPI_Datatype,
     MPI_Win);
int MPI_Put(void *, int, MPI_Datatype, int, MPI_Aint, int, MPI_Datatype,
     MPI_Win);
int MPI_Win_complete(MPI_Win);
int MPI_Win_create(void *, MPI_Aint, int, MPI_Info, MPI_Comm, MPI_Win *);
int MPI_Win_fence(int, MPI_Win);
int MPI_Win_free(MPI_Win *);
int MPI_Win_get_group(MPI_Win, MPI_Group *);
int MPI_Win_lock(int, int, int, MPI_Win);
int MPI_Win_post(MPI_Group, int, MPI_Win);
int MPI_Win_start(MPI_Group, int, MPI_Win);
int MPI_Win_test(MPI_Win, int *);
int MPI_Win_unlock(int, MPI_Win);
int MPI_Win_wait(MPI_Win);


int MPI_Alltoallw(void *, int [], int [], MPI_Datatype [], void *, int [],
    int [], MPI_Datatype [], MPI_Comm);
int MPI_Exscan(void *, void *, int, MPI_Datatype, MPI_Op, MPI_Comm) ;


int MPI_Add_error_class(int *);
int MPI_Add_error_code(int, int *);
int MPI_Add_error_string(int, char *);
int MPI_Comm_call_errhandler(MPI_Comm, int);
int MPI_Comm_create_keyval(MPI_Comm_copy_attr_function *,
                           MPI_Comm_delete_attr_function *, int *, void *);
int MPI_Comm_delete_attr(MPI_Comm, int);
int MPI_Comm_free_keyval(int *);
int MPI_Comm_get_attr(MPI_Comm, int, void *, int *);
int MPI_Comm_get_name(MPI_Comm, char *, int *);
int MPI_Comm_set_attr(MPI_Comm, int, void *);
int MPI_Comm_set_name(MPI_Comm, char *);
int MPI_File_call_errhandler(MPI_File, int);
int MPI_Grequest_complete(MPI_Request);
int MPI_Grequest_start(MPI_Grequest_query_function *,
                       MPI_Grequest_free_function *,
                       MPI_Grequest_cancel_function *, void *, MPI_Request *);
int MPI_Init_thread(int *, char ***, int, int *);
int MPI_Is_thread_main(int *);
int MPI_Query_thread(int *);
int MPI_Status_set_cancelled(MPI_Status *, int);
int MPI_Status_set_elements(MPI_Status *, MPI_Datatype, int);
int MPI_Type_create_keyval(MPI_Type_copy_attr_function *,
                           MPI_Type_delete_attr_function *, int *, void *);
int MPI_Type_delete_attr(MPI_Datatype, int);
int MPI_Type_dup(MPI_Datatype, MPI_Datatype *);
int MPI_Type_free_keyval(int *);
int MPI_Type_get_attr(MPI_Datatype, int, void *, int *);
int MPI_Type_get_contents(MPI_Datatype, int, int, int, int [], MPI_Aint [],
                          MPI_Datatype []);
int MPI_Type_get_envelope(MPI_Datatype, int *, int *, int *, int *);
int MPI_Type_get_name(MPI_Datatype, char *, int *);
int MPI_Type_set_attr(MPI_Datatype, int, void *);
int MPI_Type_set_name(MPI_Datatype, char *);
int MPI_Type_match_size( int, int, MPI_Datatype *);
int MPI_Win_call_errhandler(MPI_Win, int);
int MPI_Win_create_keyval(MPI_Win_copy_attr_function *,
                         MPI_Win_delete_attr_function *, int *, void *);
int MPI_Win_delete_attr(MPI_Win, int);
int MPI_Win_free_keyval(int *);
int MPI_Win_get_attr(MPI_Win, int, void *, int *);
int MPI_Win_get_name(MPI_Win, char *, int *);
int MPI_Win_set_attr(MPI_Win, int, void *);
int MPI_Win_set_name(MPI_Win, char *);
# 782 "/usr/local/include/mpi.h" 3
int MPI_Alloc_mem(MPI_Aint, MPI_Info info, void *baseptr);
int MPI_Comm_create_errhandler(MPI_Comm_errhandler_fn *, MPI_Errhandler *);
int MPI_Comm_get_errhandler(MPI_Comm, MPI_Errhandler *);
int MPI_Comm_set_errhandler(MPI_Comm, MPI_Errhandler);
int MPI_File_create_errhandler(MPI_File_errhandler_fn *, MPI_Errhandler *);
int MPI_File_get_errhandler(MPI_File, MPI_Errhandler *);
int MPI_File_set_errhandler(MPI_File, MPI_Errhandler);
int MPI_Finalized(int *);
int MPI_Free_mem(void *);
int MPI_Get_address(void *, MPI_Aint *);
int MPI_Info_create(MPI_Info *);
int MPI_Info_delete(MPI_Info, char *);
int MPI_Info_dup(MPI_Info, MPI_Info *);
int MPI_Info_free(MPI_Info *info);
int MPI_Info_get(MPI_Info, char *, int, char *, int *);
int MPI_Info_get_nkeys(MPI_Info, int *);
int MPI_Info_get_nthkey(MPI_Info, int, char *);
int MPI_Info_get_valuelen(MPI_Info, char *, int *, int *);
int MPI_Info_set(MPI_Info, char *, char *);
int MPI_Pack_external(char *, void *, int, MPI_Datatype, void *, MPI_Aint,
                      MPI_Aint *);
int MPI_Pack_external_size(char *, int, MPI_Datatype, MPI_Aint *);
int MPI_Request_get_status(MPI_Request, int *, MPI_Status *);
int MPI_Status_c2f(MPI_Status *, MPI_Fint *);
int MPI_Status_f2c(MPI_Fint *, MPI_Status *);
int MPI_Type_create_darray(int, int, int, int [], int [], int [], int [], int,
                           MPI_Datatype, MPI_Datatype *);
int MPI_Type_create_hindexed(int, int [], MPI_Aint [], MPI_Datatype,
                             MPI_Datatype *);
int MPI_Type_create_hvector(int, int, MPI_Aint, MPI_Datatype, MPI_Datatype *);
int MPI_Type_create_indexed_block(int, int, int [], MPI_Datatype,
                                  MPI_Datatype *);
int MPI_Type_create_resized(MPI_Datatype, MPI_Aint, MPI_Aint, MPI_Datatype *);
int MPI_Type_create_struct(int, int [], MPI_Aint [], MPI_Datatype [],
                           MPI_Datatype *);
int MPI_Type_create_subarray(int, int [], int [], int [], int, MPI_Datatype,
                             MPI_Datatype *);
int MPI_Type_get_extent(MPI_Datatype, MPI_Aint *, MPI_Aint *);
int MPI_Type_get_true_extent(MPI_Datatype, MPI_Aint *, MPI_Aint *);
int MPI_Unpack_external(char *, void *, MPI_Aint, MPI_Aint *, void *, int,
                        MPI_Datatype);
int MPI_Win_create_errhandler(MPI_Win_errhandler_fn *, MPI_Errhandler *);
int MPI_Win_get_errhandler(MPI_Win, MPI_Errhandler *);
int MPI_Win_set_errhandler(MPI_Win, MPI_Errhandler);




int MPI_Type_create_f90_integer( int, MPI_Datatype * );
int MPI_Type_create_f90_real( int, int, MPI_Datatype * );
int MPI_Type_create_f90_complex( int, int, MPI_Datatype * );
# 841 "/usr/local/include/mpi.h" 3
int PMPI_Send(void*, int, MPI_Datatype, int, int, MPI_Comm);
int PMPI_Recv(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Status *);
int PMPI_Get_count(MPI_Status *, MPI_Datatype, int *);
int PMPI_Bsend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int PMPI_Ssend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int PMPI_Rsend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int PMPI_Buffer_attach( void* buffer, int);
int PMPI_Buffer_detach( void* buffer, int *);
int PMPI_Isend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Ibsend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Issend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Irsend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Irecv(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Wait(MPI_Request *, MPI_Status *);
int PMPI_Test(MPI_Request *, int *, MPI_Status *);
int PMPI_Request_free(MPI_Request *);
int PMPI_Waitany(int, MPI_Request *, int *, MPI_Status *);
int PMPI_Testany(int, MPI_Request *, int *, int *, MPI_Status *);
int PMPI_Waitall(int, MPI_Request *, MPI_Status *);
int PMPI_Testall(int, MPI_Request *, int *, MPI_Status *);
int PMPI_Waitsome(int, MPI_Request *, int *, int *, MPI_Status *);
int PMPI_Testsome(int, MPI_Request *, int *, int *, MPI_Status *);
int PMPI_Iprobe(int, int, MPI_Comm, int *, MPI_Status *);
int PMPI_Probe(int, int, MPI_Comm, MPI_Status *);
int PMPI_Cancel(MPI_Request *);
int PMPI_Test_cancelled(MPI_Status *, int *);
int PMPI_Send_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Bsend_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Ssend_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Rsend_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Recv_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Start(MPI_Request *);
int PMPI_Startall(int, MPI_Request *);
int PMPI_Sendrecv(void *, int, MPI_Datatype, int, int, void *, int, MPI_Datatype, int, int, MPI_Comm, MPI_Status *);
int PMPI_Sendrecv_replace(void*, int, MPI_Datatype, int, int, int, int, MPI_Comm, MPI_Status *);
int PMPI_Type_contiguous(int, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_vector(int, int, int, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_hvector(int, int, MPI_Aint, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_indexed(int, int *, int *, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_hindexed(int, int *, MPI_Aint *, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_struct(int, int *, MPI_Aint *, MPI_Datatype *, MPI_Datatype *);
int PMPI_Address(void*, MPI_Aint *);
int PMPI_Type_extent(MPI_Datatype, MPI_Aint *);
int PMPI_Type_size(MPI_Datatype, int *);
int PMPI_Type_lb(MPI_Datatype, MPI_Aint *);
int PMPI_Type_ub(MPI_Datatype, MPI_Aint *);
int PMPI_Type_commit(MPI_Datatype *);
int PMPI_Type_free(MPI_Datatype *);
int PMPI_Get_elements(MPI_Status *, MPI_Datatype, int *);
int PMPI_Pack(void*, int, MPI_Datatype, void *, int, int *, MPI_Comm);
int PMPI_Unpack(void*, int, int *, void *, int, MPI_Datatype, MPI_Comm);
int PMPI_Pack_size(int, MPI_Datatype, MPI_Comm, int *);
int PMPI_Barrier(MPI_Comm );
int PMPI_Bcast(void* buffer, int, MPI_Datatype, int, MPI_Comm );
int PMPI_Gather(void* , int, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int PMPI_Gatherv(void* , int, MPI_Datatype, void*, int *, int *, MPI_Datatype, int, MPI_Comm);
int PMPI_Scatter(void* , int, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int PMPI_Scatterv(void* , int *, int *displs, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int PMPI_Allgather(void* , int, MPI_Datatype, void*, int, MPI_Datatype, MPI_Comm);
int PMPI_Allgatherv(void* , int, MPI_Datatype, void*, int *, int *, MPI_Datatype, MPI_Comm);
int PMPI_Alltoall(void* , int, MPI_Datatype, void*, int, MPI_Datatype, MPI_Comm);
int PMPI_Alltoallv(void* , int *, int *, MPI_Datatype, void*, int *, int *, MPI_Datatype, MPI_Comm);
int PMPI_Reduce(void* , void*, int, MPI_Datatype, MPI_Op, int, MPI_Comm);
int PMPI_Op_create(MPI_User_function *, int, MPI_Op *);
int PMPI_Op_free( MPI_Op *);
int PMPI_Allreduce(void* , void*, int, MPI_Datatype, MPI_Op, MPI_Comm);
int PMPI_Reduce_scatter(void* , void*, int *, MPI_Datatype, MPI_Op, MPI_Comm);
int PMPI_Scan(void* , void*, int, MPI_Datatype, MPI_Op, MPI_Comm );
int PMPI_Group_size(MPI_Group, int *);
int PMPI_Group_rank(MPI_Group, int *);
int PMPI_Group_translate_ranks (MPI_Group, int, int *, MPI_Group, int *);
int PMPI_Group_compare(MPI_Group, MPI_Group, int *);
int PMPI_Comm_group(MPI_Comm, MPI_Group *);
int PMPI_Group_union(MPI_Group, MPI_Group, MPI_Group *);
int PMPI_Group_intersection(MPI_Group, MPI_Group, MPI_Group *);
int PMPI_Group_difference(MPI_Group, MPI_Group, MPI_Group *);
int PMPI_Group_incl(MPI_Group, int, int *, MPI_Group *);
int PMPI_Group_excl(MPI_Group, int, int *, MPI_Group *);
int PMPI_Group_range_incl(MPI_Group, int, int [][3], MPI_Group *);
int PMPI_Group_range_excl(MPI_Group, int, int [][3], MPI_Group *);
int PMPI_Group_free(MPI_Group *);
int PMPI_Comm_size(MPI_Comm, int *);
int PMPI_Comm_rank(MPI_Comm, int *);
int PMPI_Comm_compare(MPI_Comm, MPI_Comm, int *);
int PMPI_Comm_dup(MPI_Comm, MPI_Comm *);
int PMPI_Comm_create(MPI_Comm, MPI_Group, MPI_Comm *);
int PMPI_Comm_split(MPI_Comm, int, int, MPI_Comm *);
int PMPI_Comm_free(MPI_Comm *);
int PMPI_Comm_test_inter(MPI_Comm, int *);
int PMPI_Comm_remote_size(MPI_Comm, int *);
int PMPI_Comm_remote_group(MPI_Comm, MPI_Group *);
int PMPI_Intercomm_create(MPI_Comm, int, MPI_Comm, int, int, MPI_Comm *);
int PMPI_Intercomm_merge(MPI_Comm, int, MPI_Comm *);
int PMPI_Keyval_create(MPI_Copy_function *, MPI_Delete_function *, int *, void*);
int PMPI_Keyval_free(int *);
int PMPI_Attr_put(MPI_Comm, int, void*);
int PMPI_Attr_get(MPI_Comm, int, void *, int *);
int PMPI_Attr_delete(MPI_Comm, int);
int PMPI_Topo_test(MPI_Comm, int *);
int PMPI_Cart_create(MPI_Comm, int, int *, int *, int, MPI_Comm *);
int PMPI_Dims_create(int, int, int *);
int PMPI_Graph_create(MPI_Comm, int, int *, int *, int, MPI_Comm *);
int PMPI_Graphdims_get(MPI_Comm, int *, int *);
int PMPI_Graph_get(MPI_Comm, int, int, int *, int *);
int PMPI_Cartdim_get(MPI_Comm, int *);
int PMPI_Cart_get(MPI_Comm, int, int *, int *, int *);
int PMPI_Cart_rank(MPI_Comm, int *, int *);
int PMPI_Cart_coords(MPI_Comm, int, int, int *);
int PMPI_Graph_neighbors_count(MPI_Comm, int, int *);
int PMPI_Graph_neighbors(MPI_Comm, int, int, int *);
int PMPI_Cart_shift(MPI_Comm, int, int, int *, int *);
int PMPI_Cart_sub(MPI_Comm, int *, MPI_Comm *);
int PMPI_Cart_map(MPI_Comm, int, int *, int *, int *);
int PMPI_Graph_map(MPI_Comm, int, int *, int *, int *);
int PMPI_Get_processor_name(char *, int *);
int PMPI_Get_version(int *, int *);
int PMPI_Errhandler_create(MPI_Handler_function *, MPI_Errhandler *);
int PMPI_Errhandler_set(MPI_Comm, MPI_Errhandler);
int PMPI_Errhandler_get(MPI_Comm, MPI_Errhandler *);
int PMPI_Errhandler_free(MPI_Errhandler *);
int PMPI_Error_string(int, char *, int *);
int PMPI_Error_class(int, int *);

int PMPI_Type_get_envelope(MPI_Datatype, int *, int *, int *, int *);


int PMPI_Init(int *, char ***);
int PMPI_Finalize(void);
int PMPI_Initialized(int *);
int PMPI_Abort(MPI_Comm, int);

int PMPI_Pcontrol(const int, ...);




int PMPI_Close_port(char *);
int PMPI_Comm_accept(char *, MPI_Info, int, MPI_Comm, MPI_Comm *);
int PMPI_Comm_connect(char *, MPI_Info, int, MPI_Comm, MPI_Comm *);
int PMPI_Comm_disconnect(MPI_Comm *);
int PMPI_Comm_get_parent(MPI_Comm *);
int PMPI_Comm_join(int, MPI_Comm *);
int PMPI_Comm_spawn(char *, char *[], int, MPI_Info, int, MPI_Comm, MPI_Comm *,
                   int []);
int PMPI_Comm_spawn_multiple(int, char *[], char **[], int [], MPI_Info [], int,
       MPI_Comm, MPI_Comm *, int []);
int PMPI_Lookup_name(char *, MPI_Info, char *);
int PMPI_Open_port(MPI_Info, char *);
int PMPI_Publish_name(char *, MPI_Info, char *);
int PMPI_Unpublish_name(char *, MPI_Info, char *);


int PMPI_Accumulate(void *, int, MPI_Datatype, int, MPI_Aint, int,
     MPI_Datatype, MPI_Op, MPI_Win);
int PMPI_Get(void *, int, MPI_Datatype, int, MPI_Aint, int, MPI_Datatype,
     MPI_Win);
int PMPI_Put(void *, int, MPI_Datatype, int, MPI_Aint, int, MPI_Datatype,
     MPI_Win);
int PMPI_Win_complete(MPI_Win);
int PMPI_Win_create(void *, MPI_Aint, int, MPI_Info, MPI_Comm, MPI_Win *);
int PMPI_Win_fence(int, MPI_Win);
int PMPI_Win_free(MPI_Win *);
int PMPI_Win_get_group(MPI_Win, MPI_Group *);
int PMPI_Win_lock(int, int, int, MPI_Win);
int PMPI_Win_post(MPI_Group, int, MPI_Win);
int PMPI_Win_start(MPI_Group, int, MPI_Win);
int PMPI_Win_test(MPI_Win, int *);
int PMPI_Win_unlock(int, MPI_Win);
int PMPI_Win_wait(MPI_Win);


int PMPI_Alltoallw(void *, int [], int [], MPI_Datatype [], void *, int [],
    int [], MPI_Datatype [], MPI_Comm);
int PMPI_Exscan(void *, void *, int, MPI_Datatype, MPI_Op, MPI_Comm) ;


int PMPI_Add_error_class(int *);
int PMPI_Add_error_code(int, int *);
int PMPI_Add_error_string(int, char *);
int PMPI_Comm_call_errhandler(MPI_Comm, int);
int PMPI_Comm_create_keyval(MPI_Comm_copy_attr_function *,
                           MPI_Comm_delete_attr_function *, int *, void *);
int PMPI_Comm_delete_attr(MPI_Comm, int);
int PMPI_Comm_free_keyval(int *);
int PMPI_Comm_get_attr(MPI_Comm, int, void *, int *);
int PMPI_Comm_get_name(MPI_Comm, char *, int *);
int PMPI_Comm_set_attr(MPI_Comm, int, void *);
int PMPI_Comm_set_name(MPI_Comm, char *);
int PMPI_File_call_errhandler(MPI_File, int);
int PMPI_Grequest_complete(MPI_Request);
int PMPI_Grequest_start(MPI_Grequest_query_function *,
                       MPI_Grequest_free_function *,
                       MPI_Grequest_cancel_function *, void *, MPI_Request *);
int PMPI_Init_thread(int *, char ***, int, int *);
int PMPI_Is_thread_main(int *);
int PMPI_Query_thread(int *);
int PMPI_Status_set_cancelled(MPI_Status *, int);
int PMPI_Status_set_elements(MPI_Status *, MPI_Datatype, int);
int PMPI_Type_create_keyval(MPI_Type_copy_attr_function *,
                           MPI_Type_delete_attr_function *, int *, void *);
int PMPI_Type_delete_attr(MPI_Datatype, int);
int PMPI_Type_dup(MPI_Datatype, MPI_Datatype *);
int PMPI_Type_free_keyval(int *);
int PMPI_Type_get_attr(MPI_Datatype, int, void *, int *);
int PMPI_Type_get_contents(MPI_Datatype, int, int, int, int [], MPI_Aint [],
                          MPI_Datatype []);
int PMPI_Type_get_envelope(MPI_Datatype, int *, int *, int *, int *);
int PMPI_Type_get_name(MPI_Datatype, char *, int *);
int PMPI_Type_set_attr(MPI_Datatype, int, void *);
int PMPI_Type_set_name(MPI_Datatype, char *);
int PMPI_Type_match_size( int, int, MPI_Datatype *);
int PMPI_Win_call_errhandler(MPI_Win, int);
int PMPI_Win_create_keyval(MPI_Win_copy_attr_function *,
                         MPI_Win_delete_attr_function *, int *, void *);
int PMPI_Win_delete_attr(MPI_Win, int);
int PMPI_Win_free_keyval(int *);
int PMPI_Win_get_attr(MPI_Win, int, void *, int *);
int PMPI_Win_get_name(MPI_Win, char *, int *);
int PMPI_Win_set_attr(MPI_Win, int, void *);
int PMPI_Win_set_name(MPI_Win, char *);




int PMPI_Type_create_f90_integer( int, MPI_Datatype * );
int PMPI_Type_create_f90_real( int, int, MPI_Datatype * );
int PMPI_Type_create_f90_complex( int, int, MPI_Datatype * );


int PMPI_Alloc_mem(MPI_Aint, MPI_Info info, void *baseptr);
int PMPI_Comm_create_errhandler(MPI_Comm_errhandler_fn *, MPI_Errhandler *);
int PMPI_Comm_get_errhandler(MPI_Comm, MPI_Errhandler *);
int PMPI_Comm_set_errhandler(MPI_Comm, MPI_Errhandler);
int PMPI_File_create_errhandler(MPI_File_errhandler_fn *, MPI_Errhandler *);
int PMPI_File_get_errhandler(MPI_File, MPI_Errhandler *);
int PMPI_File_set_errhandler(MPI_File, MPI_Errhandler);
int PMPI_Finalized(int *);
int PMPI_Free_mem(void *);
int PMPI_Get_address(void *, MPI_Aint *);
int PMPI_Info_create(MPI_Info *);
int PMPI_Info_delete(MPI_Info, char *);
int PMPI_Info_dup(MPI_Info, MPI_Info *);
int PMPI_Info_free(MPI_Info *info);
int PMPI_Info_get(MPI_Info, char *, int, char *, int *);
int PMPI_Info_get_nkeys(MPI_Info, int *);
int PMPI_Info_get_nthkey(MPI_Info, int, char *);
int PMPI_Info_get_valuelen(MPI_Info, char *, int *, int *);
int PMPI_Info_set(MPI_Info, char *, char *);
int PMPI_Pack_external(char *, void *, int, MPI_Datatype, void *, MPI_Aint,
                      MPI_Aint *);
int PMPI_Pack_external_size(char *, int, MPI_Datatype, MPI_Aint *);
int PMPI_Request_get_status(MPI_Request, int *, MPI_Status *);
int PMPI_Status_c2f(MPI_Status *, MPI_Fint *);
int PMPI_Status_f2c(MPI_Fint *, MPI_Status *);
int PMPI_Type_create_darray(int, int, int, int [], int [], int [], int [], int,
                           MPI_Datatype, MPI_Datatype *);
int PMPI_Type_create_hindexed(int, int [], MPI_Aint [], MPI_Datatype,
                             MPI_Datatype *);
int PMPI_Type_create_hvector(int, int, MPI_Aint, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_create_indexed_block(int, int, int [], MPI_Datatype,
                                  MPI_Datatype *);
int PMPI_Type_create_resized(MPI_Datatype, MPI_Aint, MPI_Aint, MPI_Datatype *);
int PMPI_Type_create_struct(int, int [], MPI_Aint [], MPI_Datatype [],
                           MPI_Datatype *);
int PMPI_Type_create_subarray(int, int [], int [], int [], int, MPI_Datatype,
                             MPI_Datatype *);
int PMPI_Type_get_extent(MPI_Datatype, MPI_Aint *, MPI_Aint *);
int PMPI_Type_get_true_extent(MPI_Datatype, MPI_Aint *, MPI_Aint *);
int PMPI_Unpack_external(char *, void *, MPI_Aint, MPI_Aint *, void *, int,
                        MPI_Datatype);
int PMPI_Win_create_errhandler(MPI_Win_errhandler_fn *, MPI_Errhandler *);
int PMPI_Win_get_errhandler(MPI_Win, MPI_Errhandler *);
int PMPI_Win_set_errhandler(MPI_Win, MPI_Errhandler);
# 1129 "/usr/local/include/mpi.h" 3
# 1 "/usr/local/include/mpio.h" 1 3
# 13 "/usr/local/include/mpio.h" 3
# 1 "/usr/local/include/mpi.h" 1 3
# 14 "/usr/local/include/mpio.h" 2 3
# 119 "/usr/local/include/mpio.h" 3
int MPI_File_open(MPI_Comm, char *, int, MPI_Info, MPI_File *);
int MPI_File_close(MPI_File *);
int MPI_File_delete(char *, MPI_Info);
int MPI_File_set_size(MPI_File, MPI_Offset);
int MPI_File_preallocate(MPI_File, MPI_Offset);
int MPI_File_get_size(MPI_File, MPI_Offset *);
int MPI_File_get_group(MPI_File, MPI_Group *);
int MPI_File_get_amode(MPI_File, int *);
int MPI_File_set_info(MPI_File, MPI_Info);
int MPI_File_get_info(MPI_File, MPI_Info *);


int MPI_File_set_view(MPI_File, MPI_Offset, MPI_Datatype,
          MPI_Datatype, char *, MPI_Info);
int MPI_File_get_view(MPI_File, MPI_Offset *,
                 MPI_Datatype *, MPI_Datatype *, char *);


int MPI_File_read_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int MPI_File_read_at_all(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int MPI_File_write_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int MPI_File_write_at_all(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);





int MPI_File_iread_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Request *);
int MPI_File_iwrite_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Request *);


int MPI_File_read(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_read_all(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_write(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_write_all(MPI_File, void *, int, MPI_Datatype, MPI_Status *);





int MPI_File_iread(MPI_File, void *, int, MPI_Datatype, MPI_Request *);
int MPI_File_iwrite(MPI_File, void *, int, MPI_Datatype, MPI_Request *);

int MPI_File_seek(MPI_File, MPI_Offset, int);
int MPI_File_get_position(MPI_File, MPI_Offset *);
int MPI_File_get_byte_offset(MPI_File, MPI_Offset, MPI_Offset *);


int MPI_File_read_shared(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_write_shared(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_iread_shared(MPI_File, void *, int, MPI_Datatype, MPI_Request *);
int MPI_File_iwrite_shared(MPI_File, void *, int,
      MPI_Datatype, MPI_Request *);
int MPI_File_read_ordered(MPI_File, void *, int,
                          MPI_Datatype, MPI_Status *);
int MPI_File_write_ordered(MPI_File, void *, int,
                           MPI_Datatype, MPI_Status *);
int MPI_File_seek_shared(MPI_File, MPI_Offset, int);
int MPI_File_get_position_shared(MPI_File, MPI_Offset *);


int MPI_File_read_at_all_begin(MPI_File, MPI_Offset, void *,
                               int, MPI_Datatype);
int MPI_File_read_at_all_end(MPI_File, void *, MPI_Status *);
int MPI_File_write_at_all_begin(MPI_File, MPI_Offset, void *,
                                int, MPI_Datatype);
int MPI_File_write_at_all_end(MPI_File, void *, MPI_Status *);
int MPI_File_read_all_begin(MPI_File, void *, int, MPI_Datatype);
int MPI_File_read_all_end(MPI_File, void *, MPI_Status *);
int MPI_File_write_all_begin(MPI_File, void *, int, MPI_Datatype);
int MPI_File_write_all_end(MPI_File, void *, MPI_Status *);
int MPI_File_read_ordered_begin(MPI_File, void *, int, MPI_Datatype);
int MPI_File_read_ordered_end(MPI_File, void *, MPI_Status *);
int MPI_File_write_ordered_begin(MPI_File, void *, int, MPI_Datatype);
int MPI_File_write_ordered_end(MPI_File, void *, MPI_Status *);


int MPI_File_get_type_extent(MPI_File, MPI_Datatype, MPI_Aint *);


int MPI_Register_datarep(char *,
    MPI_Datarep_conversion_function *,
    MPI_Datarep_conversion_function *,
    MPI_Datarep_extent_function *,
    void *);


int MPI_File_set_atomicity(MPI_File, int);
int MPI_File_get_atomicity(MPI_File, int *);
int MPI_File_sync(MPI_File);
# 248 "/usr/local/include/mpio.h" 3
MPI_File MPI_File_f2c(MPI_Fint);
MPI_Fint MPI_File_c2f(MPI_File);





int MPI_Test(MPI_Request *, int *, MPI_Status *);
int MPI_Wait(MPI_Request *, MPI_Status *);
int MPIO_Testall(int, MPI_Request *, int *, MPI_Status *);
int MPIO_Waitall(int, MPI_Request *, MPI_Status *);
int MPIO_Testany(int, MPI_Request *, int *, int *, MPI_Status *);
int MPIO_Waitany(int, MPI_Request *, int *, MPI_Status *);
int MPIO_Waitsome(int, MPI_Request *, int *, int *, MPI_Status *);
int MPIO_Testsome(int, MPI_Request *, int *, int *, MPI_Status *);

MPI_Fint MPIO_Request_c2f(MPI_Request);
MPI_Request MPIO_Request_f2c(MPI_Fint);
# 304 "/usr/local/include/mpio.h" 3
int PMPI_File_open(MPI_Comm, char *, int, MPI_Info, MPI_File *);
int PMPI_File_close(MPI_File *);
int PMPI_File_delete(char *, MPI_Info);
int PMPI_File_set_size(MPI_File, MPI_Offset);
int PMPI_File_preallocate(MPI_File, MPI_Offset);
int PMPI_File_get_size(MPI_File, MPI_Offset *);
int PMPI_File_get_group(MPI_File, MPI_Group *);
int PMPI_File_get_amode(MPI_File, int *);
int PMPI_File_set_info(MPI_File, MPI_Info);
int PMPI_File_get_info(MPI_File, MPI_Info *);


int PMPI_File_set_view(MPI_File, MPI_Offset,
    MPI_Datatype, MPI_Datatype, char *, MPI_Info);
int PMPI_File_get_view(MPI_File, MPI_Offset *,
      MPI_Datatype *, MPI_Datatype *, char *);


int PMPI_File_read_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int PMPI_File_read_at_all(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_at_all(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);





int PMPI_File_iread_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Request *);
int PMPI_File_iwrite_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Request *);


int PMPI_File_read(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_read_all(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_write(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_all(MPI_File, void *, int, MPI_Datatype, MPI_Status *);





int PMPI_File_iread(MPI_File, void *, int, MPI_Datatype, MPI_Request *);
int PMPI_File_iwrite(MPI_File, void *, int, MPI_Datatype, MPI_Request *);

int PMPI_File_seek(MPI_File, MPI_Offset, int);
int PMPI_File_get_position(MPI_File, MPI_Offset *);
int PMPI_File_get_byte_offset(MPI_File, MPI_Offset, MPI_Offset *);


int PMPI_File_read_shared(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_shared(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_iread_shared(MPI_File, void *, int,
      MPI_Datatype, MPI_Request *);
int PMPI_File_iwrite_shared(MPI_File, void *, int,
       MPI_Datatype, MPI_Request *);
int PMPI_File_read_ordered(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_ordered(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_seek_shared(MPI_File, MPI_Offset, int);
int PMPI_File_get_position_shared(MPI_File, MPI_Offset *);


int PMPI_File_read_at_all_begin(MPI_File, MPI_Offset, void *,
                               int, MPI_Datatype);
int PMPI_File_read_at_all_end(MPI_File, void *, MPI_Status *);
int PMPI_File_write_at_all_begin(MPI_File, MPI_Offset, void *,
                                int, MPI_Datatype);
int PMPI_File_write_at_all_end(MPI_File, void *, MPI_Status *);
int PMPI_File_read_all_begin(MPI_File, void *, int, MPI_Datatype);
int PMPI_File_read_all_end(MPI_File, void *, MPI_Status *);
int PMPI_File_write_all_begin(MPI_File, void *, int, MPI_Datatype);
int PMPI_File_write_all_end(MPI_File, void *, MPI_Status *);
int PMPI_File_read_ordered_begin(MPI_File, void *, int, MPI_Datatype);
int PMPI_File_read_ordered_end(MPI_File, void *, MPI_Status *);
int PMPI_File_write_ordered_begin(MPI_File, void *, int, MPI_Datatype);
int PMPI_File_write_ordered_end(MPI_File, void *, MPI_Status *);


int PMPI_File_get_type_extent(MPI_File, MPI_Datatype, MPI_Aint *);


int PMPI_Register_datarep(char *,
    MPI_Datarep_conversion_function *,
    MPI_Datarep_conversion_function *,
    MPI_Datarep_extent_function *,
    void *);


int PMPI_File_set_atomicity(MPI_File, int);
int PMPI_File_get_atomicity(MPI_File, int *);
int PMPI_File_sync(MPI_File);
# 418 "/usr/local/include/mpio.h" 3
MPI_File PMPI_File_f2c(MPI_Fint);
MPI_Fint PMPI_File_c2f(MPI_File);




int PMPI_Test(MPI_Request *, int *, MPI_Status *);
int PMPI_Wait(MPI_Request *, MPI_Status *);
int PMPIO_Testall(int, MPI_Request *, int *, MPI_Status *);
int PMPIO_Waitall(int, MPI_Request *, MPI_Status *);
int PMPIO_Testany(int, MPI_Request *, int *, int *, MPI_Status *);
int PMPIO_Waitany(int, MPI_Request *, int *, MPI_Status *);
int PMPIO_Waitsome(int, MPI_Request *, int *, int *, MPI_Status *);
int PMPIO_Testsome(int, MPI_Request *, int *, int *, MPI_Status *);
MPI_Fint PMPIO_Request_c2f(MPI_Request);
MPI_Request PMPIO_Request_f2c(MPI_Fint);
# 1130 "/usr/local/include/mpi.h" 2 3
# 1153 "/usr/local/include/mpi.h" 3
typedef int (MPIX_Grequest_poll_function)(void *, MPI_Status *);
typedef int (MPIX_Grequest_wait_function)(int, void **, double, MPI_Status *);

typedef int MPIX_Grequest_class;
int MPIX_Grequest_class_create(MPI_Grequest_query_function *,
                       MPI_Grequest_free_function *,
                       MPI_Grequest_cancel_function *,
         MPIX_Grequest_poll_function *,
         MPIX_Grequest_wait_function *,
         MPIX_Grequest_class *);

int MPIX_Grequest_class_allocate(MPIX_Grequest_class,
         void *,
         MPI_Request *);

int MPIX_Grequest_start(MPI_Grequest_query_function *,
                       MPI_Grequest_free_function *,
                       MPI_Grequest_cancel_function *,
         MPIX_Grequest_poll_function *,
         MPIX_Grequest_wait_function *, void *, MPI_Request *);

int PMPIX_Grequest_class_create(MPI_Grequest_query_function *,
                       MPI_Grequest_free_function *,
                       MPI_Grequest_cancel_function *,
         MPIX_Grequest_poll_function *,
         MPIX_Grequest_wait_function *,
         MPIX_Grequest_class *);

int PMPIX_Grequest_class_allocate(MPIX_Grequest_class,
         void *,
         MPI_Request *);
int PMPIX_Grequest_start(MPI_Grequest_query_function *,
                       MPI_Grequest_free_function *,
                       MPI_Grequest_cancel_function *,
         MPIX_Grequest_poll_function *,
         MPIX_Grequest_wait_function *, void *, MPI_Request *);
# 6 "piggyback.c" 2
# 1 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h" 1
# 12 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h"
# 1 "/home/avo/research/DMA/pnmpi/include/pnmpi.h" 1





# 1 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h" 1
# 7 "/home/avo/research/DMA/pnmpi/include/pnmpi.h" 2
# 13 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h" 2
# 52 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h"
typedef int PNMPI_modHandle_t;

typedef int (*PNMPI_Service_Fct_t)(void*);
typedef int (*PNMPI_RegistrationPoint_t)(void);

typedef struct PNMPI_Service_descriptor_d
{
  char name[30];
  char sig[20];
  PNMPI_Service_Fct_t *fct;
} PNMPI_Service_descriptor_t;

typedef union PNMPI_Global_Addr_d
{
  char *c;
  short *s;
  int *i;
  unsigned int *u;
  long *l;
  double *d;
  float *f;
  void **p;
} PNMPI_Global_Addr_t;

typedef struct PNMPI_Global_descriptor_d
{
  char name[30];
  char sig;
  PNMPI_Global_Addr_t addr;
} PNMPI_Global_descriptor_t;
# 91 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h"
int PNMPI_RegistrationPoint(void);

int PNMPI_Service_RegisterModule(char *name);
int PNMPI_Service_RegisterService(PNMPI_Service_descriptor_t *service);
int PNMPI_Service_RegisterGlobal(PNMPI_Global_descriptor_t *global);

int PNMPI_Service_GetModuleByName(char *name, PNMPI_modHandle_t *handle);

int PNMPI_Service_GetModuleSelf(PNMPI_modHandle_t *handle);

int PNMPI_Service_GetStackByName(char *name, PNMPI_modHandle_t *handle);

int PNMPI_Service_GetServiceByName(PNMPI_modHandle_t handle,
       char *name, char *sig,
       PNMPI_Service_descriptor_t *serv);

int PNMPI_Service_GetGlobalByName(PNMPI_modHandle_t handle,
      char *name, char sig,
      PNMPI_Global_descriptor_t *serv);

int PNMPI_Service_GetArgument(PNMPI_modHandle_t handle, char *name, char **val);





# 1 "/home/avo/research/DMA/pnmpi/include/newstack.h" 1

int PMPI_Abort_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Accumulate_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8);

int PMPI_Add_error_class_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Add_error_code_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Add_error_string_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Address_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Allgather_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Allgatherv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int PMPI_Alloc_mem_NewStack(PNMPI_modHandle_t stack , MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr);

int PMPI_Allreduce_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Alltoall_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Alltoallv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int PMPI_Alltoallw_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8);

int PMPI_Attr_delete_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Attr_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Attr_put_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int PMPI_Barrier_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0);

int PMPI_Bcast_NewStack(PNMPI_modHandle_t stack , void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4);

int PMPI_Bsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Bsend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Buffer_attach_NewStack(PNMPI_modHandle_t stack , void * buffer, int _pnmpi_arg_1);

int PMPI_Buffer_detach_NewStack(PNMPI_modHandle_t stack , void * buffer, int * _pnmpi_arg_1);

int PMPI_Cancel_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int PMPI_Cart_coords_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Cart_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int PMPI_Cartdim_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Cart_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Cart_map_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Cart_rank_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Cart_shift_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Cart_sub_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int PMPI_Close_port_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0);

int PMPI_Comm_accept_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int PMPI_Comm_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Comm_compare_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Comm_connect_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int PMPI_Comm_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int PMPI_Comm_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm_errhandler_fn * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Comm_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int PMPI_Comm_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Comm_disconnect_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int PMPI_Comm_dup_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int PMPI_Comm_free_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int PMPI_Comm_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Comm_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Comm_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Comm_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Comm_get_parent_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int PMPI_Comm_group_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int PMPI_Comm_join_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int PMPI_Comm_rank_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Comm_remote_group_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int PMPI_Comm_remote_size_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Comm_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int PMPI_Comm_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int PMPI_Comm_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Comm_size_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Comm_spawn_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[]);

int PMPI_Comm_spawn_multiple_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[]);

int PMPI_Comm_split_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3);

int PMPI_Comm_test_inter_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Dims_create_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Errhandler_create_NewStack(PNMPI_modHandle_t stack , MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Errhandler_free_NewStack(PNMPI_modHandle_t stack , MPI_Errhandler * _pnmpi_arg_0);

int PMPI_Errhandler_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Errhandler_set_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int PMPI_Error_class_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Error_string_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Exscan_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_File_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_File_close_NewStack(PNMPI_modHandle_t stack , MPI_File * _pnmpi_arg_0);

int PMPI_File_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File_errhandler_fn * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_File_delete_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int PMPI_File_get_amode_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_File_get_atomicity_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_File_get_byte_offset_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2);

int PMPI_File_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_File_get_group_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int PMPI_File_get_info_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int PMPI_File_get_position_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int PMPI_File_get_position_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int PMPI_File_get_size_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int PMPI_File_get_type_extent_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int PMPI_File_get_view_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4);

int PMPI_File_iread_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_File_iread_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int PMPI_File_iread_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_File_iwrite_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_File_iwrite_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int PMPI_File_iwrite_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_File_open_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4);

int PMPI_File_preallocate_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int PMPI_File_read_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_read_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_read_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int PMPI_File_read_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_read_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int PMPI_File_read_at_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int PMPI_File_read_at_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int PMPI_File_read_at_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_read_ordered_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_read_ordered_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int PMPI_File_read_ordered_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_read_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_seek_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int PMPI_File_seek_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int PMPI_File_set_atomicity_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_File_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int PMPI_File_set_info_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int PMPI_File_set_size_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int PMPI_File_set_view_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5);

int PMPI_File_sync_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0);

int PMPI_File_write_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_write_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_write_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int PMPI_File_write_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_write_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int PMPI_File_write_at_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int PMPI_File_write_at_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int PMPI_File_write_at_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_write_ordered_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_write_ordered_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int PMPI_File_write_ordered_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_write_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Finalize_NewStack(PNMPI_modHandle_t stack );

int PMPI_Finalized_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Free_mem_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0);

int PMPI_Gather_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int PMPI_Gatherv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int PMPI_Get_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int PMPI_Get_address_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Get_count_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Get_elements_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Get_processor_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Get_version_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Graph_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int PMPI_Graphdims_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Graph_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Graph_map_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Graph_neighbors_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Graph_neighbors_count_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Grequest_complete_NewStack(PNMPI_modHandle_t stack , MPI_Request _pnmpi_arg_0);

int PMPI_Grequest_start_NewStack(PNMPI_modHandle_t stack , MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_Group_compare_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Group_difference_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int PMPI_Group_excl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int PMPI_Group_free_NewStack(PNMPI_modHandle_t stack , MPI_Group * _pnmpi_arg_0);

int PMPI_Group_incl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int PMPI_Group_intersection_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int PMPI_Group_range_excl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int PMPI_Group_range_incl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int PMPI_Group_rank_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Group_size_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Group_translate_ranks_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Group_union_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int PMPI_Ibsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Info_create_NewStack(PNMPI_modHandle_t stack , MPI_Info * _pnmpi_arg_0);

int PMPI_Info_delete_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Info_dup_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int PMPI_Info_free_NewStack(PNMPI_modHandle_t stack , MPI_Info * info);

int PMPI_Info_get_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Info_get_nkeys_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Info_get_nthkey_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Info_get_valuelen_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Info_set_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Init_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, char * * * _pnmpi_arg_1);

int PMPI_Initialized_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Init_thread_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Intercomm_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int PMPI_Intercomm_merge_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int PMPI_Iprobe_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Irecv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Irsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Isend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Issend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Is_thread_main_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Keyval_create_NewStack(PNMPI_modHandle_t stack , MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int PMPI_Keyval_free_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Lookup_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Op_create_NewStack(PNMPI_modHandle_t stack , MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2);

int PMPI_Open_port_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Op_free_NewStack(PNMPI_modHandle_t stack , MPI_Op * _pnmpi_arg_0);

int PMPI_Pack_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Pack_external_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6);

int PMPI_Pack_external_size_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3);

int PMPI_Pack_size_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Probe_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int PMPI_Publish_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Put_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int PMPI_Query_thread_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Recv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6);

int PMPI_Recv_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Reduce_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Reduce_scatter_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Register_datarep_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4);

int PMPI_Request_free_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int PMPI_Request_get_status_NewStack(PNMPI_modHandle_t stack , MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_Rsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Rsend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Scan_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Scatter_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int PMPI_Scatterv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int PMPI_Send_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Send_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Sendrecv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11);

int PMPI_Sendrecv_replace_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8);

int PMPI_Ssend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Ssend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Start_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int PMPI_Startall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1);

int PMPI_Status_set_cancelled_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Status_set_elements_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2);

int PMPI_Test_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_Testall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int PMPI_Testany_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Test_cancelled_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Testsome_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Topo_test_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Type_commit_NewStack(PNMPI_modHandle_t stack , MPI_Datatype * _pnmpi_arg_0);

int PMPI_Type_contiguous_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int PMPI_Type_create_darray_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9);

int PMPI_Type_create_f90_complex_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int PMPI_Type_create_f90_integer_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int PMPI_Type_create_f90_real_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int PMPI_Type_create_hindexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_create_hvector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_create_indexed_block_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int PMPI_Type_create_resized_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3);

int PMPI_Type_create_struct_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_create_subarray_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6);

int PMPI_Type_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Type_dup_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int PMPI_Type_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Type_free_NewStack(PNMPI_modHandle_t stack , MPI_Datatype * _pnmpi_arg_0);

int PMPI_Type_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Type_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Type_get_contents_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[]);

int PMPI_Type_get_envelope_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Type_get_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int PMPI_Type_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Type_get_true_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int PMPI_Type_hindexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_hvector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_indexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_lb_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Type_match_size_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int PMPI_Type_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int PMPI_Type_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Type_size_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Type_struct_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_ub_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Type_vector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Unpack_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Unpack_external_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6);

int PMPI_Unpublish_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Wait_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1);

int PMPI_Waitall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_Waitany_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int PMPI_Waitsome_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Win_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Win_complete_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0);

int PMPI_Win_create_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5);

int PMPI_Win_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win_errhandler_fn * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Win_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int PMPI_Win_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Win_fence_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int PMPI_Win_free_NewStack(PNMPI_modHandle_t stack , MPI_Win * _pnmpi_arg_0);

int PMPI_Win_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Win_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Win_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Win_get_group_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int PMPI_Win_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Win_lock_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3);

int PMPI_Win_post_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int PMPI_Win_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int PMPI_Win_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int PMPI_Win_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Win_start_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int PMPI_Win_test_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Win_unlock_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int PMPI_Win_wait_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0);

double PMPI_Wtick_NewStack(PNMPI_modHandle_t stack );

double PMPI_Wtime_NewStack(PNMPI_modHandle_t stack );
# 118 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h" 2
# 134 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h"
void PNMPI_Service_log(char *format,...);
# 157 "/home/avo/research/DMA/pnmpi/include/pnmpimod.h"
int PNMPI_Service_QueryModule(char *name, int *locinfo);
# 7 "piggyback.c" 2

# 1 "/home/avo/research/DMA/pnmpi/include/requests.h" 1

# 1 "/home/avo/research/DMA/pnmpi/include/status.h" 1
# 42 "/home/avo/research/DMA/pnmpi/include/status.h"
typedef int (*PNMPIMOD_Status_RequestStorage_t)(int);
int PNMPIMOD_Status_RequestStorage(int size);
# 3 "/home/avo/research/DMA/pnmpi/include/requests.h" 2
# 36 "/home/avo/research/DMA/pnmpi/include/requests.h"
typedef struct PNMPIMOD_Requests_Parameters_d
{
  int type;
  void *buf;
  int count;
  MPI_Datatype datatype;
  int node;
  int tag;
  int persistent;
  int active;
  int cancelled;
  MPI_Comm comm;
  MPI_Request inreq;
  char *data;
} PNMPIMOD_Requests_Parameters_t;


typedef long MyReq_t;
# 84 "/home/avo/research/DMA/pnmpi/include/requests.h"
typedef int (*PNMPIMOD_Requests_RequestStorage_t)(int);
int PNMPIMOD_Requests_RequestStorage(int size);

typedef PNMPIMOD_Requests_Parameters_t* (*PNMPIMOD_Requests_MapRequest_t)(MPI_Request);
PNMPIMOD_Requests_Parameters_t* PNMPIMOD_Requests_MapRequest(MPI_Request req);
# 9 "piggyback.c" 2
# 1 "/home/avo/research/DMA/pnmpi/include/comm-mapping.h" 1
# 21 "/home/avo/research/DMA/pnmpi/include/comm-mapping.h"
typedef int (*PNMPIMOD_Comm_Mapping_t)(MPI_Comm,MPI_Comm*);
int PNMPIMOD_Comm_Mapping(MPI_Comm comm, MPI_Comm* comm_out);
# 10 "piggyback.c" 2
# 1 "pb_mod.h" 1

# 1 "/home/avo/research/DMA/pnmpi/include/status.h" 1
# 3 "pb_mod.h" 2
# 22 "pb_mod.h"
typedef int (*PNMPIMOD_Piggyback_t)(int,char*);
typedef int (*PNMPIMOD_Piggyback_Size_t)(int);
# 11 "piggyback.c" 2
# 54 "piggyback.c"
PNMPIMOD_Requests_MapRequest_t PNMPIMOD_requestmap;
PNMPIMOD_Comm_Mapping_t PNMPIMOD_commmap;

static PNMPIMOD_Requests_RequestStorage_t req_add;

static PNMPIMOD_Status_RequestStorage_t status_add;
static int *TotalStatusExtension;

static int request_offset;

static int request_offset_req;
# 85 "piggyback.c"
static int piggyback_offset;
static int *StatusOffsetInRequest;
static int piggyback_size;
static char *pb_outbuffer;
# 543 "piggyback.c"
int PNMPIMOD_Piggyback(int size,char *ptr)
{
  memcpy(pb_outbuffer,ptr,size);;
  return 0;
}

int PNMPIMOD_Piggyback_Size(int size)
{


  piggyback_size=size;
  return 0;
}
# 565 "piggyback.c"
int PNMPI_RegistrationPoint()
{
  int err;
  PNMPI_Service_descriptor_t service;
  PNMPI_Global_descriptor_t global;



  err=PNMPI_Service_RegisterModule("piggyback");
  if (err!=0)
    return 16;

  sprintf(service.name,"piggyback");
  service.fct=(PNMPI_Service_Fct_t*) PNMPIMOD_Piggyback;
  sprintf(service.sig,"ip");
  err=PNMPI_Service_RegisterService(&service);
  if (err!=0)
    return 16;

  sprintf(service.name,"piggyback-size");
  service.fct=(PNMPI_Service_Fct_t*) PNMPIMOD_Piggyback_Size;
  sprintf(service.sig,"i");
  err=PNMPI_Service_RegisterService(&service);
  if (err!=0)
    return 16;

  sprintf(global.name,"piggyback-offset");
  global.addr.i=&piggyback_offset;
  global.sig='i';
  err=PNMPI_Service_RegisterGlobal(&global);
  if (err!=0)
    return 16;

  piggyback_size=4;

  return err;
}






int MPI_Init(int *argc, char ***argv)
{
  int err;
  PNMPI_modHandle_t handle_req,handle_status,handle_comm;



  PNMPI_Service_descriptor_t serv;
  PNMPI_Global_descriptor_t global;
# 645 "piggyback.c"
  err=PNMPI_Service_GetModuleByName("request-storage",&handle_req);
  if (err!=0)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_req,"add-storage","i",&serv);
  if (err!=0)
    return err;
  req_add=(PNMPIMOD_Requests_RequestStorage_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_req,"map-request","r",&serv);
  if (err!=0)
    return err;
  PNMPIMOD_requestmap=(PNMPIMOD_Requests_MapRequest_t) ((void*)serv.fct);

  err=PNMPI_Service_GetGlobalByName(handle_req,"status-offset",'i',&global);
  if (err!=0)
    return err;
  StatusOffsetInRequest=(global.addr.i);




  err=PNMPI_Service_GetModuleByName("status-storage",&handle_status);
  if (err!=0)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_status,"add-storage","i",&serv);
  if (err!=0)
    return err;
  status_add=(PNMPIMOD_Requests_RequestStorage_t) serv.fct;

  err=PNMPI_Service_GetGlobalByName(handle_status,"total-status-extension",'i',&global);
  if (err!=0)
    return err;
  TotalStatusExtension=(global.addr.i);




  request_offset=req_add(sizeof(char*));

  request_offset_req=req_add(sizeof(MPI_Request));
# 701 "piggyback.c"
  err=PNMPI_Service_GetModuleByName("comm-mapping",&handle_comm);
  if (err!=0)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_comm,"comm-map","r",&serv);
  if (err!=0)
    return err;
  PNMPIMOD_commmap=(PNMPIMOD_Comm_Mapping_t) ((void*)serv.fct);



  err=PMPI_Init(argc,argv);

  piggyback_offset=status_add(piggyback_size);
  pb_outbuffer=(char*)malloc(piggyback_size);
  if (pb_outbuffer==((void *)0))
    return 16;

  return err;
}






int MPI_Finalize(void)
{
  return PMPI_Finalize();
}





int MPI_Send(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
 
 
  ;
# 757 "piggyback.c"
  int rank;
  MPI_Comm_rank(((MPI_Comm)0x44000000), &rank);
  err=PMPI_Send(buf,count,datatype,dest,tag,comm);
  fprintf(stderr, "rank %d Finished sending, dest= %d, tag = %d\n", rank, dest, tag);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Send(pb_outbuffer,piggyback_size,((MPI_Datatype)0x4c000101),dest,tag,pb_comm);
    fprintf(stderr, "rank %d Finished sending, dest= %d, tag = %d\n", rank, dest, tag);

  }
# 785 "piggyback.c"
  return err;
}

int MPI_Bsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
 
 
  ;
# 809 "piggyback.c"
  err=PMPI_Bsend(buf,count,datatype,dest,tag,comm);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Send(pb_outbuffer,piggyback_size,((MPI_Datatype)0x4c000101),dest,tag,pb_comm);
  }
# 832 "piggyback.c"
  return err;
}

int MPI_Rsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
 
 
  ;
# 856 "piggyback.c"
  err=PMPI_Rsend(buf,count,datatype,dest,tag,comm);
  if (err==0) {
     MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
     err=PMPI_Send(pb_outbuffer,piggyback_size,((MPI_Datatype)0x4c000101),dest,tag,pb_comm);
  }
# 879 "piggyback.c"
  return err;
}

int MPI_Ssend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
 
 
  ;
# 903 "piggyback.c"
  int rank; MPI_Comm_rank (((MPI_Comm)0x44000000), &rank);
  err=PMPI_Ssend(buf,count,datatype,dest,tag,comm);
  fprintf(stderr, "rank %d Start ssending, dest= %d, tag = %d, comm=%d\n", rank, dest, tag,comm);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Ssend(pb_outbuffer,piggyback_size,((MPI_Datatype)0x4c000101),dest,tag,pb_comm);
  }
  fprintf(stderr, "rank %d Finished ssending, dest= %d, tag = %d, comm=%d\n", rank, dest, tag,comm);
# 930 "piggyback.c"
  return err;
}





int MPI_Isend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
 
  void *ptr;
  MPI_Request tmp_request;
 
  ;
# 966 "piggyback.c"
  { ptr=(char*) malloc(piggyback_size); if (ptr==((void *)0)) { return 16; } };
  memcpy(ptr,pb_outbuffer,piggyback_size);;
    err=PMPI_Isend(buf,count,datatype,dest,tag,comm,request);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Isend(ptr,piggyback_size,((MPI_Datatype)0x4c000101),dest,tag,pb_comm,&tmp_request);
  }
  { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((void**) (&(_store->data[request_offset]))))=ptr;};;
  { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((MPI_Request*) (&(_store->data[request_offset_req]))))=tmp_request;};;
# 993 "piggyback.c"
  return err;
}

int MPI_Ibsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
 
  void *ptr;
  MPI_Request tmp_request;
 
  ;
# 1025 "piggyback.c"
  { ptr=(char*) malloc(piggyback_size); if (ptr==((void *)0)) { return 16; } };
  memcpy(ptr,pb_outbuffer,piggyback_size);;
  err=PMPI_Ibsend(buf,count,datatype,dest,tag,comm,request);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Ibsend(ptr,piggyback_size,((MPI_Datatype)0x4c000101),dest,tag,pb_comm,&tmp_request);
  }
  { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((void**) (&(_store->data[request_offset]))))=ptr;};;
  { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((MPI_Request*) (&(_store->data[request_offset_req]))))=tmp_request;};;
# 1052 "piggyback.c"
  return err;
}

int MPI_Irsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
 
  void *ptr;
  MPI_Request tmp_request;
 
  ;
# 1084 "piggyback.c"
  { ptr=(char*) malloc(piggyback_size); if (ptr==((void *)0)) { return 16; } };
  memcpy(ptr,pb_outbuffer,piggyback_size);;
  err=PMPI_Irsend(buf,count,datatype,dest,tag,comm,request);
  if (err==0){
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Isend(ptr,piggyback_size,((MPI_Datatype)0x4c000101),dest,tag,pb_comm,&tmp_request);
  }
  { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((void**) (&(_store->data[request_offset]))))=ptr;};;
  { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((MPI_Request*) (&(_store->data[request_offset_req]))))=tmp_request;};;
# 1111 "piggyback.c"
  return err;
}

int MPI_Issend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
 
  void *ptr;
  MPI_Request tmp_request;
 
  ;
# 1143 "piggyback.c"
  { ptr=(char*) malloc(piggyback_size); if (ptr==((void *)0)) { return 16; } };
  memcpy(ptr,pb_outbuffer,piggyback_size);;
  err=PMPI_Issend(buf,count,datatype,dest,tag,comm,request);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Isend(ptr,piggyback_size,((MPI_Datatype)0x4c000101),dest,tag,pb_comm,&tmp_request);
  }
  { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((void**) (&(_store->data[request_offset]))))=ptr;};;
  { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((MPI_Request*) (&(_store->data[request_offset_req]))))=tmp_request;};;
# 1170 "piggyback.c"
  return err;
}





int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status)
{
  int err;
 
 
 


  MPI_Status status2;
# 1202 "piggyback.c"
  err=PMPI_Recv(buf,count,datatype,source,tag,comm,status);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Recv(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0*0 +piggyback_offset)))),piggyback_size,((MPI_Datatype)0x4c000101),status->MPI_SOURCE,status->MPI_TAG,pb_comm,&status2);
  }
# 1237 "piggyback.c"
  return err;
}





int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
 
  void *ptr;
  MPI_Request tmp_request;
 
 
# 1280 "piggyback.c"
  err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
  if ((source!=(-2)) && (tag!=(-1)) && (err==0))
    {
      { ptr=(char*) malloc(piggyback_size); if (ptr==((void *)0)) { return 16; } };
      MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
      err=PMPI_Irecv(ptr,piggyback_size,((MPI_Datatype)0x4c000101),source,tag,pb_comm,&tmp_request);
      { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((void**) (&(_store->data[request_offset]))))=ptr;};;
      { PNMPIMOD_Requests_Parameters_t* _store; _store=PNMPIMOD_requestmap(*request); (*((MPI_Request*) (&(_store->data[request_offset_req]))))=tmp_request;};;
    }
# 1301 "piggyback.c"
  return err;
}





int MPI_Sendrecv(void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag,
   void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, int recvtag,
   MPI_Comm comm, MPI_Status *status)
{
  int err;
 
 

  MPI_Status status2;

 
 
 
# 1344 "piggyback.c"
  err=PMPI_Sendrecv(sendbuf,sendcount,sendtype,dest,sendtag,
      recvbuf,recvcount,recvtype,source,recvtag,comm,status);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Sendrecv(pb_outbuffer,piggyback_size,((MPI_Datatype)0x4c000101),dest,sendtag,
        &((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0*0 +piggyback_offset)))),piggyback_size,((MPI_Datatype)0x4c000101),status->MPI_SOURCE,status->MPI_TAG,
        pb_comm,&status2);
  }
# 1392 "piggyback.c"
  return err;
}

int MPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest, int sendtag, int source, int recvtag,
    MPI_Comm comm, MPI_Status *status)
{
  int err;
 

  MPI_Status status2;

 
 
# 1425 "piggyback.c"
  err=PMPI_Sendrecv_replace(buf,count,datatype,sendtag,dest,recvtag,dest,comm,status);
  if (err==0) {
    MPI_Comm pb_comm;PNMPIMOD_commmap(comm,&pb_comm);
    err=PMPI_Sendrecv(pb_outbuffer,piggyback_size,((MPI_Datatype)0x4c000101),dest,sendtag,
        &((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0*0 +piggyback_offset)))),piggyback_size,((MPI_Datatype)0x4c000101),status->MPI_SOURCE,status->MPI_TAG,
        pb_comm,&status2);
  }
# 1466 "piggyback.c"
  return err;
}





int MPI_Wait(MPI_Request *request, MPI_Status *status)
{
  int err;
  ;

  err=PMPI_Wait(request,status);
  int count; PMPI_Get_count(status, ((MPI_Datatype)0x4c000405), &count);
  fprintf(stderr, "received from %d tag %d, count is %d \n", (*status).MPI_SOURCE, (*status).MPI_TAG, count);
  if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0*0 +(*StatusOffsetInRequest)))).inreq!=((MPI_Request)0x2c000000))
    {
      { MPI_Status status2; void *ptr=(*((char**) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset+sizeof(PNMPIMOD_Requests_Parameters_t)))); if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x00) { if (((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).tag!=(-1)) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).node!=(-2))) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); status[0].MPI_ERROR=status2.MPI_ERROR; memcpy(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+piggyback_offset)))),ptr,piggyback_size);; free(ptr); } else { MPI_Comm pb_comm;PNMPIMOD_commmap((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).comm,&pb_comm); fprintf(stderr, "trying to receive piggyback from %d, tag %d, comm %d \n", status[0].MPI_SOURCE, status[0].MPI_TAG,(*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).comm); err=PMPI_Recv(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+piggyback_offset)))), piggyback_size,((MPI_Datatype)0x4c000101), status[0].MPI_SOURCE, status[0].MPI_TAG, pb_comm, &status2); fprintf(stderr, "done receiving\n"); status[0].MPI_ERROR=status2.MPI_ERROR; } } if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x01) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); status[0].MPI_ERROR=status2.MPI_ERROR; free(ptr); }};
    }

  return err;
}

int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status)
{
  int err;
  ;

  err=PMPI_Waitany(count,array_of_requests,index,status);
  if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0*0 +(*StatusOffsetInRequest)))).inreq!=((MPI_Request)0x2c000000))
    {
      { MPI_Status status2; void *ptr=(*((char**) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset+sizeof(PNMPIMOD_Requests_Parameters_t)))); if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x00) { if (((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).tag!=(-1)) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).node!=(-2))) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); status[0].MPI_ERROR=status2.MPI_ERROR; memcpy(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+piggyback_offset)))),ptr,piggyback_size);; free(ptr); } else { MPI_Comm pb_comm;PNMPIMOD_commmap((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).comm,&pb_comm); fprintf(stderr, "trying to receive piggyback from %d, tag %d, comm %d \n", status[0].MPI_SOURCE, status[0].MPI_TAG,(*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).comm); err=PMPI_Recv(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+piggyback_offset)))), piggyback_size,((MPI_Datatype)0x4c000101), status[0].MPI_SOURCE, status[0].MPI_TAG, pb_comm, &status2); fprintf(stderr, "done receiving\n"); status[0].MPI_ERROR=status2.MPI_ERROR; } } if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x01) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); status[0].MPI_ERROR=status2.MPI_ERROR; free(ptr); }};
    }

  return err;
}

int MPI_Waitsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;
  ;

  err=PMPI_Waitsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);

  if (*outcount!=(-32766))
    {
      for (i=0; i<*outcount; i++)
 {
   if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).inreq!=((MPI_Request)0x2c000000))
     {
       { MPI_Status status2; void *ptr=(*((char**) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset+sizeof(PNMPIMOD_Requests_Parameters_t)))); if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x00) { if (((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).tag!=(-1)) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).node!=(-2))) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; memcpy(&((*((char*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+piggyback_offset)))),ptr,piggyback_size);; free(ptr); } else { MPI_Comm pb_comm;PNMPIMOD_commmap((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).comm,&pb_comm); fprintf(stderr, "trying to receive piggyback from %d, tag %d, comm %d \n", array_of_statuses[i].MPI_SOURCE, array_of_statuses[i].MPI_TAG,(*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).comm); err=PMPI_Recv(&((*((char*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+piggyback_offset)))), piggyback_size,((MPI_Datatype)0x4c000101), array_of_statuses[i].MPI_SOURCE, array_of_statuses[i].MPI_TAG, pb_comm, &status2); fprintf(stderr, "done receiving\n"); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; } } if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x01) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; free(ptr); }};
     }
 }
    }

  return err;
}


int MPI_Waitall(int count, MPI_Request *array_of_requests, MPI_Status *array_of_statuses)
{
  int err,i;
  ;

  err=PMPI_Waitall(count,array_of_requests,array_of_statuses);

  for (i=0; i<count; i++)
    {
      if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).inreq!=((MPI_Request)0x2c000000))
 {
   { MPI_Status status2; void *ptr=(*((char**) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset+sizeof(PNMPIMOD_Requests_Parameters_t)))); if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x00) { if (((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).tag!=(-1)) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).node!=(-2))) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; memcpy(&((*((char*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+piggyback_offset)))),ptr,piggyback_size);; free(ptr); } else { MPI_Comm pb_comm;PNMPIMOD_commmap((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).comm,&pb_comm); fprintf(stderr, "trying to receive piggyback from %d, tag %d, comm %d \n", array_of_statuses[i].MPI_SOURCE, array_of_statuses[i].MPI_TAG,(*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).comm); err=PMPI_Recv(&((*((char*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+piggyback_offset)))), piggyback_size,((MPI_Datatype)0x4c000101), array_of_statuses[i].MPI_SOURCE, array_of_statuses[i].MPI_TAG, pb_comm, &status2); fprintf(stderr, "done receiving\n"); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; } } if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x01) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; free(ptr); }};
 }
    }

  return err;
}





int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status)
{
  int err;
  ;

  err=PMPI_Test(request, flag, status);
  if ((*flag) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0*0 +(*StatusOffsetInRequest)))).inreq!=((MPI_Request)0x2c000000)))
    {
      { MPI_Status status2; void *ptr=(*((char**) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset+sizeof(PNMPIMOD_Requests_Parameters_t)))); if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x00) { if (((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).tag!=(-1)) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).node!=(-2))) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); status[0].MPI_ERROR=status2.MPI_ERROR; memcpy(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+piggyback_offset)))),ptr,piggyback_size);; free(ptr); } else { MPI_Comm pb_comm;PNMPIMOD_commmap((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).comm,&pb_comm); fprintf(stderr, "trying to receive piggyback from %d, tag %d, comm %d \n", status[0].MPI_SOURCE, status[0].MPI_TAG,(*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).comm); err=PMPI_Recv(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+piggyback_offset)))), piggyback_size,((MPI_Datatype)0x4c000101), status[0].MPI_SOURCE, status[0].MPI_TAG, pb_comm, &status2); fprintf(stderr, "done receiving\n"); status[0].MPI_ERROR=status2.MPI_ERROR; } } if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x01) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); status[0].MPI_ERROR=status2.MPI_ERROR; free(ptr); }};
    }

  return err;
}

int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status)
{
  int err;
  ;

  err=PMPI_Testany(count,array_of_requests,index,flag,status);
  if ((*flag) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0*0 +(*StatusOffsetInRequest)))).inreq!=((MPI_Request)0x2c000000)))
    {
      { MPI_Status status2; void *ptr=(*((char**) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset+sizeof(PNMPIMOD_Requests_Parameters_t)))); if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x00) { if (((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).tag!=(-1)) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).node!=(-2))) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); status[0].MPI_ERROR=status2.MPI_ERROR; memcpy(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+piggyback_offset)))),ptr,piggyback_size);; free(ptr); } else { MPI_Comm pb_comm;PNMPIMOD_commmap((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).comm,&pb_comm); fprintf(stderr, "trying to receive piggyback from %d, tag %d, comm %d \n", status[0].MPI_SOURCE, status[0].MPI_TAG,(*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).comm); err=PMPI_Recv(&((*((char*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+piggyback_offset)))), piggyback_size,((MPI_Datatype)0x4c000101), status[0].MPI_SOURCE, status[0].MPI_TAG, pb_comm, &status2); fprintf(stderr, "done receiving\n"); status[0].MPI_ERROR=status2.MPI_ERROR; } } if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x01) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (status))+1*sizeof(MPI_Status)+0**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); status[0].MPI_ERROR=status2.MPI_ERROR; free(ptr); }};
    }

  return err;
}

int MPI_Testsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;
  ;

  err=PMPI_Testsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);

  if (*outcount!=(-32766))
    {
      for (i=0; i<*outcount; i++)
 {
   if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).inreq!=((MPI_Request)0x2c000000))
     {
       { MPI_Status status2; void *ptr=(*((char**) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset+sizeof(PNMPIMOD_Requests_Parameters_t)))); if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x00) { if (((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).tag!=(-1)) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).node!=(-2))) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; memcpy(&((*((char*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+piggyback_offset)))),ptr,piggyback_size);; free(ptr); } else { MPI_Comm pb_comm;PNMPIMOD_commmap((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).comm,&pb_comm); fprintf(stderr, "trying to receive piggyback from %d, tag %d, comm %d \n", array_of_statuses[i].MPI_SOURCE, array_of_statuses[i].MPI_TAG,(*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).comm); err=PMPI_Recv(&((*((char*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+piggyback_offset)))), piggyback_size,((MPI_Datatype)0x4c000101), array_of_statuses[i].MPI_SOURCE, array_of_statuses[i].MPI_TAG, pb_comm, &status2); fprintf(stderr, "done receiving\n"); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; } } if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x01) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; free(ptr); }};
     }
 }
    }

  return err;
}

int MPI_Testall(int count, MPI_Request *array_of_requests, int *flag, MPI_Status *array_of_statuses)
{
  int err,i;
  ;
  err=PMPI_Testall(count, array_of_requests, flag, array_of_statuses);

  if (*flag)
    {
      for (i=0; i<count; i++)
 {

   if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).inreq!=((MPI_Request)0x2c000000))
     {
       { MPI_Status status2; void *ptr=(*((char**) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset+sizeof(PNMPIMOD_Requests_Parameters_t)))); if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x00) { if (((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).tag!=(-1)) && ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).node!=(-2))) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; memcpy(&((*((char*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+piggyback_offset)))),ptr,piggyback_size);; free(ptr); } else { MPI_Comm pb_comm;PNMPIMOD_commmap((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).comm,&pb_comm); fprintf(stderr, "trying to receive piggyback from %d, tag %d, comm %d \n", array_of_statuses[i].MPI_SOURCE, array_of_statuses[i].MPI_TAG,(*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).comm); err=PMPI_Recv(&((*((char*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+piggyback_offset)))), piggyback_size,((MPI_Datatype)0x4c000101), array_of_statuses[i].MPI_SOURCE, array_of_statuses[i].MPI_TAG, pb_comm, &status2); fprintf(stderr, "done receiving\n"); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; } } if ((*((PNMPIMOD_Requests_Parameters_t*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+(*StatusOffsetInRequest)))).type==0x01) { err=PMPI_Wait(&((*((MPI_Request*) (((char*) (array_of_statuses))+count*sizeof(MPI_Status)+i**TotalStatusExtension+*StatusOffsetInRequest+request_offset_req+sizeof(PNMPIMOD_Requests_Parameters_t))))),&status2); array_of_statuses[i].MPI_ERROR=status2.MPI_ERROR; free(ptr); }};
     }
 }
    }

  return err;
}
