#include <iostream>
#include <cstdint>


int64_t gcd(int64_t a, int64_t b) {
    while (b != 0) {
        int64_t temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int64_t A, B, C, D;
    // Membaca input
    std::cin >> A >> B >> C >> D;

    // Menghitung penyebut baru
    int64_t new_denominator = B * D;
    // Menghitung pembilang baru
    int64_t new_numerator = A * D + C * B;
    // Mencari FPB dari pembilang dan penyebut
    int64_t gcd_value = gcd(new_numerator, new_denominator);

    new_numerator /= gcd_value;
    new_denominator /= gcd_value;

    // Output hasil
    std::cout << new_numerator << " " << new_denominator << std::endl;

    return 0;
}
