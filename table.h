#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED

typedef struct Ship {
    int x, y, length, status;
} Ship;

typedef struct Table {
    int ships_left;
    Ship ships[7];
} Table;

#endif // TABLE_H_INCLUDED
