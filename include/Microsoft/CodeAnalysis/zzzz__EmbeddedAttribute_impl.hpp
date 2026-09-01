#pragma once
// IWYU pragma private; include "Microsoft\CodeAnalysis\EmbeddedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Microsoft/CodeAnalysis/zzzz__EmbeddedAttribute_def.hpp"
//  Writing Method size for method: ::Microsoft::CodeAnalysis::EmbeddedAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::CodeAnalysis::EmbeddedAttribute::*)()>(&::Microsoft::CodeAnalysis::EmbeddedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6839c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::CodeAnalysis::EmbeddedAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Microsoft::CodeAnalysis::EmbeddedAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::CodeAnalysis::EmbeddedAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Microsoft::CodeAnalysis::EmbeddedAttribute* Microsoft::CodeAnalysis::EmbeddedAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::CodeAnalysis::EmbeddedAttribute*>());
}
// Ctor Parameters []
constexpr ::Microsoft::CodeAnalysis::EmbeddedAttribute::EmbeddedAttribute() {}
