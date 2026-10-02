#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrVector2f.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector2f_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::*)(float_t, float_t)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f.AsVector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::AsVector2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), { "AsVector2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3e150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::*)(::System::Object*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e3e1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3e2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::_ctor(float_t x, float_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::_ctor(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::AsVector2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), { "AsVector2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>*
UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrVector2f_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None
// }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::XrVector2f(float_t X, float_t Y) noexcept {
  this->X = X;
  this->Y = Y;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::XrVector2f() {}
