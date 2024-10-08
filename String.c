int main(){

    char greeting[] = " Hello, World";
    char name [] = "Jerlin";

    strcat (greeting, "my name is ");
    strcat(greeting, name);

    int length = strlen(greeting);

    printf("Message: %s\n", greeting);
    printf("Length: %d\n", length);
    

    return 0;
}