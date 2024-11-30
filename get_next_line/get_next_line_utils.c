#include "get_next_line.h"


void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	void	*ptr;

	if (count != 0 && (SIZE_MAX / count < size))
		return (NULL);
	s = count * size;
	ptr = malloc(s);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, s);
	return (ptr);
}

size_t	ft_strlen(const char *c)
{
	size_t	len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	i = ft_strlen(s1);
	copy = (char *)malloc((i + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static char	*ft_join(char *ptr, const char *s1, const char *s2)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		ptr[i + y] = s2[y];
		y++;
	}
	ptr[i + y] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	ptr_len;

	if (!s1 || !s2)
		return (NULL);
	ptr_len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(ptr_len + 1);
	if (!ptr)
		return (NULL);
	if (ptr_len == 0)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	return (ft_join(ptr, s1, s2));
}

static size_t	ft_check_len(size_t src_len, unsigned int start, size_t len)
{
	if (len > src_len - start)
		len = src_len - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	src_len;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	i = 0;
	if (start >= src_len)
		return (ft_strdup(""));
	len = ft_check_len(src_len, start, len);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (i < len && s[start])
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
