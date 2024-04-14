#include <iostream>
#include <bitset>

void invertselectbits(uint8_t* memory, uint8_t mask, size_t length) {
    
    *memory ^= mask;
}

int main() {
    uint8_t x[4] = { 0b10101010, 0b01010110, 0b00011100, 0b11100011 };
    uint8_t* memory = &x[0];

    for (size_t i = 0; i < sizeof(x); ++i) {
        std::cout << std::bitset<8>(x[i]) << " ";
    }
    std::cout << '\n';

    uint8_t mask = 1u << 2; // 00000100 ну или выбрать свое значение (0b11110000)
    invertselectbits(memory, mask, sizeof(x));

    for (size_t i = 0; i < sizeof(x); ++i) {
        std::cout << std::bitset<8>(x[i]) << " ";
    }
    std::cout << std::endl;

    return 0;
}



//void invertSelectBits(std::unique_ptr<uint8_t[]>& memory, uint8_t mask) {
//    for (size_t i = 0; i < 1; ++i) {
//        memory[i] ^= mask;
//    }
//}
//
//int main() {
//    uint8_t x = 0b10101010;
//    std::unique_ptr<uint8_t[]> memory(new uint8_t[8]);
//
//    for (int i = 0; i < 1; ++i) {
//        memory[i] = x;
//        std::cout << std::bitset<8>(memory[i]) << '\n';
//    }
//    uint8_t mask = 1u << 2;// 00000100 ну или задать конкретные биты (0b11110000)
//    invertSelectBits(memory, mask);
//    std::cout << std::bitset<8>(*(memory.get())) << '\n';
//
//    return 0;
//}



