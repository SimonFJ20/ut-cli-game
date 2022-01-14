#pragma once
#include <iostream>

inline void exit_with_failure(const char* msg, int line, const char* file) {
    std::cout << "FAILURE: " << msg << " at " << file << ":" << line << ":\n";
    exit(1);
}

#define FAIL(msg) exit_with_failure(msg, __LINE__, __FILE__);
#define NOT_IMPLEMENTED() exit_with_failure("NOT IMPLEMENTED", __LINE__, __FILE__);


