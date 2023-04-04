#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>
int ceparquivo;
int tamanho;
char endereco[50];
int opcaomenu;
int controle_nome;
FILE *file;
int salvar;
int idade;
char cep[9];
char cpf[];
char email[100];
FILE * filess;
char nome[70];
char comorbidade[10];
char comorbis[10] = "s";
char comorbiss[10] = "S";
char telefone[13];
char cpf[15];
int opcao = 0;
int controle_cpf;
int dia ,mes,ano,diad,mesd,anod;
int d1;m1,a1,d2,m2,a2;
char possuicomorbidade = 's';
int possuicomorbidadeteste;
void menu(){

do{
    printf("1) - CADASTRO DE PACIENTES\n");
    printf("2) - SAIR DO SISTEMA\n\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcaomenu);

    getchar();
if ((opcaomenu != 1) && (opcaomenu != 2))
      printf("\nOpção Invalida\n!");

} while ((opcaomenu != 1) && (opcaomenu != 2));



system ("cls");

        switch (opcaomenu)

        {

            case 1:

                Cadastropacientes();

            break;

            case 2:


                   printf ("         \n\n\n\n\t\t\t\t\t Obrigado por usar nosso sistema");


            break;

            default :

                printf("Opção Invalida!");

            break;
        }

        getchar();
    return 0;
}


void inicioLogin(){
    char login[20] = "unip";
    char login1[20];
    char senha[20] = "pim4";
    char senha1[20];
    int login_valido = 0; //0 - Falso e  1 - Verdadeiro

    while(!login_valido){
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tDigite o Login: ");
        scanf("%s", login1);

        printf("\t\t\t\t\t\tDigite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){

            system("cls");
            printf("\n\n\n\n\n\t\t\t\t\t\t SEJA BEM VINDO! \n\n");
            printf("\n");
            printf("\n");
            printf("\n");

            system("pause");
            system("cls");

            login_valido = 1;
        }
        else{
            system("cls");
            printf("\n\n Login ou senha inválido! \n\n");
            printf("\n");
            system("pause");
            system("cls");

            login_valido = 0;
        }
    }
}


void Cadastropacientes(){
    file = fopen ("pacientes.txt", "a");

//nome...................................................................
void verifica(valida);
do{


    controle_nome = 1;
    printf("\nDigite o Nome\n");
    gets (nome);
   // fputs ("\n\n", file);
    //fputs ("Nome : ", file);
    //fputs (nome, file);


    int i = 0;
    while(nome[i] != '\0') {
        verifica(nome[i]);
        i++;}

      } while (controle_nome == 1);






void cadcpf();
do{
  //char cpf[15];
  int icpf[15];
  int i,somador=0,digito1,result1,result2,digito2,valor;

  printf("CPF:  (SOMENTE NÚMERO)\n");
  scanf("%s",cpf);


  for(i=0;i<11;i++)
  {
      icpf[i]=cpf[i]-48;
  }

  for(i=0;i<9;i++)
  {
      somador+=icpf[i]*(10-i);
  }
  result1=somador%11;

  if( (result1==0)  ||  (result1==1) )
  {
      digito1=0;
  }
  else
  {
      digito1 = 11-result1;
  }

  //SEGUNDO DIGITO.

  somador=0;

  for(i=0;i<10;i++)
  {
      somador+=icpf[i]*(11-i);
  }

  valor=(somador/11)*11;
  result2=somador-valor;

  if(  (result2==0)  ||  (result2==1) )
{
    digito2=0;
}

else
{
    digito2=11-result2;
}

//RESULTADO
if((digito1==icpf[9]) && (digito2==icpf[10]))
{
        controle_cpf=0;
        //fputs("\n",file);
        //fputs("CPF: ",file);
        //fputs (cpf , file);
}
else
{     system ("cls");
    printf("CPF INVALIDO.\n");
    controle_cpf=1;

}
} while (controle_cpf !=0);



    //data............................................................................................
void verifica_data (dia,mes,ano);
do{

    opcao = 0;
    printf ("Data de Nascimento dd/mm/aaaa:\n");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    //fprintf (file," data de nasc: %d/%d/%d\n",dia,mes,ano);

  if ((dia >31) || (dia < 1) ||(ano < 1000) || (ano>2030) || (mes<1) || (mes>12) ){
          opcao = 3;
          system ("cls");
         printf ("\ndata invalida\n");}

    if ((dia == 31) && ((mes == 4) ||(mes== 6) || (mes== 9) || (mes==11))){
            opcao = 3;
            system ("cls");
        printf ("\ndata invalida\n");}


    if ((mes == 2) && (dia > 29)){
            opcao = 3;
            system ("cls");
        printf ("\ndata invalida\n");}


    if ((mes == 2) && (dia == 29))
        if ((ano%4!=0) && ((ano%100!=0) || (ano%400==0))){
                opcao = 3;
                system ("cls");
        printf ("\ndata invalida\n");}
if (opcao == 0 ){
//fprintf(file, "Data de Nasc: %2d/%2d/%4d", dia,mes,ano);
d1 = dia;
m1=mes;
a1 = ano;}

}while (opcao != 0);


//fprintf(file, "\n data de Nasc: %2d/%2d/%4d", dia,mes,ano);


//diagnostico.............................................................................................
void verifica_data (diad,mesd,anod);

do {

    opcao = 0;
    printf ("Data do Diagnostico dd/mm/aaaa:\n");
    scanf("%d/%d/%d",&diad ,&mesd,&anod);


if ((diad >31) || (diad < 1) || (anod < 1000) || (anod >2030) || (mesd<1) || (mesd>12) ){
         opcao = 3;
         system ("cls");
         printf ("\ndata invalida1\n");}
if ((diad == 31) && ((mesd == 4) ||(mesd== 6) || (mesd== 9) || (mesd==11))){
        opcao = 3;
        system ("cls");
        printf ("\ndata invalida2\n");}

if ((mesd == 2) && (diad > 29)){
         opcao = 3;
         system ("cls");
        printf ("\ndata invalida3\n");}

if ((mesd == 2) && (diad == 29))
        if ((anod%4!=0) && ((anod%100!=0) || (anod%400==0))){
                opcao = 3;
                system ("cls");
        printf ("\ndata invalida4\n");}

if (opcao == 0 )
{      // fprintf(file, "\nData do diagnostico: %2d/%2d/%4d", diad,mesd,anod);
             d2 = diad;
           m2= mesd;
           a2 = anod;}

}while (opcao != 0);


 void comorbidades();{


    printf ("\n\t\t\tO paciente apresenta algumas dessas Comorbidades: \n ");
    printf (" \t\t\tDiabetes, Obesidade, Hipertensão, Tuberculose, outros ? \n");
    printf ("\t\t\tDigite ( S ) Sim ou ( N ) Não:\n ");
    printf("\nComorbidade S / N : ");
    scanf("%s",&comorbidade);





    if (comorbidade  == (('s' || 'S'))){
            possuicomorbidade = 1;


    }

    else {
            possuicomorbidade = 0;


    }

     //file = fopen ("pacientes.txt", "a");
     //fputs("\n",file);
    // fputs("\ncomorbidade: " ,file);
     //fprintf ("%s",comorbidade, file);
     //fprintf (file,"  %c  ",comorbidade);
     //fprintf(file, "Data de Nasc: %2d/%2d/%4d", dia,mes,ano);


    };

void qual_idade();{

idade = a2 - a1;

if ((m1 == m2 ) && (d1 > d2)){
idade = idade - 1;}
else if (m1 > m2)
 idade --;

};

void endereco_certo();
do{


    printf ("endereço:   (Rua, numero, cidade e estado) \n");
    getchar();
    gets (endereco);
    tamanho = strlen(endereco);
if (tamanho != 0)
{
       // fputs("\nend: ",file);
        //fputs (endereco, file);
}

}while (tamanho == 0);

void cep_telefone();{

  do {
    printf("CEP:\n ");
    gets(cep);
    tamanho = strlen(cep);
if (tamanho != 8)
   {

    printf("Cep invalido ");
    //ceparquivo = cep;
   }
else
{
     //fputs("\nCEP: ",file);
     //fputs (cep, file);
     //ceparquivo = cep;
}

  }while (tamanho != 8);

  printf("EMAIL\n");
  gets(email);



do {
    printf("Telefone com ddd :\n ");

    gets(telefone);
    tamanho = strlen(telefone);
if (tamanho != 11)
    printf(" telefone invalido, ddd não digite espaço xxxxxxxxxxx\n ");
else  { //fputs("\n" , file);
        //fputs("telefone: ",file);
        //fputs (telefone, file);
        }
} while (tamanho != 11);
}
do{

    printf("1) - SALVAR E CRIAR NOVO\n");
    printf("2) - CANCELAR E CRIAR NOVO\n");
    printf("3) - SALVAR E SAIR\n");
    printf("4) - CANCELAR E SAIR\n\n");


    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &salvar);

    getchar();
if ((salvar != 1) && (salvar != 2) && (salvar != 3 ) && (salvar != 4))
      printf("\nOpção Invalida\n!");

} while ((salvar != 1) && (salvar != 2) && (salvar != 3 ) && (salvar != 4));



system ("cls");





switch (salvar)
{

    case 1:  //salvar e continuar cadastrando
     system("cls");
     printf ("cadastro realizado com sucesso");
     gravar_ficha();
     Cadastropacientes();

     break;

    case 2: { //não salvar e continuar
        system("cls");
        printf ("cadastro cancelado");
        Cadastropacientes();
        break;}
    case 3:
        system("cls");
        printf ("cadastrado com sucesso");
        gravar_ficha();
        //gravar_ss();
        printf ("         \n\n\n\n\t\t\t\t\t Obrigado por usar nosso sistema");
        break;

    case 4:
        system("cls");
        printf ("\n\n\n\n\t\t\t\t             cadastrado cancelado");
        printf ("         \n\n\n\n\t\t\t\t\t Obrigado por usar nosso sistema");

        break;
        break;

    default :
       system("cls");
       printf("Opção Invalida!");
       break;
}//salvar e continuar cadastrando.

 //ARQUIVO ms .............................................................



//filems = fopen ("arquivo ms", "a");
//if ((idade >65) || (possuicomorbidade == 1 ))
  //   fputs("\nidade: ",filems);
   //     fputs (idade, filems);
     //     fputs("\nCEP: ",filems);
        //fputs (cep, filems);
    //fprintf (file "idade : " );
// idade
//cep
//gravar arquivo


fclose (filess);


fclose (file);



}






  void verifica (valida){

{
    if ((valida >=  'a' && valida <= 'z')
||    (valida >='A' && valida <= 'Z') || (valida == ' ')){

       controle_nome = 0;
    }
   else {
            system ("cls");
        printf ("\nNome invalido digite apenas letras\n");
         controle_nome = 1;
           //system ("cls");




   }}


}
void gravar_ficha(){
    file = fopen ("pacientes.txt", "a");
    fputs ("\n\n", file);
    fputs ("Nome : ", file);
    fputs (nome, file);

    fputs("\n",file);
    fputs("CPF: ",file);
    fputs (cpf , file);

    fputs("\n",file);
    fprintf(file, "Data de Nasc: %2d/%2d/%4d", dia,mes,ano);

    fprintf(file, "\nData de Nasc: %2d/%2d/%4d", diad,mesd,anod);

    fputs("\ncomorbidade: " ,file);
    fprintf (file,"  %s  ",comorbidade);

    fputs("\nCEP: ",file);
    fputs (cep, file);

    fputs("\nEMAIL: ",file);
    fputs (email, file);

    fputs("\nendereço: ",file);
    fputs (endereco, file);

    fputs("\n" , file);
    fputs("telefone: ",file);
    fputs (telefone, file);
    fclose (file);

if ((strcmp(comorbis, comorbidade) == 0 || strcmp(comorbiss, comorbidade) == 0) || (idade > 65)){
    filess = fopen ("ss.txt", "a");
    fputs ("\n", filess);
    fputs("CEP: ",filess);
    fputs (cep, filess);
    fputs("\nIdade: " ,filess);
    fprintf (filess,"  %d  ",idade);

    fclose (filess);

}
else


{

}


} fclose (file);
//void gravar_ss(){
  //  fputs("\ncomorbidade: " ,filess);
    //fprintf (filess,"  %s  ",comorbidade);

    //if ((comorbidade == "s") || ( comorbidade == "S")|| (idade >= 65))    {
    //filess = fopen ("ss.txt", "a");
    //fputs ("\n", filess);
    //fputs("CEP: ",filess);
    //fputs (cep, filess);

    //fputs("\nIdade: " ,filess);
    //fprintf (filess,"  %d  ",idade);

    //fclose (filess);



int main(){
int dia,mes,ano,diad,mesd,anod ;
file = fopen ("pacientes.txt", "a");
FILE *file;
FILE * filess;



    setlocale(LC_ALL, "");

    inicioLogin();
    menu ();



//void gravar_arquivo();{
//printf ("gravar arq");
//file = fopen ("pacientes.txt", "a");
//fputs ("\n\n", file);
//fputs (nome , file );
//fputs ("\n",file);
//fprintf (file,"data de nasc: %d/%d/%d\n",dia,mes,ano);
//fprintf(file , "data do diag: %d/%d/%d",diad,mesd,anod);
//fputs ((diad,mesd,anod) , file );
//fclose (file);
//};


//void gravar_arquivoms();{
//file = fopen ("ms.txt", "a");
//fputs ("\n", filems);
//fputs (nome , filems );
//fprintf(filems , "\n%d/%d/%d",dia,mes,ano);
//fprintf(filems , "\n%d/%d/%d",diad,mesd,anod);

//fclose (filems);


//fclose (file);
}
