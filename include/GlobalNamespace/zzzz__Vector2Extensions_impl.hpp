#pragma once
// IWYU pragma private; include "GlobalNamespace\Vector2Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Vector2Extensions_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector2Extensions.SignedAngleToLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::Vector2Extensions::SignedAngleToLine)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x3325f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector2Extensions*>(),
                                                             { "SignedAngleToLine", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector2Extensions.Clamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::GlobalNamespace::Vector2Extensions::Clamp)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x33260e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector2Extensions*>(),
                                                { "Clamp", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector2Extensions.Clamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Rect)>(&::GlobalNamespace::Vector2Extensions::Clamp)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3326108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector2Extensions*>(),
                                                                                           { "Clamp", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector2Extensions.Cross
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::Vector2Extensions::Cross)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3326134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector2Extensions*>(),
                                                                                           { "Cross", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::Vector2Extensions::SignedAngleToLine(::UnityEngine::Vector2 vec, ::UnityEngine::Vector2 line) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector2Extensions*>(),
                                                           { "SignedAngleToLine", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, vec, line);
}
inline ::UnityEngine::Vector2 GlobalNamespace::Vector2Extensions::Clamp(::UnityEngine::Vector2 value, ::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector2Extensions*>(),
                                              { "Clamp", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, value, min, max);
}
inline ::UnityEngine::Vector2 GlobalNamespace::Vector2Extensions::Clamp(::UnityEngine::Vector2 value, ::UnityEngine::Rect within) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector2Extensions*>(),
                                                                                         { "Clamp", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, value, within);
}
inline float_t GlobalNamespace::Vector2Extensions::Cross(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector2Extensions*>(),
                                                                                         { "Cross", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector2Extensions::Vector2Extensions() {}
