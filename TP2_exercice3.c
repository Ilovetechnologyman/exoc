#include<insaio.h>
int main()
{
	int nb_lignes=0, i, j;
	do
	{
		AFFICHER("nombre de lignes ?\n");
		SAISIR(nb_lignes);
	}while (nb_lignes<1);
	for(i=0;i<(nb_lignes+1)/2;i++)
	{
		/* affichage des espaces en début de ligne */
		for(j=0;j<nb_lignes/2-i;j++)
		{
			AFFICHER(" ");
		}
		/* affichage des étoiles */
		
		for(j=0;j<i*2+1;j++)
		{
			AFFICHER("*");
		}
		AFFICHER("\n");
	}
	for(i=nb_lignes/2-1;i>=0;i--)
	{
		/* affichage des espaces en début de ligne */
		for(j=0;j<nb_lignes/2-i;j++)
		{
			AFFICHER(" ");
		}
		/* affichage des étoiles */
		
		for(j=0;j<i*2+1;j++)
		{
			AFFICHER("*");
		}
		AFFICHER("\n");
	}
	return 0;
}
