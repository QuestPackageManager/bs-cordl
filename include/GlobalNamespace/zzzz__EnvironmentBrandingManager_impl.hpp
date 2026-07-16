#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentBrandingManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentBrandingManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentBrandingManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentBrandingManager_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentBrandingManager_InitData::*)(bool)>(&::GlobalNamespace::EnvironmentBrandingManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c1c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentBrandingManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EnvironmentBrandingManager_InitData::__cordl_internal_get_hideBranding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr bool const& GlobalNamespace::EnvironmentBrandingManager_InitData::__cordl_internal_get_hideBranding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr void GlobalNamespace::EnvironmentBrandingManager_InitData::__cordl_internal_set_hideBranding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideBranding = value;
}
inline void GlobalNamespace::EnvironmentBrandingManager_InitData::_ctor(bool hideBranding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentBrandingManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hideBranding);
}
inline ::GlobalNamespace::EnvironmentBrandingManager_InitData* GlobalNamespace::EnvironmentBrandingManager_InitData::New_ctor(bool hideBranding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentBrandingManager_InitData*>(hideBranding));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentBrandingManager_InitData::EnvironmentBrandingManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentBrandingManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentBrandingManager::*)()>(&::GlobalNamespace::EnvironmentBrandingManager::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58c1ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentBrandingManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentBrandingManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentBrandingManager::*)()>(&::GlobalNamespace::EnvironmentBrandingManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c1c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentBrandingManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__brandingObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brandingObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__brandingObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brandingObjects;
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_set__brandingObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____brandingObjects = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__replacementBrandingObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replacementBrandingObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__replacementBrandingObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replacementBrandingObjects;
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_set__replacementBrandingObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____replacementBrandingObjects = value;
}
constexpr ::GlobalNamespace::EnvironmentBrandingManager_InitData*& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::EnvironmentBrandingManager_InitData* const& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_set__initData(::GlobalNamespace::EnvironmentBrandingManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
inline void GlobalNamespace::EnvironmentBrandingManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentBrandingManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentBrandingManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentBrandingManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentBrandingManager* GlobalNamespace::EnvironmentBrandingManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentBrandingManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentBrandingManager::EnvironmentBrandingManager() {}
