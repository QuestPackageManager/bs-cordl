#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/StencilOp.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::StencilOp::StencilOp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::StencilOp::StencilOp()   {
}
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::Keep{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::Zero{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::Replace{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::IncrementSaturate{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::DecrementSaturate{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::Invert{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::IncrementWrap{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::DecrementWrap{static_cast<int32_t>(0x7)};
