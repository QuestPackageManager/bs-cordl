#pragma once
// IWYU pragma private; include "GlobalNamespace/IVRInputModule.hpp"
#include "GlobalNamespace/zzzz__IVRInputModule_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IVRInputModule.add_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IVRInputModule::*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::GlobalNamespace::IVRInputModule::add_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), { ::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRInputModule.remove_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IVRInputModule::*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::GlobalNamespace::IVRInputModule::remove_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), { ::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRInputModule.add_pointerDidClickEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IVRInputModule::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::GlobalNamespace::IVRInputModule::add_pointerDidClickEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), { ::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRInputModule.remove_pointerDidClickEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IVRInputModule::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::GlobalNamespace::IVRInputModule::remove_pointerDidClickEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), { ::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IVRInputModule::add_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IVRInputModule::remove_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IVRInputModule::add_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IVRInputModule::remove_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRInputModule*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
