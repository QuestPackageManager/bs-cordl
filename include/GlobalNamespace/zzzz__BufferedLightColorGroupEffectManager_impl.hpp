#pragma once
// IWYU pragma private; include "GlobalNamespace\BufferedLightColorGroupEffectManager.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroup_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffectManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x59994e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffectManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5999698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffectManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59996f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>>& GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> const& GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_set__lightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroups = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>& GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> const&
GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void
GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_set__materialPropertyBlockControllers(::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockControllers = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*>& GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_get__bufferedLightColorGroupEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferedLightColorGroupEffects;
}
constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*> const& GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_get__bufferedLightColorGroupEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferedLightColorGroupEffects;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__cordl_internal_set__bufferedLightColorGroupEffects(::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferedLightColorGroupEffects = value;
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffectManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffectManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BufferedLightColorGroupEffectManager* GlobalNamespace::BufferedLightColorGroupEffectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BufferedLightColorGroupEffectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BufferedLightColorGroupEffectManager::BufferedLightColorGroupEffectManager() {}
