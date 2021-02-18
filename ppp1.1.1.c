#include <stdio.h>

int main() {
    char name[50];
    int weight = 0;
    int age;
    printf("Nome: ");
    scanf("%s", &name);
    printf("Weight: ");
    scanf("%d", &weight);
    printf("Age: ");
    scanf("%d", &age);
    printf("Nome: %s\nWeight: %d\nAge: %d", name, weight, age);
}