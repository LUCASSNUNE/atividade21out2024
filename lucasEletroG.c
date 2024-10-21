#include <stdio.h>
#include<math.h>

int main(){
    
    char letra;

    printf ("informe a letra: ");
    scanf ("%c", &letra);

    if ( letra == 's' || letra == 'S' ) {
        printf ("solteiro/a");
    }

    if ( letra == 'c' || letra == 'C') {
        printf ("casado/a");
    }


    if ( letra == 'd'|| letra == 'D') {
        printf ("divorciado/a");

}

    if ( letra == 'v'|| letra == 'V') {
        printf ("viuvo/a");

    }

        else  {
        printf ("letra inválida");



}

    


}