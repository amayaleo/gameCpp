
extern "C" {
    #include <tinyPTC/src/tinyptc.h>
}

#include <sys/render.hpp>

#define kSCRWIDTH 480
#define kSCRHEIGHT 272

namespace ECS{

RenderSystem_t::RenderSystem_t()
	{
		ptc_open("window",kSCRWIDTH,kSCRHEIGHT);
	}
}//namespace ECS
