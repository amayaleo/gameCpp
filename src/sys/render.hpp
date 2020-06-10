#pragma once
#include <cstdint>

namespace ECS {

struct EntityManager_t;

struct RenderSystem_t{
                explicit RenderSystem_t(uint32_t , uint32_t , EntityManager_t&);
                const bool update() const;
                ~RenderSystem_t();
	};

}//end namespace ECS
