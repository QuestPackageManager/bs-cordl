#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrVector3f.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector3f_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)(float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e3e340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e3dbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f.FromSessionSpaceCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f (*)(float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::FromSessionSpaceCoordinates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3e350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(),
                                                             { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f.FromSessionSpaceCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f (*)(::UnityEngine::Vector3)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::FromSessionSpaceCoordinates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3dc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f.AsVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::AsVector3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e3e354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { "AsVector3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f.ToSessionSpaceVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::ToSessionSpaceVector3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3dc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { "ToSessionSpaceVector3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e3ddc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)(::System::Object*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3e364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::GetHashCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3e3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::_ctor(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::_ctor(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::FromSessionSpaceCoordinates(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(),
                                                           { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(nullptr, ___internal_method, x, y, z);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::FromSessionSpaceCoordinates(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(nullptr, ___internal_method, position);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::AsVector3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { "AsVector3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::ToSessionSpaceVector3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), { "ToSessionSpaceVector3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>*
UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrVector3f_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "Z", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::XrVector3f(float_t X, float_t Y, float_t Z) noexcept {
  this->X = X;
  this->Y = Y;
  this->Z = Z;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::XrVector3f() {}
