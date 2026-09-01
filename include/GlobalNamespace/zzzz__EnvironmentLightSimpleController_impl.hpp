#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentLightSimpleController.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightSimpleController_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightSimpleController.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentLightSimpleController::*)()>(&::GlobalNamespace::EnvironmentLightSimpleController::LateUpdate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5984fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightSimpleController*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightSimpleController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentLightSimpleController::*)()>(&::GlobalNamespace::EnvironmentLightSimpleController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5984fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightSimpleController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr int32_t& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__colorId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorId;
}
constexpr int32_t const& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__colorId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorId;
}
constexpr void GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_set__colorId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorId = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__lightManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__lightManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr void GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightManager = value;
}
inline void GlobalNamespace::EnvironmentLightSimpleController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightSimpleController*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentLightSimpleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightSimpleController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentLightSimpleController* GlobalNamespace::EnvironmentLightSimpleController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentLightSimpleController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentLightSimpleController::EnvironmentLightSimpleController() {}
