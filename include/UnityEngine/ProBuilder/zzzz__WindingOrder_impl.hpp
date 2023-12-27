#pragma once
#include "UnityEngine/ProBuilder/zzzz__WindingOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::WindingOrder::WindingOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::WindingOrder::WindingOrder() {}
constexpr ::UnityEngine::ProBuilder::WindingOrder UnityEngine::ProBuilder::WindingOrder::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::WindingOrder UnityEngine::ProBuilder::WindingOrder::Clockwise{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::WindingOrder UnityEngine::ProBuilder::WindingOrder::CounterClockwise{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
