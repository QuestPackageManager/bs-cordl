#pragma once
// IWYU pragma private; include "System\Reflection\AssemblyConfigurationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyConfigurationAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyConfigurationAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyConfigurationAttribute::*)(::StringW)>(&::System::Reflection::AssemblyConfigurationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7d904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyConfigurationAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyConfigurationAttribute::__cordl_internal_get__Configuration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Configuration_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyConfigurationAttribute::__cordl_internal_get__Configuration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Configuration_k__BackingField;
}
constexpr void System::Reflection::AssemblyConfigurationAttribute::__cordl_internal_set__Configuration_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Configuration_k__BackingField = value;
}
inline void System::Reflection::AssemblyConfigurationAttribute::_ctor(::StringW configuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyConfigurationAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration);
}
inline ::System::Reflection::AssemblyConfigurationAttribute* System::Reflection::AssemblyConfigurationAttribute::New_ctor(::StringW configuration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyConfigurationAttribute*>(configuration));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyConfigurationAttribute::AssemblyConfigurationAttribute() {}
