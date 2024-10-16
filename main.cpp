#include<iostream>
#include<vector>

enum Direction{
    UP,
    DOWN,
    IDLE,
};

typedef struct Elevator {
    Direction dir = IDLE;
    int current_floor = 0;
    std::vector<int> elevator_queue;
    
} Elevator;


int main() {
    Elevator elevator;

    
    return 0;
} 


