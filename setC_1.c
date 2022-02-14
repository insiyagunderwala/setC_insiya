include <stdio.h>
void wordGenerator( unsigned int number[] );
int main( void )
{
 unsigned int loop;
 unsigned int phoneNumber[ 7 ] = { 0 };
 // prompt user to enter phone number
 printf( "%s", "Enter a phone number one digit at a time" );
 puts( " using the digits 2 through 9:" );
 // loop 7 times to get number
 for ( loop = 0; loop <= 6; ++loop )
 {
 printf( "%s", "? " );
 scanf( "%d", &phoneNumber[ loop ] );
 // test if number is between 0 and 9
 while ( phoneNumber[ loop ] < 2 || phoneNumber[ loop ] > 9 )
 {
 printf( "%s", "\nInvalid number entered. Please enter again: " );
 scanf( "%d", &phoneNumber[ loop ] );
 } // end while
 } // end for
 
wordGenerator( phoneNumber ); // form words from phone number

} //end main


void wordGenerator( unsigned int number[] )
 {
     unsigned int loop; // loop counter
     unsigned int loop1; // loop counter for first digit of phone number
     unsigned int loop2; // loop counter for second digit of phone number
     unsigned int loop3; // loop counter for third digit of phone number
     unsigned int loop4; // loop counter for fourth digit of phone number
     unsigned int loop5; // loop counter for fifth digit of phone number
     unsigned int loop6; // loop counter for sixth digit of phone number
     unsigned int loop7; // loop counter for seventh digit of phone number
     FILE *foutPtr; // output file pointer

  char *phoneLetters[ 10 ] = { "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY"} ;

  if ( ( foutPtr = fopen( "phone.out", "w" ) ) == NULL ) 
  {
  puts( "Output file was not opened." );  } // end if
  else { // print all possible combinations
  for ( loop1 = 0; loop1 <= 2; ++loop1 )
  {
     
     for ( loop2 = 0; loop2 <= 2; ++loop2 )
     {
     for ( loop3 = 0; loop3 <= 2; ++loop3 )
     {
     for ( loop4 = 0; loop4 <= 2; ++loop4 )
     {
     for ( loop5 = 0; loop5 <= 2; ++loop5 )
     {
     for ( loop6 = 0; loop6 <= 2; ++loop6 )
     {
     for ( loop7 = 0; loop7 <= 2; ++loop7 )
     {
         fprintf( foutPtr, "%c%c%c%c%c%c%c\n",
         phoneLetters[ number[ 0 ] ][ loop1 ],
         phoneLetters[ number[ 1 ] ][ loop2 ],
         phoneLetters[ number[ 2 ] ][ loop3 ],
         phoneLetters[ number[ 3 ] ][ loop4 ],
         phoneLetters[ number[ 4 ] ][ loop5 ],
         phoneLetters[ number[ 5 ] ][ loop6 ],
         phoneLetters[ number[ 6 ] ][ loop7 ] );
     }
     }
     }
     }
     }
     }
     }

 fputs( "\nPhone number is ", foutPtr ) ;

  for ( loop = 0; loop <= 6; ++loop )
  {
      if ( loop == 3 )
      {
          fprintf( foutPtr, "-" );
         
      }
     fprintf( foutPtr, "%d", number[ loop ] );
     
  }
 }
 fclose( foutPtr );
   
 }