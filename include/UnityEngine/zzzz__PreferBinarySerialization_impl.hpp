#pragma once
// IWYU pragma private; include "UnityEngine\PreferBinarySerialization.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__PreferBinarySerialization_def.hpp"
//  Writing Method size for method: ::UnityEngine::PreferBinarySerialization._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PreferBinarySerialization::*)()>(&::UnityEngine::PreferBinarySerialization::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aec228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PreferBinarySerialization*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::PreferBinarySerialization::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PreferBinarySerialization*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::PreferBinarySerialization* UnityEngine::PreferBinarySerialization::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::PreferBinarySerialization*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::PreferBinarySerialization::PreferBinarySerialization() {}
