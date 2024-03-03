#pragma once
#include "GlobalNamespace/zzzz__FakeReflectionDynamicObjectsState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FakeReflectionDynamicObjectsState::FakeReflectionDynamicObjectsState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FakeReflectionDynamicObjectsState::FakeReflectionDynamicObjectsState() {}
constexpr ::GlobalNamespace::FakeReflectionDynamicObjectsState GlobalNamespace::FakeReflectionDynamicObjectsState::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::FakeReflectionDynamicObjectsState GlobalNamespace::FakeReflectionDynamicObjectsState::Enabled{ static_cast<int32_t>(0x1) };
