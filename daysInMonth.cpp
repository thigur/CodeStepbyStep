    #include <iostream>
    #include <stdio.h>      /* printf */
    #include <array>       /* container library array */

    using namespace std;

    int daysInMonth( int days ) {

        int daysInAMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int numDays = daysInAMonth[ days ];

        return numDays;
 
    }

    int main() {

        cout << " daysInMonth = " << daysInMonth(9) << endl;

        array<int, 13> daysInAMonth2 {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        cout << " daysInMonth = " << daysInAMonth2.at(9) << endl;
        return 0;
    }
