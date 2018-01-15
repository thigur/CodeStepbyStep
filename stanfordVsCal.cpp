    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>
    using namespace std;

    int main() {

        int score1;
        int score2;
        cout << "Stanford: How many points did they score? ";
        cin >> score1;

        cout << "Cal: How many points did they score? ";
        cin >> score2;
    
        if ( score1 > score2 )
            cout << "Stanford won!" << endl;
        else
            cout << "Cal won!" << endl;

        return 0;
    }
