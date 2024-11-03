#include "libft.h"
// Test ft_isalpha
// int main()
// {
//     int c = '(';
//     printf("isalpha: %d\n", isalpha(c));
//     printf("ft_isalpha: %d\n", ft_isalpha(c));
// }

 //Test ft_isdigit
// int main()
// {
//     printf("isdigit %d\n", isdigit(59));
//     printf("ft_isdigit %d", ft_isdigit(59));
// }

// Test ft_isalnum
// int main()
// {
//     printf("isalnum %d\n", isalnum(100));
//     printf("ft_isalnum %d", ft_isalnum(100));
// }

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
// int main()
// {
//     //char c[] = "Hello, World!";
//     char *s;
//     char *dest;
//     dest = (char *)malloc(sizeof(*dest) * 15);
//     s = (char *)malloc(sizeof(*s) * 15);
//     //char dest1[6];
//     int result = strlcpy(dest, "", 15);
//     int result1 = ft_strlcpy(s, "", 15);
//     printf("len result: %d\n", result);
//     write(1, dest, 15);
//     printf("len result result: %d", result1);
//     write(1, s, 15);
// }



// Test ft_strtrim
// int main() {
//     char *s1 = "        ";
//     char *s2 = " ";
//     char *result = ft_strtrim(s1, s2);
//     printf("%s\n", result);
//     free(result);
// }

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
// #include <limits.h>
// int main()
// {
//     char *c =    ft_calloc(0 ,0);
//     int i = 0;
//     if (c)
//     {
//         while (i < 1)
//         {
//             printf("%d", c[i]);
//             i++;
//         }
//         free(c);
//     }
// }


// Test ft_strlen
/*int main()
{
    char *c = NULL;
    printf("%zu", strlen(c));
}*/


// Test ft_split
// int main()
// {
//     char *s = "hello!";
//     //har *s = "s b db f";
//     char c = ' ';
//     char **p =  ft_split(s, c);
//      int i = 0;

//     if (p)
//     {
//         while (p[i])
//         {
//             printf("%s\n", p[i]);
//             i++;
//         }
//         printf("%s", p[i]);
//         i = 0;
//         while (p[i])
//         {
//             free(p[i]);
//             i++;
//         }
//         free(p);
//     }
// }

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
// #include <limits.h>
// int main()
// {
//     int c = 999999999;
//     char *n = ft_itoa(c);
//     printf("%s", n);
// }

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
// int main()
// {
//     char *s = "Anas";
//     int fd = open("text", O_RDWR | O_CREAT);
//     ft_putstr_fd(s, fd);
//     close(fd);
// }

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
// int main()
// {
//     char c[18] = "Hello, World!";
//     //char s[18] = "Hello, World!";
//     int result = ft_strlcat(NULL, "hello", 0);
//     //int result1 = ft_strlcat(s, "hello", 18);
//     printf("len result: %d\n", result);
//     printf("strlcat: %s\n", c);
//     //printf("len result1 : %d\n", result1);
//     //printf("ft_strlcat: %s\n", s);
// }

// Test ft_strnstr
// int main()
// {
//     //char src[] = "hello am fine";
//     printf("%s\n", strnstr(((void *)0), "fake", 1));
//     return 0;
// }

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
//int main()
//{
  //  char *s = "\200";
    //char *r = ft_strchr(s, 128);
    //char *r1 = strchr(s, 128);
   // printf("%s", r);
   // printf("\n");
   // printf("%s", r1);
//}

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
// int main()
// {
//     //char *c = NULL;
//     //char *s =  "Anas";
//     //printf("%d\n", strncmp("\200", "\10", 6));
//     printf("%d", ft_strncmp("\377", "\10", 6));
// }

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
// int main()
// {
//     char *str = "lorem ipsum dolor sit amet";
//     char *s = "dolor";
//     //printf("%s\n", strnstr(str, s, 1));
//     printf("%s\n", ft_strnstr(str, s, 0));
// }

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
// int main()
// {
//     char *t = ft_substr("hola", 2, 3);
//     if (t)
//         free(t);
//     return (0);
// }

