class Sample {
    public:
        void setNum(int num);
        int getNum();
    private:
        int m_num;  //原則、メンバ変数はprivateで作る(カプセル化)
};