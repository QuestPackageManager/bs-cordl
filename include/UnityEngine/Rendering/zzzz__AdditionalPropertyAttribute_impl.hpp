#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AdditionalPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AdditionalPropertyAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AdditionalPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AdditionalPropertyAttribute::*)()>(&::UnityEngine::Rendering::AdditionalPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6750e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AdditionalPropertyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AdditionalPropertyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AdditionalPropertyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::AdditionalPropertyAttribute* UnityEngine::Rendering::AdditionalPropertyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::AdditionalPropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AdditionalPropertyAttribute::AdditionalPropertyAttribute() {}
