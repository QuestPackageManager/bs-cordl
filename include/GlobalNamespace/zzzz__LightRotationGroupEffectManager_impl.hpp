#pragma once
// IWYU pragma private; include "GlobalNamespace\LightRotationGroupEffectManager.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroup_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroupEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroupEffect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffectManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationGroupEffectManager::*)()>(&::GlobalNamespace::LightRotationGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x599a874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffectManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationGroupEffectManager::*)()>(&::GlobalNamespace::LightRotationGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x599adbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffectManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationGroupEffectManager::*)()>(&::GlobalNamespace::LightRotationGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x599aec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightRotationGroup>>& GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_get__lightRotationGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightRotationGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightRotationGroup>> const& GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_get__lightRotationGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightRotationGroups;
}
constexpr void GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_set__lightRotationGroups(::ArrayW<::UnityW<::GlobalNamespace::LightRotationGroup>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightRotationGroups = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*& GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_get__lightRotationGroupEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightRotationGroupEffects;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* const&
GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_get__lightRotationGroupEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightRotationGroupEffects;
}
constexpr void
GlobalNamespace::LightRotationGroupEffectManager::__cordl_internal_set__lightRotationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightRotationGroupEffects = value;
}
inline void GlobalNamespace::LightRotationGroupEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffectManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationGroupEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffectManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationGroupEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightRotationGroupEffectManager* GlobalNamespace::LightRotationGroupEffectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightRotationGroupEffectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationGroupEffectManager::LightRotationGroupEffectManager() {}
