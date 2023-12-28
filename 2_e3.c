# include <stdio.h>
int main( )
{
    // c question

    // float a = 5, b = 2 ; 
    // int c, d ;
    // c = a % b ;   /* Here we will error: invalid operands to binary % (have 'float' and 'float')*/
    // d = a / 2 ;
    // printf ( "%d\n", d ) ;
    // return 0 ;

    // c answer

    float a = 5, b = 2 ;
    int c, d ;
    c = (int)(a % b); 
    d = a / 2 ;
    printf ( "%d\n", d ) ;
    return 0 ;

}
