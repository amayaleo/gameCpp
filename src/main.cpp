extern "C" {
    #include <tinyPTC/src/tinyptc.h>
}
#include <cstdint>
#include <iostream>
#include <memory>
#include <sys/render.hpp>
#include <man/entitymanager.hpp>
#include <sys/physics.hpp>
#include <sys/collision.hpp>
constexpr uint32_t kSCRWIDTH { 480 };
constexpr uint32_t kSCRHEIGHT { 272 };

int main(void){
  try
   {
        ECS::EntityManager_t entityMan;
      entityMan.createEntity(20,40,16,16,0x00ffffff);
      entityMan.createEntity(80,10,"assets/ninja.png");
      entityMan.createEntity(200,70,"assets/ninja.png");
      const ECS::RenderSystem_t render{ kSCRWIDTH , kSCRHEIGHT ,entityMan};
      ECS::PhysicsSystem_t Physics;
      ECS::CollisionSystem_t Collision;
 
      while(render.update(entityMan))
      {
        Physics.update(entityMan);
        Collision.update(entityMan);
      }        
   }
  catch(...)
  {
    std::cout<< "break program"<<std::endl;
  }
        std::cout<< "end"<<std::endl;
  return 0;
}

