/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:51:01 by rahmed            #+#    #+#             */
/*   Updated: 2021/10/01 23:14:39 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rendu/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>


static char fadd(unsigned int i, char c)
{
	char s;
	s = c + i;
	return (s);
}

static void fiteriadd(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32+i;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32+i;
}

static void ft_del(void *lst)
{
	free(lst);
	lst = NULL;
}

static void ft_mod_to_letter(void *lst)
{
	t_list	*t = lst;
	t->content += 17;
}

static void *ft_mod_add5(void *lst)
{
	t_list	*t = lst;
	t->content += 5;
	return ((char *)t);
}

int	main(void)
{

	int	c;
	printf("\n//////////// PART 1 ////////////");
	printf("\n--------- FT_ISALPHA -----------\n");
	c = '!';
	printf("c = !\n");
	printf("isalphaoff= %d\n", isalpha(c));
	printf("isalpha42 = %d\n", ft_isalpha(c));
	c = '2';
	printf("c = 2\n");
	printf("isalphaoff= %d\n", isalpha(c));
	printf("isalpha42 = %d\n", ft_isalpha(c));
	c = 'a';
	printf("c = a\n");
	printf("isalphaoff= %d\n", isalpha(c));
	printf("isalpha42 = %d\n", ft_isalpha(c));
	c = 'A';
	printf("c = A\n");
	printf("isalphaoff= %d\n", isalpha(c));
	printf("isalpha42 = %d\n", ft_isalpha(c));


	printf("\n--------- FT_ISDIGIT -----------\n");
	c = '!';
	printf("c = !\n");
	printf("isdigitoff= %d\n", isdigit(c));
	printf("isdigit42 = %d\n", ft_isdigit(c));
	c = '9';
	printf("c = 9\n");
	printf("isdigitoff= %d\n", isdigit(c));
	printf("isdigit42 = %d\n", ft_isdigit(c));
	c = 'a';
	printf("c = a\n");
	printf("isdigitoff= %d\n", isdigit(c));
	printf("isdigit42 = %d\n", ft_isdigit(c));
	c = 'A';
	printf("c = A\n");
	printf("isdigitoff= %d\n", isdigit(c));
	printf("isdigit42 = %d\n", ft_isdigit(c));


	printf("\n--------- FT_ISALNUM -----------\n");
	c = '!';
	printf("c = !\n");
	printf("isalnumoff= %d\n", isalnum(c));
	printf("isalnum42 = %d\n", ft_isalnum(c));
	c = '9';
	printf("c = 9\n");
	printf("isalnumoff= %d\n", isalnum(c));
	printf("isalnum42 = %d\n", ft_isalnum(c));
	c = 'a';
	printf("c = a\n");
	printf("isalnumoff= %d\n", isalnum(c));
	printf("isalnum42 = %d\n", ft_isalnum(c));
	c = 'A';
	printf("c = A\n");
	printf("isalnumoff= %d\n", isalnum(c));
	printf("isalnum42 = %d\n", ft_isalnum(c));


	printf("\n--------- FT_ISASCII -----------\n");
	c = '!';
	printf("c = !\n");
	printf("isasciioff= %d\n", isascii(c));
	printf("isascii42 = %d\n", ft_isascii(c));
	c = '9';
	printf("c = 9\n");
	printf("isasciioff= %d\n", isascii(c));
	printf("isascii42 = %d\n", ft_isascii(c));
	c = 'a';
	printf("c = a\n");
	printf("isasciioff= %d\n", isascii(c));
	printf("isascii42 = %d\n", ft_isascii(c));
	c = -1;
	printf("c = -1 OUT OF ASCII\n");
	printf("isasciioff= %d\n", isascii(c));
	printf("isascii42 = %d\n", ft_isascii(c));
	c = 128;
	printf("c = 128 OUT OF ASCII\n");
	printf("isasciioff= %d\n", isascii(c));
	printf("isascii42 = %d\n", ft_isascii(c));

	printf("\n--------- FT_ISPRINT -----------\n");
	c = '!';
	printf("c = !\n");
	printf("isprintoff= %d\n", isprint(c));
	printf("isprint42 = %d\n", ft_isprint(c));
	c = '9';
	printf("c = 9\n");
	printf("isprintoff= %d\n", isprint(c));
	printf("isprint42 = %d\n", ft_isprint(c));
	c = 'a';
	printf("c = a\n");
	printf("isprintoff= %d\n", isprint(c));
	printf("isprint42 = %d\n", ft_isprint(c));
	c = 31;
	printf("c = 31 OUT OF PRINT\n");
	printf("isprintoff= %d\n", isprint(c));
	printf("isprint42 = %d\n", ft_isprint(c));
	c = 128;
	printf("c = 128 OUT OF PRINT\n");
	printf("isprintoff= %d\n", isprint(c));
	printf("isprint42 = %d\n", ft_isprint(c));

	char *s;

	printf("\n--------- FT_STRLEN -----------\n");
	s = "123456789";
	printf("s = 9\n");
	printf("strlenoff= %lu\n", strlen(s));
	printf("strlen42 = %lu\n", ft_strlen(s));
	s = "1234";
	printf("s = 4\n");
	printf("strlenoff= %lu\n", strlen(s));
	printf("strlen42 = %lu\n", ft_strlen(s));
	s = "123456789AZERTY";
	printf("s = 15\n");
	printf("strlenoff= %lu\n", strlen(s));
	printf("strlen42 = %lu\n", ft_strlen(s));
	s = "";
	printf("s = 0\n");
	printf("strlenoff= %lu\n", strlen(s));
	printf("strlen42 = %lu\n", ft_strlen(s));

	size_t len = 5 * sizeof(unsigned char);

	printf("\n--------- FT_MEMSET -----------\n");
	unsigned char boff[100] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	unsigned char b42[100]  = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	c = '~';
	memset(boff+5, c, len);
	printf("memsetoff= %s\n", boff);
	ft_memset(b42+5, c, len);
	printf("memset42 = %s\n", b42);

	printf("\n--------- FT_BZERO  -----------\n");
	unsigned char bzerooff[100] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	unsigned char bzero42[100]  = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	bzero(bzerooff+14, len);
	printf("bzerooff= %s\n", bzerooff);
	ft_bzero(bzero42+14, len);
	printf("bzero42 = %s\n", bzero42);

	printf("\n--------- FT_MEMCPY -----------\n");
	const char src[50] = "TEXTE SOURCE";
	char dstoff[50] = "123456789";
	char dst42[50] = "123456789";
	printf("SOURCE = %s\n", src);
	printf("Before memcpyoff dest = %s\n", dstoff);
	memcpy(dstoff, src, strlen(src)+1);
	printf("After memcpyoff dest = %s\n", dstoff);
	printf("Before memcpy42 dest = %s\n", dst42);
	memcpy(dst42, src, ft_strlen(src)+1);
	printf("After memcpy42 dest = %s\n", dst42);

	printf("\n--------- FT_MEMCPY -----------\n");
	printf(">>MEMCPY OFFICIEL\n");
	int data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(int i=0; i<10; i++)
		printf("%d-", data[i]);
	printf("\n");
	size_t size = 10 * sizeof(int);
	void *source = (void *)data;
	void *destination = (void *)(data+1);
	memmove(destination, source, size);
	printf("Destination = Adr source +1\n");
	for(int i=0; i<10; i++)
		printf("%d-", data[i]);
	printf("\n");
	destination = (void *)(data-1);
	memmove(destination, source, size);
	printf("Destination = Adr source -1\n");
	for(int i=0; i<10; i++)
		printf("%d-", data[i]);
	printf("\n");
	printf(">>FT_MEMCPY 42\n");
	int data42[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(int i=0; i<10; i++)
		printf("%d-", data42[i]);
	printf("\n");
	void *source42 = (void *)data42;
	void *destination42 = (void *)(data42+1);
	ft_memmove(destination42, source42, size);
	printf("Destination = Adr source +1\n");
	for(int i=0; i<10; i++)
		printf("%d-", data42[i]);
	printf("\n");
	destination42 = (void *)(data42-1);
	ft_memmove(destination42, source42, size);
	printf("Destination = Adr source -1\n");
	for(int i=0; i<10; i++)
		printf("%d-", data42[i]);
	printf("\n");

	printf("\n--------- FT_STRLCPY-----------\n");
	const char cpysrc[] = "TEXTE SOURCE";
	char cpydstoff[50] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cpydst42[50] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("SOURCE = %s\n", cpysrc);
	printf("Before strlcpy dest    = %s\n", cpydstoff);
	strlcpy(cpydstoff, cpysrc, ft_strlen(cpysrc) + 1);
	printf("After strlcpy dest     = %s\n", cpydstoff);
	printf("Before ft_strlcpy dest = %s\n", cpydst42);
	ft_strlcpy(cpydst42, cpysrc, ft_strlen(cpysrc) + 1);
	printf("After ft_strlcpy dest  = %s\n", cpydst42);

	printf("\n--------- FT_STRLCAT-----------\n");
	const char catsrc[] = "TEXTE SOURCE";
	char catdstoff[50] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char catdst42[50] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("SOURCE = %s\n", catsrc);
	printf("Before strlcat dest    = %s\n", catdstoff);
	strlcat(catdstoff, catsrc, ft_strlen(catsrc) + ft_strlen(catdstoff) + 1);
	printf("After strlcat dest     = %s\n", catdstoff);
	printf("Before ft_strlcat dest = %s\n", catdst42);
	ft_strlcat(catdst42, catsrc, ft_strlen(catsrc) + ft_strlen(catdst42) + 1);
	printf("After ft_strlcat dest  = %s\n", catdst42);

	printf("\n--------- FT_TOUPPER-----------\n");
	int low = 'z';
	int low42 = 'z';
	printf("toupper de 'z'   = %c\n", toupper(low));
	printf("ft_toupper de 'z'= %c\n", ft_toupper(low42));

	printf("\n--------- FT_TOUPPER-----------\n");
	int up = 'A';
	int up42 = 'A';
	printf("tolower de 'A'   = %c\n", tolower(up));
	printf("ft_tolower de 'A'= %c\n", ft_tolower(up42));

	printf("\n--------- FT_MEMCHR-----------\n");
	char testmem[] = "AZERTYUIOPQSDFGHJKLMWXiHHCVBN";
	int cmem = 'H';
	int n = 6;
	printf("pointeuroff lettre non trouvee  memchr    : %p\n",memchr(testmem,cmem,n));
	printf("pointeur42  lettre non trouvee  ft_memchr : %p\n",ft_memchr(testmem,cmem,n));
	n = 50;
	printf("pointeuroff  lettre OK memchr    : %p\n",memchr(testmem,cmem,n));
	printf("pointeur42   lettre OK ft_memchr : %p\n",ft_memchr(testmem,cmem,n));
	cmem = '\0';
	printf("pointeuroff recherche \\0 memchr    : %p\n",memchr(testmem,cmem,n));
	printf("pointeur42  recherche \\0 ft_memchr : %p\n",ft_memchr(testmem,cmem,n));

	printf("\n--------- FT_STRCHR-----------\n");
	char teststr[] = "AZERTYUIOPQSDFGHJKLMHHWXCVBN";
	int cstr = 'a';
	printf("pointeuroff lettre non trouvee  strchr    : %p\n",strchr(teststr,cstr));
	printf("pointeur42  lettre non trouvee  ft_strchr : %p\n",ft_strchr(teststr,cstr));
	cstr = 'H';
	printf("pointeuroff  lettre OK strchr    : %p\n",strchr(teststr,cstr));
	printf("pointeur42   lettre OK ft_strchr : %p\n",ft_strchr(teststr,cstr));
	cstr = '\0';
	printf("pointeuroff recherche \\0 strchr    : %p\n",strchr(teststr,cstr));
	printf("pointeur42  recherche \\0 ft_strchr : %p\n",ft_strchr(teststr,cstr));

	printf("\n--------- FT_STRRCHR-----------\n");
	cstr = 'a';
	printf("pointeuroff lettre non trouvee  strrchr    : %p\n",strrchr(teststr,cstr));
	printf("pointeur42  lettre non trouvee  ft_strrchr : %p\n",ft_strrchr(teststr,cstr));
	cstr = 'H';
	printf("pointeuroff  lettre OK strrchr    : %p\n",strrchr(teststr,cstr));
	printf("pointeur42   lettre OK ft_strrchr : %p\n",ft_strrchr(teststr,cstr));
	cstr = '\0';
	printf("pointeuroff recherche \\0 strrchr    : %p\n",strrchr(teststr,cstr));
	printf("pointeur42  recherche \\0 ft_strrchr : %p\n",ft_strrchr(teststr,cstr));

	printf("\n--------- FT_STRNCMP -----------\n");
	char strn1[] = "AZERTYUIOPQSDFGHJKLM";
	char strn2[] = "AZERTYUIOPqSDFGHJKLM";
	printf("Test Q>q avec strncmpoff   : %d\n", strncmp(strn1, strn2, 30));
	printf("Test Q>q avec ft_strncmp42 : %d\n", ft_strncmp(strn1, strn2, 30));
	char strn1a[] = "AZERTYUIOPQSDFGHJKLM";
	char strn2a[] = "AZERTYUIOPQSDFGHJKLM";
	printf("Test =+\\0  strncmpoff     : %d\n", strncmp(strn1a, strn2a, 21));
	printf("Test =+\\0  ft_strncmp42   : %d\n", ft_strncmp(strn1a, strn2a, 21));
	char strn1b[] = "AZERTYUIOPASDFGHJKLM";
	char strn2b[] = "AZERTYUIOP1SDFGHJKLM";
	printf("Test A>1 avec strncmpoff   : %d\n", strncmp(strn1b, strn2b, 21));
	printf("Test A>1 avec ft_strncmp42 : %d\n", ft_strncmp(strn1b, strn2b, 21));
	char strn1c[] = "AZERTYUIOPASDFGHJKLM";
	char strn2c[] = "AZERTYUIOP1SDFGHJKLM";
	printf("Test n=0 avec strncmpoff   : %d\n", strncmp(strn1c, strn2c, 0));
	printf("Test n=0 avec ft_strncmp42 : %d\n", ft_strncmp(strn1c, strn2c, 0));

	printf("\n--------- FT_MEMCMP ------------\n");
	char memcmp1[] = "AZERTYUIOPQSDFGHJKLM";
	char memcmp2[] = "AZERTYUIOPqSDFGHJKLM";
	printf("Test Q>q avec memcmpoff   : %d\n", memcmp(memcmp1, memcmp2, 21));
	printf("Test Q>q avec ft_memcmp42 : %d\n", ft_memcmp(memcmp1, memcmp2, 21));
	char memcmp1a[] = "AZERTYUIOPQSDFGHJKLM";
	char memcmp2a[] = "AZERTYUIOPQSDFGHJKLM";
	printf("Test =+\\0 memcmpoff      : %d\n", memcmp(memcmp1a, memcmp2a, 21));
	printf("Test =+\\0 ft_memcmp42    : %d\n", ft_memcmp(memcmp1a, memcmp2a, 21));
	char memcmp1b[] = "AZERTYUIOPASDFGHJKLM";
	char memcmp2b[] = "AZERTYUIOP1SDFGHJKLM";
	printf("Test A>1 avec memcmpoff   : %d\n", memcmp(memcmp1b, memcmp2b, 21));
	printf("Test A>1 avec ft_memcmp42 : %d\n", ft_memcmp(memcmp1b, memcmp2b, 21));
	char memcmp1c[] = "AZERTYUIOPASDFGHJKLM";
	char memcmp2c[] = "AZERTYUIOP1SDFGHJKLM";
	printf("Test n=0 avec memcmpoff   : %d\n", memcmp(memcmp1c, memcmp2c, 0));
	printf("Test n=0 avec ft_memcmp42 : %d\n", ft_memcmp(memcmp1c, memcmp2c, 0));

	printf("\n--------- FT_STRNSTR-----------\n");
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	const char *largestringnul = "";
	const char *smallstringnul = "";
	printf("pointeuroff non trouvee  strnstr    : %p\n",strnstr(largestring, smallstring, 4));
	printf("pointeur42  non trouvee  ft_strnstr : %p\n",ft_strnstr(largestring, smallstring, 4));
	printf("pointeuroff OK strnstr    : %p\n",strnstr(largestring, smallstring, 100));
	printf("pointeur42  OK ft_strnstr : %p\n",ft_strnstr(largestring, smallstring, 100));
	printf("pointeuroff \\0 on needle strnstr      : %p\n",strnstr(largestring, smallstringnul, 11));
	printf("pointeur42  \\0 on needle ft_strnstr   : %p\n",ft_strnstr(largestring, smallstringnul, 11));
	printf("pointeuroff \\0 on haystack strnstr    : %p\n",strnstr(largestringnul, smallstring, 11));
	printf("pointeur42  \\0 on haystack ft_strnstr : %p\n",ft_strnstr(largestringnul, smallstring, 11));
	printf("pointeuroff len NUL strnstr    : %p\n",strnstr(largestring, smallstring, 0));
	printf("pointeur42  len NUL ft_strnstr : %p\n",ft_strnstr(largestring, smallstring, 0));

	printf("\n--------- FT_ATOI --------------\n");
	char atoi1[] = "     -2147483648a56789";
	printf("Test signe neg atoioff   : %d\n", atoi(atoi1));
	printf("Test signe neg ft_atoi42 : %d\n", ft_atoi(atoi1));
	char atoi1a[] = "  \t\n\v\f\r +2147483647 6ABC789";
	printf("Test whitesspaces atoioff   : %d\n", atoi(atoi1a));
	printf("Test whitespaces  ft_atoi42 : %d\n", ft_atoi(atoi1a));
	char atoi1b[] = "--123456789GHJKLM";
	printf("Test 2 Signes a la suite atoioff   : %d\n", atoi(atoi1b));
	printf("Test 2 signes a la suite ft_atoi42 : %d\n", ft_atoi(atoi1b));
	char atoi1c[] = "    21474836471-49316+FGHJKLM";
	printf("Test hors limites INT atoioff   : %d\n", atoi(atoi1c));
	printf("Test hors limites INT ft_atoi42 : %d\n", ft_atoi(atoi1c));

	printf("\n--------- FT_CALLOC --------------\n");
	char	*ptrcaloff = NULL;
	char	*ptrcal42 = NULL;
	size_t	sizecal = 10 * sizeof(int);
	size_t	count = 10;

	ptrcaloff = calloc(count, sizecal);
	ptrcal42 = ft_calloc(count, sizecal);
	printf("%s @ADR : %p\n", ptrcaloff, ptrcaloff);
	printf("%s @ADR : %p\n", ptrcal42, ptrcal42);
	free(ptrcaloff);
	free(ptrcal42);
	//while(1);

	printf("\n--------- FT_STRDUP --------------\n");
	char *str0;
	char *str1;
	str0 =    strdup("OFF:AZERchar *ft_strtrim(char const *s1, char const *set);TYUIOP");
	str1 = ft_strdup("42-:AZERTYUIOP");
	printf("%s @ADR : %p\n", str0, str0);
	printf("%s @ADR : %p\n", str1, str1);
	free(str0);
	free(str1);

	printf("\n//////////// PART 2 ////////////");
	printf("\n--------- FT_SUBSTR ------------\n");
	char string[] = "0123456789";
	char *subs = ft_substr(string, 5, 3);
	printf("string = 0123456789, start index = 5, len = 3,\nsubstr = %s\n", subs);
	free(subs);
	subs = ft_substr(string, 5, 10);
	printf("string = 0123456789, start index = 5, len = 10,\nsubstr = %s\n", subs);
	free(subs);

	printf("\n--------- FT_STRJOIN -----------\n");
	char startstr[] = ">DEBUT0123456";
	char endstr[] = "789FIN<";
	char *nullstr = NULL;
	char *join = ft_strjoin(startstr, endstr);
	printf("Start = %s\nEnd   = %s\nJoin  = %s\n",startstr, endstr, join);
	free(join);
	join = ft_strjoin(nullstr, endstr);
	printf("Start = %s\nEnd   = %s\nJoin  = %s\n",nullstr, endstr, join);
	free(join);

	printf("\n--------- FT_STRTRIM -----------\n");
	char strim[] = "><<<DEB     U:T--0-12-34:<<56+";
	char *strimnul = NULL;
	char cut[] = ">-<0 +:";
	char *cut2 = NULL;
	char *strftrim = ft_strtrim(strim, cut2);
	printf("s1 = %s\nset = %s\ntrimmed = %s\n", strim, cut2, strftrim);
	free(strftrim);
	strftrim = ft_strtrim(strimnul, cut);
	printf("s1 = %s\nset = %s\ntrimmed = %s\n", strimnul, cut, strftrim);
	free(strftrim);
	strftrim = ft_strtrim(strim, cut);
	printf("s1 = %s\nset = %s\ntrimmed = %s\n", strim, cut, strftrim);
	free(strftrim);


	printf("\n--------- FT_SPLIT -------------\n");
	char const *strsplit = "--123-456789--ABCD-EF-GHIJ";
	char  *strnull = NULL;
	char set = '-';
	char **tab = NULL;
	int i = 0;
//*****************************************************
	printf("STR : %s\n", strsplit); 
	printf("SET : %c\n", set);
	printf("TAB INIT %p\n", tab); 
	tab = ft_split(strsplit, set);
	printf("TABafterplit  %p\n", tab); 
	for (i = 0; tab != NULL &&  tab[i] != NULL; i++)
	{
		printf("SPLITTED : tab[%d] = %s\n",i, tab[i]);
		free(tab[i]);
	}
	printf("SPLITTED : tab[%d] = %p\n",i, tab[i]);
	free(tab);
	printf("----------------------\n");
//*****************************************************
	printf("STRNULL : %s\n", strnull); 
	printf("TAB afterfree %p\n", tab); 
	tab = ft_split(strnull, set);
	printf("TAB afterplit  %p\n", tab); 
	for (i = 0; tab != NULL &&  tab[i] != NULL; i++)
	{
		printf("SPLITTED : tab[%d] = %s\n",i, tab[i]);
		free(tab[i]);
	}
	free(tab);
	printf("----------------------\n");
//*****************************************************
	set = 0;
	tab = ft_split(strsplit, set);
	printf("STR : %s\n", strsplit); 
	printf("SETNULL : %c\n", set);
	for (i = 0; tab != NULL &&  tab[i] != NULL; i++)
	{
		printf("SPLITTED : tab[%d] = %s\n",i, tab[i]);
		free(tab[i]);
	}
	printf("SPLITTED : tab[%d] = %p\n",i, tab[i]);
	free(tab);
	tab = NULL;
	printf("----------------------\n");
//*****************************************************
	strsplit = " setsp  42  ";
	set = ' ';
	tab = ft_split(strsplit, set);
	printf("STR : %s\n", strsplit); 
	printf("SETSP : %c\n", set);
	for (i = 0; tab != NULL &&  tab[i] != NULL; i++)
	{
		printf("SPLITTED : tab[%d] = %s\n",i, tab[i]);
		free(tab[i]);
	}
	printf("SPLITTED : tab[%d] = %p\n",i, tab[i]);
	free(tab);
	tab = NULL;
	printf("----------------------\n");
//*****************************************************
//*****************************************************
	strsplit = "        ";
	set = ' ';
	tab = ft_split(strsplit, set);
	printf("STR : %s\n", strsplit); 
	printf("SETSP : %c\n", set);
	for (i = 0; tab != NULL &&  tab[i] != NULL; i++)
	{
		printf("SPLITTED : tab[%d] = %s\n",i, tab[i]);
		free(tab[i]);
	}
	printf("SPLITTED : tab[%d] = %p\n",i, tab[i]);
	free(tab);
	tab = NULL;



//*****************************************************
	printf("\n--------- FT_ITOA -----------\n");
	char	*sitoa;
	int nb = INT_MAX;
	sitoa = ft_itoa(nb);
	printf("n = %d, ptr = %p, itoa = %s\n", nb, sitoa, sitoa);
	free(sitoa);
	sitoa = NULL;
	nb = INT_MIN;
	sitoa = ft_itoa(nb);
	printf("n = %d, ptr = %p, itoa = %s\n", nb, sitoa, sitoa);
	free(sitoa);
	sitoa = NULL;
	nb = 0;
	sitoa = ft_itoa(nb);
	printf("n = %d, ptr = %p, itoa = %s\n", nb, sitoa, sitoa);
	free(sitoa);
	sitoa = NULL;
	nb = -1;
	sitoa = ft_itoa(nb);
	printf("n = %d, ptr = %p, itoa = %s\n", nb, sitoa, sitoa);
	free(sitoa);
	sitoa = NULL;
	nb = 1;
	sitoa = ft_itoa(nb);
	printf("n = %d, ptr = %p, itoa = %s\n", nb, sitoa, sitoa);
	free(sitoa);
	sitoa = NULL;

	printf("\n-------- FT_STRMAPI ---------\n");
	char *strmap = "000000000";
	char *strmapnull = NULL;
	char *str2;
	str2 = ft_strmapi(strmap, fadd);
	printf("str1 = %s\nstrmapi[i] => f* = c + i\nstrmapi = %s\n", strmap, str2);
	free(str2);
	str2 = ft_strmapi(strmapnull, fadd);
	printf("str1 = %s\nstrmapi[i] => f* = c + i\nstrmapi = %s\n", strmapnull, str2);
	free(str2);

	printf("\n-------- FT_STRITERI --------\n");
	char *stri;

	stri = (char *)malloc(sizeof(char *) * 10 + 1);
	ft_strlcpy(stri, "aaAA+1aAaA", 11);
	printf("str = %s\n", stri);
	ft_striteri(stri, &fiteriadd);
	printf("FT utilisé dans striteri : inversement Minus/MAJ + index\nstriteri = %s\n", stri);
	free(stri);

	printf("\n-------- FT_PUTCHAR_FD-------\n");
	printf("STDIN : \n");
	ft_putchar_fd('A', STDIN_FILENO);
	printf("\nSTDOUT : \n");
	ft_putchar_fd('A', STDOUT_FILENO);
	printf("\nSTDERR : \n");
	ft_putchar_fd('A', STDERR_FILENO);

	printf("\n\n-------- FT_PUTSTR_FD-------\n");
	printf("STDIN : \n");
	ft_putstr_fd("test stdin", STDIN_FILENO);
	printf("\nSTDOUT : \n");
	ft_putstr_fd("test stdout", STDOUT_FILENO);
	printf("\nSTDERR : \n");
	ft_putstr_fd("test stderr", STDERR_FILENO);

	printf("\n\n-------- FT_PUTENDL_FD-------\n");
	printf("STDIN : \n");
	ft_putendl_fd("test stdin with endline", STDIN_FILENO);
	printf("\nSTDOUT : \n");
	ft_putendl_fd("test stdout with endline", STDOUT_FILENO);
	printf("\nSTDERR : \n");
	ft_putendl_fd("test stderr with endline", STDERR_FILENO);
	
	printf("\n\n-------- FT_PUTNBR_FD-------\n");
	printf("STDIN : avec INT MIN \n");
	ft_putnbr_fd(INT_MIN, STDIN_FILENO);
	printf("\nSTDOUT : avec INT MAX \n");
	ft_putnbr_fd(INT_MAX, STDOUT_FILENO);
	printf("\nSTDERR : avec 0 \n");
	ft_putnbr_fd(0,  STDERR_FILENO);


	printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("--------------    BONUS    -----------------\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	t_list *mylist = NULL;
	t_list *head = NULL;
	t_list *prev = NULL;
	t_list *current = NULL;
	t_list *nxt = NULL;
	t_list *last;
	int dat = 1;
	
	printf("\n----------- FT_LSTNEW ----------\n");
	mylist = ft_lstnew((char*)ft_itoa(dat));
	head = mylist;
	printf("content = %s\n", (char*)mylist->content);
	if (mylist->next == NULL)
		printf("list->next = NULL\n");
	while (head)
		ft_lstclear(&head, ft_del);


	printf("\n--------- FT_LSTSIZE/LSTADDBACK/LSTADDFRONT ----------\n");
	dat = 8;
	mylist = ft_lstnew((char*)ft_itoa(dat));
	head = mylist;
	while (dat--)
	{
		ft_lstadd_front(&mylist, ft_lstnew((char*)ft_itoa(dat)));
		head= mylist;
		ft_lstadd_back(&mylist, ft_lstnew((char*)ft_itoa(dat)));
	}
	printf("the list has len = %d\n", ft_lstsize(mylist));
	last = ft_lstlast(mylist);
	while (mylist != NULL)
	{
		printf("List : ptr = %p, Val = %s\n", mylist, (char*)mylist->content);
		mylist = mylist->next;
		if (mylist == NULL)
		{
			printf("list->next = NULL\n");
			printf("\n--------- FT_LSTLAST ----------\n");
			printf("The last elem of the list is : %s\nat ptr@ = %p\n", (char*)last->content, last);
		}
	}
	while (head)
		ft_lstclear(&head, ft_del);

	printf("\n\n-------- FTLSTDELONE -------\n");
	dat=1;
	mylist = ft_lstnew((char*)ft_itoa(dat++));
	head= mylist;
	current = mylist;
	while (dat < 7)
		ft_lstadd_back(&current, ft_lstnew((char*)ft_itoa(dat++)));
	while (ft_atoi(mylist->content) != 4)
	{
		prev = mylist;
		mylist = mylist->next;
	}
	nxt = mylist->next;
	ft_lstdelone(mylist, ft_del);
	while (current)
	{
		printf("List Val = %s / ptr %p\n", (char*)current->content, current);
		current = current->next;
		if (current == prev)
			current->next = nxt;
	}
	printf("\n--------- FTLSTCLEAR-------\n");
	while (head)
	{
		printf("first node val = %s / ptr %p\n", (char*)head->content, head);
		ft_lstclear(&head, ft_del);
		printf("afterList clear list ptr = %p\n", head);
	}

	printf("\n-------- FT_LSTITER---------\n");
	dat = 0;
	mylist = ft_lstnew((char*)ft_itoa(dat++));
	head = mylist;
	current = head;
	while (dat < 5)
		ft_lstadd_back(&mylist, ft_lstnew((char*)ft_itoa(dat++)));
	while (current)
	{
		printf("content 0 -> 4 =   %s\n", (char*)current->content);
		current = current->next;
	}
	current = head;
	ft_lstiter(current, ft_mod_to_letter);
	while (current)
	{
		printf("content modified to letter with *f  => %s\n", (char*)current->content);
		current = current->next;
	}
	while (head)
		ft_lstclear(&head, ft_del);

	printf("\n-------- FT_LSTMAP --------\n");
	dat = 0;
	mylist = ft_lstnew((char*)ft_itoa(dat++));
	head = mylist;
	current = head;
	while (dat < 3)
		ft_lstadd_back(&mylist, ft_lstnew((char*)ft_itoa(dat++)));
	while (current)
	{
		printf("content 0 -> %d =   %s\n", dat, (char*)current->content);
		current = current->next;
	}
	current = head;
	ft_lstmap(current, ft_mod_add5, ft_del);
	while (current)
	{
		printf("content modified add 5 with *f  => %s\n", (char*)current->content);
		current = current->next;
	}
	while (head)
		ft_lstclear(&head, ft_del);



	//while (1){};
	printf("\n////////// END OF TEST ///////////\n");
	return (0);
}
