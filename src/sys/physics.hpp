
#pragma once

namespace ECS 
{

    struct  GameContext_t;

    struct PhysicsSystem_t
    {
    private:
    
    public:
        PhysicsSystem_t();
        ~PhysicsSystem_t();
        bool update (GameContext_t&)const;
    };


}