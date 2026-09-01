#pragma once
// IWYU pragma private; include "JetBrains\Annotations\TerminatesProgramAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__TerminatesProgramAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::TerminatesProgramAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::TerminatesProgramAttribute::*)()>(&::JetBrains::Annotations::TerminatesProgramAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3e1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::TerminatesProgramAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::TerminatesProgramAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::TerminatesProgramAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JetBrains::Annotations::TerminatesProgramAttribute* JetBrains::Annotations::TerminatesProgramAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::TerminatesProgramAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::TerminatesProgramAttribute::TerminatesProgramAttribute() {}