// Test ft_strjoin
/*int main()
{
    char *c = "shhs";
    char *s = NULL;
    char *r = ft_strjoin(c, s);
    printf("%s", r);
}*/

// Test ft_lstnew
// int main()
// {
//     int s = 10;
//     int *c = &s;
//     t_list *ptr = ft_lstnew(c);
//     if (ptr->content)
//         printf("%d %p", *((int *)ptr->content), ptr->next);
// }

// Test ft_lstadd_front
// int main()
// {
//     char *s = "Hello";
//     char *r = "World";
//     t_list *head = ft_lstnew(s);
//     t_list *new = ft_lstnew(r);
//     t_list **p = NULL;
//     ft_lstadd_front(p, new);
//     t_list *p1 = head;
//     while (p1)
//     {
//         printf("%s ", p1->content);
//         p1 = p1->next;
//     }   
//     return (0);
// }

// ft_lstsize
// int main()
// {
//     char *s = "Hello";
//     char *r = "World";
//     char *y = "hey";
//     t_list *head = ft_lstnew(s);
//     t_list *new = ft_lstnew(r);
//     t_list *new1 = ft_lstnew(y);
//     t_list *new2 = ft_lstnew("hh");
//     head->next = new;
//     new->next = new1;
//     new1->next = new2;
//     int i = ft_lstsize(head);
//     printf("%d", i);
//     return (0);
// }

// Test ft_lstlast
// int main()
// {
//     char *s = "Hello";
//     char *r = "World";
//     char *y = "hey";
//     t_list *head = ft_lstnew(s);
//     t_list *new = ft_lstnew(r);
//     t_list *new1 = ft_lstnew(y);
//     t_list *new2 = ft_lstnew("hhh");
//     head->next = new;
//     new->next = new1;
//     new1->next = new2;
//     t_list *i = ft_lstlast(NULL);
//     if (i)
//         printf("%s", i->content);
//     return (0);
// }

// Test ft_lstadd_back
// int main()
// {
//     char *s = "Hello";
//     char *r = "World";
//     char *y = "hey";
//     t_list *head = ft_lstnew(s);
//     t_list *new = ft_lstnew(r);
//     t_list *new1 = ft_lstnew(y);
//     t_list *new2 = ft_lstnew("hhh");
//     head->next = new;
//     head = NULL;
//     t_list **p = &head;
//     ft_lstadd_back(p, new1);
//     ft_lstadd_back(p, new2);
//     while ((*p))
//     {
//         printf("%s ", (*p)->content);
//         (*p) = (*p)->next;
//     }
//     return (0);
// }

// Test ft_lstdelone
// void ft_free(void *s)
// {
//     free(s);
// }

// int main()
// {
//     char *s = ft_strdup("Hello");
//     char *r = ft_strdup("World");
//     char *y = ft_strdup("Hey");
//     t_list *head = ft_lstnew(s);
//     t_list *new = ft_lstnew(r);
//     t_list *new1 = ft_lstnew(y);
//     head->next = new;
//     t_list **p = &head;
//     t_list *p1;
//     ft_lstadd_back(p, new1);
//     p1 = head;
//     while (p1)
//     {
//         printf("%s ", (char *)p1->content);
//         p1 = p1->next;
//     }
//     printf("\n");
//     printf("%s %p\n", (char *)p1->content, p1);
//     void *del = &ft_free;
//     ft_lstdelone(head->next, del);
//     // p1 = head;
//     // while (p1->next)
//     // {
//     //     printf("%s", (char *)p1->content);
//     //     p1 = p1->next;
//     // }
//     return (0);
// }

