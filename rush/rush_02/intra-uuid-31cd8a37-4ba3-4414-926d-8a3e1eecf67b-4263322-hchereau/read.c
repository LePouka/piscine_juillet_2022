#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

char Tableau(void)
{
	int fichier;
	char tab[29000];
	char *tabv;
	int n;
    int i;
    int r;
  	
	i = 0;
	fichier = open("numbers.dict", O_RDONLY);
	n = read(fichier, tab, 29000);
	close(fichier);
	tab[n] = '\0';
	open("numbers.dict", O_RDONLY);
	tabv = malloc(sizeof(char) * (n + 1));
	r = read(fichier, tabv, n);
	tabv[n] = '\0';
	close(fichier);
	return tabv;
}
