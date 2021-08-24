#include <stdio.h>
#include <stdlib.h>

int print_menu();
float get_gallons_bought();
void print_reciept(float gallons_bought, int menu_choice);

const int MAX_GAS = 25;
const float PRICE_OF_GAS = 2.30;
const float PRICE_OF_DIESEL = 3.13;

int main(int argc, char *argv[]){
    float gallons_bought;
    int menu_choice;

    menu_choice = print_menu();
    gallons_bought = get_gallons_bought();
    print_reciept(gallons_bought,menu_choice);

    return 0;
}

int print_menu(){
    int menu_choice = 0;

    while (menu_choice != 3){
        printf('Welcome to the Gas Pump Simulator\n');
        printf('Would you like to purchase       \n');
        printf('1:    Gas     Price:       %2f   \n',PRICE_OF_GAS);
        printf('2:    Diesel  Price:       %2f   \n',PRICE_OF_DIESEL);
        printf('3:    Buy Nothing                \n');

        scanf('%d', menu_choice);
    }

    return menu_choice;
}

float get_gallons_bought(){
    float gallons = rand() % MAX_GAS;
    return gallons;
}

void print_reciept(float gallons_bought, int menu_choice){
    float price = 0;
    if (menu_choice == 1){
        price = PRICE_OF_GAS;
    }
    else{
        price = PRICE_OF_DIESEL;
    }

    printf('Thank You for buying with us\n');
    printf('Gallons Bought...........%2f\n',gallons_bought);
    printf('Price of Gas.............%2f\n',price);
    printf('Total....................%2f\n',gallons_bought * price);
}