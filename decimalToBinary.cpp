    /* 
       Code Step By Step Practice Problems
       Dec 23nd 2017. Author: thigur
       Took unnecessarily long to do. Tired twoo many silly ways
       yet it was so easy.  No need to use an array or a data structure.
    */

    #include <iostream>
    #include <cmath>

    using namespace std;

    void decimalToBinaryB( int dividend );
    void binaryConversion( int num );

    /* Returns a value that is the bit conversion of the decimal number */
    int decimalToBinary( int dividend ) {

        int divisor = 2;
        int index = 0;
        int result = 0; 

        while( dividend > 0 ) {

            result += ( ( dividend % 2 )* pow( 10, index ) );
            dividend = dividend / divisor;
            index++;
        }
        return result;
    }

    int main() {

        int dividend = 43;

        cout << endl;
        cout << decimalToBinary( dividend );
        cout << endl;
        cout << endl;

        /*  Working versiions of this problem */
        dividend = 43;
        decimalToBinaryB( dividend );    //Good Work
        cout << endl;
        binaryConversion( dividend );   //Good Work
        cout << endl;
        cout << "This is what happened." <<  endl;

        return 0;
    }

    /* Recursive version that works */
    void binaryConversion( int num ) {

        int remainder;
        if ( num <= 1 ) {
            cout << num;
            return;
        }
        remainder = num % 2;
        binaryConversion( num / 2 );
        cout << remainder;
    }
    /* 
       The recursive version here without using the 
       return statement in the if() loop above
    */
    void decimalToBinaryB( int dividend ) {
        int remainder = 0;
        int divisor= 2;

        if ( dividend > 1 ) {
            remainder = dividend % 2;
            decimalToBinaryB( dividend / divisor); 
            cout << remainder; 
        } else 
            cout << dividend;
    }

    /* Returns a value that is the bit conversion of the decimal number */
    int decimalToBinaryC( int dividend ) {

        int divisor = 2;
        int index = 0;
        int result = 0;
        int remainder[64];

        while( dividend > 0 ) {

            remainder[ index ] = dividend % 2;
            result += pow( index, 2 );
            cout << "result: " << result << "index: " << index << endl;
            index++;
            dividend = dividend / divisor;
        }
        /* Reverse the resultArray */
        int j = index - 1; //now j will point to the last element at index 5
        int i = 0;          // and i will point to the first element
        while ( i < j ) {
            cout << "i is: " << i << "j is: " << j << endl;
            int temp = remainder[ i ];
            remainder[ i ] = remainder[ j ];
            remainder[ j ] = temp;
            i++;
            j--;
        }
        return result;
    }
