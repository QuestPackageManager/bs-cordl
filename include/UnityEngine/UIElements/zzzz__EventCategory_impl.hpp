#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCategory.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventCategory::EventCategory(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCategory::EventCategory() {}
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Pointer{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::PointerMove{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::EnterLeave{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::EnterLeaveWindow{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Keyboard{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Geometry{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Style{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::ChangeValue{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Bind{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Focus{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::ChangePanel{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::StyleTransition{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Navigation{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Command{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Tooltip{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::IMGUI{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventCategory::Reserved{ static_cast<int32_t>(0x1f) };
