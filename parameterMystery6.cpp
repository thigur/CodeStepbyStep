    /* Code Step By Step Practice Problems */
    /* Dec 25th 2017 */

    #include <iostream>

    using namespace std;

    string parameterMystery6( int a, int & b, string& c, string d ) {
        a++;
        b++;
        c += "x";
        d += "x";

        cout << d << "  " << c << " " << b << " " << a << " "  << endl;

        return d;
    }

    int main() {
        int a = 1;
        int b = 20;
        int x = 300;
        string c = "c";
        string d = "d";
        string z = "z";

        parameterMystery6( a, b, c, d );
        parameterMystery6( b, x, z, c );
        d = parameterMystery6( x, a, c, z );

        cout << a << " " << b << " " << x << " " << c << " " << d << " " << z << endl;
        cout << "This is my startup  template!" << endl;

        return 0;
    }
