
extern "C" {
    #include <tinyPTC/src/tinyptc.h>
}

#include <sys/render.hpp>
#include <iostream>
#define kSCRWIDTH 480
#define kSCRHEIGHT 272

namespace ECS{

	RenderSystem_t::RenderSystem_t()
	{
		//ptc_open("window",kSCRWIDTH,kSCRHEIGHT);
		std::cout<< "RenderSystem_t()" <<std::endl;
	}

	RenderSystem_t::RenderSystem_t(u_int32_t x, u_int32_t y){
		ptc_open("window",x,y);
		std::cout<< "::RenderSystem_t(u_int32_t,u_int32_t)" <<std::endl;

	}

	RenderSystem_t::~RenderSystem_t(){
		std::cout<< "~RenderSystem_t()" <<std::endl;
	}
}//namespace ECS
