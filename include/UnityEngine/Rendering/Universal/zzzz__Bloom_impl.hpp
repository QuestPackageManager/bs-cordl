#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Bloom.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Bloom_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DownscaleParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedIntParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__MinFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Bloom.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Bloom::*)()>(&::UnityEngine::Rendering::Universal::Bloom::IsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66bbb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Bloom*>::get(), "IsActive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Bloom.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Bloom::*)()>(
    &::UnityEngine::Rendering::Universal::Bloom::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bbb64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Bloom*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Bloom._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Bloom::*)()>(&::UnityEngine::Rendering::Universal::Bloom::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x66bbb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Bloom*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ClampedIntParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_skipIterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipIterations;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_skipIterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipIterations;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_skipIterations(::UnityEngine::Rendering::ClampedIntParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___skipIterations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_threshold(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___threshold)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_intensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___intensity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_scatter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scatter;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_scatter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scatter;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_scatter(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scatter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_clamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_clamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_clamp(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clamp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ColorParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_tint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tint;
}
constexpr ::UnityEngine::Rendering::ColorParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_tint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tint;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_tint(::UnityEngine::Rendering::ColorParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_highQualityFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualityFiltering;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_highQualityFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualityFiltering;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_highQualityFiltering(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___highQualityFiltering)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DownscaleParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_downscale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downscale;
}
constexpr ::UnityEngine::Rendering::Universal::DownscaleParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_downscale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downscale;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_downscale(::UnityEngine::Rendering::Universal::DownscaleParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___downscale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_maxIterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIterations;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_maxIterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIterations;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_maxIterations(::UnityEngine::Rendering::ClampedIntParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxIterations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::TextureParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_dirtTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtTexture;
}
constexpr ::UnityEngine::Rendering::TextureParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_dirtTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtTexture;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_dirtTexture(::UnityEngine::Rendering::TextureParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dirtTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_dirtIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtIntensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_dirtIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtIntensity;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_dirtIntensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dirtIntensity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::Bloom::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Bloom*>::get(), "IsActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Bloom::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Bloom*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Bloom::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Bloom*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Bloom* UnityEngine::Rendering::Universal::Bloom::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Bloom*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::Bloom::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::Bloom::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Bloom::Bloom() {}
