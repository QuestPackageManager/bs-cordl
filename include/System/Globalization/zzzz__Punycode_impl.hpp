#pragma once
// IWYU pragma private; include "System/Globalization/Punycode.hpp"
#include "System/Globalization/zzzz__Bootstring_impl.hpp"
#include "System/Globalization/zzzz__Punycode_def.hpp"
//  Writing Method size for method: ::System::Globalization::Punycode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::Punycode::*)()>(&::System::Globalization::Punycode::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bdcb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Punycode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Globalization::Punycode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Punycode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Globalization::Punycode* System::Globalization::Punycode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::Punycode*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::Punycode::Punycode() {}
