#pragma once
// IWYU pragma private; include "System\Reflection\AssemblyFileVersionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyFileVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyFileVersionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyFileVersionAttribute::*)(::StringW)>(&::System::Reflection::AssemblyFileVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b7d92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyFileVersionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyFileVersionAttribute::__cordl_internal_get__Version_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyFileVersionAttribute::__cordl_internal_get__Version_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr void System::Reflection::AssemblyFileVersionAttribute::__cordl_internal_set__Version_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Version_k__BackingField = value;
}
inline void System::Reflection::AssemblyFileVersionAttribute::_ctor(::StringW version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyFileVersionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline ::System::Reflection::AssemblyFileVersionAttribute* System::Reflection::AssemblyFileVersionAttribute::New_ctor(::StringW version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyFileVersionAttribute*>(version));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyFileVersionAttribute::AssemblyFileVersionAttribute() {}
