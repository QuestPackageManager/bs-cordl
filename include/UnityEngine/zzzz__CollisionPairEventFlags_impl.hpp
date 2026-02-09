#pragma once
// IWYU pragma private; include "UnityEngine/CollisionPairEventFlags.hpp"
#include "UnityEngine/zzzz__CollisionPairEventFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionPairEventFlags::CollisionPairEventFlags(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CollisionPairEventFlags::CollisionPairEventFlags()   {
}
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::SolveContacts{static_cast<uint16_t>(0x1u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::ModifyContacts{static_cast<uint16_t>(0x2u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NotifyTouchFound{static_cast<uint16_t>(0x4u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NotifyTouchPersists{static_cast<uint16_t>(0x8u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NotifyTouchLost{static_cast<uint16_t>(0x10u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NotifyTouchCCD{static_cast<uint16_t>(0x20u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NotifyThresholdForceFound{static_cast<uint16_t>(0x40u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NotifyThresholdForcePersists{static_cast<uint16_t>(0x80u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NotifyThresholdForceLost{static_cast<uint16_t>(0x100u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NotifyContactPoint{static_cast<uint16_t>(0x200u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::DetectDiscreteContact{static_cast<uint16_t>(0x400u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::DetectCCDContact{static_cast<uint16_t>(0x800u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::PreSolverVelocity{static_cast<uint16_t>(0x1000u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::PostSolverVelocity{static_cast<uint16_t>(0x2000u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::ContactEventPose{static_cast<uint16_t>(0x4000u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::NextFree{static_cast<uint16_t>(0x8000u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::ContactDefault{static_cast<uint16_t>(0x401u)};
constexpr ::UnityEngine::CollisionPairEventFlags  UnityEngine::CollisionPairEventFlags::TriggerDefault{static_cast<uint16_t>(0x414u)};
