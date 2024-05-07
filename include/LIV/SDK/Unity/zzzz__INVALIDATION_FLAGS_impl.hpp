#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/INVALIDATION_FLAGS.hpp"
#include "LIV/SDK/Unity/zzzz__INVALIDATION_FLAGS_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS::INVALIDATION_FLAGS(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS::INVALIDATION_FLAGS() {}
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS LIV::SDK::Unity::INVALIDATION_FLAGS::NONE{ static_cast<uint32_t>(0x4020100u) };
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS LIV::SDK::Unity::INVALIDATION_FLAGS::HMD_CAMERA{ static_cast<uint32_t>(0x8040201u) };
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS LIV::SDK::Unity::INVALIDATION_FLAGS::STAGE{ static_cast<uint32_t>(0x80402u) };
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS LIV::SDK::Unity::INVALIDATION_FLAGS::MR_CAMERA_PREFAB{ static_cast<uint32_t>(0x804u) };
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS LIV::SDK::Unity::INVALIDATION_FLAGS::EXCLUDE_BEHAVIOURS{ static_cast<uint32_t>(0x70000008u) };
