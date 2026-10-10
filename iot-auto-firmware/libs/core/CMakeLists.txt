if(ESP_PLATFORM)
    idf_component_register(
        SRCS
            "src/mode/ModeService.cpp"
        INCLUDE_DIRS "include"
    )
else()
    cmake_minimum_required(VERSION 3.25)
    project(weveCore LANGUAGES CXX)

    add_library(weveCore
        src/mode/ModeService.cpp
    )
    target_include_directories(weveCore PUBLIC include)
    target_compile_features(weveCore PUBLIC cxx_std_20)

    if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
        enable_testing()
        add_subdirectory(test)
    endif()
endif()
