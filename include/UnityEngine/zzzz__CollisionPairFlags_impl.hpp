#pragma once
// IWYU pragma private; include "UnityEngine/CollisionPairFlags.hpp"
#include "UnityEngine/zzzz__CollisionPairFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionPairFlags::CollisionPairFlags(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CollisionPairFlags::CollisionPairFlags()   {
}
constexpr ::UnityEngine::CollisionPairFlags  UnityEngine::CollisionPairFlags::RemovedShape{static_cast<uint16_t>(0x1u)};
constexpr ::UnityEngine::CollisionPairFlags  UnityEngine::CollisionPairFlags::RemovedOtherShape{static_cast<uint16_t>(0x2u)};
constexpr ::UnityEngine::CollisionPairFlags  UnityEngine::CollisionPairFlags::ActorPairHasFirstTouch{static_cast<uint16_t>(0x4u)};
constexpr ::UnityEngine::CollisionPairFlags  UnityEngine::CollisionPairFlags::ActorPairLostTouch{static_cast<uint16_t>(0x8u)};
constexpr ::UnityEngine::CollisionPairFlags  UnityEngine::CollisionPairFlags::InternalHasImpulses{static_cast<uint16_t>(0x10u)};
constexpr ::UnityEngine::CollisionPairFlags  UnityEngine::CollisionPairFlags::InternalContactsAreFlipped{static_cast<uint16_t>(0x20u)};
