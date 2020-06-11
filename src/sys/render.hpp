#pragma once
#include <cstdint>
#include <memory>
#include <util/typealiases.hpp>


namespace ECS {

struct EntityManager_t;

struct RenderSystem_t{
        explicit RenderSystem_t(uint32_t , uint32_t , EntityManager_t&);
        const bool update(EntityManager_t&) const;
        ~RenderSystem_t();

        void drawAllEntities(const Vect_t<Entity_t>&)const;

    private:
			const uint32_t m_w { 0 } , m_h { 0 };       
			std::unique_ptr<uint32_t[]> m_framebuffer{ nullptr };
	};

}//end namespace ECS