/*int main()
{
    char *s = ft_strdup("Hello");
    char *r = ft_strdup("World");
    char *y = ft_strdup("Hey");
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
        printf("%s ", (char *)p1->content);
        p1 = p1->next;
    }
    printf("\n");
    p1 = head->next;
    printf("%s %p\n", (char *)p1->content, p1->next);
    void *del = &ft_free;
    ft_lstdelone(p1, del);
    int n = 9999999;
    t_list *t = ft_lstnew(&n);
    (void)t;
    printf("%d\n", *(int*)p1->content);
    p1 = head;
    while (p1->next)
    {
        printf("%s ", (char *)p1->content);
        p1 = p1->next;
    }
    return (0);
}*/

// Test lstclear
/*void ft_free(void *s)
{
    free(s);
}

int main()
{
    char *s = ft_strdup("Hello");
    char *r = ft_strdup("World");
    char *y = ft_strdup("Hey");
    t_list *head = ft_lstnew(s);
    t_list *new = ft_lstnew(r);
    t_list *new1 = ft_lstnew(y);
    head->next = new;
    t_list **p = &head;
    t_list *p1;
    t_list *p2;
    ft_lstadd_back(p, new1);
    p1 = head;
    while (p1)
    {
        printf("%s ", (char *)p1->content);
        p1 = p1->next;
    }
    printf("\n");
    p = &new1;
    void *del = &ft_free;
    ft_lstclear(p, del);
    if (*p)
        printf("%p\n", new);
    p1 = head;
    while (p1->content)
    {
        p2 = p1;
        p1 = p1->next;
    }
    p2->next = NULL;
    p2 = head;
    while (p2)
    {
        printf("%s ", (char *)p2->content);
        p2 = p2->next;
    }
    return (0);
}*/

/*int main(void)
{
    // Create test data
    t_list *head = ft_lstnew(ft_strdup("Node 1"));
    t_list *next = ft_lstnew(ft_strdup("Node 2"));
    t_list *next1 = ft_lstnew(ft_strdup("Node 3"));
    t_list *tmp;

    ft_lstadd_back(&head, next);
    ft_lstadd_back(&head, next1);
    
    (void)next1;
    // Print list before clearing
    printf("List before clearing:\n");
    for (t_list *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        printf("%s\n", (char *)tmp->content);
    }

    // Call ft_lstclear
    ft_lstclear(&next, &ft_free);

    // Check if list is cleared
    if (!head)
        printf("List successfully cleared.\n");
    else
        printf("List clear failed.\n");
    tmp = head;
    if (tmp)
    {
        //printf("%p %p\n", tmp, tmp->next);
        //printf("%s %p", tmp->content, tmp->next->content);
        while (tmp->content)
        {
            printf("g");
            tmp = tmp->next;
        }
        tmp->next = NULL;
    }
    while(head)
    {
        printf("%s", head->content);
        head = head->next;
    }

    return 0;
}*/


// Test ft_stiter
void *ft_upper(void *s)
{
    int i = 0;
    char *t = (char *)s;
    while (t[i])
    {
        if (t[i] >= 'a' && t[i] <= 'z')
            t[i] = ft_toupper(t[i]);
        i++;
    }
    return (s);
}

void ft_del(void *s)
{
        free(s);
}
/*int main()
{
    t_list *head = ft_lstnew(ft_strdup("HeL1o"));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("wo0ld")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("h")));
    ft_lstiter(head, &ft_upper);
    while (head)
    {
        printf("%s\n", (char *)head->content);
        head = head->next;
    }
}*/

//Test ft_lstmap

int main()
{
    t_list *head = ft_lstnew(ft_strdup("hello"));
    ft_lstadd_back(&head, ft_lstnew(NULL));
    //ft_lstadd_back(&head, ft_lstnew(ft_strdup("h")));
    t_list *new_head = ft_lstmap(head, &ft_upper, &ft_del);
    (void)new_head;
    // while (new_head)
    // {
    //     printf("%s\n", new_head->content);
    //     new_head = new_head->next;
    // }
}
