#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyKeyFileAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyKeyFileAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyKeyFileAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyKeyFileAttribute::*)(::StringW)>(&::System::Reflection::AssemblyKeyFileAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7b68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyKeyFileAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyKeyFileAttribute::__cordl_internal_get__KeyFile_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeyFile_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyKeyFileAttribute::__cordl_internal_get__KeyFile_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeyFile_k__BackingField;
}
constexpr void System::Reflection::AssemblyKeyFileAttribute::__cordl_internal_set__KeyFile_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____KeyFile_k__BackingField = value;
}
inline void System::Reflection::AssemblyKeyFileAttribute::_ctor(::StringW keyFile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyKeyFileAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyFile);
}
inline ::System::Reflection::AssemblyKeyFileAttribute* System::Reflection::AssemblyKeyFileAttribute::New_ctor(::StringW keyFile) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyKeyFileAttribute*>(keyFile));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyKeyFileAttribute::AssemblyKeyFileAttribute() {}
