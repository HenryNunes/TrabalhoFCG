#ifndef OVNI_H
#define OVNI_H


class ovni
{
    public:
        ovni(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z);
        virtual ~ovni();

    protected:

    private:
        float t_x;
        float t_y;
        float t_z;

        float r_x;
        float r_y;
        float r_z;
};

#endif // OVNI_H
