#pragma once
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StoragePreference::StoragePreference(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StoragePreference::StoragePreference() {}
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::StoragePreference::Cloud{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::StoragePreference::Local{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
