#include <stdio.h>
#include <stdlib.h>

void print_menu();
float get_gallons_bought();
void print_reciept(float gallons_bought);

const int MAX_GAS = 25;
const float PRICE_OF_GAS = 2.30;

int main(int argc, char *argv[]){
    float gallons_bought;

    print_menu();
    gallons_bought = get_gallons_bought();

    return 0;
}

void print_menu(){
    
}

float get_gallons_bought(){
    float gallons;

    gallons = rand() % MAX_GAS;

    return gallons;
}

void print_reciept(float gallons_bought){
    
}