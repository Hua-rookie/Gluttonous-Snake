#ifndef snake_h
#define snake_h
#include <iostream>
#include"apple.h"
#include"wall.h"
using namespace std;
const int defaultSize=100;
struct Point
{
    int x;
    int y;
};
enum//�趨���������ƶ�����Ķ�Ӧ��ϵ
{
    UP = 'w',
    Up = 'i',
    DOWN = 's',
    Down ='k',
    RIGHT = 'd',
    Right = 'l',
    LEFT = 'a',
    Left ='j'
};
class Snake
{
public:
    Snake(Wall &tempWall, Apple &apple,int sz);//
     ~Snake();
    void InitSnake(char , int , int );
    void 
    bool Death();
    bool Death(Snake& );
    bool Eat();
    bool Move(char &pre_direction,char &cur_direction);
    friend int Win(Snake& , Snake&);
    int getLength() {return length;}
    Point *GetHead() {return Head;}
   Wall & m_wall;
   Apple  & m_apple;
protected:
    Point *Head;//ָ����ͷ
    int length;//�ߵĳ���
    int maxSize;//�ߵ���󳤶�
    int tailx;
    int taily;
};
//������ʵ��
#endif /* snake_h */
