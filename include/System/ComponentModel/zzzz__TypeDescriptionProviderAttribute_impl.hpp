#pragma once
// IWYU pragma private; include "System\ComponentModel\TypeDescriptionProviderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProviderAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProviderAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptionProviderAttribute::*)(::StringW)>(
    &::System::ComponentModel::TypeDescriptionProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x63c97ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProviderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProviderAttribute.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionProviderAttribute::*)()>(
    &::System::ComponentModel::TypeDescriptionProviderAttribute::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c9844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProviderAttribute*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::TypeDescriptionProviderAttribute::__cordl_internal_get__TypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::TypeDescriptionProviderAttribute::__cordl_internal_get__TypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeName_k__BackingField;
}
constexpr void System::ComponentModel::TypeDescriptionProviderAttribute::__cordl_internal_set__TypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TypeName_k__BackingField = value;
}
inline void System::ComponentModel::TypeDescriptionProviderAttribute::_ctor(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProviderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName);
}
inline ::StringW System::ComponentModel::TypeDescriptionProviderAttribute::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProviderAttribute*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeDescriptionProviderAttribute* System::ComponentModel::TypeDescriptionProviderAttribute::New_ctor(::StringW typeName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptionProviderAttribute*>(typeName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptionProviderAttribute::TypeDescriptionProviderAttribute() {}
