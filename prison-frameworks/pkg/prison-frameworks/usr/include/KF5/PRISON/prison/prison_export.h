
#ifndef PRISON_EXPORT_H
#define PRISON_EXPORT_H

#ifdef PRISON_STATIC_DEFINE
#  define PRISON_EXPORT
#  define PRISON_NO_EXPORT
#else
#  ifndef PRISON_EXPORT
#    ifdef KF5Prison_EXPORTS
        /* We are building this library */
#      define PRISON_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PRISON_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PRISON_NO_EXPORT
#    define PRISON_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PRISON_DEPRECATED
#  define PRISON_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PRISON_DEPRECATED_EXPORT
#  define PRISON_DEPRECATED_EXPORT PRISON_EXPORT PRISON_DEPRECATED
#endif

#ifndef PRISON_DEPRECATED_NO_EXPORT
#  define PRISON_DEPRECATED_NO_EXPORT PRISON_NO_EXPORT PRISON_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define PRISON_NO_DEPRECATED
#endif

#endif
