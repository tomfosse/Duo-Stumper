/*
** EPITECH PROJECT, 2026
** send_to_file.c
** File description:
** send to file
*/

#include <stdio.h>
#include <sys/stat.h>

int send_to_file(char *message)
{
  FILE *file = fopen("crypt", "w");

  if (!file)
      return 84;
  for (int i = 0; message[i]; i++)
      fprintf(file, "%c", message[i]);
  fclose(file);
  chmod("crypt", S_IRUSR | S_IRGRP | S_IROTH);
  return 0;
}
