    /* 
       Code Step By Step Practice Problems
       Dec 23nd 2017. Author: thigur
    */

    #include <iostream>
    #include <cmath>

    using namespace std;

    int factorCount( int num ) {

        int divisor = abs( num );
        int count= 0; 

        while( divisor > 0 ) {

            if ( ( num % divisor ) == 0 )
                count++;
            divisor--;
        }
        return count;
    }

    int main() {

        int num = 0;

        cout << factorCount( num );
        cout << endl;

        cout << "This is what happened." <<  endl;

        return 0;
    }
