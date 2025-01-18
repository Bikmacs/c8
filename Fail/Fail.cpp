#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

void Vvod(double& a, double& b) {
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
}

int main() {
    setlocale(LC_ALL, "rus");
    FILE* file;
    if ((file = fopen("Rezultat.txt", "wx")) == NULL) {
        std::cout << "Файл невозможно открыть или создать" << std::endl;
        return 1;
    }
    double a, b, coor, x = 0;

    while (true) {
        Vvod(a, b);
        if (a < 0 || b < 0) {
            std::cout << "числа отрицательные, пока";
            return 1;
        }
        else
        {
            if (a == 0 && b == 0) {
                break;
            }
            coor = (a * x) + b; 
            printf("y = %.2lfx + %.2lf (%2.lf,%2.lf )\n", a, b, x, coor);
            fprintf(file, "y = %.2lfx + %.2lf (%2.lf,%2.lf )\n", a, b, x, coor);
            
        }
    }

    fclose(file);
    std::cout << "Данные записаны в файл Rezultat.txt" << std::endl;
    return 0;
}
