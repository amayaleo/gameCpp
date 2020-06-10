#pragma once
#include <cmp/entity.hpp>
#include <vector>

namespace ECS{
    struct  Entity_t;

    using VecEntities_t = std::vector<Entity_t>;



  template<typename T>

    using Vect_t = std::vector<T>;

    using EntityID_t = std::size_t;


}