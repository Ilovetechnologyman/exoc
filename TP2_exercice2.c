#include<insaio.h>
int main()
{
    int tab[30], taille=0;
	int i,j, max, indice_max;

    AFFICHER("Saisissez la taille du tableau");
    while(taille<1 || taille>30)
	{
        SAISIR(taille);
	}
    for(i=0;i<taille;i++)
    {
		AFFICHER("Saisissez la valeur ",i+1," : ");
		SAISIR(tab[i]);
   }
    AFFICHER("\nle tableau d'origine :\n");
    for(i=0;i<taille;i++)
    {
        AFFICHER(tab[i]," ");
    }
	
	for(i=0;i<taille;i++)
	{
		max = tab[i];
		indice_max = i;
		for(j=i+1;j<taille;j++)
		{
			if(max<tab[j])
			{
				max = tab[j];
				indice_max = j;
			}
		}
		tab[indice_max] = tab[i];
		tab[i] = max;
	}
	AFFICHER("\nle tableau dans l'ordre decroissant :\n");
    for(i=0;i<taille;i++)
    {
        AFFICHER(tab[i]," ");
    }
	
    return 0;
}
