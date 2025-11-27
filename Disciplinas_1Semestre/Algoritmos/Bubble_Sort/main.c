#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    clock_t inicio, fim;
    double tp;
    
    // Mudamos para char para tratar o RGM como uma string de dígitos
    char rgm[9]; 
    char placeholder;
    int i, j;
    int steps = 0; // Variável declarada e inicializada
    
    printf("Insira o RGM (8 digitos): \n");
    // Lê 8 caracteres. Não use &rgm para strings (char arrays), apenas rgm
    scanf("%8s", rgm); 
    
    inicio = clock();    
    // Loop do Bubble Sort
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8 - 1; j++){
            // Compara os caracteres ASCII
            if(rgm[j] >= rgm[j+1]){
                placeholder = rgm[j];
                rgm[j] = rgm[j+1];
                rgm[j+1] = placeholder;
                steps++; // Conta as trocas
            }
        }
        // steps++; // Essa linha contaria "passadas", removi para focar nas trocas ou comparações
    }
    fim = clock();
    
    tp = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
    printf("Método,N,Tempo,Passos\n");
    // Agora %s funciona corretamente porque rgm é um char array
    printf("Bubble,%s,%f,%d\n", rgm, tp, steps);
    
    return 0;
}
