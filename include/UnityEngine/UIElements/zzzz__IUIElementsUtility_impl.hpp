#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IUIElementsUtility.hpp"
#include "UnityEngine/UIElements/zzzz__IUIElementsUtility_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IUIElementsUtility.TakeCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IUIElementsUtility::*)()>(&::UnityEngine::UIElements::IUIElementsUtility::TakeCapture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IUIElementsUtility.ReleaseCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IUIElementsUtility::*)()>(&::UnityEngine::UIElements::IUIElementsUtility::ReleaseCapture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IUIElementsUtility.ProcessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IUIElementsUtility::*)(int32_t, ::System::IntPtr, ::by_ref<bool>)>(
    &::UnityEngine::UIElements::IUIElementsUtility::ProcessEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IUIElementsUtility.CleanupRoots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IUIElementsUtility::*)()>(&::UnityEngine::UIElements::IUIElementsUtility::CleanupRoots)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IUIElementsUtility.EndContainerGUIFromException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IUIElementsUtility::*)(::System::Exception*)>(
    &::UnityEngine::UIElements::IUIElementsUtility::EndContainerGUIFromException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IUIElementsUtility.MakeCurrentIMGUIContainerDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IUIElementsUtility::*)()>(&::UnityEngine::UIElements::IUIElementsUtility::MakeCurrentIMGUIContainerDirty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 5 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::IUIElementsUtility::TakeCapture() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IUIElementsUtility::ReleaseCapture() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IUIElementsUtility::ProcessEvent(int32_t instanceID, ::System::IntPtr nativeEventPtr, ::by_ref<bool> eventHandled) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instanceID, nativeEventPtr, eventHandled);
}
inline bool UnityEngine::UIElements::IUIElementsUtility::CleanupRoots() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IUIElementsUtility::EndContainerGUIFromException(::System::Exception* exception) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
inline bool UnityEngine::UIElements::IUIElementsUtility::MakeCurrentIMGUIContainerDirty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IUIElementsUtility*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
