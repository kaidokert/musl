set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

cmake_minimum_required(VERSION 3.3)
project(micro)

include_directories(
    fakes
    include)

add_library(micro STATIC
    src/string/bcmp.c
    src/string/bcopy.c
    src/string/bzero.c
    src/string/explicit_bzero.c
    src/string/index.c
    src/string/memset.c
    src/string/memcpy.c
    # src/process/execl.c
)