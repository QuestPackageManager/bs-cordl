#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/MaybeNullWhenAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__MaybeNullWhenAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute::*)(bool)>(
    &::System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute::__cordl_internal_get__ReturnValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnValue_k__BackingField;
}
constexpr bool const& System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute::__cordl_internal_get__ReturnValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnValue_k__BackingField;
}
constexpr void System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute::__cordl_internal_set__ReturnValue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReturnValue_k__BackingField = value;
}
inline void System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute::_ctor(bool returnValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnValue);
}
inline ::System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute* System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute::New_ctor(bool returnValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute*>(returnValue));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::MaybeNullWhenAttribute::MaybeNullWhenAttribute() {}
