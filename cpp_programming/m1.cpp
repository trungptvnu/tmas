//https://gcc.gnu.org/onlinedocs/cpp/Macros.html

// Stringizing operator(#)
// https://msdn.microsoft.com/en-us/library/7e3a913x.aspx

#include <stdio.h>
#define stringer( x ) printf( #x "\n" )
int main() {
   stringer( In quotes in the printf function call ); 
   stringer( "In quotes when printed to the screen" );   
   stringer( "This: \"  prints an escaped double quote" );
}