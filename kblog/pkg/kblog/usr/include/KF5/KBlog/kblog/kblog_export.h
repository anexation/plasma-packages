
#ifndef KBLOG_EXPORT_H
#define KBLOG_EXPORT_H

#ifdef KBLOG_STATIC_DEFINE
#  define KBLOG_EXPORT
#  define KBLOG_NO_EXPORT
#else
#  ifndef KBLOG_EXPORT
#    ifdef KF5Blog_EXPORTS
        /* We are building this library */
#      define KBLOG_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KBLOG_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KBLOG_NO_EXPORT
#    define KBLOG_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KBLOG_DEPRECATED
#  define KBLOG_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KBLOG_DEPRECATED_EXPORT
#  define KBLOG_DEPRECATED_EXPORT KBLOG_EXPORT KBLOG_DEPRECATED
#endif

#ifndef KBLOG_DEPRECATED_NO_EXPORT
#  define KBLOG_DEPRECATED_NO_EXPORT KBLOG_NO_EXPORT KBLOG_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define KBLOG_NO_DEPRECATED
#endif

#endif
