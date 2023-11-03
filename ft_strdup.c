#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dup;
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s);
    dup = (char *)malloc(len * sizeof(char)+1);
    if (dup == NULL)
        return NULL;
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}

int main() {
    // Test case 1: Non-empty string
    const char *original1 = "Hello, World!";
    char *duplicate1 = ft_strdup(original1);

    if (duplicate1 != NULL) {
        printf("Original string: %s\n", original1);
        printf("Duplicate string: %s\n", duplicate1);

        // Modify the duplicate string
        duplicate1[0] = 'J';

        printf("Modified duplicate string: %s\n", duplicate1);

        // Free the memory allocated by ft_strdup
        free(duplicate1);
    } else {
        printf("Failed to duplicate the string.\n");
    }

    // Expected output:
    // Original string: Hello, World!
    // Duplicate string: Hello, World!
    // Modified duplicate string: Jello, World!

    // Test case 2: Empty string
    const char *original2 = "";
    char *duplicate2 = ft_strdup(original2);

    if (duplicate2 != NULL) {
        printf("Original string: %s\n", original2);
        printf("Duplicate string: %s\n", duplicate2);

        // Free the memory allocated by ft_strdup
        free(duplicate2);
    } else {
        printf("Failed to duplicate the string.\n");
    }

    // Expected output:
    // Original string:
    // Duplicate string:

    // Test case 3: String with whitespace characters
    const char *original3 = "   Hello, World!   ";
    char *duplicate3 = ft_strdup(original3);

    if (duplicate3 != NULL) {
        printf("Original string: \"%s\"\n", original3);
        printf("Duplicate string: \"%s\"\n", duplicate3);

        // Free the memory allocated by ft_strdup
        free(duplicate3);
    } else {
        printf("Failed to duplicate the string.\n");
    }

    // Expected output:
    // Original string: "   Hello, World!   "
    // Duplicate string: "   Hello, World!   "

    // Test case 4: Very long string
    const char *original4 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed euismod, justo at ultrices malesuada, nisl neque aliquet sapien, nec rutrum elit orci eu dui. Morbi pulvinar turpis nec mauris gravida, id finibus purus facilisis. Sed convallis sapien sit amet ipsum rhoncus, at tempus nunc interdum. Nulla facilisi. Suspendisse potenti. Integer non vulputate ex, nec dapibus dui.";
    char *duplicate4 = ft_strdup(original4);

    if (duplicate4 != NULL) {
        printf("Original string length: %zu\n", ft_strlen(original4));
        printf("Duplicate string length: %zu\n", ft_strlen(duplicate4));

        // Free the memory allocated by ft_strdup
        free(duplicate4);
    } else {
        printf("Failed to duplicate the string.\n");
    }

    // Expected output:
    // Original string length: 370
    // Duplicate string length: 370

    return 0;
}