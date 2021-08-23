#include <stdio.h>
#include <stdlib.h>

void print_menu();
float get_gallons_bought();

const int MAX_GAS = 25;
const float PRICE_OF_GAS = 2.30;

int main(int argc, char *argv[]){
    print_menu();
}

void print_menu(){
    printf('Test');
}

float get_gallons_bought(){
    float gallons;

    gallons = rand() % MAX_GAS;

    return gallons;
}