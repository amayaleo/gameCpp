#pragma once
#include <cmp/entity.hpp>
#include <util/typealiases.hpp>
//#include <cmp/physics.hpp>

namespace ECS{
    struct Entity_t;
struct PhysicsComponent_t;

    struct GameContext_t
    {
        virtual ~GameContext_t()=default;
        virtual const VecEntities_t& getEntities() const = 0;
        virtual VecEntities_t& getEntities()= 0;
        virtual const std::vector<PhysicsComponent_t>& getPhysicsComponent() const = 0;
        virtual std::vector<PhysicsComponent_t>& getPhysicsComponent()=0;
    };

}