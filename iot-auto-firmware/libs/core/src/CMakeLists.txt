if(ESP_PLATFORM)
    idf_component_register(
        SRCS "10 Mode/ModeService.cpp"
        INCLUDE_DIRS "include"
    )
else()
    cmake_minimum_required(VERSION 3.25)
    project(framework LANGUAGES CXX)

    add_library(framework src/ModeManager.cpp)
    target_include_directories(framework PUBLIC include)
    target_compile_features(framework PUBLIC cxx_std_20)

    if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
        enable_testing()
        add_subdirectory(tests)
    endif()
endif()
