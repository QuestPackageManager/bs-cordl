#pragma once
// IWYU pragma private; include "GlobalNamespace/WhiteColorOrAlphaGroupEffectManager.hpp"
#include "GlobalNamespace/zzzz__LightGroup_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x59925e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5992858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x599295c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>>& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> const& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_set__lightGroup(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroup = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*&
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__whiteColorOrAlphaEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteColorOrAlphaEffects;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* const&
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__whiteColorOrAlphaEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteColorOrAlphaEffects;
}
constexpr void
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_set__whiteColorOrAlphaEffects(::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____whiteColorOrAlphaEffects = value;
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager* GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::WhiteColorOrAlphaGroupEffectManager() {}
