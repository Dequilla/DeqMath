# Add all the source files
set(DEQ_MATH_SOURCE_FILES 
		../src/Combinatorics.cpp
		../src/Utility.h
		../src/DeqMath.h)

message(STATUS "DeqMath source files: " ${DEQ_MATH_SOURCE_FILES})

# Create library
add_library(DeqMath SHARED ${DEQ_MATH_SOURCE_FILES})

# The reason I do it in this library is to make sure our build is a little prettier. 
# Everything we need will be built into the bin folder