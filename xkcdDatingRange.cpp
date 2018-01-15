    #include <iostream>
    #include <stdio.h>      /* printf */
    #include <math.h>       /* fmod */

    using namespace std;

    //If you want to reject decimal input instead of truncating it, you can  
    //convert the input to a double and check to make sure it doesn't have a decimal part 

    void xkcdDatingRange( int yourAge, int& min, int& max ) {

        min = ( yourAge / 2 ) + 7;
        max = ( yourAge - 7 ) * 2;
    }

    int main() {

        int minDatingAge = 0; 
        int maxDatingAge = 0;

        xkcdDatingRange( 48, minDatingAge , maxDatingAge );

        cout << "Min age: " << minDatingAge << " " << "Max age: "<< maxDatingAge  << endl;

        return 0;
    }
