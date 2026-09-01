#pragma once
// IWYU pragma private; include "System\Reflection\AssemblyCompanyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyCompanyAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyCompanyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyCompanyAttribute::*)(::StringW)>(&::System::Reflection::AssemblyCompanyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7d8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyCompanyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyCompanyAttribute::__cordl_internal_get__Company_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Company_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyCompanyAttribute::__cordl_internal_get__Company_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Company_k__BackingField;
}
constexpr void System::Reflection::AssemblyCompanyAttribute::__cordl_internal_set__Company_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Company_k__BackingField = value;
}
inline void System::Reflection::AssemblyCompanyAttribute::_ctor(::StringW company) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyCompanyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, company);
}
inline ::System::Reflection::AssemblyCompanyAttribute* System::Reflection::AssemblyCompanyAttribute::New_ctor(::StringW company) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyCompanyAttribute*>(company));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyCompanyAttribute::AssemblyCompanyAttribute() {}
