#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialBounded2DDataEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrExtent2Df_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBounded2DDataEXT_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrExtent2Df_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT.get_center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::get_center)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e41bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(), { "get_center", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT.get_extents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::get_extents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e41c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(), { "get_extents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e41c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::Equals)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e41c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::*)(::System::Object*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e41d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::GetHashCode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e41da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::get_center() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(), { "get_center", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::get_extents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(), { "get_extents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef center,
                                                                                   ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df extents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, extents);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>*
UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrSpatialBounded2DDataEXT_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_center_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrPosef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_extents_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::XrSpatialBounded2DDataEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _center_k__BackingField,
                                                                                                       ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df _extents_k__BackingField) noexcept {
  this->_center_k__BackingField = _center_k__BackingField;
  this->_extents_k__BackingField = _extents_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT::XrSpatialBounded2DDataEXT() {}
