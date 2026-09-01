#pragma once
// IWYU pragma private; include "IgnoranceCore\IgnoranceInternals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceInternals_def.hpp"
//  Writing Method size for method: ::IgnoranceCore::IgnoranceInternals._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::IgnoranceCore::IgnoranceInternals::*)()>(&::IgnoranceCore::IgnoranceInternals::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58994ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceCore::IgnoranceInternals*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void IgnoranceCore::IgnoranceInternals::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceCore::IgnoranceInternals*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::IgnoranceCore::IgnoranceInternals* IgnoranceCore::IgnoranceInternals::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IgnoranceCore::IgnoranceInternals*>());
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceInternals::IgnoranceInternals() {}
