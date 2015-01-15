# Install script for directory: /home/anex/git/plasma-packages/prison-frameworks/src/prison/lib/prison

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "prison")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Prison.so.1.2.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Prison.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Prison.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/libKF5Prison.so.1.2.0"
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/libKF5Prison.so.1"
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/libKF5Prison.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Prison.so.1.2.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Prison.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Prison.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/PRISON/prison" TYPE FILE FILES
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/PRISON/AbstractBarcode"
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/PRISON/Code39Barcode"
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/PRISON/Code93Barcode"
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/PRISON/DataMatrixBarcode"
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/PRISON/QRCodeBarcode"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/PRISON/prison" TYPE FILE FILES
    "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/prison_export.h"
    "/home/anex/git/plasma-packages/prison-frameworks/src/prison/lib/prison/abstractbarcode.h"
    "/home/anex/git/plasma-packages/prison-frameworks/src/prison/lib/prison/code39barcode.h"
    "/home/anex/git/plasma-packages/prison-frameworks/src/prison/lib/prison/code93barcode.h"
    "/home/anex/git/plasma-packages/prison-frameworks/src/prison/lib/prison/datamatrixbarcode.h"
    "/home/anex/git/plasma-packages/prison-frameworks/src/prison/lib/prison/qrcodebarcode.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "prison")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/qt/mkspecs/modules/qt_Prison.pri")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/qt/mkspecs/modules" TYPE FILE FILES "/home/anex/git/plasma-packages/prison-frameworks/src/build/lib/prison/qt_Prison.pri")
endif()

