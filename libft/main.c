#include "libft.h"
// Test ft_isalpha
/*int main()
{
    printf("isalpha: %d\n", isalpha((unsigned char)c[0]));
    printf("ft_isalpha: %d\n", ft_isalpha((unsigned char)c[0]));
}*/

// Test ft_isdigit
/*int main()
{
    printf("isdigit %d\n", isdigit(48));
    printf("ft_isdigit %d", ft_isdigit(48));
}*/

// Test ft_isalnum
/*int main()
{
    printf("isalnum %d\n", isalnum(100));
    printf("ft_isalnum %d", ft_isalnum(100));
}*/

//Test ft_isascii
/*int main()
{
    printf("isascii %d\n", isascii(EOF));
    printf("ft_isascii %d", ft_isascii(EOF));
}*/

// Test ft_isprint
/*int main()
{
    printf("isprint %d\n", isprint(EOF));
    printf("ft_isprint %d", ft_isprint(EOF));
}*/

// Test ft_strlcpy
/*int main()
{
    //char c[] = "Hello, World!";
    char s[] = "Hello, World!";
    //char dest[6];
    //char dest1[6];
    //int result = strlcpy(NULL, NULL, 2);
    int result1 = ft_strlcpy(s, NULL, 2);
    //printf("len result: %d\n", result);
    //printf("strlcpy: %s\n", dest);
    printf("len result result: %d\n", result1);
    //printf("ft_strlcpy: %s\n", dest);
}*/



// Test ft_strtrim
/*int main() {
    char *s1 = " $$anas               $ $ $ $  benba\t $ ";
    char *s2 = "$ \t";
    char *result = ft_strtrim(s1, s2);
    printf("%s\n", result);
    free(result);
}*/

// Test ft_memset
/*int main (void)
{
    char *c ="Anas";
    //int i = 0;
    ft_memset(c, 0, 4);
    //while (i < 2)
    //{
        printf("%s", c);
      //  i++;
    //}

}*/

// Test ft_calloc
/*int main()
{
    char *c = calloc(2, 1);
    //int i = 0;
    //while (i < 2)
    //{
        printf("%s", c);
    //    i++;
    //}
}*/


// Test ft_strlen
/*int main()
{
    char *c = NULL;
    printf("%zu", strlen(c));
}*/


// Test ft_split
/*int main()
{
    char *s = "hell 77u77#$5R@eb 4234ebrgy3477^F 3523538482735t235 ^TT#@$^723 235tgG^&@34b 235t25782357hzv2 2535235guy^#$!@V$^324 ";
    //char *s = "s b db f";
    char c = ' ';
    char **p =  ft_split(s, c);
    int i = 0;

    while (p[i])
    {
        printf("%s\n", p[i]);
        i++;
    }
    i = 0;
    while (p[i])
    {
        free(p[i]);
        i++;
    }
    free(p);
}*/

// Test ft_memmove
/*int main()
{
    char d[] = "abcde";
    char s[] = "abcde";
    
    memmove(d+1, d, 2);
    ft_memmove(s+1, s, 2);

    printf("memmove: %s\n", memmove(d, d, 2));
    printf("ft_memmove: %s\n", ft_memmove(d, d, 2));

}*/


// Test ft_itoi
/*int main()
{
    int c = 9999999999;
    int i = 0;
    char *n = ft_itoa(c);
    while (n[i])
    {
        printf("%c", n[i]);
        i++;
    }
}*/

//test ft_strmapi
/*char change_character(unsigned int i, char c)
{
    if (i % 2 == 0)
        c = '0';
    else
        c = c - 32;
    return (c);
}

int main()
{
    char *s = "Anas";
    char *new = ft_strmapi(s, NULL);
    printf("%s", new);    
}*/

//test ft_striteri
/*void change_character(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = '0';
    else
        *c = *c - 32;
}

int main()
{
    char s[] = "anas benba";
    ft_striteri(s, NULL);
    printf("%s", s);
}*/

