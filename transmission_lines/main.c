#include <stdio.h>
#include <stdlib.h>

#define MAX-VET 20000


typedef struct {
    int bar_number;
    int bar_type;
    double rated_voltage;
    double field_4;
    double field_5;
    } BarsType;

typedef struct {
    int element_line;
    int element_column;
    double conductance;
    double susceptance;
    } AdmittancesType;

int main()
{
    char chosen_network[MAX-VET], chosen_adm[MAX-VET];
    FILE *barsFile, *matrixFile;
    int bars_number;
    int i,j,f;
    int elements_number;
    AdmittancesType admittances[MAX-VET];
    BarsType bars[MAX-VET];
    int n=0;
    double **C;

    scanf("%s",chosen_network);
    scanf("%s",chosen_adm);

    barsFile=fopen(chosen_network,"r");
    matrixFile=fopen(chosen_adm,"r");

    if(barsFile==NULL || matrixFile==NULL)
	   return 0;
    else{
        fscanf(barsFile,"%d",&bars_number);
        while(!feof(barsFile)){
        	fscanf(barsFile,"%d",&bars[n].bar_number);
        	fscanf(barsFile,"%d",&bars[n].bar_type);
        	fscanf(barsFile,"%lf",&bars[n].rated_voltage);
        	fscanf(barsFile,"%lf",&bars[n].field_4);
        	fscanf(barsFile,"%lf",&bars[n].field_5);
        	n++;
		}
		fclose(barsFile);
		n=0;
		fscanf(matrixFile,"%d",&elements_number);
        while(!feof(matrixFile)){
        	fscanf(matrixFile,"%d",&admittances[n].element_line);
        	fscanf(matrixFile,"%d",&admittances[n].element_column);
        	fscanf(matrixFile,"%lf",&admittances[n].conductance);
        	fscanf(matrixFile,"%lf",&admittances[n].susceptance);
        	n++;
		}
		fclose(matrixFile);
    }


		return 0;
}
