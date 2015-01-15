#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::Blog" for configuration "Release"
set_property(TARGET KF5::Blog APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(KF5::Blog PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "KF5::XmlRpcClient;KF5::CoreAddons;KF5::KIOCore"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libKF5Blog.so.4.79.0"
  IMPORTED_SONAME_RELEASE "libKF5Blog.so.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS KF5::Blog )
list(APPEND _IMPORT_CHECK_FILES_FOR_KF5::Blog "${_IMPORT_PREFIX}/lib/libKF5Blog.so.4.79.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
