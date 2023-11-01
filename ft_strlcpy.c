#include "libft.h"

size_t	ft_strlcpy(char *dest,const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}


int main() {
    char dst[10];
    const char *src = "Hello, world!";
    size_t dst_size = sizeof(dst);

    size_t result = ft_strlcpy(dst, src, dst_size);

    printf("Copied string: %s\n", dst);
    printf("Length of the source string: %zu\n", result);

    return 0;
}