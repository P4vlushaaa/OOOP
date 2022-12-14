#include "math.h"
#include "lab11.hh"

void CalcSquare(struct Triangle *tmp){
    tmp->square = 0.5 * (((tmp->b_x - tmp->a_x) * (tmp->c_y - tmp->a_y)) -
                         ((tmp->c_x - tmp->a_x) * (tmp->b_y - tmp->a_y)));
}