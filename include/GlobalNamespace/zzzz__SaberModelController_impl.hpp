#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberModelController.hpp"
#include "GlobalNamespace/zzzz__SetSaberFakeGlowColor_impl.hpp"
#include "GlobalNamespace/zzzz__SetSaberGlowColor_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberTrail_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberModelController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberModelController::*)(::UnityEngine::Transform*, ::GlobalNamespace::Saber*, ::UnityEngine::Color)>(
    &::GlobalNamespace::SaberModelController::Init)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x59e9fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelController*>(),
                                                { "Init", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberModelController.InitColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberModelController::*)(::GlobalNamespace::SaberType)>(&::GlobalNamespace::SaberModelController::InitColor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x59ea1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelController*>(), { "InitColor", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberModelController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberModelController::*)()>(&::GlobalNamespace::SaberModelController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ea36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SaberTrail>& GlobalNamespace::SaberModelController::__cordl_internal_get__saberTrail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTrail;
}
constexpr ::UnityW<::GlobalNamespace::SaberTrail> const& GlobalNamespace::SaberModelController::__cordl_internal_get__saberTrail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTrail;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__saberTrail(::UnityW<::GlobalNamespace::SaberTrail> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberTrail = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>>& GlobalNamespace::SaberModelController::__cordl_internal_get__setSaberGlowColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setSaberGlowColors;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>> const& GlobalNamespace::SaberModelController::__cordl_internal_get__setSaberGlowColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setSaberGlowColors;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__setSaberGlowColors(::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setSaberGlowColors = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>& GlobalNamespace::SaberModelController::__cordl_internal_get__setSaberFakeGlowColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setSaberFakeGlowColors;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>> const& GlobalNamespace::SaberModelController::__cordl_internal_get__setSaberFakeGlowColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setSaberFakeGlowColors;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__setSaberFakeGlowColors(::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setSaberFakeGlowColors = value;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& GlobalNamespace::SaberModelController::__cordl_internal_get__saberLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberLight;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& GlobalNamespace::SaberModelController::__cordl_internal_get__saberLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberLight;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__saberLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberLight = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SaberModelController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::SaberModelController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
inline void GlobalNamespace::SaberModelController::Init(::UnityEngine::Transform* parent, ::GlobalNamespace::Saber* saber, ::UnityEngine::Color trailTintColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelController*>(),
                                              { "Init", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, saber, trailTintColor);
}
inline void GlobalNamespace::SaberModelController::InitColor(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelController*>(), { "InitColor", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberType);
}
inline void GlobalNamespace::SaberModelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberModelController* GlobalNamespace::SaberModelController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberModelController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberModelController::SaberModelController() {}
