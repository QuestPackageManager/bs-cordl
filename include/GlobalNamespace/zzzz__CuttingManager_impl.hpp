#pragma once
// IWYU pragma private; include "GlobalNamespace/CuttingManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CuttingManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutter_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CuttingManager.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttingManager::*)()>(&::GlobalNamespace::CuttingManager::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59e7f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttingManager*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttingManager.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttingManager::*)()>(&::GlobalNamespace::CuttingManager::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59e80c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttingManager*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttingManager.HandleSaberManagerDidUpdateSaberPositions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttingManager::*)(::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*)>(
    &::GlobalNamespace::CuttingManager::HandleSaberManagerDidUpdateSaberPositions)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59e820c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttingManager*>(),
                                                { "HandleSaberManagerDidUpdateSaberPositions", {}, { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::GlobalNamespace::Saber*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttingManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttingManager::*)()>(&::GlobalNamespace::CuttingManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e8844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttingManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::CuttingManager::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::CuttingManager::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::CuttingManager::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberManager = value;
}
constexpr ::GlobalNamespace::NoteCutter*& GlobalNamespace::CuttingManager::__cordl_internal_get__noteCutter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutter;
}
constexpr ::GlobalNamespace::NoteCutter* const& GlobalNamespace::CuttingManager::__cordl_internal_get__noteCutter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutter;
}
constexpr void GlobalNamespace::CuttingManager::__cordl_internal_set__noteCutter(::GlobalNamespace::NoteCutter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutter = value;
}
inline void GlobalNamespace::CuttingManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttingManager*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CuttingManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttingManager*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CuttingManager::HandleSaberManagerDidUpdateSaberPositions(::GlobalNamespace::Saber* leftSaber, ::GlobalNamespace::Saber* rightSaber) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttingManager*>(),
                                              { "HandleSaberManagerDidUpdateSaberPositions", {}, { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::GlobalNamespace::Saber*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftSaber, rightSaber);
}
inline void GlobalNamespace::CuttingManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttingManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CuttingManager* GlobalNamespace::CuttingManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CuttingManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CuttingManager::CuttingManager() {}
