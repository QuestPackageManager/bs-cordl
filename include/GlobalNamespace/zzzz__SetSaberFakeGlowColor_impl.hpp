#pragma once
// IWYU pragma private; include "GlobalNamespace\SetSaberFakeGlowColor.hpp"
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetSaberFakeGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceSpriteController_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetSaberFakeGlowColor.set_saberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetSaberFakeGlowColor::*)(::GlobalNamespace::SaberType)>(&::GlobalNamespace::SetSaberFakeGlowColor::set_saberType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59f0b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberFakeGlowColor*>(), { "set_saberType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberFakeGlowColor.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetSaberFakeGlowColor::*)()>(&::GlobalNamespace::SetSaberFakeGlowColor::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59f0fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberFakeGlowColor*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberFakeGlowColor.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetSaberFakeGlowColor::*)()>(&::GlobalNamespace::SetSaberFakeGlowColor::SetColors)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59f0f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberFakeGlowColor*>(), { "SetColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberFakeGlowColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetSaberFakeGlowColor::*)()>(&::GlobalNamespace::SetSaberFakeGlowColor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f1078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberFakeGlowColor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__tintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__tintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintColor;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_set__tintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tintColor = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__saberTypeObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTypeObject;
}
constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__saberTypeObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTypeObject;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_set__saberTypeObject(::UnityW<::GlobalNamespace::SaberTypeObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberTypeObject = value;
}
constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__parametric3SliceSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parametric3SliceSprite;
}
constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> const& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__parametric3SliceSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parametric3SliceSprite;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_set__parametric3SliceSprite(::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parametric3SliceSprite = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__saberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_get__saberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__cordl_internal_set__saberType(::GlobalNamespace::SaberType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberType = value;
}
inline void GlobalNamespace::SetSaberFakeGlowColor::set_saberType(::GlobalNamespace::SaberType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberFakeGlowColor*>(), { "set_saberType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SetSaberFakeGlowColor::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberFakeGlowColor*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetSaberFakeGlowColor::SetColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberFakeGlowColor*>(), { "SetColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetSaberFakeGlowColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberFakeGlowColor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetSaberFakeGlowColor* GlobalNamespace::SetSaberFakeGlowColor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetSaberFakeGlowColor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetSaberFakeGlowColor::SetSaberFakeGlowColor() {}
