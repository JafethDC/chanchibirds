#ifndef SPRITE_H_INCLUDED
#define SPRITE_H_INCLUDED


enum{
    PIG,
    BIRD,
    PLATFORM,
}

class Sprite{
    public:
        int tag;
        GLint textureID;

        //Coordinates
        GLfloat x;
        GLfloat y;
        GLfloat z;

        //Dimensions
        GLfloat width;
        GLfloat height;
    private:


};


#endif // SPRITE_H_INCLUDED
