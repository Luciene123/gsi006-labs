/* TAD: Matriz m por n */
typedef struct TadMatriz TMat2D;
/* Funções Exportadas */
/* Função cria - Aloca e retorna matriz m por n */
TMat2D *cria (double m,double n);
/* Função libera - Libera a memória de uma matriz */
void libera (TMat2D *mat);
/* Função acessa - Retorna o valor do elemento [i][j] */
acessaElemento (TMat2D *mat, int i, int j, double v);
/* Função atribui - Atribui valor ao elemento [i][j] */
insereElemento (TMat2D *mat, int i, int j, double v);
/* Função linhas - Retorna o no. de linhas da matriz */
int linhas (TMat2D *mat);
/* Função colunas - Retorna o no. de colunas da matriz */
int colunas (TMat2D *mat);
 //Soma duas matrizes com funcões auxiliares
TMat2D* soma2matrizes(TMat2D *mat,TMat2D *mat1,TMat2D *mat2 );
//Multiplica duas matrizes com funcões auxiliares
TMat2D *mult2matrizes(TMat2D *mat,TMat2D *mat1,TMat2D *mat2 );
//Multiplica uma matrizes por um valor escalar com funcões auxiliares
TMat2D *mult_matriz_escalar(TMat2D *mat,TMat2D *mat1, double pescalar);
 //Soma da diagonal principal(Calculo do Traço)  da matriz com funcões auxiliares
TMat2D *Tracomatrizes(TMat2D *mat, double traco);
//Retorna um vetor com a soma das linhas da matriz com funcões auxiliares
TMat2D *somalinhas(TMat2D *mat, int clinha);
//Retorna um vetor com a soma das colunas da matriz
TMat2D *somacolunas(TMat2D *mat, int *ccoluna);
