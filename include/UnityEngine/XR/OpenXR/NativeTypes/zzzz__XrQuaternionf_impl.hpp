#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrQuaternionf.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrQuaternionf_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3dfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3dbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf.FromSessionSpaceCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf (*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::FromSessionSpaceCoordinates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3dfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                         { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf.FromSessionSpaceCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf (*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::FromSessionSpaceCoordinates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3dc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                                                                           { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf.AsQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::AsQuaternion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3dfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), { "AsQuaternion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf.ToSessionSpaceQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::ToSessionSpaceQuaternion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3dc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), { "ToSessionSpaceQuaternion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e3dcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)(::System::Object*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3dffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e3e080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor(::UnityEngine::Quaternion quaternion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, quaternion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::FromSessionSpaceCoordinates(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                              { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(nullptr, ___internal_method, x, y, z, w);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::FromSessionSpaceCoordinates(::UnityEngine::Quaternion quaternion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                                                                         { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(nullptr, ___internal_method, quaternion);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::AsQuaternion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), { "AsQuaternion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::ToSessionSpaceQuaternion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), { "ToSessionSpaceQuaternion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>*
UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrQuaternionf_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "Z", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "W", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::XrQuaternionf(float_t X, float_t Y, float_t Z, float_t W) noexcept {
  this->X = X;
  this->Y = Y;
  this->Z = Z;
  this->W = W;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::XrQuaternionf() {}
