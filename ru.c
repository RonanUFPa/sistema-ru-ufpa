#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> //pra usar o setLocale

typedef struct // usando typedef pra nao precisar informar que é um struct antes do "Aluno"
{
    char nome[50];
    int matricula;
    float creditos;
} Aluno;

int inserir_usuario(char nome){

    aluno a;
    i = 0;
    printf("Olá, meu querido guerreiro, por favor infome seu nome: ");
    scanf("%[^\n]", a.nome); //leitura de nomes compostos com [^\n]

    if(a.nome <'0'|| a.nome >'9') //condição parar checar se é um digito ou uma letra
	{
        printf("Mano eu quero teu nome, não teu whatsapp, digita apenas letras, drx");
	};

    for(int i = 0;a.nome[i] == a.nome[i]; ++i) //verifica se os nomes são iguais
    {                 
        if(a.nome[i] == 0) //verifica se existe algo em nome, 0 é o nulo do vetor de caracteres
		{
        	printf("Nenhum mano cadastrado até o momento, chama os parça ai :)");
		};
        printf("Essa mano ai já ta cadastrado. A matricula desse corno é %d" % consulta_id(x)); 
    };
	printf("Cadastro feito com sucesso, bem vindo ao clube dos cornos, digo *R.U!");
	return a.nome;
}

float creditos( float creditos){
    return creditos;
};

bool entrar_no_ru( bool v, bool f){
    return entrar_no_ru;
};

float lotacao( int lotacao){
    return lotacao;
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    aluno a;
    char opcao;
    int horas;
    int minutos;
    int lotacao;
    //para repetir o programa.
    while(opcao!='s')  
    {
    printf("\nBEM VINDO AO RU!");
    printf("Lotação atual: %d pessoa(s) às %d:%d" % (sizeof(lotacao), horas, minutos));
    atual = lotacao();  
    //Menu de opcoes
    printf("   |==================================|\n");
    printf("                MENU RU               \n");
    printf("   |==================================|\n");
    printf("   | 1 - Novo usúario                 |\n");
    printf("   | 2 - Créditos                     |\n");      
    printf("   | 3 - Entrar no RU                 |\n");      
    printf("   | 0 - Sair do Programa             |\n");
    printf("   |==================================|\n");

    //Lendo a opcao do menu  
    fflush(stdin);
    opcao= getch();
    
    //Menu de opcoes
    switch(opcao)
    {
        case '1':  
            //Inserindo os usuarios.
            fflush(stdin);
            system("cls");
            printf(" *----------------------------------------------------------------------------*\n");
            printf(" | ");printf("\t\t\t          NOVO USUARIO     ");printf("\t\t\t      |\n");
            printf(" *----------------------------------------------------------------------------*\n");
            inserir_usuarios(a.nome);
        getch(); //impede que o cmd sai antes de ler o digito
        system("cls"); // limpa a tela
        break;

        case '2':      
            //Acessando créditos.
            system ("cls");
            printf(" *----------------------------------------------------------------------------*\n");
            printf(" | ");printf("\t\t\t           CRÉDITOS        ");printf("\t\t\t      |\n");
            printf(" *----------------------------------------------------------------------------*\n");
            creditos(a.creditos);
        getch();
        system("cls");
        break;
    
        case '3':  
        //Entrando no RU
            system ("cls");
            printf(" *----------------------------------------------------------------------------*\n");
            printf(" | ");printf("\t\t\t        ENTRAR NO RU       ");printf("\t\t\t      |\n");
            printf(" *----------------------------------------------------------------------------*\n");
            entrar_no_ru(a.nome);
        getch(); 
        system("cls");
        break;

        case '4':      
        //para sair do programa.
        printf("Até mais!");
        opcao= 0;
        break;
        default:    
            //opção inexistente.
            printf("Digita direito, seu corno!");
            system("cls");        
        break;
    }
} 
} 

