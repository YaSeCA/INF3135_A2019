#include <stdio.h>
#include <string.h>

typedef unsigned char uchar_t;

void printMat(size_t lignes, size_t col, uchar_t mat1[lignes][col]);

void avg(size_t lignes, size_t col, uchar_t mat1[lignes][col],
                                    uchar_t mat2[lignes][col],
                                    uchar_t matRes[lignes][col]);
void add(size_t lignes, size_t col, uchar_t mat1[lignes][col],
                                    uchar_t mat2[lignes][col],
                                    uchar_t matRes[lignes][col]);

int main(int argc, char* argv[])
{
   uchar_t mat1[5][50] = {"Les Canadiens sont une equipe de hockey",
                          "Les Nordiques sont de Quebec",
                          "Ils ne FONT pas de politique",
                          "Super moi non plus",
                          "Hourra!"};

   uchar_t mat2[5][50] = {"Je dors ZZZ zzz",
                          "Le cours de C est le meilleur",
                          "J'aime apprendre",
                          "Nous avons tous le temps pour un bon repas",
                          "UQAM est mon univers"};

   uchar_t matresultat[5][50];
   for (int i=0; i < 5;++i){
       for (int j=0;j<50;++j){
           matresultat[i][j]=0;
       }
   }

   fprintf(stdout, "add:\n\n");
   printMat(5, 50, mat1);
   printMat(5, 50, mat2);
   add(5, 50, mat1, mat2, matresultat);
   printMat(5, 50, matresultat);

   fprintf(stdout, "avg:\n\n");
   avg(5, 50, mat1, mat2, matresultat);
   printMat(5, 50, matresultat);

   return 0;
}

void avg(size_t lignes, size_t col, uchar_t mat1[lignes][col],
                                    uchar_t mat2[lignes][col],
                                    uchar_t matRes[lignes][col])
{
   for(size_t i = 0; i < lignes; ++i) {
      for(size_t j = 0; j < col; ++j) {
         matRes[i][j] = (mat1[i][j] + mat2[i][j]) / 2;
         if (matRes[i][j] < 32 && matRes[i][j] != 0) matRes[i][j] = 32;
      }
   }
}

void add(size_t lignes, size_t col, uchar_t mat1[lignes][col],
                                    uchar_t mat2[lignes][col],
                                    uchar_t matRes[lignes][col])
{
   for(size_t i = 0; i < lignes; ++i)
   {
      for(size_t j = 0; j < col; ++j)
      {
         matRes[i][j] = mat1[i][j] + mat2[i][j];
         if (matRes[i][j] < 32 && matRes[i][j] != 0) matRes[i][j] = 32;
      }
   }
}

void printMat(size_t lignes, size_t col, uchar_t mat[lignes][col])
{
  for(size_t i = 0; i < lignes; ++i) {
    for(size_t j = 0; j < col; ++j) {
      if (mat[i][j] > 31) fprintf(stdout, "%c:%d, ", mat[i][j], mat[i][j]);
    }
    fprintf(stdout, "\n");
    fprintf(stderr, "%s\n", mat[i]);
  }
  fprintf(stdout, "\n");
  fprintf(stderr, "\n");
}
