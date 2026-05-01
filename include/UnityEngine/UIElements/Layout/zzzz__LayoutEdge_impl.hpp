#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutEdge.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutEdge_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge::LayoutEdge(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge::LayoutEdge() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::Top{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::Right{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::Bottom{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::Start{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::End{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::Horizontal{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::Vertical{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::UIElements::Layout::LayoutEdge UnityEngine::UIElements::Layout::LayoutEdge::All{ static_cast<int32_t>(0x8) };
