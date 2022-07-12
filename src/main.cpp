/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/nemu-cpp/debug-server/blob/main/LICENSE.txt
*/

#include <Nemu/WebFramework.hpp>
#include <iostream>

int main(int argc, char* argv[])
{
    Ishiko::StreamLoggingSink sink(std::cout);
    Ishiko::Logger log(sink);

    return 0;
}
