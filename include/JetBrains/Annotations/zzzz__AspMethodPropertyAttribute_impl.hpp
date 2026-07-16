#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMethodPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMethodPropertyAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspMethodPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMethodPropertyAttribute::*)()>(&::JetBrains::Annotations::AspMethodPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3aca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMethodPropertyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::AspMethodPropertyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMethodPropertyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JetBrains::Annotations::AspMethodPropertyAttribute* JetBrains::Annotations::AspMethodPropertyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspMethodPropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspMethodPropertyAttribute::AspMethodPropertyAttribute() {}
