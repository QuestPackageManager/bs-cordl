#pragma once
// IWYU pragma private; include "System\Reflection\AssemblyMetadataAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyMetadataAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyMetadataAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyMetadataAttribute::*)(::StringW, ::StringW)>(&::System::Reflection::AssemblyMetadataAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7d994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyMetadataAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyMetadataAttribute::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyMetadataAttribute::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr void System::Reflection::AssemblyMetadataAttribute::__cordl_internal_set__Key_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Key_k__BackingField = value;
}
constexpr ::StringW& System::Reflection::AssemblyMetadataAttribute::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyMetadataAttribute::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void System::Reflection::AssemblyMetadataAttribute::__cordl_internal_set__Value_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Value_k__BackingField = value;
}
inline void System::Reflection::AssemblyMetadataAttribute::_ctor(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyMetadataAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Reflection::AssemblyMetadataAttribute* System::Reflection::AssemblyMetadataAttribute::New_ctor(::StringW key, ::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyMetadataAttribute*>(key, value));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyMetadataAttribute::AssemblyMetadataAttribute() {}
