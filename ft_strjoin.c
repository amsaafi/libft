#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t tlen;
    size_t i;
    size_t j;
    char *ptr;

    tlen = (ft_strlen(s1) + ft_strlen(s2)) + 1;
    ptr = malloc((char)tlen);
    i = 0;
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main()
{
    // Test 1: Concatenate two non-empty strings
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    printf("Test 1: %s\n", result);  // Expected output: "Hello, world!"
    free(result);

    // Test 2: Concatenate an empty string and a non-empty string
    const char *s3 = "";
    const char *s4 = "Hello!";
    result = ft_strjoin(s3, s4);
    printf("Test 2: %s\n", result);  // Expected output: "Hello!"
    free(result);

    // Test 3: Concatenate a non-empty string and an empty string
    const char *s5 = "Hello!";
    const char *s6 = "";
    result = ft_strjoin(s5, s6);
    printf("Test 3: %s\n", result);  // Expected output: "Hello!"
    free(result);

    // Test 4: Concatenate two empty strings
    const char *s7 = "";
    const char *s8 = "";
    result = ft_strjoin(s7, s8);
    printf("Test 4: %s\n", result);  // Expected output: ""
    free(result);

    // Test 5: Concatenate a non-empty string and a null pointer
    const char *s9 = "Hello!";
    const char *s10 = NULL;
    result = ft_strjoin(s9, s10);
    printf("Test 5: %s\n", result);  // Expected output: "Hello!"
    free(result);

    // Test 6: Concatenate a null pointer and a non-empty string
    const char *s11 = NULL;
    const char *s12 = "world!";
    result = ft_strjoin(s11, s12);
    printf("Test 6: %s\n", result);  // Expected output: "world!"
    free(result);

    // Test 7: Concatenate two null pointers
    const char *s13 = NULL;
    const char *s14 = NULL;
    result = ft_strjoin(s13, s14);
    printf("Test 7: %s\n", result);  // Expected output: ""
    free(result);

    return 0;

}