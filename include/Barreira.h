#ifndef BARREIRA_H
#define BARREIRA_H


class Barreira
{
    public:
        Barreira(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z);
        virtual ~Barreira();

        float t_x;
        float t_y;
        float t_z;

        float r_x;
        float r_y;
        float r_z;
    protected:

    private:

};

#endif // BARREIRA_H
