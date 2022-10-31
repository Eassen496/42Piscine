int ft_strlen(char *str){
    int lenght = 0;
    while(*(str++) != '\0'){
        lenght++;
    }
    return(lenght);
}

