#pragma once
// IWYU pragma private; include "GlobalNamespace/SetSaberBladeParams.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetSaberBladeParams_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberBladeParams_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::*)()>(
    &::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ea7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::__cordl_internal_get_tintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::__cordl_internal_get_tintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColor;
}
constexpr void GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::__cordl_internal_set_tintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tintColor = value;
}
constexpr ::StringW& GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::__cordl_internal_get_property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr ::StringW const& GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::__cordl_internal_get_property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr void GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::__cordl_internal_set_property(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___property = value;
}
inline void GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair* GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair::SetSaberBladeParams_PropertyTintColorPair() {}
//  Writing Method size for method: ::GlobalNamespace::SetSaberBladeParams.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetSaberBladeParams::*)()>(&::GlobalNamespace::SetSaberBladeParams::Start)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59ea680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberBladeParams*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberBladeParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetSaberBladeParams::*)()>(&::GlobalNamespace::SetSaberBladeParams::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ea7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberBladeParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& GlobalNamespace::SetSaberBladeParams::__cordl_internal_get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& GlobalNamespace::SetSaberBladeParams::__cordl_internal_get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::SetSaberBladeParams::__cordl_internal_set__saber(::UnityW<::GlobalNamespace::SaberTypeObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saber = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SetSaberBladeParams::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SetSaberBladeParams::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::SetSaberBladeParams::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshRenderer = value;
}
constexpr ::ArrayW<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>& GlobalNamespace::SetSaberBladeParams::__cordl_internal_get__propertyTintColorPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyTintColorPairs;
}
constexpr ::ArrayW<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*> const& GlobalNamespace::SetSaberBladeParams::__cordl_internal_get__propertyTintColorPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyTintColorPairs;
}
constexpr void GlobalNamespace::SetSaberBladeParams::__cordl_internal_set__propertyTintColorPairs(::ArrayW<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyTintColorPairs = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SetSaberBladeParams::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::SetSaberBladeParams::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SetSaberBladeParams::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
inline void GlobalNamespace::SetSaberBladeParams::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberBladeParams*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetSaberBladeParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetSaberBladeParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetSaberBladeParams* GlobalNamespace::SetSaberBladeParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetSaberBladeParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetSaberBladeParams::SetSaberBladeParams() {}