// Test ft_putchar_fd
/*int main()
{
    char c = 'a';
    char buff[2];
    int fd = open("text", O_RDWR | O_CREAT);
    ft_putchar_fd(c, fd);
    close(fd);
    fd = open("text", O_RDONLY);
    size_t i = read(fd, buff, 1);
    printf("%s %zu", buff, i);
    close(fd);
    return (0);
}*/

// Test ft_memcpy
/*int main()
{
    char arr[] = "Hello";
    char arr2[] = "Hello";
    ft_memcpy(arr + 2, arr, 3);
    memcpy(arr2 + 2, arr2, 3);
    //int i = 0;
    //while(i < 4)
    //{
        printf("%s\n", arr);
        printf("%s", arr2);
      //  i++;
    //}
}*/

// Test ft_memset
/*int main()
{
	//int p[] = {1,2,3,4};
	//ft_memset(p+1,255, 4);
    ft_memset(NULL,1, 1);
	//memset(p+1,-1, 4);
    //int i = 0;
    //while (i < 4)
    //{
	//    printf("%d ", p[i]);
    //    i++;
   // }
}*/

// Test ft_bzero
/*int main()
{
    int c[] = {1, 2, 3, 4, 5};
    bzero(NULL, 8);
    int i = 0;
    while (i < 5)
    {
        printf("%d ", c[i]);
        i++;
    }
}*/

// Test ft_putstr_fd
/*int main()
{
    char *s = "Anas";
    int fd = open("text", O_RDWR | O_CREAT);
    ft_putstr_fd(s, fd);
    close(fd);
}*/

// Test ft_putendl_fd

/*int main()
{
    char *s = "Anas";
    int fd = open("text", O_RDWR | O_CREAT);
    ft_putendl_fd(s, fd);
    close(fd);
}*/


// Test ft_putnbr_fd

/*int main()
{
    int fd = open("text", O_RDWR | O_CREAT);
    ft_putnbr_fd(2147483647, fd);
    close(fd);
}*/

// Test ft_strlcat
/*int main()
{
    char c[18] = "Hello, World!";
    char s[18] = "Hello, World!";
    int result = strlcat(c, "hello", 18);
    int result1 = ft_strlcat(s, "hello", 18);
    printf("len result: %d\n", result);
    printf("strlcat: %s\n", c);
    printf("len result1 : %d\n", result1);
    printf("ft_strlcat: %s\n", s);
}*/

// Test ft_strnstr
/*int main()
{
    char src[] = "hello am fine";
    printf("%s\n", ft_strnstr(src,NULL,8));
    return 0;
}*/

// Test ft_toupper
/*int main()
{
    char c[] = "hhhhh";
    printf("%c", ft_toupper(c[0]));
}*/

//Test ft_tolower
/*int main()
{
    char *c = "HHHH";
    printf("%c", tolower(c[0]));
}*/

//Test ft_strchr
/*int main()
{
    char *s = "abcdefghijkl";
    char *r = ft_strchr(s, '\0');
    char *r1 = strchr(s, '\0');
    printf("%s\n", r);
    printf("%s", r1);
}*/

// Test ft_strrchar
/*int main()
{
    char *s = "abcdefghijikl";
    char *r = ft_strrchr(s, 'i');
    char *r1 = strrchr(s, 'i');
    printf("%s\n", r);
    printf("%s", r1);
}*/

// Test ft_strncmp
/*int main()
{
    char *c = NULL;
    char *s =  "Anas";
    printf("%d\n", strncmp(c, s, 2));
    printf("%d", ft_strncmp(c, s, 2));
}*/

// Test ft_memchr
/*int main()
{
    char *c = "hello world";
    char *b = memchr(c, 'o', sizeof(c));
    //int i = 0;
    //while (i < 3)
    //{
        printf("%s ", b);
        //i++;
    //}
}*/

