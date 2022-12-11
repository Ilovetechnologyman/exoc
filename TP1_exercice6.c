#include<insaio.h>

int main()
{
  float paiement_reel;
  int rendu, choix, montant = 0, paiement;
  int nb1 = 0, nb5 = 0, nb10 = 0, nb20 = 0, nb50 = 0, nb1e = 0, nb2e = 0;
  AFFICHER("Quel est votre choix ?\n1 - cafe\n2 - the\n3 - potage\n");
  SAISIR(choix);
  if(choix == 1)
  {
    montant = 110;
    AFFICHER("choix ",choix," : prix = 1.10 euros\n\n");
  }
  else if(choix == 2)
  {
    montant = 160;
    AFFICHER("choix ",choix," : prix = 1.60 euros\n\n");
  }
  else if(choix == 3)
  {
    montant = 320;
    AFFICHER("choix ",choix," : prix = 3.20 euros\n\n");
  }

  if(montant != 0)
  {
    AFFICHER("Paiement ?\n");
    SAISIR(paiement_reel);
    paiement = paiement_reel*100;
    rendu = paiement - montant;
    nb2e = rendu/200;
    rendu = rendu%200;
    nb1e = rendu/100;
    rendu = rendu%100;
    nb50 = rendu/50;
    rendu = rendu%50;
    nb20 = rendu/20;
    rendu = rendu%20;
    nb10 = rendu/10;
    rendu = rendu%10;
    nb5 = rendu/5;
    nb1 = rendu%5;

    AFFICHER("rendu :\n");
    if(nb2e!=0)
    {
      AFFICHER(nb2e," pieces de 2 euros\n");
    }
    if(nb1e!=0)
    {
      AFFICHER(nb1e," pieces de 1 euros\n");
    }
    if(nb50!=0)
    {
      AFFICHER(nb50," pieces de 50 centimes\n");
    }
    if(nb20!=0)
    {
      AFFICHER(nb20," pieces de 20 centimes\n");
    }
    if(nb10!=0)
    {
      AFFICHER(nb10," pieces de 10 centimes\n");
    }
    if(nb5!=0)
    {
      AFFICHER(nb5," pieces de 5 centimes\n");
    }
    if(nb1!=0)
    {
      AFFICHER(nb1," pieces de 1 centime\n");
    }

  }
  else
  {
    AFFICHER("Mauvais choix, fin du programme");
  }

  return 0;
}
