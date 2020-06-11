
extern "C" {
    #include <tinyPTC/src/tinyptc.h>
}

#include <sys/render.hpp>
#include <man/entitymanager.hpp>
#include <iostream>

#define kSCRWIDTH 480
#define kSCRHEIGHT 272

namespace ECS{

	RenderSystem_t::RenderSystem_t(uint32_t x, uint32_t y , EntityManager_t& e)
	{
		ptc_open("window",x,y);
		std::cout<< "RenderSystem_t(u_int32_t,u_int32_t)" <<std::endl;

	}

	RenderSystem_t::~RenderSystem_t(){
		std::cout<< "~RenderSystem_t()" <<std::endl;
		ptc_close();
	}

	const bool RenderSystem_t::update(EntityManager_t& e) const{
		ptc_process_events();
		return true;
	}
}//namespace ECS
