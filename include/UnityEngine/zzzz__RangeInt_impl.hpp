#pragma once
// IWYU pragma private; include "UnityEngine\RangeInt.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
//  Writing Method size for method: ::UnityEngine::RangeInt.get_end
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::RangeInt::*)()>(&::UnityEngine::RangeInt::get_end)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ae5ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RangeInt>(), { "get_end", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RangeInt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RangeInt::*)(int32_t, int32_t)>(&::UnityEngine::RangeInt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae5cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RangeInt>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::RangeInt::get_end() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RangeInt>(), { "get_end", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::RangeInt::_ctor(int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RangeInt>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, length);
}
// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RangeInt::RangeInt(int32_t start, int32_t length) noexcept {
  this->start = start;
  this->length = length;
}
// Ctor Parameters []
constexpr ::UnityEngine::RangeInt::RangeInt() {}
