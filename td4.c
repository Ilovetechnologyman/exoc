#include <insa.io>

int occurence =0;
int chaine(char s[],char c)
{
	int i;
	for(i = 0;s[i] != '\0';i++)
	{
		if(s[i] == c)
		{
			++occurence;
		}
	}
	return occurence;
}

int main()
{
	AFFICHER("saisir caractere");
	char c;
	SAISIR(c);
	int n;
	AFFICHER("saisir taille du mot");
	SAISIR(n);
	char s[n+1];
	AFFICHER("saisir mot");
	SAISIR(s);
	AFFICHER(s);
	chaine(char s[],char c);
	return 0;
}
exo 2

int palindrome(char s[])
{
	int i;
	int taille;
	taille = strlen(s[]);
	for(i=0;i<=taille;i++)
	{
		if(s[i] != s[taille -1 - i])
		{			
			return 0;
		}
	}
	return 1;
}


int main()
{
	AFFICHER("saisir taille mot");
	int n;
	SAISIR(n);
	char s[n+1];
	AFFICHER("saisir mot");
	SAISIR(s);
	palindrome(s);
	if(palindrome == 1)
	{
		AFFICHER("mot palindrome");
	}
	else if(palindrome == 0)
	{
		AFFICHER("mot non palindrome");
	}
	return 0;
}

exo 3 
void fonction(char s[])
{
	int i,taille ;
	taille = strlen(s);
	for(i=0;i<=taille;i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{	
			s[i] = s[i] - 'a' + 'A';
		}
		else if(s[i] >= 'A' && s[i] <= 'Z')
		{	
			s[i] = s[i] - 'A' + 'a';
		}
	}
	AFFICHER(s);
}


int main()
{
	char s[60]
	AFFICHER("saisir mot");
	SAISIR(s);
	fonction(s);
	return 0;
}
	
exo 4

#include <string.h>

int main()
{
	char ch1[50],ch2[50];
	AFFICHER("saisir ch1 et ch2");
	SAISIR(ch1);
	SAISIR(ch2);
	int taille1 =  strlen(ch1);
	int taille2 =  strlen(ch2);
	int taille3 = taille1/2 + taille2/2;
	char ch3[taille3 + 2];
	strncpy(ch3, ch1, taille1/2);
	strncpy(ch3, ch2, taille2/2);
	ch3[taille2/2+1] = '\0';

}
	
	
	
	
exo 5 
int fonction(char s[])
{
	int i,taille;
	int espace = 0,score =0;
	int score_max;
	taille = strlen(s);
	for(i=0;i<taille;i++)
	{
		if(s[i] !>='a' || s[i] !<= 'z' && s[i] !>= 'A' ||s[i] !<= 'Z')
		{
			if (score_max < score )
			{
				score_max = score;
			}
			score = 0;
		}
		else (s[i] >='a' && s[i] <= 'z'  || s[i] >= 'A' && s[i] <= 'Z')
		{
			score ++;
		}
	}
	return score_max;
}

exo 6 a 

char mystrcat(char A[],char B[])
{
	int taille1,taille2;
	taille1 = strlen(A);
	taile2 = strlen(B);
	int j;
	int taillerendu = taille1+taille2 +2;
	char rendu[taillerendu];
	int i;
	for(i=0;i<taille1;i++)
	{
		rendu[i] = A[i];
	}
	for(i=taille1;i<taille2;i++)
	{
		for(j = 0;j < taille2;j++)
		{
			rendu[i] = B[j];
		}
	}
	rendu[taillerendu] = '\0';
	return rendu;
}
		
/*6b*/		
char mystrncat(char A[],char B[],int n)
{
	int taille1,taille2;j=0;
	taille1 = strlen(A);
	taille2 = strlen(B);
	int taillerendu = taille1+taille2 +2;
	char rendu[taillerendu];
	int i;
	for(i=taille1;i<taille1+n;i++)
	{
		A[i] = B[j]
		j++;
	}
	rendu[taille1+n] = '\0';
	return rendu;
}

int differents(char[])
{
	int i,taille1;
	taille1 = strlen(char);
	int j;
			
	for(i=0;i<taille1-1;i++)
	{
	if ('a' <= ch[i] && ch[i] <= 'z')
	{
		ch[i] = ch[i] - 'a' + 'A';
	}
		for(j=i+1;j<taille1;j++)
		{
			if ('a' <= ch[i] && ch[i] <= 'z')
			{
				ch[i] = ch[i] - 'a' + 'A';
			}
			if(char[i] == char[j])
			{
				return 0;
			}
		}
	}
	return 1;
}

void compter(ch[])
{
	int abc[26]={0};
	int taille1 = strlen(ch);
	int i;
	for(i=0;i<taille1;i++)
	{
		if ('a' <= ch[i] && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 'a' + 'A';
		}
	}
	for(i=0;i<taille1;i++)
	{
				abc[ ch[i] - 'A'] ++ ;
			
	}
	for(i=0;i<26;i++)
	{	
		AFFICHER(abc[i],"la lettre",ch[i] + 'A',);
	}	
}
		
	
	
