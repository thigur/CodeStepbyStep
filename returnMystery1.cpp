    #include <iostream>
    #include <stdio.h>      /* printf */
    #include <math.h>       /* fmod */

    using namespace std;

    int mystery( int b, int c) {
        return c + 2 * b;
    }

    int main() {

        int a  = 4;
        int b  = 2;
        int c  = 5;

        a = mystery( c, b);
        c = mystery( b, a);

        cout << a << " " << b << " " << c << " " << endl;

        return 0;
    }
