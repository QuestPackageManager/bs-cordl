#pragma once
// IWYU pragma private; include "TMPro\TMP_InputValidator.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "TMPro/zzzz__TMP_InputValidator_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_InputValidator.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::TMPro::TMP_InputValidator::*)(::by_ref<::StringW>, ::by_ref<int32_t>, char16_t)>(&::TMPro::TMP_InputValidator::Validate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::TMP_InputValidator*>(), { ::i2c::class_of<::TMPro::TMP_InputValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_InputValidator::*)()>(&::TMPro::TMP_InputValidator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6994824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_InputValidator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline char16_t TMPro::TMP_InputValidator::Validate(::by_ref<::StringW> text, ::by_ref<int32_t> pos, char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::TMP_InputValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, text, pos, ch);
}
inline void TMPro::TMP_InputValidator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_InputValidator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_InputValidator* TMPro::TMP_InputValidator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_InputValidator*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_InputValidator::TMP_InputValidator() {}
