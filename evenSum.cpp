    #include <iostream>
    #include <stdio.h>      /* printf */
    #include <math.h>       /* fmod */

    using namespace std;

    //If you want to reject decimal input instead of truncating it, you can  
    //convert the input to a double and check to make sure it doesn't have a decimal part 

    int getInteger() {
        string line;
        double d = 0;

        while ( true ) {
            getline( cin, line );

            try {
                d = stod(line);

                if (fmod(d, 1) != 0)
                    throw 0;
                break;
            } catch (...) {
                cout << "Enter an integer, try again: ";
            }
        }
        return d;
    }

    int main() {
        int nums = 0;
        int numOfIntegers = 0; 
        int largestEvenNum = 0;
        double sumOfEvenNums = 0;

        cout << "how many integers? ";
        numOfIntegers = getInteger();
 
        while ( numOfIntegers > 0 ) { 

            cout << "next integers? ";
            nums = getInteger();

            if( (abs( nums ) % 2 ) == 0 ) {
                sumOfEvenNums += nums;

                if ( nums > largestEvenNum )
                    largestEvenNum = nums;
            }
            numOfIntegers--;
        }

        cout << "even sum = " << sumOfEvenNums << endl;
        cout << "even max = " << largestEvenNum << endl;

        return 0;
    }
