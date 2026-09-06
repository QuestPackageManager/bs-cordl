#pragma once
// IWYU pragma private; include "GlobalNamespace/IDestinationRequestManager.hpp"
#include "GlobalNamespace/zzzz__IDestinationRequestManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IDestinationRequestManager.add_didSendMenuDestinationRequestEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDestinationRequestManager::*)(::System::Action_1<::GlobalNamespace::MenuDestination*>*)>(
    &::GlobalNamespace::IDestinationRequestManager::add_didSendMenuDestinationRequestEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDestinationRequestManager.remove_didSendMenuDestinationRequestEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDestinationRequestManager::*)(::System::Action_1<::GlobalNamespace::MenuDestination*>*)>(
    &::GlobalNamespace::IDestinationRequestManager::remove_didSendMenuDestinationRequestEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDestinationRequestManager.get_currentMenuDestinationRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MenuDestination* (::GlobalNamespace::IDestinationRequestManager::*)()>(
    &::GlobalNamespace::IDestinationRequestManager::get_currentMenuDestinationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDestinationRequestManager.set_currentMenuDestinationRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDestinationRequestManager::*)(::GlobalNamespace::MenuDestination*)>(
    &::GlobalNamespace::IDestinationRequestManager::set_currentMenuDestinationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDestinationRequestManager.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDestinationRequestManager::*)()>(&::GlobalNamespace::IDestinationRequestManager::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 4 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IDestinationRequestManager::add_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IDestinationRequestManager::remove_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MenuDestination* GlobalNamespace::IDestinationRequestManager::get_currentMenuDestinationRequest() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuDestination*>(this, ___internal_method);
}
inline void GlobalNamespace::IDestinationRequestManager::set_currentMenuDestinationRequest(::GlobalNamespace::MenuDestination* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IDestinationRequestManager::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IDestinationRequestManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
