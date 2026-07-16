#pragma once
// IWYU pragma private; include "UnityEngine/Cursor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Cursor_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "UnityEngine/zzzz__CursorMode_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Cursor.SetCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2, ::UnityEngine::CursorMode)>(&::UnityEngine::Cursor::SetCursor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ac63bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(),
                                         { "SetCursor", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::CursorMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cursor.set_visible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Cursor::set_visible)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ac64ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(), { "set_visible", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cursor.get_lockState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CursorLockMode (*)()>(&::UnityEngine::Cursor::get_lockState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ac64e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(), { "get_lockState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cursor.set_lockState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CursorLockMode)>(&::UnityEngine::Cursor::set_lockState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ac6510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(), { "set_lockState", {}, { ::i2c::type_of<::UnityEngine::CursorLockMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cursor.SetCursor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>, ::UnityEngine::CursorMode)>(&::UnityEngine::Cursor::SetCursor_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ac6458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(),
                            { "SetCursor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::CursorMode>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Cursor::SetCursor(::UnityEngine::Texture2D* texture, ::UnityEngine::Vector2 hotspot, ::UnityEngine::CursorMode cursorMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(),
                                       { "SetCursor", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::CursorMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture, hotspot, cursorMode);
}
inline void UnityEngine::Cursor::set_visible(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(), { "set_visible", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::CursorLockMode UnityEngine::Cursor::get_lockState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(), { "get_lockState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CursorLockMode>(nullptr, ___internal_method);
}
inline void UnityEngine::Cursor::set_lockState(::UnityEngine::CursorLockMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(), { "set_lockState", {}, { ::i2c::type_of<::UnityEngine::CursorLockMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Cursor::SetCursor_Injected(::System::IntPtr texture, ::by_ref<::UnityEngine::Vector2> hotspot, ::UnityEngine::CursorMode cursorMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cursor*>(),
                          { "SetCursor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::CursorMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture, hotspot, cursorMode);
}
// Ctor Parameters []
constexpr ::UnityEngine::Cursor::Cursor() {}
