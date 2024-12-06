add_executable(PCsimulator main.cpp cpu.cpp ram.cpp disk.cpp gpu.cpp kbd.cpp)

include_directories(../include)

# Add a custom command to run after building the executable
add_custom_command(TARGET PCsimulator POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "Running PCsimulator..."
    COMMAND PCsimulator
)