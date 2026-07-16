#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyInformationalVersionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyInformationalVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyInformationalVersionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyInformationalVersionAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyInformationalVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7b684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyInformationalVersionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyInformationalVersionAttribute::__cordl_internal_get__InformationalVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InformationalVersion_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyInformationalVersionAttribute::__cordl_internal_get__InformationalVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InformationalVersion_k__BackingField;
}
constexpr void System::Reflection::AssemblyInformationalVersionAttribute::__cordl_internal_set__InformationalVersion_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InformationalVersion_k__BackingField = value;
}
inline void System::Reflection::AssemblyInformationalVersionAttribute::_ctor(::StringW informationalVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyInformationalVersionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, informationalVersion);
}
inline ::System::Reflection::AssemblyInformationalVersionAttribute* System::Reflection::AssemblyInformationalVersionAttribute::New_ctor(::StringW informationalVersion) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyInformationalVersionAttribute*>(informationalVersion));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyInformationalVersionAttribute::AssemblyInformationalVersionAttribute() {}
