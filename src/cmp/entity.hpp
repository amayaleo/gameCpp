#pragma once 
#include <algorithm>
#include <cstdint>
#include <memory>
#include <vector>
#include <fstream>
#include <picoPNG/src/picopng.hpp>
#include <cstring>

namespace ECS{
	struct Entity_t
	{
		std::vector<uint32_t>sprite{};
		
		~Entity_t()=default;
		
		explicit Entity_t(uint32_t _w , uint32_t _h)
		: w(_w) , h(_h)
		{
			sprite.resize(w*h);	
		}


		explicit Entity_t(std::string filename ){
			std::vector <unsigned char>pixels{};
			unsigned long dw{0},dh{0};
			std::ifstream file(filename ,std::ios::binary);
			//filename
			std::vector<unsigned char> filevec(
					std::istreambuf_iterator<char>{file}
				,	std::istreambuf_iterator<char>{}
				
			);


			decodePNG(pixels ,dw,dh,filevec.data() , filevec.size());
				sprite.resize(pixels.size()/4);
				std::memcpy(sprite.data() , pixels.data() , pixels.size());
				w=dw;
				h=dh;

		}
		//Entity_t& operator=(const Entity_t& other)=default;
		
		uint32_t x { 0 } , y { 0 };	
		uint32_t w { 0 } , h { 0 };
		uint32_t vx { 0 } , vy { 0 };	
	};
}