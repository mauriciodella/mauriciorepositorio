/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//macros 
int SOMA(int a, int b);
int SUBTRACAO(int a, int b);
int MULTIPLICACAO(int a, int b);
int DIVISAO(int a, int b);
int POTENCIA(int a, int b);
double RAIZ(double A);
void Bhaskara(double A, double B, double C);
int Fatorial(int a);
int FatorialDuplo(int a);
int MDC(int a, int b);
int MMC(int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    int escolha = 0;
    double A = 0.0;
    double B = 0.0;
    double C = 0.0;
    char opcao;
    
    do{
    printf(" ___________________________\n");
    printf("|        Calculadora        |\n");
    printf("|___________________________|\n");
    printf("|(1)Soma....................|\n");
    printf("|(2)Subtracao...............|\n");
    printf("|(3)Multiplicacao...........|\n");
    printf("|(4)Divisao.................|\n");
    printf("|(5)Potenciacao.............|\n");
    printf("|(6)Equacao de Segundo Grau.|\n");
    printf("|(7)Raiz Quadrada...........|\n");
    printf("|(8)Fatorial................|\n");
    printf("|(9)Fatorial Duplo..........|\n");
    printf("|(10)MMC....................|\n");
    printf("|(11)MDC....................|\n");
    printf("|(12)Sair...................|\n");
    printf("|___________________________|\n");
    printf("Escolha a operacao pelo numero\n");
    printf("Digite ");
    scanf("%d",&escolha);
    switch(escolha){
    case 1:
     //Soma
    do{
    printf(" ____\n");
    printf("|Soma|\n");
    printf("  _________________________________________________\n");
    printf(" |Digite o numero primeiro e o segundo numero      |\n");
    printf(" |Obs: nao esqueca de usar espaco entre os numeros |\n");
    printf(" |Se deseja continuar tecle(s/n)                   |\n");
    printf(" |_________________________________________________|\n");
    printf(" Digite ");
    scanf("%d %d",&a,&b);
    printf("A soma entre %d e %d eh: %d\n",a,b,SOMA(a,b));
    
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 2:
     //Subtracao
     do{
    printf(" _________\n");
    printf("|Subtracao|\n");
    printf("  _________________________________________________\n");
    printf(" |Digite o numero primeiro e o segundo numero      |\n");
    printf(" |Obs: nao esqueca de usar espaco entre os numeros |\n");
    printf(" |Se deseja continuar tecle(s/n)                   |\n");
    printf(" |_________________________________________________|\n");
    printf(" Digite ");
     scanf("%d %d",&a,&b);
    printf("A subtracao entre %d e %d eh: %d\n",a,b,SUBTRACAO(a,b));
    
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 3:
     //Multiplicacao
     do{
    printf(" _____________\n");
    printf("|Multiplicacao|\n");
    printf("  _________________________________________________\n");
    printf(" |Digite o numero primeiro e o segundo numero      |\n");
    printf(" |Obs: nao esqueca de usar espaco entre os numeros |\n");
    printf(" |Se deseja continuar tecle(s/n)                   |\n");
    printf(" |_________________________________________________|\n");
    printf(" Digite ");
     scanf("%d %d",&a,&b);
    printf("A multiplicacao entre %d e %d eh: %d\n",a,b,MULTIPLICACAO(a,b));
    
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 4:
     //Divisao 
     do{
    printf(" _______\n");
    printf("|Divisao|\n");
    printf("  _________________________________________________\n");
    printf(" |Digite o numero a ser dividido e o divisor       |\n");
    printf(" |Obs: nao esqueca de usar espaco entre os numeros |\n");
    printf(" |Se deseja continuar tecle(s/n)                   |\n");
    printf(" |_________________________________________________|\n");
    printf(" Digite ");
    scanf("%d %d\n",&a,&b);
    if(b==0){
        printf("Divisao por zero eh invalida\n");
    }else{
    printf("A divisao entre %d e %d eh: %d\n",a,b,DIVISAO(a,b));
    }
    
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    
    case 5:
    do{
     //Potenciacao
    printf(" ___________\n");
    printf("|Potenciacao|\n");
    printf("   _________________________________________________\n");
    printf("  |Digite o numero e expoente                       |\n");
    printf("  |Obs: nao esqueca de usar espaco entre os numeros |\n");
    printf("  |Se deseja continuar tecle(s/n)                   |\n");
    printf("  |_________________________________________________|\n");
    printf(" Digite ");
    scanf("%d %d",&a,&b);
    printf("A potencia de %d com expoente %d eh: %d\n",a,b,POTENCIA(a,b));
    
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 6:
    do{
     //Equacao de Segundo Grau
     printf("_______________________\n");
    printf("|Equacao de Segundo Grau|\n");
    printf("   _________________________________________________\n");
    printf("  |Digite A, B, C em sequencia                      |\n");
    printf("  |Obs: nao esqueca de usar espaco entre os numeros |\n");
    printf("  |Se deseja continuar tecle(s/n)                   |\n");
    printf("  |_________________________________________________|\n");
    printf(" Digite ");
    scanf("%lf %lf %lf",&A,&B,&C);
    Bhaskara(A,B,C);
    
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 7:
     //Raiz Quadrada
     do{
     printf("_____________\n");
    printf("|Raiz Quadrada|\n");
    printf("   _____________________________________________________\n");
    printf("  |Digite o numero que deseja descobrir a raiz quadrada |\n");
    printf("  |Obs: nao esqueca de usar espaco entre os numeros     |\n");
    printf("  |Se deseja continuar tecle(s/n)                       |\n");
    printf("  |_____________________________________________________|\n");
    printf(" Digite ");
    scanf("%lf",&A);
    printf("a raiz quadrada de %lf eh %.5lf\n",A,RAIZ(A));
    
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 8:
    do{
     printf("________\n");
    printf("|Fatorial|\n");
    printf("   _____________________________________________________\n");
    printf("  |Digite o numero que deseja descobrir seu fatorial    |\n");
    printf("  |Obs: nao esqueca de usar espaco entre os numeros     |\n");
    printf("  |Se deseja continuar tecle(s/n)                       |\n");
    printf("  |_____________________________________________________|\n");
    printf(" Digite ");
    scanf("%d",&a);
    printf("O fatorial de %d eh %d\n",a,Fatorial(a));
    
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 9:
    do{
     printf("______________\n");
    printf("|Fatorial Duplo|\n");
    printf("   ________________________________________________________\n");
    printf("  |Digite o numero que deseja descobrir seu fatorial duplo |\n");
    printf("  |Obs: nao esqueca de usar espaco entre os numeros        |\n");
    printf("  |Se deseja continuar tecle(s/n)                          |\n");
    printf("  |________________________________________________________|\n");
    printf(" Digite ");
    scanf("%d",&a);
    printf("O fatorial duplo de %d eh %d\n",a,FatorialDuplo(a));
    scanf("%c",&opcao);
    }while(opcao != 'n');
    break;
    case 10:
    do{
     printf("___\n");
    printf("|MDC|\n");
    printf("   ________________________________________________________\n");
    printf("  |Digite os dois numeros para efetuar o MDC entre eles    |\n");
    printf("  |Obs: nao esqueca de usar espaco entre os numeros        |\n");
    printf("  |Se deseja continuar tecle(s/n)                          |\n");
    printf("  |________________________________________________________|\n");
    printf(" Digite ");
    scanf("%d %d",&a,&b);
    printf("O MDC de %d e %d eh %d\n",a,b,MDC(a,b));
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 11:
    do{
     printf("___\n");
    printf("|MMC|\n");
    printf("   ________________________________________________________\n");
    printf("  |Digite os dois numeros para efetuar o MMC entre eles    |\n");
    printf("  |Obs: nao esqueca de usar espaco entre os numeros        |\n");
    printf("  |Se deseja continuar tecle(s/n)                          |\n");
    printf("  |________________________________________________________|\n");
    printf(" Digite ");
    scanf("%d %d",&a,&b);
    printf("O MMC de %d e %d eh %d\n",a,b,MMC(a,b));
    scanf("%c",&opcao);
    
    }while(opcao != 'n');
    break;
    case 12:
    printf("Obrigado por usar minha calculadora superfraca nao caseira\n");
    
    
    break;
    
        
    }
    
}while(escolha != 12);
    return 0;
}
//funções
 int SOMA(int a, int b){
     a = a+b;
     
     return(a);
 }
  int SUBTRACAO(int a, int b){
     a = a-b;
     
      return(a);
 }
  int MULTIPLICACAO(int a, int b){
     a = a*b;
     
      return(a);
 }
  int DIVISAO(int a, int b){
     a = a/b;
     
      return(a);
 }
 int POTENCIA(int a, int b){
     int r = 1;
     for(int i = 0; i < b; i++){
     r = r*a;
         
     }
      return(r);
 }
 double RAIZ(double A){
     double ab = 0.0;
     ab = A;
     if(A < 0){
         printf("Impossivel calcular raiz de numero negativo no conjunto dos numeros reais\n");
     }else{
     for(int i = 0; i<=100; i++){
         ab = 0.5*(ab+A/ab);
     }
     }
      return(ab);
 }
 int FatorialDuplo(int a){
    
    int Resultado = 1;
    
    if(a%2 == 0){
     for(int i = 2; i<=a; i = i+2){
    Resultado = (Resultado*i);
    }
    }
    else 
    {
     for(int i = 1; i<=a; i = i+2){
    Resultado = (Resultado*i);
    }
    }
    
    return(Resultado);
}
 void Bhaskara(double A, double B, double C){
    double delta = 0.0;
    double x1 = 0.0;
    double x2 = 0.0;
   
    if(A == 0){
        printf("Calculo com zero eh invalido\n");
    }
    else
    {
        delta = POTENCIA(B,2)-(4*A*C);
        if(delta<0){
            printf("Impossivel calcular\n");
        }
        else{
            
            delta = RAIZ(delta);
            x1 = (-B+delta)/(2*A);
            x2 = (-B-delta)/(2*A);
            
            
            
            
        }
        printf("O resultado da equacao eh %.5lf e %.5lf\n",x1,x2);
    }
    }
    

int Fatorial(int a){
    int Resultado = 0;
    if(a == 0){
        printf("1\n");
    } else{
    Resultado = a*(a-1);
    for(int i = 0; i<a; i++){
    a = (a-1);
    Resultado = Resultado*(a-1);
    }
    }
    return(Resultado);
    }
int MDC(int a, int b){
    
    if(a > b){
       int a1 = a;
       a = b;
       b = a1;
    }
    while(b != 0){
        int resto = a%b;
        a = b;
        b = resto;
    }
    return (a);
    
    }
int MMC(int a, int b){
    int conversao = MDC(a,b);
    if(a<0){
        a = a*(-1);
    }
    if(b<0){
        b = b*(-1);
    }
    
    a = (a*b)/conversao;
    
    return (a);
    }