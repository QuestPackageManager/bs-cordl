#pragma once
// IWYU pragma private; include "UnityEngine\XR\Management\XRConfigurationDataAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRConfigurationDataAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Management::XRConfigurationDataAttribute.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Management::XRConfigurationDataAttribute::*)()>(
    &::UnityEngine::XR::Management::XRConfigurationDataAttribute::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69e992c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRConfigurationDataAttribute.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRConfigurationDataAttribute::*)(::StringW)>(
    &::UnityEngine::XR::Management::XRConfigurationDataAttribute::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69e9934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRConfigurationDataAttribute.get_buildSettingsKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Management::XRConfigurationDataAttribute::*)()>(
    &::UnityEngine::XR::Management::XRConfigurationDataAttribute::get_buildSettingsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69e993c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { "get_buildSettingsKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRConfigurationDataAttribute.set_buildSettingsKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRConfigurationDataAttribute::*)(::StringW)>(
    &::UnityEngine::XR::Management::XRConfigurationDataAttribute::set_buildSettingsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69e9944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { "set_buildSettingsKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRConfigurationDataAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRConfigurationDataAttribute::*)()>(&::UnityEngine::XR::Management::XRConfigurationDataAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69e994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRConfigurationDataAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRConfigurationDataAttribute::*)(::StringW, ::StringW)>(
    &::UnityEngine::XR::Management::XRConfigurationDataAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69e9950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::Management::XRConfigurationDataAttribute::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::XR::Management::XRConfigurationDataAttribute::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::XR::Management::XRConfigurationDataAttribute::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::XR::Management::XRConfigurationDataAttribute::__cordl_internal_get__buildSettingsKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildSettingsKey_k__BackingField;
}
constexpr ::StringW const& UnityEngine::XR::Management::XRConfigurationDataAttribute::__cordl_internal_get__buildSettingsKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildSettingsKey_k__BackingField;
}
constexpr void UnityEngine::XR::Management::XRConfigurationDataAttribute::__cordl_internal_set__buildSettingsKey_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buildSettingsKey_k__BackingField = value;
}
inline ::StringW UnityEngine::XR::Management::XRConfigurationDataAttribute::get_displayName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRConfigurationDataAttribute::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Management::XRConfigurationDataAttribute::get_buildSettingsKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { "get_buildSettingsKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRConfigurationDataAttribute::set_buildSettingsKey(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { "set_buildSettingsKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Management::XRConfigurationDataAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRConfigurationDataAttribute::_ctor(::StringW displayName, ::StringW buildSettingsKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, buildSettingsKey);
}
inline ::UnityEngine::XR::Management::XRConfigurationDataAttribute* UnityEngine::XR::Management::XRConfigurationDataAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>());
}
inline ::UnityEngine::XR::Management::XRConfigurationDataAttribute* UnityEngine::XR::Management::XRConfigurationDataAttribute::New_ctor(::StringW displayName, ::StringW buildSettingsKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Management::XRConfigurationDataAttribute*>(displayName, buildSettingsKey));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRConfigurationDataAttribute::XRConfigurationDataAttribute() {}
