#include <stdio.h>

struct aluno
{
    char nome[5000];
    int matricula;
    float creditos;
};

int inserir_usuario(char m, int c){

    struct aluno a;
    printf("Olá, meu querido guerreiro, por favor infome seu nome: ");
    scanf("%[^\n]", a.nome); //leitura de nomes compostos com [^\n]
    if(a.nome <'0'|| a.nome >'9') //condição parar checar se é um digito ou uma letra
	{
        return printf("Apenas letras, por favor");
	}
    for(i = 0; i<=5000;i++) // contado todos os 5000
	{
        for(int i = 0;a.nome[i] == a.nome[i]; ++i) //verifica se os nomes são iguais
    	{                 
        	if(a.nome[i] == 0) //verifica se existe algo em nome
			{
        		printf("Nenhum usuario cadastrado até o momento");
			} 
            printf("Usuário já cadastrado. Seu id é %d" % consulta_id(x)); 
    	} 
	}

	printf("Cadastro feito com sucesso!");

	return a.nome;
}

float creditos();

int entrar_no_ru();

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    struct aluno a;
    char opcao;
    //para repetir o programa.
    while(opcao!='s')  
    {
    printf("\nBEM VINDO AO RU!");
    printf("Lotação atual: %d pessoa(s) às %d:%d" % (len(lotacao), horas, minutos));
    atual = mostrar_lotacao();  
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
            getUsuarios = inserir_usuarios();
        getch();
        system("cls");
        break;

        case '2':      
            //Acessando créditos.
            system ("cls");
            printf(" *----------------------------------------------------------------------------*\n");
            printf(" | ");printf("\t\t\t           CRÉDITOS        ");printf("\t\t\t      |\n");
            printf(" *----------------------------------------------------------------------------*\n");
            getCreditos = creditos();
        getch();
        system("cls");
        break;
    
        case '3':  
        //Entrando no RU
            system ("cls");
            printf(" *----------------------------------------------------------------------------*\n");
            printf(" | ");printf("\t\t\t        ENTRAR NO RU       ");printf("\t\t\t      |\n");
            printf(" *----------------------------------------------------------------------------*\n");
            entrarRU= entrar_no_ru(a.nome);
        getch();
        system("cls");
        break;

        case '4':      
        //para sair do programa.
        opcao= 0;
        break;
        default:    
            //opção inexistente.
            system("cls");        
        break;
    }
} 
} 

