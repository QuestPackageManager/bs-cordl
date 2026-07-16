#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/NotNullWhenAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__NotNullWhenAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::*)(bool)>(&::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::__cordl_internal_get__ReturnValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnValue_k__BackingField;
}
constexpr bool const& System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::__cordl_internal_get__ReturnValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnValue_k__BackingField;
}
constexpr void System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::__cordl_internal_set__ReturnValue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReturnValue_k__BackingField = value;
}
inline void System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::_ctor(bool returnValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnValue);
}
inline ::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute* System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::New_ctor(bool returnValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute*>(returnValue));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::NotNullWhenAttribute() {}
