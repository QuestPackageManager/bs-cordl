#pragma once
// IWYU pragma private; include "UnityEngine/SendMessageOptions.hpp"
#include "UnityEngine/zzzz__SendMessageOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SendMessageOptions::SendMessageOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SendMessageOptions::SendMessageOptions()   {
}
constexpr ::UnityEngine::SendMessageOptions  UnityEngine::SendMessageOptions::RequireReceiver{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::SendMessageOptions  UnityEngine::SendMessageOptions::DontRequireReceiver{static_cast<int32_t>(0x1)};
