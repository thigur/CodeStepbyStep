    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>

    using namespace std;

    string parameterMystery2( string& s1, string s2 ) {

        s1 += "1";
        s2 += "2";

        cout << s2 << " -- " << s1 << endl;

        return "!" + s2;
    }

    int main() {

        string a = "hi";
        string b = "bye";
        string c = "yo";

        parameterMystery2( a, c );
        parameterMystery2( c, b );
        string d = parameterMystery2( b, a );

        cout << a << " " << b << " " << c << " " << d << endl;
        cout << "This is my startup  template!" << endl;

        return 0;
    }
