#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tf_interfaces::tf_interfaces__rosidl_typesupport_cpp" for configuration ""
set_property(TARGET tf_interfaces::tf_interfaces__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tf_interfaces::tf_interfaces__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtf_interfaces__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libtf_interfaces__rosidl_typesupport_cpp.so"
  )

list(APPEND _cmake_import_check_targets tf_interfaces::tf_interfaces__rosidl_typesupport_cpp )
list(APPEND _cmake_import_check_files_for_tf_interfaces::tf_interfaces__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libtf_interfaces__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)