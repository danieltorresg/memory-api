#define NULL 0
int main(){
    int entero = 9;
    int *puntero = &entero;
    puntero = NULL;
    *puntero = 7;
    return 0;
}