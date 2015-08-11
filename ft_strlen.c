
#include <string.h>

size_t		ft_strlen(const char *s)
{
	char *tmp;

	if (!s)
		return (0);
	tmp = s;
	while (*tmp)
		tmp++;	
	return (tmp - s);
}
