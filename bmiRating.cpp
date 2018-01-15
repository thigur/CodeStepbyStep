    #include <iostream>
    #include <stdio.h>      /* printf */
    #include <math.h>       /* fmod */

    using namespace std;

    double getDouble();

    double calculateBodyMassIndex( double height,  double weight) {

        cout << "weight: " << weight << " " << "height: " << height << endl;
        double bmiConstant = 703;
        double bmi = ( weight /  pow( height, 2 ) ) * bmiConstant;

        return bmi;
    }
    void bmiCategory( double bmiIndex ) {

        if( bmiIndex < 18.5 ) {
            cout << "BMI = " << bmiIndex << " " << "class 1" << endl;
        }
        if( bmiIndex >= 18.5 && bmiIndex <= 24.9 ) {
            cout << "BMI = " << bmiIndex << " " << "class 2" << endl;
        }
        if( bmiIndex >= 25 && bmiIndex <= 29.9 ) {
            cout << "BMI = " << bmiIndex << " " << "class 3" << endl;
        }
        if( bmiIndex >= 30.0 ) {
            cout << "BMI = " << bmiIndex << " " << "class 4" << endl;
        }
    }

    int main() {

        cout << "This programs reads data for two people"<< endl;
        cout << "and computes their body mass index (BMI)."<< endl;

        double height = 0;
        double weight = 0; 
        cout << "Enter Persosn 1's information:" << endl;
        cout << "height (in inches)? ";
        height = getDouble();
        cout << "weight (in pounds)? ";
        weight = getDouble();
        double person1Bmi =  calculateBodyMassIndex( height, weight );
        bmiCategory( person1Bmi ); 

        cout << endl;
        cout << endl;

        cout << "Enter Persosn 2's information:" << endl;
        cout << "height (in inches)? ";
        height = getDouble();
        cout << "weight (in pounds)? ";
        weight = getDouble();
        double person2Bmi =  calculateBodyMassIndex( height, weight );
        bmiCategory( person2Bmi ); 

        cout << endl;
        cout << "BMI difference = " << abs( person1Bmi - person2Bmi ) << "!" << endl;
        return 0;
    }

    double getDouble() {

        double d = 0;

        while (true ) {
            if ( cin >> d ) {
                break;
            } else {
                //not a valid number
                cout << "Enter a valid number, try again: ";
            }
        }
        return d;
    }
