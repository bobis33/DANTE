/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** parse_file
*/

#include "solver.h"
#include "my.h"

void find_size(solver_t *solver)
{
    int i = 0; int j = 0;
    while (solver -> maze[i] != NULL) {
        while (solver -> maze[i][j] != '\0') {
            j++;
        }
        i++;
    }
    solver -> size_x = j - 1;
    solver -> size_y = i;
}

int compt_line(char *map)
{
    int i = 0; int j = 0;
    while (map[i] != '\0') {
        if (map[i] == '\n')
            j++;
        i++;
    }
    return (j + 1);
}

int compt_column(char *map)
{
    int i = 0; int j = 0;
    while (map[i] != '\n') {
        i++;
        j++;
    }
    return (j);
}

int transform_map(char *map, solver_t *solver)
{
    int i = 0; int j = 0; int k = 0; int nb_lines = compt_line(map);
    solver -> maze = malloc(sizeof(char *) * (nb_lines+ 1));
    while (map[i] != '\0') {
        solver -> maze[j] = malloc(sizeof(char) * (compt_column(map) + 1));
        while (map[i] != '\n' && map[i] != '\0') {
            solver -> maze[j][k] = map[i];
            i++; k++;
        }
        if (j < nb_lines - 1) {
            solver -> maze[j][k] = '\n';
            solver -> maze[j][k + 1] = '\0';
        }
        if (j == nb_lines - 1)
            solver -> maze[j][k] = '\0';
        i++; j++; k = 0;
    }
    solver -> maze[j + 1] = NULL;
    if (check_if_maze_is_rectangle(solver -> maze) == 84) return (84);
    find_size(solver);
    return (0);
}

int read_file(char *map, solver_t *solver)
{
    int fd = open(map, O_RDONLY);
    struct stat sb;
    char *buffer;
    int size;
    if (map == NULL) return (84);
    if (fd == -1) return (84);
    if (stat(map, &sb) == -1) return (84);
    if (!S_ISREG(sb.st_mode)) return (84);
    if (access(map, R_OK) == -1) return (84);
    size = sb.st_size;
    buffer = malloc(sizeof(char) * (size + 2) );
    read(fd, buffer, size);
    buffer[size] = '\0';
    close(fd);
    if (init_check(buffer, size) == 84) return (84);
    if (transform_map(buffer, solver) == 84) return (84);
    return (0);
}
