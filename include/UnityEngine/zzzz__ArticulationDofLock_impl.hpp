#pragma once
#include "UnityEngine/zzzz__ArticulationDofLock_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ArticulationDofLock::ArticulationDofLock(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationDofLock::ArticulationDofLock() {}
constexpr ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationDofLock::LockedMotion{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationDofLock::LimitedMotion{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ArticulationDofLock UnityEngine::ArticulationDofLock::FreeMotion{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
