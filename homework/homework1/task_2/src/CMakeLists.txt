# create library " libipb_arithmetic "
add_library(ipb_arithmetic subtract.cpp sum.cpp) # creates libipb_arithmetic.a
# target ipb_arithmetic installation path
install(TARGETS ipb_arithmetic DESTINATION lib) 