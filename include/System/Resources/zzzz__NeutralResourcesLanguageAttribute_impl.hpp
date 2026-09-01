#pragma once
// IWYU pragma private; include "System\Resources\NeutralResourcesLanguageAttribute.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Resources/zzzz__NeutralResourcesLanguageAttribute_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
//  Writing Method size for method: ::System::Resources::NeutralResourcesLanguageAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::NeutralResourcesLanguageAttribute::*)(::StringW)>(&::System::Resources::NeutralResourcesLanguageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b730f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::NeutralResourcesLanguageAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::NeutralResourcesLanguageAttribute.get_CultureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::NeutralResourcesLanguageAttribute::*)()>(
    &::System::Resources::NeutralResourcesLanguageAttribute::get_CultureName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7314c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::NeutralResourcesLanguageAttribute*>(), { "get_CultureName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::NeutralResourcesLanguageAttribute.get_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::UltimateResourceFallbackLocation (::System::Resources::NeutralResourcesLanguageAttribute::*)()>(
    &::System::Resources::NeutralResourcesLanguageAttribute::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b73154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::NeutralResourcesLanguageAttribute*>(), { "get_Location", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_get__CultureName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CultureName_k__BackingField;
}
constexpr ::StringW const& System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_get__CultureName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CultureName_k__BackingField;
}
constexpr void System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_set__CultureName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CultureName_k__BackingField = value;
}
constexpr ::System::Resources::UltimateResourceFallbackLocation& System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_get__Location_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Location_k__BackingField;
}
constexpr ::System::Resources::UltimateResourceFallbackLocation const& System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_get__Location_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Location_k__BackingField;
}
constexpr void System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_set__Location_k__BackingField(::System::Resources::UltimateResourceFallbackLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Location_k__BackingField = value;
}
inline void System::Resources::NeutralResourcesLanguageAttribute::_ctor(::StringW cultureName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::NeutralResourcesLanguageAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cultureName);
}
inline ::StringW System::Resources::NeutralResourcesLanguageAttribute::get_CultureName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::NeutralResourcesLanguageAttribute*>(), { "get_CultureName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Resources::UltimateResourceFallbackLocation System::Resources::NeutralResourcesLanguageAttribute::get_Location() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::NeutralResourcesLanguageAttribute*>(), { "get_Location", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::UltimateResourceFallbackLocation>(this, ___internal_method);
}
inline ::System::Resources::NeutralResourcesLanguageAttribute* System::Resources::NeutralResourcesLanguageAttribute::New_ctor(::StringW cultureName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::NeutralResourcesLanguageAttribute*>(cultureName));
}
// Ctor Parameters []
constexpr ::System::Resources::NeutralResourcesLanguageAttribute::NeutralResourcesLanguageAttribute() {}
