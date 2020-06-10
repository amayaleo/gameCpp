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
    ECS::RenderSystem_t render(kSCRWIDTH , kSCRHEIGHT );
    while(!ptc_process_events());
  }
  catch(...)
  {
    std::cout<< "break program"<<std::endl;
  }
        std::cout<< "end program"<<std::endl;
  return 0;
}

