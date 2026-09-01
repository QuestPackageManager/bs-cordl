#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberModelContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberModelContainer_def.hpp"
#include "GlobalNamespace/zzzz__SaberModelContainer_def.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberModelContainer_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberModelContainer_InitData::*)()>(&::GlobalNamespace::SaberModelContainer_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59f09a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelContainer_InitData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberModelContainer_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberModelContainer_InitData::*)(::UnityEngine::Color)>(&::GlobalNamespace::SaberModelContainer_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59f09ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelContainer_InitData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::SaberModelContainer_InitData::__cordl_internal_get_trailTintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailTintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SaberModelContainer_InitData::__cordl_internal_get_trailTintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailTintColor;
}
constexpr void GlobalNamespace::SaberModelContainer_InitData::__cordl_internal_set_trailTintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailTintColor = value;
}
inline void GlobalNamespace::SaberModelContainer_InitData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelContainer_InitData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberModelContainer_InitData::_ctor(::UnityEngine::Color trailTintColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelContainer_InitData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailTintColor);
}
inline ::GlobalNamespace::SaberModelContainer_InitData* GlobalNamespace::SaberModelContainer_InitData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberModelContainer_InitData*>());
}
inline ::GlobalNamespace::SaberModelContainer_InitData* GlobalNamespace::SaberModelContainer_InitData::New_ctor(::UnityEngine::Color trailTintColor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberModelContainer_InitData*>(trailTintColor));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberModelContainer_InitData::SaberModelContainer_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::SaberModelContainer.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberModelContainer::*)()>(&::GlobalNamespace::SaberModelContainer::Start)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x59f0638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelContainer*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberModelContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberModelContainer::*)()>(&::GlobalNamespace::SaberModelContainer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f099c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SaberModelContainer::__cordl_internal_get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SaberModelContainer::__cordl_internal_get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::SaberModelContainer::__cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saber = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberModelController>& GlobalNamespace::SaberModelContainer::__cordl_internal_get__saberModelControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberModelControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SaberModelController> const& GlobalNamespace::SaberModelContainer::__cordl_internal_get__saberModelControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberModelControllerPrefab;
}
constexpr void GlobalNamespace::SaberModelContainer::__cordl_internal_set__saberModelControllerPrefab(::UnityW<::GlobalNamespace::SaberModelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberModelControllerPrefab = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::SaberModelContainer::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::SaberModelContainer::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::SaberModelContainer::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::GlobalNamespace::SaberModelContainer_InitData*& GlobalNamespace::SaberModelContainer::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::SaberModelContainer_InitData* const& GlobalNamespace::SaberModelContainer::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::SaberModelContainer::__cordl_internal_set__initData(::GlobalNamespace::SaberModelContainer_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
inline void GlobalNamespace::SaberModelContainer::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelContainer*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberModelContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberModelContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberModelContainer* GlobalNamespace::SaberModelContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberModelContainer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberModelContainer::SaberModelContainer() {}
