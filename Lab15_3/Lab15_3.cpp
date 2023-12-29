#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>

#define SIZE 10

int main() {
    setlocale(LC_ALL, "Ukr");

    // Встановлення генератора випадкових чисел заснованого на часі
    srand(time(NULL));

    // Задання розміру масиву
    int a[SIZE];

    // Заповнення масиву випадковими числами
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100; // обмеження до чисел від 0 до 99
    }

    // Виведення початкового масиву
    printf("Початковий масив: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Обнулення парних елементів масиву
    for (int i = 0; i < SIZE; i++) {
        if (a[i] % 2 == 0) {
            a[i] = 0;
        }
    }

    // Виведення масиву після обнулення парних елементів
    printf("Масив пiсля обнулення парних елементiв: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}