// Test ft_memcmp
/*int main()
{
    int c[] = {1, 2, 3, 4}; ///&c[0] == 0x7ffee5957760
    int r[] = {1, 2, 3}; //&r[3] == 0x7ffee5957760
    printf("%p|%p|\n", &c[0], &r[3]);
    printf("%d\n", ft_memcmp(c, r, sizeof(c)));
    printf("%d\n", memcmp(c, r, sizeof(c)));
}*/

// Test ft_strnstr
/*int main()
{
    char *str = "Hello world";
    char *s = "";
    printf("%s\n", ft_strnstr(str, s, 5));
    printf("%s\n", strnstr(str, s, 5));
}*/

// Test atoi
/*int main()
{
    char *c = "12345672891234567899";
    printf("%d\n", ft_atoi(c));
    printf("%d", atoi(c));
}*/

// Test ft_strdup
/*int main()
{
    char *c = NULL;
    //printf("%s\n", ft_strdup(c));
    printf("%s\n", strdup(c));
}*/

// Test ft_substr
/*int main()
{
    char *c ="Anas";
    size_t len = -1;
    char *t = ft_substr(c, 0, len);
    printf("%s", t);
    if (t)
        free(t);
    return (0);
}*/

// Test ft_strjoin
/*int main()
{
    char *c = "shhs";
    char *s = NULL;
    char *r = ft_strjoin(c, s);
    printf("%s", r);
}*/

// Test ft_lstnew
/*int main()
{
    int s = 10;
    int *c = &s;
    t_list *ptr = ft_lstnew(c);
    printf("%d %p", *((int *)ptr->content), ptr->next);
}*/

// Test ft_lstadd_front
/*int main()
{
    char *s = "Hello";
    char *r = "World";
    t_list *head = ft_lstnew(s);
    t_list *new = ft_lstnew(r);
    t_list **p = NULL;
    ft_lstadd_front(p, new);
    t_list *p1 = head;
    while (p1)
    {
        printf("%s ", p1->content);
        p1 = p1->next;
    }   
    return (0);
}*/

// ft_lstsize
/*int main()
{
    char *s = "Hello";
    char *r = "World";
    char *y = "hey";
    t_list *head = ft_lstnew(s);
    t_list *new = ft_lstnew(r);
    t_list *new1 = ft_lstnew(y);
    head->next = new;
    new->next = new1;
    int i = ft_lstsize(NULL);
    printf("%d", i);
    return (0);
}*/

// Test ft_lstlast
/*int main()
{
    char *s = "Hello";
    char *r = "World";
    char *y = "hey";
    t_list *head = ft_lstnew(s);
    t_list *new = ft_lstnew(r);
    t_list *new1 = ft_lstnew(y);
    head->next = new;
    new->next = new1;
    t_list *i = ft_lstlast(head);
    printf("%s", i->content);
    return (0);
}*/

// Test ft_lstadd_back
/*int main()
{
    char *s = "Hello";
    char *r = "World";
    char *y = "hey";
    t_list *head = ft_lstnew(s);
    t_list *new = ft_lstnew(r);
    t_list *new1 = ft_lstnew(y);
    head->next = new;
    t_list **p = &head;
    ft_lstadd_back(p, new1);
    while ((*p))
    {
        printf("%s ", (*p)->content);
        (*p) = (*p)->next;
    }
    return (0);
}*/

// Test ft_lstdelone
void ft_free(void *s)
{
    free(s);
}

int main()
{
    char *s = "Hello";
    char *r = "World";
    char *y = "hey";
    t_list *head = ft_lstnew(s);
    t_list *new = ft_lstnew(r);
    t_list *new1 = ft_lstnew(y);
    head->next = new;
    t_list **p = &head;
    t_list *p1;
    ft_lstadd_back(p, new1);
    p1 = head;
    while (p1)
    {
        printf("%s ", p1->content);
        p1 = p1->next;
    }
    printf("\n");
    p1 = head->next;
    void *del = &ft_free;
    ft_lstdelone(p1, del);
    printf("%s\n", p1->content);
    p1 = head;
    while (p1)
    {
        printf("%s ", p1->content);
        p1 = p1->next;
    }
    return (0);
}