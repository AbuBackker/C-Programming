// 01. Show "Hello World"

#include <stdio.h>
#include <conio.h>

void main(){

     printf( "Hello World" );
     getch();
}

// 02. Show: 
//           "Hello World" 
//           "I Love Bangladesh"

#include <stdio.h>
#include <conio.h>

void main(){

     printf( "Hello World\n" );
     printf( "I Love Bangladesh\n" );
     getch();
}

// 03. Sum of Two Numbers:

#include <stdio.h>
#include <conio.h>

void main(){

     int a, b, sum;

     printf( "Enter the Value of First Number =" );
     scanf( "%d", &a );

     printf( "Enter the Value of Second Number =" );
     scanf( "%d", &b );

     sum = a + b;

     printf( "Sum of Two Numbers = %d", sum  );
     // printf( "Sum of Two Numbers = %d + %d = %d", a, b, sum );

     getch();
}

// 04. Average of Three Numbers:

#include <stdio.h>
#include <conio.h>

void main(){

     int a, b, c, sum, avg;

     printf( "Enter the Value of First Number =" );
     scanf( "%d", &a );

     printf( "Enter the Value of Second Number =" );
     scanf( "%d", &b );

     printf( "Enter the Value of Three Number =" );
     scanf( "%d", &b );     

     sum = a + b +c;
     avg = sum%3

     printf( "Average of Three Numbers = %d", avg  );

     getch();
}

// 05. Define The Area of Rectangle:

#include <stdio.h>
#include <conio.h>

void main(){

     float a, b, area;

     printf( "Enter Your First Value =" );
     scanf( "%d", &a );

     printf( "Enter Your Second Valuer =" );
     scanf( "%d", &b );

     area = a*b;

     printf( "Your Area is = %f", area  );

     getch();
}

// 06. Define Area of  The Circle:

#include <stdio.h>
#include <conio.h>

void main(){

     float r, area;

     printf( "Input Radius =" );
     scanf( "%d", &r );

     area = 3.1416*r*r;

     printf( "Your Area is = %f", area  );

     getch();
}

// 07. Define Circumference of  The Circle:

#include <stdio.h>
#include <conio.h>

void main(){

     float r, circumference;

     printf( "Input Radius =" );
     scanf( "%d", &r );

     circumference = 2*3.1416*r;

     printf( "Your Area is = %f", circumference  );

     getch();
}