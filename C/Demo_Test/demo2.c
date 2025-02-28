#include <stdio.h>
void main(){
    int p_no[9];
    char n[25],add[100];
    printf("Enter your name: ");
    gets(n);
    printf("Enter your address: ");
    gets(add);
    printf("Enter your phone number: ");
    gets(p_no);
    printf("\n\n\n Welcome to ABC Company\n Hi Ganesh this side\n I'm here to reconfirm your data as per your input.\n Data provided by you are...\n");
    printf("\n\nYour name is - ");
    puts(n);
    printf("\nYour address is - ");
    puts(add);
    printf("\nYour phone number is - ");
    puts(p_no);
    printf("\nEmployee ID is - 1234 \t **This is computer generated information\n");
}
