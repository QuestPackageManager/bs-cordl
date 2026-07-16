#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProGridsConditionalSnapAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProGridsConditionalSnapAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::*)()>(&::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66d7444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute* UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::ProGridsConditionalSnapAttribute() {}
