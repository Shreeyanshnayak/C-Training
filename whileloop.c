int main(){
    int number;

    printf("Guess the number(1 to 10): ");
    scanf("%d", &number);

    while (number !=7){
        printf("Wrong guess. Try again: ");
        scanf("%d",&number);
    }



printf("Congratulate !! You guessed it !!\n");
return 0;

}