#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeModificationFlags.hpp"
#include "GlobalNamespace/zzzz__CompositeModificationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CompositeModificationFlags::CompositeModificationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeModificationFlags::CompositeModificationFlags() {}
constexpr ::GlobalNamespace::CompositeModificationFlags GlobalNamespace::CompositeModificationFlags::RotationX{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::CompositeModificationFlags GlobalNamespace::CompositeModificationFlags::RotationY{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::CompositeModificationFlags GlobalNamespace::CompositeModificationFlags::RotationZ{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::CompositeModificationFlags GlobalNamespace::CompositeModificationFlags::TranslationX{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::CompositeModificationFlags GlobalNamespace::CompositeModificationFlags::TranslationY{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::CompositeModificationFlags GlobalNamespace::CompositeModificationFlags::TranslationZ{ static_cast<int32_t>(0x40) };
