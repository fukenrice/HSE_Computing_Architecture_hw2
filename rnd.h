//
// Created by rhy on 14.10.2021.
//

#ifndef HW2__RND_H_
#define HW2__RND_H_


//------------------------------------------------------------------------------
// rnd.h - содержит генератор случайных чисел в заданном диапазоне
//------------------------------------------------------------------------------

inline auto Random(int a, int b) {
    return a + (rand() % (abs((a - b)) + 1));
}

#endif //HW2__RND_H_
