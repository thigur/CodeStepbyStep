    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>

    using namespace std;

    void sentence( string& major, string fred, string& foo ) {

        cout << "Many a " << foo << " in the " << fred << " of " << major  << endl;
        major[ 0 ] = 'X';
        foo[ 1 ] = 'Z';
    }

    int main() {

        string major = "fred";
        string fred = "computer";
        string computer = "department";
        string department = "student";
        string student = "major";

        sentence( major, fred, department );
        sentence( student, department, major );
        sentence( fred, "major", student );

        cout << "This is my startup  template!" << endl;

        return 0;
    }
