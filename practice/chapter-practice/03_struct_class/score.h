#ifndef SCORE_H
#define SCORE_H


struct Score {
    char name[12];
    int kor, eng, math, tot;
    float ave;

    void input();
    void output();
};

#endif