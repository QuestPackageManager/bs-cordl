#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MousePositionDebug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MousePositionDebug_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::MousePositionDebug.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::MousePositionDebug* (*)()>(&::UnityEngine::Rendering::MousePositionDebug::get_instance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x676802c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MousePositionDebug.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::MousePositionDebug::*)()>(&::UnityEngine::Rendering::MousePositionDebug::Build)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67680a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "Build", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MousePositionDebug.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::MousePositionDebug::*)()>(&::UnityEngine::Rendering::MousePositionDebug::Cleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67680a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MousePositionDebug.GetMousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::MousePositionDebug::*)(float_t, bool)>(
    &::UnityEngine::Rendering::MousePositionDebug::GetMousePosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67680a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "GetMousePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MousePositionDebug.GetInputMousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::MousePositionDebug::*)()>(
    &::UnityEngine::Rendering::MousePositionDebug::GetInputMousePosition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x67680ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "GetInputMousePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MousePositionDebug.GetMouseClickPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::MousePositionDebug::*)(float_t)>(
    &::UnityEngine::Rendering::MousePositionDebug::GetMouseClickPosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6768158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "GetMouseClickPosition", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MousePositionDebug._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::MousePositionDebug::*)()>(&::UnityEngine::Rendering::MousePositionDebug::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676809c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::MousePositionDebug::setStaticF_s_Instance(::UnityEngine::Rendering::MousePositionDebug* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::MousePositionDebug*, "s_Instance", ::UnityEngine::Rendering::MousePositionDebug*>(
      std::forward<::UnityEngine::Rendering::MousePositionDebug*>(value));
}
inline ::UnityEngine::Rendering::MousePositionDebug* UnityEngine::Rendering::MousePositionDebug::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::MousePositionDebug*, "s_Instance", ::UnityEngine::Rendering::MousePositionDebug*>();
}
inline ::UnityEngine::Rendering::MousePositionDebug* UnityEngine::Rendering::MousePositionDebug::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MousePositionDebug*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::MousePositionDebug::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::MousePositionDebug::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::MousePositionDebug::GetMousePosition(float_t ScreenHeight, bool sceneView) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "GetMousePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, ScreenHeight, sceneView);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::MousePositionDebug::GetInputMousePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "GetInputMousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::MousePositionDebug::GetMouseClickPosition(float_t ScreenHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { "GetMouseClickPosition", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, ScreenHeight);
}
inline void UnityEngine::Rendering::MousePositionDebug::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MousePositionDebug*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::MousePositionDebug* UnityEngine::Rendering::MousePositionDebug::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::MousePositionDebug*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MousePositionDebug::MousePositionDebug() {}
