#pragma once
// IWYU pragma private; include "UnityEngine/PointerType.hpp"
#include "UnityEngine/zzzz__PointerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PointerType::PointerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::PointerType::PointerType()   {
}
constexpr ::UnityEngine::PointerType  UnityEngine::PointerType::Mouse{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::PointerType  UnityEngine::PointerType::Touch{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::PointerType  UnityEngine::PointerType::Pen{static_cast<int32_t>(0x2)};
