#pragma once
#include "UnityEngine/ProBuilder/zzzz__IndexFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::IndexFormat::IndexFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::IndexFormat::IndexFormat() {}
constexpr ::UnityEngine::ProBuilder::IndexFormat UnityEngine::ProBuilder::IndexFormat::Local{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::IndexFormat UnityEngine::ProBuilder::IndexFormat::Common{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::IndexFormat UnityEngine::ProBuilder::IndexFormat::Both{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
