    /* Code Step By Step Practice Problems */
    /* Dec 22nd 2017 */

    #include <iostream>
    #include <cmath>

    using namespace std;

    /* Returns a value that is the bit conversion of the decimal number */
    int binaryToDecimal( int num ) {

        int divisor = 10;
        int index = 0;
        int result = 0; 

        while( num > 0 ) {

            result += ( num % divisor ) * pow(2, index);
            index++;
            num = num / divisor;
        }
        return result;
    }


    int main() {

        int num = 101100;

        cout << binaryToDecimal( num );

        cout << endl;

        return 0;
    }
