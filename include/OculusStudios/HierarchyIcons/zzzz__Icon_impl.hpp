#pragma once
// IWYU pragma private; include "OculusStudios/HierarchyIcons/Icon.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__Icon_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::HierarchyIcons::Icon::Icon(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::HierarchyIcons::Icon::Icon() {}
constexpr ::OculusStudios::HierarchyIcons::Icon OculusStudios::HierarchyIcons::Icon::None{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::HierarchyIcons::Icon OculusStudios::HierarchyIcons::Icon::EditOffTintable{ static_cast<int32_t>(0x1) };
constexpr ::OculusStudios::HierarchyIcons::Icon OculusStudios::HierarchyIcons::Icon::EditTintable{ static_cast<int32_t>(0x2) };
constexpr ::OculusStudios::HierarchyIcons::Icon OculusStudios::HierarchyIcons::Icon::Note{ static_cast<int32_t>(0x3) };
constexpr ::OculusStudios::HierarchyIcons::Icon OculusStudios::HierarchyIcons::Icon::NoteParent{ static_cast<int32_t>(0x4) };
