#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RazorWriteLiteralMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__RazorWriteLiteralMethodAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::RazorWriteLiteralMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::RazorWriteLiteralMethodAttribute::*)()>(&::JetBrains::Annotations::RazorWriteLiteralMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3ad6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorWriteLiteralMethodAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::RazorWriteLiteralMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorWriteLiteralMethodAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JetBrains::Annotations::RazorWriteLiteralMethodAttribute* JetBrains::Annotations::RazorWriteLiteralMethodAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::RazorWriteLiteralMethodAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::RazorWriteLiteralMethodAttribute::RazorWriteLiteralMethodAttribute() {}
