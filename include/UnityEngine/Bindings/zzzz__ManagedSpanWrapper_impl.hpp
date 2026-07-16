#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/ManagedSpanWrapper.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::ManagedSpanWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::ManagedSpanWrapper::*)(void*, int32_t)>(&::UnityEngine::Bindings::ManagedSpanWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6af0dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ManagedSpanWrapper>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::ManagedSpanWrapper::_ctor(void* begin, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ManagedSpanWrapper>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, length);
}
// Ctor Parameters [CppParam { name: "begin", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::ManagedSpanWrapper::ManagedSpanWrapper(void* begin, int32_t length) noexcept {
  this->begin = begin;
  this->length = length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::ManagedSpanWrapper::ManagedSpanWrapper() {}
