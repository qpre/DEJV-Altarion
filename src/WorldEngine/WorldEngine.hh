#ifndef WORLDENGINE_H
#define WORLDENGINE_H

#include <list>
#include "../GraphicEngine/Elements/Frame.hh"
#include "Elements/Planet.hh"

namespace World
{
    class WorldEngine : public Graphic::GUI::Frame
    {
    public:
        WorldEngine();
        ~WorldEngine();
        void    generateWorld(int   nbPlanets);
        
    private:
        std::list<Planet*> __planets;
    };
}
#endif // WORLDENGINE_H
