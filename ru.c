 #include <stdio.h>
 
 struct aluno
 {
 	char nome[5000];
 	int matricula;
 	float creditos;
 };
 
 int inserir_usuario(char m, int c){

 	struct aluno a;
 	printf("Ol�, meu querido guerreiro, por favor infome seu nome: ");
 	scanf("%[^\n]", a.nome); //leitura de nomes compostos com [^\n]
 	if(a.nome <'0'|| a.nome >'9') //condi��o parar checar se � um digito ou uma letra
	 {
 		return printf("Apenas letras, por favor");
	 }
 	
 	for(i = 0; i<=5000;i++) // contado todos os 5000
	 {
 		 for(int i = 0;a.nome[i] == a.nome[i]; ++i) //verifica se os nomes s�o iguais
    	{                 
        	if(a.nome[i] == 0) //verifica se existe algo em nome
			{
        		printf("Nenhum usuario cadastrado at� o momento");
			} 
            printf("Usu�rio j� cadastrado. Seu id � %d" % consulta_id(x)); 
    	} 
	 }
	 
	 printf("Cadastro feito com sucesso!");
	 
	 return a.nome;
 }	 
       
 
 int main(void)
 {
 	struct aluno a;
 	
 	
 }
