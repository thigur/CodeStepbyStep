    #include <iostream>
    #include <stdio.h>      /* printf */
    #include <math.h>       /* fmod */

    using namespace std;

    //If you want to reject decimal input instead of truncating it, you can  
    //convert the input to a double and check to make sure it doesn't have a decimal part 

    void quadratic( int a, int b, int c, int& root1, int& root2 ) {

        cout << "b: " << b << endl;
        int sqRoot = sqrt( ( b*b) - (4*a*c) );
        cout << "sqRoot: "<<  sqRoot << endl;
        root1 = ( ( -b ) + sqRoot ) / ( 2 * a );
        root2 = ( ( -b ) - sqRoot ) / ( 2 * a );
    }

    int main() {

        int a = 2;
        int b = -8;
        int c = -0;

        int root1 = 0; 
        int root2 = 0; 

        quadratic( a, b, c, root1, root2 );

        cout << "root1: " << root1 << " " << "root2: "<< root2 << endl;

        return 0;
    }
