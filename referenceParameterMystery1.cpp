    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>

    using namespace std;

    void mystery( int c, int& a, int b ) {

        cout << b << " + " << c << " = " << a << endl;
        a++;
        b--;
    }

    int main() {

        int a = 4;
        int b = 7;
        int c = -2;

        mystery( b, a, c );
        mystery( c, b, 3 );
        mystery( b, c, b + a );

        cout << "This is my startup  template!" << endl;

        return 0;
    }
