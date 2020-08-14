#ifndef _CAR_H_
#define _CAR_H_

class CCar {
    public:
        CCar();     //コンストラクタ、生成時に一度だけ実行
        ~CCar();    //デストラクタ、消去時に一度だけ実行
        void move();
        void supply(int fuel);
    private:
        int m_fuel;
        int m_migration;
};

#endif //_CAR_H_