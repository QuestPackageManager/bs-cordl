#pragma once
#include "Zenject/zzzz__ReflectionBakingCoverageModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::ReflectionBakingCoverageModes::ReflectionBakingCoverageModes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::ReflectionBakingCoverageModes::ReflectionBakingCoverageModes() {}
constexpr ::Zenject::ReflectionBakingCoverageModes Zenject::ReflectionBakingCoverageModes::FallbackToDirectReflection{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::ReflectionBakingCoverageModes Zenject::ReflectionBakingCoverageModes::NoCheckAssumeFullCoverage{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::ReflectionBakingCoverageModes Zenject::ReflectionBakingCoverageModes::FallbackToDirectReflectionWithWarning{ static_cast<int32_t>(0x2) };
