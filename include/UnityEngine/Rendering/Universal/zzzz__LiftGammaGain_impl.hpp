#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\LiftGammaGain.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LiftGammaGain_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__Vector4Parameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LiftGammaGain.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::LiftGammaGain::*)()>(&::UnityEngine::Rendering::Universal::LiftGammaGain::IsActive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x687eec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LiftGammaGain*>(), { "IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LiftGammaGain.IsTileCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::LiftGammaGain::*)()>(&::UnityEngine::Rendering::Universal::LiftGammaGain::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687ef74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LiftGammaGain*>(), { "IsTileCompatible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LiftGammaGain._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LiftGammaGain::*)()>(&::UnityEngine::Rendering::Universal::LiftGammaGain::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x687ef7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LiftGammaGain*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_lift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lift;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter* const& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_lift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lift;
}
constexpr void UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_set_lift(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lift = value;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_gamma() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gamma;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter* const& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_gamma() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gamma;
}
constexpr void UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_set_gamma(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gamma = value;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_gain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gain;
}
constexpr ::UnityEngine::Rendering::Vector4Parameter* const& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_gain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gain;
}
constexpr void UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_set_gain(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gain = value;
}
inline bool UnityEngine::Rendering::Universal::LiftGammaGain::IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LiftGammaGain*>(), { "IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::LiftGammaGain::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LiftGammaGain*>(), { "IsTileCompatible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LiftGammaGain::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LiftGammaGain*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LiftGammaGain* UnityEngine::Rendering::Universal::LiftGammaGain::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::LiftGammaGain*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::LiftGammaGain::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::LiftGammaGain::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LiftGammaGain::LiftGammaGain() {}
