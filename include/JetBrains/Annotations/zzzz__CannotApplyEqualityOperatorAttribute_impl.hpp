#pragma once
// IWYU pragma private; include "JetBrains/Annotations/CannotApplyEqualityOperatorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__CannotApplyEqualityOperatorAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute::*)()>(
    &::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3a98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::CannotApplyEqualityOperatorAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute* JetBrains::Annotations::CannotApplyEqualityOperatorAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute::CannotApplyEqualityOperatorAttribute() {}
