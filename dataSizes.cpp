//!/bin/clang

#include <iostream>
// the header file that contane INT_MAX, ...etc
#include <limits.h>

// Type alias
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
    // the size of (int)
    cout << "The size of int = " << sizeof(int)
         << " bytes "
         << "(" << INT_MIN << ", " << INT_MAX << ")"
         << "\n"

         << "The size of long int = "
         << sizeof(big) << " bytes "
         << "(" << LONG_MIN << ", " << LONG_MAX << ")"
         << "\n"

         << "The size of long long int = "
         << sizeof(vbig) << " bytes "
         << "(" << LLONG_MIN << ", " << LLONG_MAX << ")"
         << "\n"

         << "The size of short int = "
         << sizeof(vsmall) << " bytes "
         << "(" << SHRT_MIN << ", " << SHRT_MAX << ")"
         << "\n"

         << "The size of unsined int = "
         << sizeof(unsigned int) << " bytes "
         << "(" << 0 << ", " << UINT_MAX << ")"
         << "\n"

         << "The size of unsigned long int = "
         << sizeof(dbig) << " bytes "
         << "(" << 0 << ", " << ULONG_MAX << ")"
         << "\n"

         << "The size of unsigned long long int = "
         << sizeof(dvbig)
         << " bytes "
         << "(" << 0 << ", " << ULLONG_MAX << ")"
         << "\n"

         << "The size of unsigned short int = "
         << sizeof(small)
         << " bytes "
         << "(" << 0 << ", " << USHRT_MAX << ")"
         << "\n"
         << "\n"

         // The size of (char)
         << "The size of char = " << sizeof(char)
         << " bytes "
         << "(" << CHAR_MIN << ", " << CHAR_MAX << ")"
         << "\n"

         << "The size of unsigned char = "
         << sizeof(unsigned char) << " bytes "
         << "(" << 0 << ", " << UCHAR_MAX << ")"
         << "\n"
         << "\n"

         // The size of float
         << "The size of float = " << sizeof(float)
         << " bytes "
         << "(" << FLT_MIN << ", " << FLT_MAX << ")"
         << "\n"

         << "The float negative range : "
         << "(" << -FLT_MIN << ", " << -FLT_MAX << ")"
         << "\n"
         << "\n"

         // The size of (double)
         << "The size of doubel = "
         << sizeof(double) << " bytes "
         << "(" << DBL_MIN << ", " << DBL_MAX << ")"
         << "\n"

         << "The double negative range : "
         << "(" << -DBL_MIN << ", " << -DBL_MAX << ")"
         << "\n"

         << "The size of long double = "
         << sizeof(long double) << " bytes "
         << "(" << LDBL_MIN_10_EXP << ", " << LDBL_MAX_10_EXP << ")"
         << "\n"

         << "Something else in long double "
         << "(" << LDBL_MIN << ", " << LDBL_MAX << ")"
         << "\n"
         << "\n"

         // The size of string
         << "The size of string = " << sizeof(string) << " bytes"
         << "\n"
         << "\n"

         // The size of (bool)
         << "The size of bool = " << sizeof(bool) << " bytes"
         << "\n"
         << "\n"

         // The size of (wchar_t)
         << "The size of wchar_t = "
         << sizeof(wchar_t) << " bytes" << endl;
}

