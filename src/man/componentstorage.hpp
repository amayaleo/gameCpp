#pragma once
#include <vector>

namespace ECS {

struct PhysicsComponent_t;

    struct ComponentStorage_t
    {
    public:
        
        explicit ComponentStorage_t()=default;
        ComponentStorage_t(const ComponentStorage_t&) = delete;
        ComponentStorage_t(ComponentStorage_t&&) = delete;
        ComponentStorage_t operator&(const ComponentStorage_t&) = delete;
        ComponentStorage_t operator&&( ComponentStorage_t&&) = delete;
       //RenderComponent_t& createRenderComponent();


        std::vector<PhysicsComponent_t>& getPhysicsComponent(){return m_physicsComponent;};
        const std::vector<PhysicsComponent_t>& getPhysicsComponent() const { return m_physicsComponent;};
        PhysicsComponent_t& createPhysicsComponent()
        {
            auto & compo =  m_physicsComponent.emplace_back(10); 
            return compo;
        }
        ;

    private:
        std::vector<PhysicsComponent_t> m_physicsComponent;

    };
}