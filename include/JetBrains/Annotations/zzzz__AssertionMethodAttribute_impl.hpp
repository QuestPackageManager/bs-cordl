#pragma once
// IWYU pragma private; include "JetBrains\Annotations\AssertionMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AssertionMethodAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AssertionMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AssertionMethodAttribute::*)()>(&::JetBrains::Annotations::AssertionMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3e1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AssertionMethodAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::AssertionMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AssertionMethodAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JetBrains::Annotations::AssertionMethodAttribute* JetBrains::Annotations::AssertionMethodAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AssertionMethodAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AssertionMethodAttribute::AssertionMethodAttribute() {}
