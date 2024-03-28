# C++ Program: Size of Data Types

## Description
This C++ program calculates and displays the size of various data types in bytes and their respective ranges. It includes primitive data types such as `int`, `long`, `long long`, `short`, `unsigned int`, `unsigned long`, `unsigned long long`, `unsigned short`, `char`, `unsigned char`, `float`, `double`, `long double`, `string`, `bool`, and `wchar_t`.

## Usage
Compile and run the program using a C++ compiler. The program will output the size of each data type in bytes, along with their minimum and maximum values. Additionally, it displays specific information for floating-point types regarding their negative range.

Please note that the output may vary depending on the system architecture and compiler used.

## Code
```cpp
//!/bin/clang

#include <iostream>
#include <limits.h>

using namespace std;
using big = long;
typedef long big1;
using dbig = unsigned long;
typedef unsigned long dbig1;
using vbig = long long;
typedef long long vbig1;
using dvbig = unsigned long long;
typedef unsigned long long dvbig1;
using small = unsigned short;
typedef unsigned short small1;
using vsmall = short;
typedef short vsmall1;

int main()
{
    cout << "The size of int = " << sizeof(int) << " bytes (" << INT_MIN << ", " << INT_MAX << ")" << "\n"
         << "The size of long int = " << sizeof(big) << " bytes (" << LONG_MIN << ", " << LONG_MAX << ")" << "\n"
         << "The size of long long int = " << sizeof(vbig) << " bytes (" << LLONG_MIN << ", " << LLONG_MAX << ")" << "\n"
         << "The size of short int = " << sizeof(vsmall) << " bytes (" << SHRT_MIN << ", " << SHRT_MAX << ")" << "\n"
         << "The size of unsigned int = " << sizeof(unsigned int) << " bytes (" << 0 << ", " << UINT_MAX << ")" << "\n"
         << "The size of unsigned long int = " << sizeof(dbig) << " bytes (" << 0 << ", " << ULONG_MAX << ")" << "\n"
         << "The size of unsigned long long int = " << sizeof(dvbig) << " bytes (" << 0 << ", " << ULLONG_MAX << ")" << "\n"
         << "The size of unsigned short int = " << sizeof(small) << " bytes (" << 0 << ", " << USHRT_MAX << ")" << "\n\n"
         << "The size of char = " << sizeof(char) << " bytes (" << CHAR_MIN << ", " << CHAR_MAX << ")" << "\n"
         << "The size of unsigned char = " << sizeof(unsigned char) << " bytes (" << 0 << ", " << UCHAR_MAX << ")" << "\n\n"
         << "The size of float = " << sizeof(float) << " bytes (" << FLT_MIN << ", " << FLT_MAX << ")" << "\n"
         << "The float negative range : (" << -FLT_MIN << ", " << -FLT_MAX << ")" << "\n\n"
         << "The size of double = " << sizeof(double) << " bytes (" << DBL_MIN << ", " << DBL_MAX << ")" << "\n"
         << "The double negative range : (" << -DBL_MIN << ", " << -DBL_MAX << ")" << "\n"
         << "The size of long double = " << sizeof(long double) << " bytes (" << LDBL_MIN_10_EXP << ", " << LDBL_MAX_10_EXP << ")" << "\n"
         << "Something else in long double (" << LDBL_MIN << ", " << LDBL_MAX << ")" << "\n\n"
         << "The size of string = " << sizeof(string) << " bytes" << "\n\n"
         << "The size of bool = " << sizeof(bool) << " bytes" << "\n\n"
         << "The size of wchar_t = " << sizeof(wchar_t) << " bytes" << endl;
}

