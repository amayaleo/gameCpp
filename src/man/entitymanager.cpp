#include <iostream>
#include <algorithm>
#include <vector>
#include <man/entitymanager.hpp>
#include <util/gamecontext.hpp>
extern "C" {
    #include <tinyPTC/src/tinyptc.h>
}

namespace ECS {
	EntityManager_t::EntityManager_t()
	{
		m_Entity.reserve(kNUMINITIALENTITIES);
	}

	void EntityManager_t::createEntity(uint32_t w ,uint32_t h , uint32_t color)
	{
		auto & e = m_Entity.emplace_back(w,h);
		e.x = 10;
		e.y = 10;
		std::fill(e.sprite.begin() , e.sprite.end(),color);

	}


		EntityManager_t::~EntityManager_t()
	{
		std::cout<< "~EntityManager_t()" << std::endl;
		ptc_close();
	}
}

