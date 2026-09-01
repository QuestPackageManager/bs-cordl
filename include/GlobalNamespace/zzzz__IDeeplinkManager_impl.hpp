#pragma once
// IWYU pragma private; include "GlobalNamespace\IDeeplinkManager.hpp"
#include "GlobalNamespace/zzzz__IDeeplinkManager_def.hpp"
#include "GlobalNamespace/zzzz__Deeplink_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IDeeplinkManager.add_didReceiveDeeplinkEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDeeplinkManager::*)(::System::Action_1<::GlobalNamespace::Deeplink*>*)>(
    &::GlobalNamespace::IDeeplinkManager::add_didReceiveDeeplinkEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), { ::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDeeplinkManager.remove_didReceiveDeeplinkEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDeeplinkManager::*)(::System::Action_1<::GlobalNamespace::Deeplink*>*)>(
    &::GlobalNamespace::IDeeplinkManager::remove_didReceiveDeeplinkEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), { ::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDeeplinkManager.get_currentDeeplink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Deeplink* (::GlobalNamespace::IDeeplinkManager::*)()>(&::GlobalNamespace::IDeeplinkManager::get_currentDeeplink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), { ::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), 2 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IDeeplinkManager::add_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IDeeplinkManager::remove_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Deeplink* GlobalNamespace::IDeeplinkManager::get_currentDeeplink() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDeeplinkManager*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Deeplink*>(this, ___internal_method);
}
