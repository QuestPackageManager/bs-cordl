#pragma once
// IWYU pragma private; include "GlobalNamespace\AssertExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AssertExtensions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssertExtensions.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::StringW)>(&::GlobalNamespace::AssertExtensions::LessThan)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3321b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssertExtensions*>(),
                                                                                           { "LessThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AssertExtensions.GreaterOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::StringW)>(&::GlobalNamespace::AssertExtensions::GreaterOrEqual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3321b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssertExtensions*>(), { "GreaterOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AssertExtensions::LessThan(float_t value, float_t expectedGreaterValue, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssertExtensions*>(),
                                                                                         { "LessThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, expectedGreaterValue, message);
}
inline void GlobalNamespace::AssertExtensions::GreaterOrEqual(float_t value, float_t expectedLessValue, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssertExtensions*>(), { "GreaterOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, expectedLessValue, message);
}
template <typename T> inline ::StringW GlobalNamespace::AssertExtensions::GetMessage(::StringW pattern, T value, T other, ::StringW message) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AssertExtensions*>(),
                                              { "GetMessage", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pattern, value, other, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssertExtensions::AssertExtensions() {}
