cmake_minimum_required(VERSION 3.3 FATAL_ERROR)


# -----------------------------------------------------------------------------
# Project
# -----------------------------------------------------------------------------
include(cmake/Utils.cmake)

read_version()

PROJECT(AtilaCalculatorSoftware)

# -----------------------------------------------------------------------------
# Compiler and build config
# -----------------------------------------------------------------------------

# Use default cpp standard 20
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
  set(CMAKE_CXX_STANDARD_REQUIRED True)
endif()

# -----------------------------------------------------------------------------
# Project files
# -----------------------------------------------------------------------------
# Include files
set(HEADERS
        include/core/binary_data.h
        include/core/binary_data_wrapper.h
        include/core/main_window.h
        include/core/mesh.h
        include/core/result.h
        include/core/utilities.h
        include/logger/common.h
        include/logger/logger.h
        include/logger/log_entries.h)

# Source files
set(SOURCES
        src/core/app.cpp
        src/core/binary_data.cpp
        src/core/binary_data_wrapper.cpp
        src/core/main_window.cpp
        src/core/mesh.cpp
        src/core/result.cpp
        src/core/utilities.cpp
        src/logger/logger.cpp
        src/logger/log_entries.cpp)

# -----------------------------------------------------------------------------
# Dependencies
# -----------------------------------------------------------------------------
if(MSVC)
set(Qt5_DIR "C:/tools/Qtb/5.15.2/msvc2019_64/lib/cmake/Qt5")
endif(MSVC)

# find VKT
if(MSVC)
set(VTK_DIR "C:/tools/VTK/lib/cmake/vtk-9.0")
endif(MSVC)
find_package(VTK REQUIRED)

if (NOT VTK_FOUND)
  message(ERROR "VTK is not installed (${VTK_NOT_FOUND_MESSAGE})")
  return ()
endif()

find_package(VTK COMPONENTS
  CommonColor
  CommonCore
  FiltersSources
  InteractionStyle
  InteractionWidgets
  RenderingAnnotation
  RenderingCore
  RenderingFreeType
  RenderingGL2PSOpenGL2
  RenderingOpenGL2
  GUISupportQt
  )

#include(${VTK_USE_FILE})
#include_directories("C:/tools/VTK/include/vtk-9.0"})

# Stop if VTK is not find


message(STATUS "Using VTK v${VTK_VERSION}")

# find hdf5
if(MSVC)
set(HDF5_DIR "C:/tools/HDF_Group/HDF5-1.12.0-win64/cmake/hdf5")
set(ZLIB_DIR "C:/Program Files/HDF_Group/HDF5/1.10.1/cmake")
set(ZLIB_LIBRARIES "C:/Program Files/HDF_Group/HDF5/1.10.1/lib/zlib.lib")
endif(MSVC)



find_package (HDF5 COMPONENTS CXX QUIET)
find_package (ZLIB COMPONENTS ZLIB QUIET)

if (NOT HDF5_FOUND)
  message(ERROR "HDF5 not found")
  return ()
endif()



# automoc & autouic for qt
find_package(Qt5 REQUIRED Widgets Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#qt5_wrap_ui(UI_GENERATED_HEADERS qt/MainWindow.ui)


# Wrap UI to sources
# Qt .ui files
set(UI_FILES
        qt/MainWindow.ui)

qt5_wrap_ui(SOURCES ${UI_FILES})

add_executable(AtilaCalculatorSoftware ${SOURCES} ${HEADERS})

#qt5_use_modules(AtilaCalculatorSoftware Core Gui)

# vtk_module_autoinit is needed
#vtk_module_autoinit(
#  TARGETS AtilaCalculatorSoftware
#  MODULES ${VTK_LIBRARIES}
#)

target_link_libraries(AtilaCalculatorSoftware ${VTK_LIBRARIES} Qt5::Widgets ${ZLIB_LIBRARIES})


# -----------------------------------------------------------------------------
# Build and linking instructions
# -----------------------------------------------------------------------------
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_BINARY_DIR}
)

# link other libs (gidpost, zlib, hdf5)
if(MSVC)
include_directories("C:/tools/gidpost/include")
link_directories("C:/tools/gidpost/lib")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
link_directories(${CMAKE_SOURCE_DIR}/../gidpost-2.7/build_linux)
include_directories(${CMAKE_SOURCE_DIR}/../gidpost-2.7/source)
endif(MSVC)


target_link_libraries(AtilaCalculatorSoftware ${HDF5_LIBRARIES})
