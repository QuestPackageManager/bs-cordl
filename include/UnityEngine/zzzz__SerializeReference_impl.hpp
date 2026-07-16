#pragma once
// IWYU pragma private; include "UnityEngine/SerializeReference.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__SerializeReference_def.hpp"
//  Writing Method size for method: ::UnityEngine::SerializeReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SerializeReference::*)()>(&::UnityEngine::SerializeReference::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae8f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SerializeReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::SerializeReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SerializeReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SerializeReference* UnityEngine::SerializeReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SerializeReference*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SerializeReference::SerializeReference() {}
