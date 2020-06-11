#include <iostream>
#include <algorithm>
#include <vector>
#include <man/entitymanager.hpp>
#include <util/gamecontext.hpp>
extern "C" {
    #include <tinyPTC/src/tinyptc.h>
}
//#include <string_view>

namespace ECS {
	EntityManager_t::EntityManager_t()
	{
		m_Entity.reserve(kNUMINITIALENTITIES);
	}

	void EntityManager_t::createEntity(uint32_t w ,uint32_t h , std::string_view fname)
	{
		auto & e = m_Entity.emplace_back(w,h);
		e.x = 10;
		e.y = 10;
		std::fill(e.sprite.begin() , e.sprite.end(),0x666666);

	}

	void EntityManager_t::createEntity(uint32_t x,uint32_t y ,uint32_t w ,uint32_t h , uint32_t s)
	{
		auto & e = m_Entity.emplace_back(w,h);
		e.x = 10;
		e.y = 10;
		std::fill(e.sprite.begin() , e.sprite.end(),s);

	}

		EntityManager_t::~EntityManager_t()
	{
		std::cout<< "~EntityManager_t()" << std::endl;
		ptc_close();
	}
}

