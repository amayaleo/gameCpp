extern "C" {
    #include <tinyPTC/src/tinyptc.h>
}
#include <cstdint>
#include <iostream>
#include <memory>
#include <sys/render.hpp>
#include <man/entitymanager.hpp>

constexpr uint32_t kSCRWIDTH { 480 };
constexpr uint32_t kSCRHEIGHT { 272 };

int main(void){
  try
  {
    ECS::EntityManager_t EntityMan{};
    EntityMan.createEntity(20,40,0x00666666);
    const ECS::RenderSystem_t Render{ kSCRWIDTH , kSCRHEIGHT , EntityMan}; 
    while(Render.update());
        
  }
  catch(...)
  {
    std::cout<< "break program"<<std::endl;
  }
        std::cout<< "end"<<std::endl;
  return 0;
}

