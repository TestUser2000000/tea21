#include <fmt/chrono.h>
#include <fmt/format.h>

#include <iostream>
#include <random>

#include "CLI/CLI.hpp"
#include "config.h"

// . bss segment 
int bss;

// .data segment
int data = 4711;

// .rodata segment
const int rodata = 47;



auto main(int argc, char **argv) -> int
{
    /**
-     * CLI11 is a command line parser to add command line options
-     * More info at https://github.com/CLIUtils/CLI11#usage
-     */
    
    fmt::print("Value of variable bss {} adress of variable bss {} \n" ,
    bss,
    fmt::ptr(&bss));

    fmt::print("Value of variable data {} adress of variable data {} \n" ,
    data, 
    fmt::ptr(&data));

    fmt::print("Value of variable rodata {} adress of variable rodata {} \n" ,
    rodata, 
    fmt::ptr(&rodata));

    return 0; /* exit gracefully*/
}
