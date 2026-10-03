#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrBoxf.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrExtent3Df_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrBoxf_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrExtent3Df_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf.get_center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef (::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::get_center)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e48bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), { "get_center", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf.get_extents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df (::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::get_extents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e48bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), { "get_extents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e48c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::*)(::System::Object*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e48d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::GetHashCode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e48de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::get_center() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), { "get_center", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::get_extents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), { "get_extents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef center, ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df extents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, extents);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>*
UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrBoxf_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_center_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrPosef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_extents_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::XrBoxf(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _center_k__BackingField,
                                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df _extents_k__BackingField) noexcept {
  this->_center_k__BackingField = _center_k__BackingField;
  this->_extents_k__BackingField = _extents_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf::XrBoxf() {}
