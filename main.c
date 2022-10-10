#include <string.h>
#include <stdio.h>

void *ft_memset(void *b,int c,size_t len);
void *ft_memmove(void *dest, const void *str, size_t n);
void *ft_memcpy(void *dest, const void *str, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
char	*ft_strdup(const char *src);
void *ft_calloc(size_t count, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
void *ft_memset(void *b,int c,size_t len);
char *ft_strtrim(char const *s, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlcat(char *dest, char *src, size_t size);
void ft_putchar_fd(char c, int fd);



int main()
{
  
  char T1[20]="12";
    char T[20]="12345";
    int fd;
    FILE *fd 
    ft_putchar_fd('c',fd);
    //int i = -2147483648;
   //char (*f)(unsigned int, char);
  // unsigned int  k = 5;
   //char j='F';
  // f = *ft_strchr(k,j);
//printf("%zu\n",strlcat(T1,T,4));
//puts(T1);
    //memset(T1,'M',3);
    //printf("%s",(char *)ft_memset(T1,'M',3));
    //memmove(T+4,T,10);
   //memcpy(T1,T,3);
 //ft_memcpy(T1+3,T1,4);
//puts(T1+3);
    //printf("%s",(char *)ft_memset(T1,'L',3));
   //printf("%s",(char *)ft_memmove(T1,T,10));
   //printf("%s",(char *)ft_memcpy(T1,T,3));
   //puts(T);
   //printf("%s",(char *)ft_strchr(T,'3'));
   //printf("%s",(char *)ft_strrchr(T,'3'));
   //printf("%s", (char*)ft_memchr(T,'3',3));
   //printf("%i",ft_memcmp(T1,T,5));
   //printf("%s", ft_strnstr(T1,T,10));
  //printf("%i", ft_atoi(T1));
  //printf("%s", ft_strdup(T1));
  //printf("%s", (char *)ft_calloc(i,n));
  //printf("%d",substr(T1,3,3));
  //printf("%s",ft_strjoin(T1,T));
  //puts(T1);
  //printf("%s",ft_strtrim(T1,"l"));
 //char **str=ft_split("T1",'o'); 
 //puts(T1);
 //printf("%s",ft_itoa(i));
//printf("%s",ft_strmapi(T1,f));

//printf("%lu\n",ft_strlcat(T1,T,1));
//puts(T1);
}
