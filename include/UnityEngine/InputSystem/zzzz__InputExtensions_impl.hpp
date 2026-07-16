#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputExtensions.IsInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputActionPhase)>(&::UnityEngine::InputSystem::InputExtensions::IsInProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6563a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsInProgress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputExtensions.IsEndedOrCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::TouchPhase)>(&::UnityEngine::InputSystem::InputExtensions::IsEndedOrCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6563a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsEndedOrCanceled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::TouchPhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputExtensions.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::TouchPhase)>(&::UnityEngine::InputSystem::InputExtensions::IsActive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6563228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsActive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::TouchPhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputExtensions.IsModifierKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Key)>(&::UnityEngine::InputSystem::InputExtensions::IsModifierKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6563a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsModifierKey", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputExtensions.IsTextInputKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Key)>(&::UnityEngine::InputSystem::InputExtensions::IsTextInputKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6563a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsTextInputKey", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::InputExtensions::IsInProgress(::UnityEngine::InputSystem::InputActionPhase phase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsInProgress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, phase);
}
inline bool UnityEngine::InputSystem::InputExtensions::IsEndedOrCanceled(::UnityEngine::InputSystem::TouchPhase phase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsEndedOrCanceled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::TouchPhase>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, phase);
}
inline bool UnityEngine::InputSystem::InputExtensions::IsActive(::UnityEngine::InputSystem::TouchPhase phase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsActive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::TouchPhase>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, phase);
}
inline bool UnityEngine::InputSystem::InputExtensions::IsModifierKey(::UnityEngine::InputSystem::Key key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsModifierKey", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool UnityEngine::InputSystem::InputExtensions::IsTextInputKey(::UnityEngine::InputSystem::Key key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputExtensions*>(), { "IsTextInputKey", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputExtensions::InputExtensions() {}
