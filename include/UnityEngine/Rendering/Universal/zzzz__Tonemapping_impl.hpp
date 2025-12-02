#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Tonemapping.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Tonemapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRACESPresetParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingModeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Tonemapping.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Tonemapping::*)()>(
    &::UnityEngine::Rendering::Universal::Tonemapping::IsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x665fbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Tonemapping*>::get(),
                                                                               "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Tonemapping.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Tonemapping::*)()>(
    &::UnityEngine::Rendering::Universal::Tonemapping::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665fc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Tonemapping*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Tonemapping._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Tonemapping::*)()>(
    &::UnityEngine::Rendering::Universal::Tonemapping::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x665fc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Tonemapping*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_mode(::UnityEngine::Rendering::Universal::TonemappingModeParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_neutralHDRRangeReductionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neutralHDRRangeReductionMode;
}
constexpr ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_neutralHDRRangeReductionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neutralHDRRangeReductionMode;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_neutralHDRRangeReductionMode(::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___neutralHDRRangeReductionMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::HDRACESPresetParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_acesPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acesPreset;
}
constexpr ::UnityEngine::Rendering::Universal::HDRACESPresetParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_acesPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acesPreset;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_acesPreset(::UnityEngine::Rendering::Universal::HDRACESPresetParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___acesPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_hueShiftAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueShiftAmount;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_hueShiftAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueShiftAmount;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_hueShiftAmount(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hueShiftAmount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_detectPaperWhite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectPaperWhite;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_detectPaperWhite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectPaperWhite;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_detectPaperWhite(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___detectPaperWhite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_paperWhite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paperWhite;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_paperWhite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paperWhite;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_paperWhite(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___paperWhite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_detectBrightnessLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectBrightnessLimits;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_detectBrightnessLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectBrightnessLimits;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_detectBrightnessLimits(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___detectBrightnessLimits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_minNits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minNits;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_minNits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minNits;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_minNits(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___minNits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_maxNits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNits;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_maxNits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNits;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_maxNits(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxNits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::Tonemapping::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Tonemapping*>::get(),
                                                                             "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Tonemapping::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Tonemapping*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Tonemapping::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Tonemapping*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Tonemapping* UnityEngine::Rendering::Universal::Tonemapping::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Tonemapping*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::Tonemapping::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::Tonemapping::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Tonemapping::Tonemapping() {}
