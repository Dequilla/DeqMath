# The reason I do it in this directory is to make sure our build is a little prettier. 
# Everything we need will be built into the bin folder

# Add all the source files
set(DEQ_MATH_SOURCE_FILES 
		../src/Combinatorics.cpp
		../src/Cryptography.cpp
		../src/Utility.cpp
		../src/DeqMath.h
		../src/InfInt.h)

message(STATUS "DeqMath source files: " ${DEQ_MATH_SOURCE_FILES})

# Create library
add_library(DeqMath SHARED ${DEQ_MATH_SOURCE_FILES})

########################################################################
# Examples of this library : NOTE this executable is not actually needed
add_executable(DeqMathExample ../src/Main.cpp)
target_link_libraries(DeqMathExample DeqMath)
# Examples of this library : NOTE this executable is not actually needed
########################################################################
