/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** solver
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#ifndef SOLVER_H_
    #define SOLVER_H_

    typedef struct coord {
        int x;
        int y;
    } coord_t;
    typedef struct solver {
        int steps;
        char **maze;
        int size_x;
        int size_y;
        int ***maze_int;
        int **path;
        coord_t *coord;
        int real_steps;
        int min;
        int direction;
    } solver_t;

    int solving(int argc, char **argv);
    int read_file(char *map, solver_t *solver);
    int transform_map(char *map, solver_t *solver);
    int error_cases(int argc, char **argv);
    int check_right_direction(solver_t *solver);
    int check_down_direction(solver_t *solver);
    int check_up_direction(solver_t *solver);
    int check_left_direction(solver_t *solver);
    int check_direction(solver_t *solver);
    void distance_from_start_end(solver_t *solver, int i, int j);
    void sum_of_distance(solver_t *solver, int i, int j);
    void find_distance_for_one_star(solver_t *solver, int i, int j);
    void check_if_star(solver_t *solver, int i, int j);
    void find_distance_for_all_stars(solver_t *solver);
    void malloc_coord(solver_t *solver);
    void set_to_zero(solver_t *solver, int i, int j);
    void create_maze_int(solver_t *solver);
    void change_value(solver_t *solver, int i, int j);
    void show_result(solver_t *solver);
    void move_right(solver_t *solver);
    void move_down(solver_t *solver);
    void move_left(solver_t *solver);
    void move_up(solver_t *solver);
    void test_pos(solver_t *solver);
    void print_map(solver_t *solver);
    void find_size(solver_t *solver);
    int read_file(char *map, solver_t *solver);
    int start_finding_path(solver_t *solver);
    int pathfinding(solver_t *solver);
    void rewind_pos(solver_t *solver);
    int solving(int argc, char **argv);
    int init_check(char *buffer, int size);
    int check_if_maze_is_rectangle(char **maze);

#endif /* !SOLVER_H_ */
