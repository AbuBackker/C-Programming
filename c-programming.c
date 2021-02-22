/********
 Part:01
********/

// 01. Show "Hello World"

#include <stdio.h>
#include <conio.h>

void main() {

     printf( "Hello World" );
     getch();
}

// 02. Show: 
//           "Hello World" 
//           "I Love Bangladesh"

#include <stdio.h>
#include <conio.h>

void main() {

     printf( "Hello World\n" );
     printf( "I Love Bangladesh\n" );
     getch();
}

// 03. Sum of Two Numbers:

#include <stdio.h>
#include <conio.h>

void main() {

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

void main() {

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

// 05. Determine The Area of Triangle:

#include <stdio.h>
#include <conio.h>

void main() {

     float a, b, area;

     printf( "Enter Your First Value =" );
     scanf( "%d", &a );

     printf( "Enter Your Second Valuer =" );
     scanf( "%d", &b );

     area = 0.5*a*b;

     printf( "Your Area is = %f", area  );

     getch();
}

// 06. Determine The Area of Rectangle:

#include <stdio.h>
#include <conio.h>

void main() {

     float a, b, area;

     printf( "Enter Your First Value =" );
     scanf( "%d", &a );

     printf( "Enter Your Second Valuer =" );
     scanf( "%d", &b );

     area = a*b;

     printf( "Your Area is = %f", area  );

     getch();
}

// 07. Determine Area of  The Circle:

#include <stdio.h>
#include <conio.h>

void main() {

     float r, area;

     printf( "Input Radius =" );
     scanf( "%d", &r );

     area = 3.1416*r*r;

     printf( "Your Area is = %f", area  );

     getch();
}

// 08. Determine Circumference of  The Circle to Three Decimal Places:

#include <stdio.h>
#include <conio.h>

void main() {

     float r, circumference;

     printf( "Input Radius =" );
     scanf( "%f", &r );

     circumference = 2*3.1416*r;

     printf( "Your Area is = %0.3f", circumference  );

     getch();
}

// 09. Determine the Square Root Function:

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {

     float a, x;

     printf( "Input Your Number =" );
     scanf( "%f", &a );

     x = sqrt(a);

     printf( "Your Answer is = %f", x );

     getch();
}

// 10. Determine the Power Function:

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {

     float a, p;

     printf( "Input Your Number =" );
     scanf( "%f", &a );

     p = pow(a);

     printf( "Your Answer is = %f", p );

     getch();
}

// 11. Determine Celsius to Fahrenheit: 

#include <stdio.h>
#include <conio.h>

void main() {

     float c, f;

     printf( "Input Your Number =" );
     scanf( "%f", &c );

     f = (9*c) % 5 + 32;

     printf( "Your Answer is = %f", f );

     getch();
}

// 11. Determine Fahrenheit to Celsius: 

#include <stdio.h>
#include <conio.h>

void main() {

     float f, c;

     printf( "Input Your Number =" );
     scanf( "%f", &f );

     c = 5*(f - 32) % 9;

     printf( "Your Answer is = %f", c );

     getch();
}


/*******************************
 Part:02 (Conditional Statement)
********************************/

/* 
   (A) if statement
   (B) if...else statement
   (C) elseif statement


=> if(condition) {

       Block 1
    }
    elseif(condition) {

       Block 2
    }
    elseif(condition) {

       Block 3  
    }
    .
    .
    .
    else {

       Block n  
    }
*/      


// 01.Find the Maximum Value of Two Numbers:

#include <stdio.h>
#include <conio.h>

void main() {

     int a, b;

     printf( "Enter the Value of First Number =" );
     scanf( "%d", &a );

     printf( "Enter the Value of Second Number =" );
     scanf( "%d", &b );

     if( a > b ) {
          printf( "The Maximum Number is = %d", a );
     }
     else{
          printf( "The Maximum Number is = %d", b );
     }

     getch();
}

// 02.Find the Maximum Value of Three Numbers:

#include <stdio.h>
#include <conio.h>

void main() {

     int a, b, c;

     printf( "Enter the Value of First Number =" );
     scanf( "%d", &a );

     printf( "Enter the Value of Second Number =" );
     scanf( "%d", &b );

     printf( "Enter the Value of Second Number =" );
     scanf( "%d", &c );     

     // scanf( "%d, %d, %d", &a, &b, &c );

     if( a>b && a>c ) {
          printf( "The Maximum Number is = %d", a );
     }
     else if( b>a && b>c ) {
          printf( "The Maximum Number is = %d", b );
     }
     else {
          printf( "The Maximum Number is = %d", c );          
     }
     
     getch();
}

// 03. Find Even & Odd Number:

#include <stdio.h>
#include <conio.h>

void main() {

     int a;

     printf( "Input Your Value =" );
     scanf( "%d", &a );

     if( a%2==0 ) {
          printf( "Your Entered Number is Even" );
     }
     else {
          printf( "Your Entered Number is Odd" );
     }

     getch();
}

// 04. Find Positive, Negative & Zero Number:

#include <stdio.h>
#include <conio.h>

void main() {

     int a;

     printf( "Input Your Value =" );
     scanf( "%d", &a );

     if( a > 0 ) {
          printf( "Your Entered Number is Positive" );
     }
     else if( a < 0 ) {
           printf( "Your Entered Number is Negative" );         
     }
     else{
          printf( "Your Entered Number is Zero" );
     }

     getch();
}

// 05. Determine Letter Grade:

#include <stdio.h>
#include <conio.h>

void main() {

     int marks;

     printf( "Input Your Value =" );
     scanf( "%d", &marks );

     if( marks < 0 && marks > 100 ) {
          printf( "Invalid Marks" );
     }
     else if( marks <= 80 && marks >= 100 ) {
          printf( "You Got A+" );         
     }
     else if( marks <= 70 && marks >= 79 ) {
          printf( "You Got A" );         
     }
     else if( marks <= 60 && marks >= 69 ) {
          printf( "You Got A-" );         
     }
     else if( marks <= 50 && marks >= 59 ) {
          printf( "You Got B" );         
     }
     else if( marks <= 40 && marks >= 49 ) {
          printf( "You Got C" );         
     }
     else if( marks <= 33 && marks >= 39 ) {
          printf( "You Got D" );         
     }
     else {
          printf( "You Got F" )
     }

     getch();
}

// 06. Determine Leap Year:

#include <stdio.h>
#include <conio.h>

void main() {

     int year;

     printf( "Input Your Value =" );
     scanf( "%d", &year );

     if( year%400==0  || year%4==0 && year%100!=0 ) {
          printf( "Leap Year" );
     }
     else {
          printf( "Not Leap Year" );
     }

     getch();
}

// 07. Determine Capital Letter & Small Letter:

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {

     char x;

     printf( "Input Your Character =" );
     scanf( "%c", &x );

     if( x >= 'a' && x <= 'z' ) {
          printf( "Small Letter" );
     }
     else if ( x >= 'A' && x <= 'Z' ) {
          printf( "Capital Letter" );
     }
     else {
          printf( "It is not a Character" )
     }

     getch();
}

// 08. Determine Upper Case to Lower Case:

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {

     char x;

     printf( "Input Your Character =" );
     scanf( "%c", &x );

     if( x >= 'A' && x <= 'Z' ) {
          printf( "Small Letter = %c\n", tolower(x) );
     }
     else {
          printf( "It is not a Character" )
     }

     getch();
}

// 09. Determine Lower Case to Upper Case:

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {

     char x;

     printf( "Input Your Character =" );
     scanf( "%c", &x );

     if( x >= 'a' && x <= 'z' ) {
          printf( "Capital Letter = %c\n", toupper(x) );
     }
     else {
          printf( "It is not a Character" )
     }

     getch();
}

/************************
 Part:03 (Loop Statement)
*************************/

/* 
   (A) While Loop :
   =>
    while (Condition) {
             Body of Loop;
     }


   (B) Do Loop / Do-While Loop :
   =>
    do {
        Body of Loop;
     } while (Condition);


   (C) For Loop :
   =>
    for (Initialization; Condition; Incrementation / Decrementation ) {
        Body of Loop;
     }

*/

// 01. Determine Increment & Decrement Value:

#include <stdio.h>
#include <conio.h>

void main() {

     int a;

     a = 5;
     ++a; // Pre-Increment
     // a++ (Post-Increment)

     printf( "a= %d", a ); // Answer a = 6

     --a // Pre-Decrement
     // a-- (Post-Decrement)

     printf( "a= %d", a ); // Answer a = 4

     getch();
}

// 02. Determine Increment & Decrement Value:

#include <stdio.h>
#include <conio.h>

void main() {

     int a=5, x;

     x = a++;

     printf( "x= %d\n", x ); // Answer x = 5
     printf( "a= %d\n", a ); // Answer a = 6

     x = ++a;

     printf( "x= %d\n", x ); // Answer x = 6
     printf( "a= %d\n", a ); // Answer a = 6

     x = a--;

     printf( "x= %d\n", x ); // Answer x = 5
     printf( "a= %d\n", a ); // Answer a = 4

     x = --a;

     printf( "x= %d\n", x ); // Answer x = 4
     printf( "a= %d\n", a ); // Answer a = 4

     getch();
}

// 03. Find Odd Number (1-10):

// While loop =>

#include <stdio.h>
#include <conio.h>

void main() {
     int i=1;

     while(i<=10) {

          printf(" %4d", i);
          i=i+2;
     }

     getch();
}

// Do-While Loop =>

#include <stdio.h>
#include <conio.h>

void main() {

     int i=1;

     do {

          printf(" %4d", i);
          i=i+2;

     }
     while(i<=10);
          
     getch();
}

// For Loop:

#include <stdio.h>
#include <conio.h>

void main() {

     int i;

     for( i=1; i<=10; i=i+2) {

          printf( "%5d", i );
     }
          
     getch();
}

// 04. Find Even Number ( 1-100 )

#include <stdio.h>
#include <conio.h>

void main() {

     int i;

     for( i=2; i<=100; i=i+2) {

          printf( "%5d", i );
     }
          
     getch();
}

/*********************
Part:3.1 (Sum Series)
*********************/

// 05. Find Sum of the Series 1 + 2 + 3 + 4 + ... + 100

#include <stdio.h>
#include <conio.h>

void main() {

     int i, s;

     s = 0;

     for( i=1; i<=100; i++) {

          s = s + i;
          // printf( "%5d", i );
     }

     printf( "The Sum is : %5d", s );
          
     getch();
}

// 06. Find Sum of the Series 1 + 2 + 3 + 4 + ... + n

#include <stdio.h>
#include <conio.h>

void main() {

     int i, s, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     s = 0;

     for( i=1; i<=n; i++) {

          s = s + i;
     }

     printf( "The Sum is : %5d", s );
          
     getch();
}

// 07. Find Sum of the Series 1² + 2² + 3² + ... + n²

#include <stdio.h>
#include <conio.h>

void main() {

     int i, s, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     s = 0;

     for( i=1; i<=n; i++) {

          s = s + i*i; // s = s + pow(i,2);
     }

     printf( "The Sum is : %5d", s );
          
     getch();
}

// 08. Find Sum of the Series 2² + 4² + 6² + ... + n²

#include <stdio.h>
#include <conio.h>

void main() {

     int i, s, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     s = 0;

     for( i=2; i<=n; i=i+2) {

          s = s + i*i; // s = s + pow(i,2);
     }

     printf( "The Sum is : %5d", s );
          
     getch();
}

// 09. Find Sum of the Series 1³ + 2³ + 3³ + ... + n³

#include <stdio.h>
#include <conio.h>

void main() {

     int i, s, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     s = 0;

     for( i=1; i<=n; i++) {

          s = s + i*i*i; // s = s + pow(i,3);
     }

     printf( "The Sum is : %5d", s );
          
     getch();
}

// 10. Sum of the Series 1^1 + 2^2 + 3^3 + ... + n^n

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {

     int i, s, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     s = 0;

     for( i=1; i<=n; i++) {

          s = s + pow(i,i);
     }

     printf( "The Sum is : %5d", s );
          
     getch();
}

// 10. Sum of the Series 2^2 - 3^3 + 4^4 - 5^5 + ... + n^n

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {

     int i, s, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     s = 0;

     for( i=2; i<=n; i++) {

          s = s + pow(i,i) * pow(-1,i);
     }

     printf( "The Sum is : %d", s );
          
     getch();
}

// 12. Sum of the Series 1/2 + 2/3 + 3/4 + ... + n

#include <stdio.h>
#include <conio.h>

void main() {

     int i, n;
     float s = 0;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     for( i=1; i<=n; i++) {

          s = s + (float) i/(i+1);
     }

     printf( "The Sum is : %f", s );
          
     getch();
}

/********************************
Part:3.2 (Multiplication Series)
********************************/

// 13. Find the Series 1 * 2 * 3 * 4 * ... * 100

#include <stdio.h>
#include <conio.h>

void main() {

     int i, m;

     m = 1;

     for( i=1; i<=100; i++) {

          m = m * i;
          // printf( "%5d", i );
     }

     printf( "The Result is : %d", m );
          
     getch();
}

// 14. Find the Series 1 * 2 * 3 * 4 * ... * n

#include <stdio.h>
#include <conio.h>

void main() {

     int i, m, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     m = 1;

     for( i=1; i<=n; i++) {

          m = m * i;
     }

     printf( "The Result is : %d", m );
          
     getch();
}

// 15. Find the Series 1² * 2² * 3² * ... * n²

#include <stdio.h>
#include <conio.h>

void main() {

     int i, m, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     m = 1;

     for( i=1; i<=n; i++) {

          m = m * i*i;
     }

     printf( "The Result is : %d", m );
          
     getch();
}

// 16. Find the Series 2² * 4² * 6² * ... * n²

#include <stdio.h>
#include <conio.h>

void main() {

     int i, m, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     m = 1;

     for( i=2; i<=n; i=i+2) {

          m = m * i*i; // m = m * pow(i,2);
     }

     printf( "The Result is : %d", m );
          
     getch();
}

// 17. Find the Series 1³ + 2³ + 3³ + ... + n³

#include <stdio.h>
#include <conio.h>

void main() {

     int i, m, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     m = 1;

     for( i=1; i<=n; i++) {

          m = m + i*i*i; // m = m * pow(i,3);
     }

     printf( "The Result is : %d", m );
          
     getch();
}

// 18. Find the Series 1^1 + 2^2 + 3^3 + ... + n^n

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {

     int i, m, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );

     m = 1;

     for( i=1; i<=n; i++) {

          m = m + pow(i,i);
     }

     printf( "The Result is : %d", m );
          
     getch();
}

/*****************
Part:3.3 (Others)
*****************/

// 19. Find GCD

#include <stdio.h>
#include <conio.h>

void main() {

     int a, b, c, x, y;

     printf( "Input Your First Value :" );
     scanf( "%d", &x );

     printf( "Input Your Second Value :" );
     scanf( "%d", &y );     

     if( x>y ) {
          b = x;
          a = y;
     }
     else {
          a = x;
          b = y;
     }

     while( a!=0 ) {
           c = b % a;
           b = a;
           a = c;
     }

     printf( "The GCD is : %d", b );
          
     getch();
}

// 20. Find LCM

#include <stdio.h>
#include <conio.h>

void main() {

     int a, b, c, x, y;

     printf( "Input Your First Value :" );
     scanf( "%d", &x );

     printf( "Input Your Second Value :" );
     scanf( "%d", &y );     

     if( x>y ) {
          b = x;
          a = y;
     }
     else {
          a = x;
          b = y;
     }

     while( a!=0 ) {
           c = b % a;
           b = a;
           a = c;
     }

     int l;

     l = ( x*y ) / b;

     printf( "The LCM is : %d", l );
          
     getch();
}

// 21. Find Fibonacci Number

#include <stdio.h>
#include <conio.h>

void main() {

     int a=1, b=1, c=0, n;

     printf( "Input Your Value :" );
     scanf( "%d", &n );   

     while( c<=0 ) {
           c = a + b;
           a = b;
           b = c;
     }

     printf( "The Fibonacci Number is : %d", c );
          
     getch();
}
