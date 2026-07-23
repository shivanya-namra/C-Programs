#include <iostream>
#include <string>

int main() {
    // UTF-32 string with Unicode characters
    std::u32string str = U"Hello 🌍";

    // Access character at index
    char32_t ch = str.at(6); // Index of 🌍

    // Print Unicode code point in hex
    std::cout << "Character at index 6: " << static_cast<char>(ch) << std::endl;
    std::cout << "Unicode code point: U+" << std::hex << ch << std::endl;

    return 0;
}
