#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/UnmarshalledAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__UnmarshalledAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::UnmarshalledAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::UnmarshalledAttribute::*)()>(&::UnityEngine::Bindings::UnmarshalledAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb2f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::UnmarshalledAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::UnmarshalledAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::UnmarshalledAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::UnmarshalledAttribute* UnityEngine::Bindings::UnmarshalledAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::UnmarshalledAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::UnmarshalledAttribute::UnmarshalledAttribute() {}
