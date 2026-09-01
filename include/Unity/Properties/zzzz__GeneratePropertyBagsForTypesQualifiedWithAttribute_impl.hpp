#pragma once
// IWYU pragma private; include "Unity\Properties\GeneratePropertyBagsForTypesQualifiedWithAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Properties/zzzz__TypeGenerationOptions_impl.hpp"
#include "Unity/Properties/zzzz__GeneratePropertyBagsForTypesQualifiedWithAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__TypeGenerationOptions_def.hpp"
//  Writing Method size for method: ::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::*)(::System::Type*, ::Unity::Properties::TypeGenerationOptions)>(
    &::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b9e4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Unity::Properties::TypeGenerationOptions>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
constexpr ::Unity::Properties::TypeGenerationOptions& Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::Unity::Properties::TypeGenerationOptions const& Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_set__Options_k__BackingField(::Unity::Properties::TypeGenerationOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Options_k__BackingField = value;
}
inline void Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::_ctor(::System::Type* type, ::Unity::Properties::TypeGenerationOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Unity::Properties::TypeGenerationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, options);
}
inline ::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*
Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::New_ctor(::System::Type* type, ::Unity::Properties::TypeGenerationOptions options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*>(type, options));
}
// Ctor Parameters []
constexpr ::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::GeneratePropertyBagsForTypesQualifiedWithAttribute() {}
