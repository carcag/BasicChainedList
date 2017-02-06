#include 	"lorem.h"

int 		pushInList(t_data **pointer, char *word) {
	t_data 	*elem;
	if ((elem = malloc(sizeof(t_data))) == NULL)
		return (-1);
	elem->word = word;
	elem->prec = *pointer;
	*pointer = elem;
	return (0);
}

char 		*popInList(t_data **pointer) {
	char 	*word;
	t_data 	*tmp;

	if (!*pointer)
		return (NULL);
	tmp = (*pointer)->prec;
	word = (*pointer)->word;
	free(*pointer);
	*pointer = tmp;
	return (word);
}

void 		clearDaList(t_data **pointer) {
	t_data 	*tmp;

	while (*pointer) {
		tmp = (*pointer)->prec;
		free(*pointer);
		*pointer = tmp;
	}
}

int 		main(int ac, char *av) {
	t_data 	*my_data = NULL;

	pushInList(&my_data, "toto");
	clearDaList(&my_data);
	//printf("%s\n", popInList(&my_data));

	return (0);	
}