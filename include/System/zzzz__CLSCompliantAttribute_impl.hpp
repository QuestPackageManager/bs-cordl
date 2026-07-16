#pragma once
// IWYU pragma private; include "System/CLSCompliantAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__CLSCompliantAttribute_def.hpp"
//  Writing Method size for method: ::System::CLSCompliantAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::CLSCompliantAttribute::*)(bool)>(&::System::CLSCompliantAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb091c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CLSCompliantAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::CLSCompliantAttribute::__cordl_internal_get__compliant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compliant;
}
constexpr bool const& System::CLSCompliantAttribute::__cordl_internal_get__compliant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compliant;
}
constexpr void System::CLSCompliantAttribute::__cordl_internal_set__compliant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compliant = value;
}
inline void System::CLSCompliantAttribute::_ctor(bool isCompliant) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CLSCompliantAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCompliant);
}
inline ::System::CLSCompliantAttribute* System::CLSCompliantAttribute::New_ctor(bool isCompliant) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::CLSCompliantAttribute*>(isCompliant));
}
// Ctor Parameters []
constexpr ::System::CLSCompliantAttribute::CLSCompliantAttribute() {}
