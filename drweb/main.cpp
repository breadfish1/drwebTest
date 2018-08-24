/*
 Напишите функцию, которая обрезает пробелы в конце переданной ей строки. Функция должна быть написана в расчёте на работу с очень длинными строками с очень большим количеством пробелов, оптимизирована по количеству обращений к памяти.
*/
 
#include <iostream>

void TrimRight(char *s) {
    if (!s) { // если строка пустая
        std::cout << "NULL!" << std::endl;
        return;
    }

    int lastSymbol = 0;
    
    for (int i = 0; s[i]; i++) // проход по строке
        if (s[i] != ' ')
            lastSymbol = i;
    
    if (!lastSymbol && s[0] == ' ') { // если вся строка из пробелов
        s[0] = '\0';
        return;
    }
    
    s[lastSymbol + 1] = '\0'; // обрубаем строку
}

void print(char *p) {
    std::cout << p << "|" << std::endl;
}

int main() {
    char *x = new char[40];
    strcpy(x, "     sd asd ddsda         dsdsds              ");
    
    TrimRight(x);
    print(x);
    
    delete[] x;
}
