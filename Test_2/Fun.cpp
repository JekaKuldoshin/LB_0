﻿#include "fun.h"

void input(Tabl t) { //Функ-я добавления записи в файл 
	system("cls");
	FILE* file_input = NULL;
	fopen_s(&file_input, "Tab.txt", "w");
	if (!file_input) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}

	printf("Введите год, имя научного руководителя, диаметр антены, рабочую частоту:\n");
	scanf_s("%d", &t.sc);
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%d", &t.size);
	scanf_s("%d", &t.mhz);
	
	fprintf_s(file_input, "%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name, t.size, t.mhz);
	
	fclose(file_input);

}


void random(Tabl t) {   //Функ-я добавления записи рандомно 

	int random = rand() % 50 + 100;
	char NAME[6]{ "avtor" };
	t.sc = rand() % 200 + 1820;
	strcpy(t.name, (NAME));
	t.size = rand() % 1000 + 10;
	t.mhz = rand() % 1000 + 10;

	FILE* file_rand = NULL;
	fopen_s(&file_rand, "Tab.txt", "w");
	if (!file_rand) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}

	
	fprintf_s(file_rand, "%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name,/* random,*/ t.size, t.mhz);
	

	fclose(file_rand);
}

void add_before(Tabl t) {       //Функ-я добавления записи в начало файла 
	system("cls");
	int size = 0, i = 0, j = 0;  
	char c; 
	int line = 0;

	FILE* foud_size;
	fopen_s(&foud_size, "Tab.txt", "r");       //Читаем файл с записями
	if (!foud_size) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}
		
	while (true) {                       //Цикл для того чтобы узнать размер 
		c = fgetc(foud_size);               //ранее заполненых записей
		if (c == '\n')size++;            //Size++
		else if (c == EOF)  break;      //пока с == ЕОF - конец файла
	}

	fclose(foud_size);

	////////////////////////
	int size_string = 100;               //Размер массив введенного

	char** str = new char* [size];   //Создаем динамический массив
	for (int u = 0; u < size; u++)   //В зависимости от того сколько у нас ранее 
	{                               //веденного, создается с таким же кол-вом массив
		str[u] = new char[size_string];
	}

	FILE* data_copying;                             
	fopen_s(&data_copying, "Tab.txt", "r");       //Читаем файл с записями
	if (!data_copying) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}
	i = 0;
	line = size;
	while (line != 0) {    //Цикл будет работать пока не дойдем до последней линии ранее веденных записей 
		fgets(*(str + i), size_string, data_copying);  // проходим по  каждому элеменету записи          
		i++;      
		line--; 
	}
	fclose(data_copying);
	i = 0;

	////////////////////////

	FILE* file_add_new_data = NULL;          
	fopen_s(&file_add_new_data, "Tab.txt", "w");       //Записывем новые записи в файл
	if (!file_add_new_data) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}

	printf("Введите год, имя научного руководителя, диаметр антены, рабочую частоту:\n");

	scanf_s("%d", &t.sc);           //Заполняем и запись появляется в верху
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%d", &t.size);
	scanf_s("%d", &t.mhz);

	fprintf_s(file_add_new_data, "%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name, t.size, t.mhz);
	fclose(file_add_new_data);
	////////////////////////

	FILE* adding_copied_data = NULL;                //Добавляем прошлые записи
	fopen_s(&adding_copied_data, "Tab.txt", "a");
	if (!adding_copied_data) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}
	for (int u = 0; u < size; u++)      //Проходим по каждому элем-ту массива   
	{                                   //(наши прошлые записи)
		fprintf(adding_copied_data, "%s", str[u]);
	}
	fclose(adding_copied_data);

	for (int u = 0; u < size; u++) //Очищаем массив
	{
		delete[] str[u];
	}
	delete[] str;

}

void add_after(Tabl t) {       //Функ-я добавления записи в конец файла 

	system("cls");
	FILE* file_after = NULL;
	fopen_s(&file_after, "Tab.txt", "a");   //Октрываем файл для добавления записей 
	if (!file_after) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}
	     
	printf("Введите год, имя научного руководителя, диаметр антены, рабочую частоту:\n");
	scanf_s("%d", &t.sc);
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%d", &t.size);
	scanf_s("%d", &t.mhz);

	fprintf_s(file_after, "%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name, t.size, t.mhz);
	fclose(file_after);

}

void choice_str(Tabl t) {    //Функ-я выбора строки
	system("cls");
	char c;                   //Переменная для чтения символов, подсчет размера
	int size = 0;            //Кол-ва строк
	int num = 0;            //Номер строки которую захочет вывести пользователь
	FILE* file_read; 
	fopen_s(&file_read, "Tab.txt", "r");   //Открываем файл для чтения записей
	if (!file_read) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}

	while (true) {
		c = fgetc(file_read);  //Чтение символов из файла 
		if (c == '\n')size++;   //Если переход на новую строчку, прибавляется размер +1
		else if (c == EOF)  break;   //Если файл дошел до конца, выходит из цикла
	}
	fclose(file_read);

	/////////////////////

	printf("Всего %d, строчек.\n", size);
	printf("Введите номер выводимой строки: ");
	scanf("%d", &num);   //Номер строки которую захочет вывести пользователь

	if (num > size) {     //Проверка на ввод большего числа чем есть строк
		printf("Ошибка! Вы ввели слишком большое число! ");
		return;
	}

	FILE* file_print = NULL;
	fopen_s(&file_print, "Tab.txt", "r");  //Открываем файл для чтения записей
	if (!file_print) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}

	int i = 0;
	while (i != num) {      //Выводим каждый элемент через переменные
		fscanf_s(file_print, "%d", &t.sc);
		fscanf_s(file_print, "%s", t.name, 10);
		fscanf_s(file_print, "%d", &t.size);
		fscanf_s(file_print, "%d", &t.mhz);
		i++;
	}
	printf_s("%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name, t.size, t.mhz);

	fclose(file_print);
	printf("\n\n\n");

}

void print(Tabl t) {   //Функ-я печати всех строк

	system("cls");
	FILE* file_out = NULL;
	fopen_s(&file_out, "Tab.txt", "r"); //Открываем файл для чтения записей
	if (!file_out) {
		puts("Ошибка открытия файла.\n");   //Проверка на наличее файла
		exit(1);
	}
	char ch = fgetc(file_out);// чтение первого символов из файла
	while (!feof(file_out)) { // функция проверки конца файла
		putchar(ch);          // печать символов на экран
		ch = fgetc(file_out); 
	}
	fclose(file_out);
	printf("\n\n\n");

}