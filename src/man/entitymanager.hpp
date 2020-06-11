#pragma once
#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <util/gamecontext.hpp>



namespace ECS{
	struct Entity;
	struct  GameContext_t;
	struct PhysicsComponent_t;

	struct  EntityManager_t  : public GameContext_t
	{
		static constexpr std::size_t kNUMINITIALENTITIES{1000};
		explicit EntityManager_t();

		~EntityManager_t();
		
		const VecEntities_t& getEntities() const override { return m_Entity; };
		      VecEntities_t& getEntities()  override { return m_Entity; };
		const std::vector<PhysicsComponent_t>& getPhysicsComponent() const override {};
         	  std::vector<PhysicsComponent_t>& getPhysicsComponent()	   override {};

		void createEntity(uint32_t ,uint32_t , std::string );
		void createEntity(uint32_t,uint32_t,uint32_t,uint32_t, uint32_t);


	private:
		std::vector<Entity_t> m_Entity{};
		//ComponentStorage_t m_components;
	};

}

