#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>

void Menu(){
    printf("\n\t\t------------------------------");
    printf("\n\t\t|  Operações Matemáticas  |");
    printf("\n\t\t------------------------------");
    printf("\n\t\t   [1] Adição");
    printf("\n\t\t   [2] Subtração");
    printf("\n\t\t   [3] Multiplicação");
    printf("\n\t\t   [4] Divisão");
    printf("\n\t\t   [0] Sair");
    printf("\n\t\t==============================");
    printf("\n\t\t   Sua escolha: ");
}

void data_collection(float *num1, float *num2){
    printf("\n\t\t------------------------------");
    printf("\n\t\t|  Operações Matemáticas  |");
    printf("\n\t\t------------------------------");   
    printf("\n\t\t   Digite dois números:");
    printf("\n\t\t   Número 1: ");
    scanf("%f", &*num1);
    printf("\n\t\t   Número 2: ");
    scanf("%f", &*num2);
}

void addition(){
    system("cls");

    float num1, num2;

    data_collection(&num1, &num2);

    printf("\n\t\t   %.1f + %.1f = %.1f", num1, num2, num1 + num2);
    printf("\n\t\t   ");
    system("pause");  
}

void subtraction(){
    system("cls");

    float num1, num2;

    data_collection(&num1, &num2);

    printf("\n\t\t   %.1f - %.1f = %.1f", num1, num2, num1 - num2);
    printf("\n\t\t   ");
    system("pause");  
}

void multiplication(){
    system("cls");

    float num1, num2;

    data_collection(&num1, &num2);

    printf("\n\t\t   %.1f x %.1f = %.1f", num1, num2, num1 * num2);
    printf("\n\t\t   ");
    system("pause");  
}

void division(){
    system("cls");

    float num1, num2;

    data_collection(&num1, &num2);

    if(num2 != 0){
        printf("\n\t\t   %.1f / %.1f = %.1f", num1, num2, num1 / num2);
    }else{
        printf("\n\t\tDivisão com Zero não existe");
    }

    printf("\n\t\t   ");
    system("pause");  
}

int main(){
    setlocale(LC_ALL, "");
    int escolha;

    while (true)
    {
        system("cls");

        Menu();
        scanf("%d", &escolha);

        if(escolha == 0){
            printf("\n\t\tEncerrado.");
            break;
        }

        switch (escolha)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;

        default:
            printf("\n\t\tOpção Inválida");
        }
    }
    
   
}