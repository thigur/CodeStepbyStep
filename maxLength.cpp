    /* Author: laveenAZ
     * Write a function maxLength that accepts as a parameter a reference Set of strings, and
     * that returns the length of the longest string in the set. If your function is passed
     * an empty set, it should return 0.
     * Feb 3rd 2019 */

    #include<string>
    using std::cout;
    using std::cin;
    using std::endl;
    #include<set>

    \    int maxLength( std::set<std::string>& setOfStrings ) {

         int longestWordLen = 0;
        if( setOfStrings.size() != 0 ) {
            for( std::string str : setOfStrings ) {
               longestWordLen = ( longestWordLen > str.length() ) ? longestWordLen : str.length();
            }
         } else
            return 0;

        return longestWordLen;
    }

    //The Main Function()
    /*int main() {

        std::set<std::string> setOfStrings;
        setOfStrings.insert( "hello");
        setOfStrings.insert( "bye");
        setOfStrings.insert( "because");
        setOfStrings.insert( "not");
        setOfStrings.insert( "therefore");

        std::cout << maxLength( setOfStrings ) << std::endl;
        std::cout << std::endl;

        return 1;
    }*/
