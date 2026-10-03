#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPolygon2DDataEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBufferEXT_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPolygon2DDataEXT_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBufferEXT_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT.get_origin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::get_origin)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e489c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(), { "get_origin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT.get_vertexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::get_vertexBuffer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e489dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(), { "get_vertexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e489e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e48a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::*)(::System::Object*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e48a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::GetHashCode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e48b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::get_origin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(), { "get_origin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::get_vertexBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(), { "get_vertexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef origin,
                                                                                   ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT vertexBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, vertexBuffer);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>*
UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrSpatialPolygon2DDataEXT_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_origin_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrPosef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_vertexBuffer_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::XrSpatialPolygon2DDataEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _origin_k__BackingField, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT _vertexBuffer_k__BackingField) noexcept {
  this->_origin_k__BackingField = _origin_k__BackingField;
  this->_vertexBuffer_k__BackingField = _vertexBuffer_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT::XrSpatialPolygon2DDataEXT() {}
