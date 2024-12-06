#include <iostream>
#include <cstdio>

int main() {
    FILE* file;
    if (fopen_s(&file, "1.txt", "r") != 0) {
        std::cout << "Файл невозможно открыть или создать" << std::endl;
        return 1; 
    }

    double a, b;
    while (fscanf_s(file, "%lf %lf", &a, &b)==2) {
        printf("y = %.2lfx + %.2lf\n", a, b);
    }

    fclose(file);
    return 0;
}
