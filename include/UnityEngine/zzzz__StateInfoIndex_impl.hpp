#pragma once
#include "UnityEngine/zzzz__StateInfoIndex_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::StateInfoIndex::StateInfoIndex(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::StateInfoIndex::StateInfoIndex() {}
constexpr ::UnityEngine::StateInfoIndex UnityEngine::StateInfoIndex::CurrentState{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::StateInfoIndex UnityEngine::StateInfoIndex::NextState{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::StateInfoIndex UnityEngine::StateInfoIndex::ExitState{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::StateInfoIndex UnityEngine::StateInfoIndex::InterruptedState{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
