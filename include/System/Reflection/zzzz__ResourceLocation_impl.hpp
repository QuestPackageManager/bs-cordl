#pragma once
// IWYU pragma private; include "System/Reflection/ResourceLocation.hpp"
#include "System/Reflection/zzzz__ResourceLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::ResourceLocation::ResourceLocation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::ResourceLocation::ResourceLocation() {}
constexpr ::System::Reflection::ResourceLocation System::Reflection::ResourceLocation::ContainedInAnotherAssembly{ static_cast<int32_t>(0x2) };
constexpr ::System::Reflection::ResourceLocation System::Reflection::ResourceLocation::ContainedInManifestFile{ static_cast<int32_t>(0x4) };
constexpr ::System::Reflection::ResourceLocation System::Reflection::ResourceLocation::Embedded{ static_cast<int32_t>(0x1) };
