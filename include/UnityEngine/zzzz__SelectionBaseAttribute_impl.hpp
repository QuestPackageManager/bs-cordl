#pragma once
// IWYU pragma private; include "UnityEngine/SelectionBaseAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__SelectionBaseAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::SelectionBaseAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SelectionBaseAttribute::*)()>(&::UnityEngine::SelectionBaseAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae2c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SelectionBaseAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::SelectionBaseAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SelectionBaseAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SelectionBaseAttribute* UnityEngine::SelectionBaseAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SelectionBaseAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SelectionBaseAttribute::SelectionBaseAttribute() {}
