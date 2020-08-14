#ifndef _B_H_
#define _B_H_

class A;

class B {
    private:
        A* m_pA;
    public:
        B(A* pA);
        virtual ~B();
        void hoge();
};

#endif //_B_H_