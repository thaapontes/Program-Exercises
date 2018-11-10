#include <stdio.h>
#include <stdlib.h>

#define MAXVET 20000


typedef struct {
    int NumeroDaBarra;
    int TipoDaBarra;
    double TensaoNominal;
    double Campo4;
    double Campo5;
    } TipoBarras;

typedef struct {
    int LinhaDoElemento;
    int ColunaDoElemento;
    double Condutancia;
    double Susceptancia;
    } TipoAdmitancias;

int main()
{
    char rede_escolhida[MAXVET], adm_escolhida[MAXVET];
    FILE *arquivoBarras, *arquivoMatriz;
    int Nbarras;
    int i,j,f;
    int Nelementos;
    TipoAdmitancias admitancias[MAXVET];
    TipoBarras barras[MAXVET];
    int n=0;
    double **C;

    scanf("%s",rede_escolhida); //leitura da rede escolhida
    scanf("%s",adm_escolhida);

    arquivoBarras=fopen(rede_escolhida,"r");
    arquivoMatriz=fopen(adm_escolhida,"r");

    if(arquivoBarras==NULL || arquivoMatriz==NULL)
	   return 0;
    else{
        fscanf(arquivoBarras,"%d",&Nbarras);
        while(!feof(arquivoBarras)){
        	fscanf(arquivoBarras,"%d",&barras[n].NumeroDaBarra);
        	fscanf(arquivoBarras,"%d",&barras[n].TipoDaBarra);
        	fscanf(arquivoBarras,"%lf",&barras[n].TensaoNominal);
        	fscanf(arquivoBarras,"%lf",&barras[n].Campo4);
        	fscanf(arquivoBarras,"%lf",&barras[n].Campo5);
        	n++;
		}
		fclose(arquivoBarras);
		n=0;
		fscanf(arquivoMatriz,"%d",&Nelementos);
        while(!feof(arquivoMatriz)){
        	fscanf(arquivoMatriz,"%d",&admitancias[n].LinhaDoElemento);
        	fscanf(arquivoMatriz,"%d",&admitancias[n].ColunaDoElemento);
        	fscanf(arquivoMatriz,"%lf",&admitancias[n].Condutancia);
        	fscanf(arquivoMatriz,"%lf",&admitancias[n].Susceptancia);
        	n++;
		}
		fclose(arquivoMatriz);
    }


		return 0;
}
