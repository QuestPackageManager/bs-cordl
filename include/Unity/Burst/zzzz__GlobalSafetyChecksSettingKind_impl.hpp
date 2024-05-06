#pragma once
#include "Unity/Burst/zzzz__GlobalSafetyChecksSettingKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::GlobalSafetyChecksSettingKind::GlobalSafetyChecksSettingKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::GlobalSafetyChecksSettingKind::GlobalSafetyChecksSettingKind() {}
constexpr ::Unity::Burst::GlobalSafetyChecksSettingKind Unity::Burst::GlobalSafetyChecksSettingKind::Off{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::GlobalSafetyChecksSettingKind Unity::Burst::GlobalSafetyChecksSettingKind::On{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::GlobalSafetyChecksSettingKind Unity::Burst::GlobalSafetyChecksSettingKind::ForceOn{ static_cast<int32_t>(0x2) };
