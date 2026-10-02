#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialMarkerDataEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBufferEXT_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityEXT_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialMarkerDataEXT_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBufferEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityEXT_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT.get_capability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::get_capability)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e443a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), { "get_capability", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT.get_markerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::get_markerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e443b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), { "get_markerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT.get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::get_data)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e443b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), { "get_data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT,
                                                                                                                                uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e443c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e443d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::*)(::System::Object*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e4441c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::GetHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e444c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::get_capability() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), { "get_capability", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(*this, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::get_markerId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), { "get_markerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, uint32_t markerId,
                                                                                ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capability, markerId, data);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>*
UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrSpatialMarkerDataEXT_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_capability_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "_markerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data_k__BackingField", ty:
// "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::XrSpatialMarkerDataEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT _capability_k__BackingField,
                                                                                                 uint32_t _markerId_k__BackingField,
                                                                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT _data_k__BackingField) noexcept {
  this->_capability_k__BackingField = _capability_k__BackingField;
  this->_markerId_k__BackingField = _markerId_k__BackingField;
  this->_data_k__BackingField = _data_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT::XrSpatialMarkerDataEXT() {}
