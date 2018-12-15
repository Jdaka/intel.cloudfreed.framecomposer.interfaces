#pragma once
#include <stddef.h>

namespace Intel {
	namespace CloudFreed {
		namespace FrameComposer {
			namespace Interfaces
			{
				class IFrameComposer
				{
				public:                    
					virtual void GetMD(void* bufferIn, long &frameId, long &timeStamp, long &bodyOffset, long &bodySize) = 0;

					virtual void SetMD(void* bufferIn, size_t sizeIn, long frameId, long timeStamp, void* bufferOut, size_t &sizeOut) = 0;
				};
			}
		}
	}
}




