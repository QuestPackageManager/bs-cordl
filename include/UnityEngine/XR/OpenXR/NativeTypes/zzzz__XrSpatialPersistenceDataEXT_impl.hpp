#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceDataEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceStateEXT_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUuid_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceDataEXT_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceStateEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUuid_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT.get_persistUuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::get_persistUuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e44d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(), { "get_persistUuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT.get_persistState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::get_persistState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(), { "get_persistState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e44d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e44d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(),
                                                             { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::*)(::System::Object*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e44db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e44e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::get_persistUuid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(), { "get_persistUuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::get_persistState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(), { "get_persistState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid,
                                                                                     ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT persistState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(),
                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, persistUuid, persistState);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>*
UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrSpatialPersistenceDataEXT_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_persistUuid_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrUuid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_persistState_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::XrSpatialPersistenceDataEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid _persistUuid_k__BackingField, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT _persistState_k__BackingField) noexcept {
  this->_persistUuid_k__BackingField = _persistUuid_k__BackingField;
  this->_persistState_k__BackingField = _persistState_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT::XrSpatialPersistenceDataEXT() {}
