#pragma once
#include "UnityEngine/Yoga/zzzz__YogaEdge_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaEdge::YogaEdge(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaEdge::YogaEdge() {}
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::Top{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::Right{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::Bottom{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::Start{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::End{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::Horizontal{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::Vertical{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Yoga::YogaEdge UnityEngine::Yoga::YogaEdge::All{ static_cast<int32_t>(0x8) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
