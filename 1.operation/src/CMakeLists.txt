add_executable(Operation main.cpp)

include_directories(../include)

add_custom_command(TARGET Operation POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "Running Operation..."
    COMMAND Operation
)