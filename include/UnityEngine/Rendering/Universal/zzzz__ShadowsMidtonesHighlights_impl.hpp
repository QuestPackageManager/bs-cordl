#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ShadowsMidtonesHighlights.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowsMidtonesHighlights_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__MinFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__Vector4Parameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsActive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x687f780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>(), { "IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights.IsTileCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687f82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>(), { "IsTileCompatible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x687f834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadows;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter* const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadows;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_shadows(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadows = value;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_midtones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___midtones;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter* const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_midtones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___midtones;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_midtones(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___midtones = value;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlights;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter* const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlights;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_highlights(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highlights = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadowsStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsStart;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadowsStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsStart;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_shadowsStart(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowsStart = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadowsEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsEnd;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadowsEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsEnd;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_shadowsEnd(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowsEnd = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlightsStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightsStart;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlightsStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightsStart;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_highlightsStart(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highlightsStart = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlightsEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightsEnd;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlightsEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightsEnd;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_highlightsEnd(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highlightsEnd = value;
}
inline bool UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>(), { "IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsTileCompatible() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>(), { "IsTileCompatible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::ShadowsMidtonesHighlights() {}
