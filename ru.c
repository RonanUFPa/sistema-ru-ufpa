#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> //pra usar o setLocale
int aluno_size = 0;

typedef struct // usando typedef pra nao precisar informar que é um struct antes do "Aluno"
{
    char nome[50];
    int id;
    float creditos;
    int Lista[];
} Aluno;

int checar(Aluno.Lista[], Aluno.nome[35]){
    int i;
    for(i=0;i<aluno_size;i++){
        if(!strncmp(lista[i].nome,Aluno.nome,35)) //Essa função irá fazer a comparação, caractere a caractere, 
        //dos dois parâmetros informados, como a função strcmp, exceto por comparar até quantidade caracteres.
        return 1;
    }
    return 0;
}

void inserir_usuario(Aluno.lista[10]){
    int i;
    for(i = 0; i < 10; ++i){
        Aluno.nome[50];
        printf("Olá, meu querido guerreiro, por favor infome seu nome: ");
        scanf("%s", &Aluno.nome);

        if(!checar(lista,nome)){
            aluno_size ++;

            lista[aluno_size-1].id = aluno_size;
            strcpy(lista[aluno_size-1].nome,Aluno.nome);
            lista[aluno_size-1].cred = 0.0;

            printf("Cadastro feito com sucesso, bem vindo ao clube dos cornos, digo *R.U!");
            printf("\nCorno %s criado com id %d\n\n",lista[aluno_size-1].nome,aluno_size);
        }
        else{
            printf("\nFala outro nome ai mano, esse tá sendo usado por outro corno\n");  
        }
    }
}
void printAluno(Aluno lista[10]){
    int i;
    for(i = 0; i < 10; ++i)
    {
        printf("%d %s %.2lf \n", lista[i].id, lista[i].nome, lista[i].creditos);
    }
}

int creditos (Aluno lista[10]){
    int i,busca,selecionado;
    double adiciona;
    printf("Digite o ID que deseja buscar: \n");
    scanf("%d", &busca);
    for(i = 0; i < aluno_size ;i++){

        if(busca == i+1 ){
            printf("O Corno %s no ID %d , possui %.2lf Creditos\n" ,lista[i].nome,busca,lista[i].creditos);
            printf("Deseja comprar Creditos?, Selecione 1 para comprar\n");
            scanf("%d", &selecionado);

        if(selecionado == 1){
            while(selecionado == 1){
                printf("Valor da compra: \n");
                scanf("%lf", &adiciona);
                lista[i].creditos+=adiciona;
                printf("Novo Saldo de %s, ID: %d, é de: %.2lf\n",lista[i].nome,lista[i].id,lista[i].creditos);
                break;
            }
        }
        else
        {
            printf("Informe um numéro valido (Apenas 1 é aceito).\n");
            break;
        }
    printf("Digita qualquer coisa que seja diferente de 1 pra tu sair daqui\n");
    }
}
}

int entrar_no_ru( Aluno lista[10]){
    if(len(lotacao)<300){ 
        r = input("Para entrar no RU, é preciso um cadastro. Você já é cadastrado? S/N ")
        if (r == 's' || r == 'S'){
            scanf("%d", &i)
            if( i == lotacao){
                print("Oops.. parece que você já está dentro do RU!")
            }
            else{
                if (lista[i] == lista[i].id & lista[i].id!=[]){
                    
                    for(aluno_size i = 0; i < 10 < count; i++)
                    {                  
                        lotacao = lista[i].id;
                        horas_em_m+=10;
                        printf("Um Corno entrou no R.U.\n");
                        lsita[i]-=1;
                    }
                }
            }
            if(r == "n" or r == "N"){
                inserir_usuario(lista, i);
                lista[i]-= 1;
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

void lotacao(){
    system("cls");
    printf("Lotação média:\n11:00 - 11:30: 050 pessoas\n11:30 - 12:00: 100 pessoas\n");
    printf("12:00 - 12:30: 150 pessoas\n 12:30 - 13:00: 200 pessoas\n 13:00 - 13:30: 200 pessoas\n 13:30 - 14:00: 150 pessoas");

    i = 0
    lotacao = [];
    horas_em_m = 600;
    horas = int(horas_em_m/60);
    minutos = horas_em_m % 60;
}

void main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    Aluno lista[10];
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
            inserir_usuario(Aluno lista[10]);
            getch(); //impede que o cmd sai antes de ler o digito
            system("cls"); // limpa a tela
            printAluno(Aluno lista[10]);
            break;

        case '2':      
            //Acessando créditos.
            fflush(stdin);
            system ("cls");
            printf(" *----------------------------------------------------------------------------*\n");
            printf(" | ");printf("\t\t\t           CRÉDITOS        ");printf("\t\t\t      |\n");
            printf(" *----------------------------------------------------------------------------*\n");
            int creditos(Aluno lista[10]);
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
            entrar_no_ru(Aluno Lista[i]);
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

