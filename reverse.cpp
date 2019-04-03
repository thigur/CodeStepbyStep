    /* **********This is Worth Keeping*******
     * Author: laveenAZ
     * Write a function named reverse that accepts as a parameter a reference to a map
     * from integers to strings, and returns a map with the associations reversed. For
     * example, if a variable named map stores the following key/value pairs:
     * {1:"a", 2:"b", 3:"c"}
     * the call of reverse(map); would return the following map:
     * would yield {"a":1, "b":2, "c":3}
     * If there are duplicate values (k1, v) and (k2, v) in the original map, your
     * returned map should contain the pair that would come earlier in sorted order.
     * Feb 4th 2019 */

    #include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    #include<algorithm>
    #include<vector>
    #include<map>
    #include<set>

    using namespace std;

    template<typename T>
    void print (T t) {
        for (const auto& e : t)
            std::cout << e << " ";
        cout << endl;
    }

    template<typename A, typename B>
    pair<B,A> flip_pair(const pair<A,B> &p)
    {
        return pair<B,A>(p.second, p.first);
    }

    template<typename A, typename B>
    map<B,A> flip_map(const map<A,B> &src)
    {
        map<B,A> dst;
        transform(src.begin(), src.end(), inserter(dst, dst.begin()),
                       flip_pair<A,B>);
        return dst;
    }

    /*int main() {

        //std::map<int, std::string> m1 = { { 2, "b" }, {4, "a" }, { 3, "c" }, { 5, "a" }};
        std::map<int, std::string> m1 = { { 10, "Marty" }, { 20, "Cynthia" },
                                          { 30, "Keith" }, { 40, "Cynthia" }, { 50, "Marty" } };

        for(auto it = m1.cbegin(); it != m1.cend(); ++it)
        {
            std::cout << it->first << " " << it->second << " " << "\n";
        }

        std::cout << std::endl;
        std::cout << std::endl;

        std::map<string, int> dst = flip_map(m1);
        for(auto it = dst.cbegin(); it != dst.cend(); ++it)
        {
            std::cout << it->first << " " << it->second << " " << "\n";
        }
        return 0;
    }*/
