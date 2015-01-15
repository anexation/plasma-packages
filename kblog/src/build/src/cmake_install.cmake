# Install script for directory: /home/anex/git/plasma-packages/kblog/src/kblog/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "KBlog")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Blog.so.4.79.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Blog.so.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Blog.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/anex/git/plasma-packages/kblog/src/build/src/libKF5Blog.so.4.79.0"
    "/home/anex/git/plasma-packages/kblog/src/build/src/libKF5Blog.so.5"
    "/home/anex/git/plasma-packages/kblog/src/build/src/libKF5Blog.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Blog.so.4.79.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Blog.so.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Blog.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KBlog/kblog" TYPE FILE FILES
    "/home/anex/git/plasma-packages/kblog/src/build/src/kblog_export.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/blog.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/blogcomment.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/blogger1.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/blogmedia.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/blogpost.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/gdata.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/metaweblog.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/movabletype.h"
    "/home/anex/git/plasma-packages/kblog/src/kblog/src/wordpressbuggy.h"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/Blog"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/BlogComment"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/Blogger1"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/BlogMedia"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/BlogPost"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/GData"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/MetaWeblog"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/MovableType"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/WordpressBuggy"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KBlog/KBlog" TYPE FILE FILES
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/Blog"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/BlogComment"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/Blogger1"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/BlogMedia"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/BlogPost"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/GData"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/MetaWeblog"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/MovableType"
    "/home/anex/git/plasma-packages/kblog/src/build/src/KBlog/WordpressBuggy"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "KBlog")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/qt/mkspecs/modules/qt_KBlog.pri")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/qt/mkspecs/modules" TYPE FILE FILES "/home/anex/git/plasma-packages/kblog/src/build/src/qt_KBlog.pri")
endif()

