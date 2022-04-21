#!/usr/bin/env bash
#mkdir results build
#mkdir results/bin results/lib
echo "Compile main program and arithmetic functions..."
c++ -std=c++17 -c ./src/main.cpp -o ./build/main.o -I./include
c++ -std=c++17 -c ./src/subtract.cpp -o ./build/subtract.o -I ./include
c++ -std=c++17 -c ./src/sum.cpp -o ./build/sum.o -I ./include
echo "Organize two functions into a library..."
ar rcs ./results/lib/libipb_arithmetic.a ./build/sum.o ./build/subtract.o
echo "LInk library with main program..."
c++ -std=c++17 ./src/main.cpp -L ./results/lib/ -lipb_arithmetic -o ./results/bin/test_ipb_arithmetic -I ./include
echo "Run the program..."
cd results/bin
./test_ipb_arithmetic