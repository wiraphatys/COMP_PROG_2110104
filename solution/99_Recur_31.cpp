#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    std::sort(str.begin(), str.end());
    do {
        std::cout << str << " ";
    } while (std::next_permutation(str.begin(), str.end()));
    return 0;
}
