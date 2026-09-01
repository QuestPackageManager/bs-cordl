#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ColorAdjustments.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorAdjustments_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorAdjustments.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ColorAdjustments::*)()>(&::UnityEngine::Rendering::Universal::ColorAdjustments::IsActive)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x687dd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ColorAdjustments*>(), { "IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorAdjustments.IsTileCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ColorAdjustments::*)()>(&::UnityEngine::Rendering::Universal::ColorAdjustments::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687de2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ColorAdjustments*>(), { "IsTileCompatible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorAdjustments._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ColorAdjustments::*)()>(&::UnityEngine::Rendering::Universal::ColorAdjustments::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x687de34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ColorAdjustments*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::FloatParameter*& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_postExposure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postExposure;
}
constexpr ::UnityEngine::Rendering::FloatParameter* const& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_postExposure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postExposure;
}
constexpr void UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_set_postExposure(::UnityEngine::Rendering::FloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postExposure = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_contrast() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contrast;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_contrast() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contrast;
}
constexpr void UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_set_contrast(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contrast = value;
}
constexpr ::UnityEngine::Rendering::ColorParameter*& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_colorFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorFilter;
}
constexpr ::UnityEngine::Rendering::ColorParameter* const& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_colorFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorFilter;
}
constexpr void UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_set_colorFilter(::UnityEngine::Rendering::ColorParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorFilter = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_hueShift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueShift;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_hueShift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueShift;
}
constexpr void UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_set_hueShift(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hueShift = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_saturation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saturation;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_get_saturation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saturation;
}
constexpr void UnityEngine::Rendering::Universal::ColorAdjustments::__cordl_internal_set_saturation(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saturation = value;
}
inline bool UnityEngine::Rendering::Universal::ColorAdjustments::IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ColorAdjustments*>(), { "IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ColorAdjustments::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ColorAdjustments*>(), { "IsTileCompatible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ColorAdjustments::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ColorAdjustments*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ColorAdjustments* UnityEngine::Rendering::Universal::ColorAdjustments::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ColorAdjustments*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::ColorAdjustments::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::ColorAdjustments::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ColorAdjustments::ColorAdjustments() {}
