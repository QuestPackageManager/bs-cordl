#pragma once
// IWYU pragma private; include "GlobalNamespace/RomanNumerals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RomanNumerals_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RomanNumerals.ToRomanNumeralString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::RomanNumerals::ToRomanNumeralString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58ff36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RomanNumerals*>(), { "ToRomanNumeralString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::RomanNumerals::ToRomanNumeralString(int32_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RomanNumerals*>(), { "ToRomanNumeralString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RomanNumerals::RomanNumerals() {}
