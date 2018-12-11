#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //pra usar o getch()
#include <locale.h> //pra usar o setLocale
int aluno_size = 0; // tamanho do struct, auxilia

typedef struct // usando typedef pra nao precisar informar que é um struct antes do "Aluno"
{
    char nome[50];
    int id;
    float creditos;
} Aluno;

//função criada para verificar se o nome do aluno não é igual ao digitado por inserir_usuario
int checar(Aluno teste[],char nome[50]){
	int i;
    for(i=0;i<reg_size;i++){ //percorrendo o tamanho do struct (nome)
      if(!strncmp(teste[i].nome,nome,35))
	  { 
	  	  return 1; // caso o nome digitado seja igual um nome contido no vetor de nomes
	  }
    }
    return 0; // aceitar a inserção do nome
}
//função para inserir o aluno: seu id, nome e creditos
void inserir_usuario(Aluno teste[10]){  
    int i;
    for(i = 0; i < 10; ++i){ //percorrendo o vetor de 10 posições, que pode ser definido pelo usuario depois
        Aluno.nome[50]; //vetor de caracteres de nomes com 50 posições
        printf("Olá, meu querido guerreiro, por favor infome seu nome: ");
        scanf("%s", &Aluno.nome); // pega o nome

        if(!checar(teste,nome)){ //verificar se o nome digitado já não consta no vetor
            aluno_size ++; // aumenta um usuario no vetor
            teste[aluno_size-1].id = aluno_size; = //incrementa um id
            strcpy(teste[aluno_size-1].nome,Aluno.nome); //Adiciona o nome
            teste[aluno_size-1].cred = 0.0; //adiciona o credito default para os usuarios

            printf("Cadastro feito com sucesso, bem vindo ao clube dos cornos, digo *R.U!");
            printf("\nCorno %s criado com id %d\n\n",teste[aluno_size-1].nome,aluno_size); 
        }
        else{
            printf("\nFala outro nome ai mano, esse tá sendo usado por outro corno\n");  
        }
    }
}
//função para mostrar todos os usuarios cadastrados
void printAluno(aluno_size){ // função para mostrar todos os alunos cornos
    int i;
    for(i = 0; i < aluno_size; ++i)
    {
        printf("%d %s %.2lf \n", teste[i].id, teste[i].nome, teste[i].creditos);
    }
}
//função para inserir creditos, primeiro ele busca pelo id do usuario ai depois pergunta se quer inserir nele
int creditos (Aluno teste[10]){
    int i,busca;
	char selecionado;
    double adiciona;
    printf("Digite o ID que deseja buscar: \n");
    scanf("%d", &busca); //pegando o id 
    for(i = 0; i < aluno_size ;i++){ //percorrendo o tamanho do struct
        if(busca == i+1 ){ // se ele achar o id
            printf("O Corno %s no ID %d , possui %.2lf Creditos\n" ,teste[i].nome,busca,teste[i].creditos);
            printf("Coloca 'S' ae se quiser mais creditos, mano\n");
            scanf("%s", &selecionado);
        if(selecionado == 'S'){ // aqui funciona a inserção de creditos
            do{ //executa e depois verifica a expressão
                printf("Egua mano, quanto tu ta afim de dar?\n"); 
                scanf("%lf", &adiciona); // lendo credito a ser adicionado
                teste[i].creditos+=adiciona; //adicionando creditos ao vetor
                printf("Mano, teu novo saldo é de %s, ID: %d, é de: %.2lf\n",teste[i].nome,teste[i].id,teste[i].creditos);
                break;
            }while(selecionado == '0')
        }
        else
        {
            printf("Digita direito ai corno.\n");
            break;
        }
    	printf("Digita qualquer coisa que seja diferente de 1 pra tu sair daqui\n");
    }
}
}

//função para entrar no ru, checa se o id ja esta lá
int entrar_no_ru( Aluno teste[10]){
    if(sizeof(lotacao)<300){ 
        r = input("Para entrar no RU, é preciso um cadastro. Você já é cadastrado? S/N ")
        if (r == 's' || r == 'S'){
            scanf("%d", &i)
            if( i == lotacao){
                print("Oops.. parece que você já está dentro do RU!")
            }
            else{
                if (teste[i] == teste[i].id & teste[i].id!=[]){
                    
                    for(aluno_size i = 0; i < 10 < count; i++)
                    {                  
                        lotacao = teste[i].id;
                        horas_em_m+=10;
                        printf("Um Corno entrou no R.U.\n");
                        lsita[i]-=1;
                    }
                }
            }
            if(r == "n" or r == "N"){
                inserir_usuario(teste[i]);
                teste[i]-= 1;
                i+=1;
                printf("Cadastro feito com sucesso. Corno liberado pra entrar.\n");
                lotacao.append(i);
                horas_em_m+=10;
            }
            else{
                printf("Digita certo ai corno.");
        }
        else:
            printf("Ops! Parece que o RU está lotado. Volte mais tarde. ");
}
}
};

//função para mostrar a lotação
int lotacao(){ 
    system("cls");
    printf("Lotação média:\n11:00 - 11:30: 050 pessoas\n11:30 - 12:00: 100 pessoas\n");
    printf("12:00 - 12:30: 150 pessoas\n 12:30 - 13:00: 200 pessoas\n 13:00 - 13:30: 200 pessoas\n 13:30 - 14:00: 150 pessoas");

    i = 0
    lotacao = [];
    horas_em_m = 600;
    horas = int(horas_em_m/60);
    minutos = horas_em_m % 60;
    return lotacao(sizeof((teste[i].id)); // retorna o tamanho do conteudo dentro de lotação, cada id é uma pessoa
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    Aluno teste[10];
    //para repetir o programa.
    while(opcao!='s')  
    {
    printf("\nBEM VINDO AO RU!");
    printf("Lotação atual: %s pessoa(s) às %d:%d" % (sizeof(lotacao()), horas, minutos));
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
            inserir_usuario(Aluno teste[10]);
            getch(); //impede que o cmd sai antes de ler o digito
            system("cls"); // limpa a tela
            printAluno(Aluno teste[10]);
            break;

        case '2':      
            //Acessando créditos.
            fflush(stdin);
            system ("cls");
            printf(" *----------------------------------------------------------------------------*\n");
            printf(" | ");printf("\t\t\t           CRÉDITOS        ");printf("\t\t\t      |\n");
            printf(" *----------------------------------------------------------------------------*\n");
            int creditos(Aluno teste[10]);
            getch();
            system("cls");
            break;
    
        case '3':  
        //Entrando no RU
            fflush(stdin);
            system ("cls");
            printf(" *----------------------------------------------------------------------------*\n");
            printf(" | ");printf("\t\t\t        ENTRAR NO RU       ");printf("\t\t\t      |\n");
            printf(" *----------------------------------------------------------------------------*\n");
            entrar_no_ru(Aluno teste[i]);
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

