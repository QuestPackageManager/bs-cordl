#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrExtent2Df.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrExtent2Df_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::*)(float_t, float_t)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3d9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3d9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::*)(::System::Object*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e3da2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3db14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::_ctor(float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, width, height);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>*
UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrExtent2Df_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Width", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Height", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::XrExtent2Df(float_t Width, float_t Height) noexcept {
  this->Width = Width;
  this->Height = Height;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df::XrExtent2Df() {}
