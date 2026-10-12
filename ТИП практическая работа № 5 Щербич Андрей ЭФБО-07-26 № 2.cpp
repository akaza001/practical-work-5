#include <iostream>

int main() {
    int a;
    int b;
    std::cout << "Введите число a: ";
    std::cin >> a;
    std::cout << "Введите число b: ";
    std::cin >> b;
    while (a > b){
        if (a % 2 != 0) {
            a = a - 1;
            std::cout << "-1" << "\n";
        } else {
            if (a / 2 >= b) {
                a /= 2;
                std::cout << ":2" << "\n";
            }
        }
    }
    return 0;
}


// int main() {
//     int a;
//     int b;
//     std::cout << "Введите число a: ";
//     std::cin >> a;
//     std::cout << "Введите число b: ";
//     std::cin >> b;
//     for (; a > b; ) {
//             if (a % 2 != 0) {
//             a = a - 1;
//             std::cout << "-1" << "\n";
//         } else {
//             if (a / 2 >= b) {
//                 a /= 2;
//                 std::cout << ":2" << "\n";
//             }
//         }
//     }
//     return 0;
// }


// int main() {
//     int a;
//     int b;
//     std::cout << "Введите число a: ";
//     std::cin >> a;
//     std::cout << "Введите число b: ";
//     std::cin >> b;
//     do {
//             if (a % 2 != 0) {
//             a = a - 1;
//             std::cout << "-1" << "\n";
//         } else {
//             if (a / 2 >= b) {
//                 a /= 2;
//                 std::cout << ":2" << "\n";
//             }
//         }
//     } while (a > b);
//     return 0;
// }