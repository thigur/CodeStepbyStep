    /* Author: laveenAZ
     * Write a function named isHappyNumber that returns whether a given integer is "happy".
     * An integer is "happy" if repeatedly summing the squares of its digits eventually leads
     * to the number 1.
     *  For example, 139 is happy because:
     *     1^2 + 3^2 + 9^2 = 91
     *     9^2 + 1^2 = 82
     *     8^2 + 2^2 = 68
     *     6^2 + 8^2 = 100
     *     1^2 + 0^2 + 0^2 = 1
     *  By contrast, 4 is not happy because:
     *      4^2 = 16
     *      1^2 + 6^2 = 37
     *      3^2 + 7^2 = 58
     *      5^2 + 8^2 = 89
     *      8^2 + 9^2 = 145
     *      1^2 + 4^2 + 5^2 = 42
     *      4^2 + 2^2 = 20
     *      2^2 + 0^2 = 4
     * Jan 28th 2019 */

    #include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    #include <algorithm>
    #include<string>
    #include<vector>
    #include<set>

    //Print output
    template<typename T>
    void print( T t ) {
        //std::cout << "The set contains:" << std::endl;
        for (const auto& e : t) {
             std::cout << e << ",";
        }
        std::cout << std::endl;
    }
    //Function returns ture if number is "happy" == 1
    bool isHappyNumber( int happyNum ) {
        std::set<int> setOfSqures;
        bool happy = false;
        //extract the digits out of the munber
        while ( happyNum > 0 ) {
            std::vector<int> v;
            int sum = 0;
            while( happyNum > 0 ) {

                int digit = happyNum % 10;
                v.insert(v.begin(), digit );
                happyNum = happyNum / 10;
            }
            for ( auto& e : v ) {
                sum += e*e;
            }
            auto numInSetOfSquares = setOfSqures.find( sum );
            if ( sum == 1 ) {   //found a happy number
                happy = true;
                break;
            }
            if ( sum != *numInSetOfSquares ) { //still iterating through
                setOfSqures.insert( sum );
                happyNum = sum;
             } else   //did not find a happy number done!
                break;
        } //while()...
         return happy;
    }

    //The Main Function()
    /*int main() {

        if ( isHappyNumber( 139 ) == true ){ std::cout << "139 is a happy number"  << std::endl; }
        else
            std::cout << "139 is Not a happy number"  << std::endl;

        std::cout << std::endl;
        std::cout << std::endl;

        if ( isHappyNumber( 4 ) == true ) { std::cout << "4 is a happy number"  << std::endl; }
        else
            std::cout << "4 is Not a happy number"  << std::endl;

        return 1;
    }*/

