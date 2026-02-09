#pragma once
// IWYU pragma private; include "UnityEngine/CollisionPairHeaderFlags.hpp"
#include "UnityEngine/zzzz__CollisionPairHeaderFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionPairHeaderFlags::CollisionPairHeaderFlags(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CollisionPairHeaderFlags::CollisionPairHeaderFlags()   {
}
constexpr ::UnityEngine::CollisionPairHeaderFlags  UnityEngine::CollisionPairHeaderFlags::RemovedActor{static_cast<uint16_t>(0x1u)};
constexpr ::UnityEngine::CollisionPairHeaderFlags  UnityEngine::CollisionPairHeaderFlags::RemovedOtherActor{static_cast<uint16_t>(0x2u)};
