#ifdef __cpp_modules
module;
#endif

#pragma once
#include "LiteNetLib\Layers\Crc32cLayer.hpp"
#include "LiteNetLib\Layers\PacketLayerBase.hpp"
#include "LiteNetLib\Layers\XorEncryptLayer.hpp"
#ifdef __cpp_modules
export module Layers;
#endif
