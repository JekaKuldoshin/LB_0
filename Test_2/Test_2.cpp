#include "fun.h"
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	struct Tabl t {};
	int choice;
	while (true)
	{

		printf("1 - ввод с экрана и запись в файл\n");
		printf("2 - ввод случайным образом и запись в файл\n");
		printf("3 - добавить запись в начало файла\n");
		printf("4 - добавить запись в конец файла\n");
		printf("5 - печать одной записи из файла по номеру\n");
		printf("6 - печать всех записей из файла \n");
		printf("7 - выход из программы \n");
		printf(">> ");

		scanf_s("%d", &choice);

		switch (choice) {
		case(1): input(t);
			break;

		case(2): random(t);
			break;

		case(3):add_before(t);
			break;

		case(4): add_after(t);
			break;

		case(5):
			choice_str(t);
			printf("\n\n\n");
			break;

		case(6):
			print(t);
			break;

		case(7):
			printf("Выход\n");
			return 0;

		default:
			system("cls");
			printf("Неверное число\n");
			break;
		}
	}

	return 0;
}