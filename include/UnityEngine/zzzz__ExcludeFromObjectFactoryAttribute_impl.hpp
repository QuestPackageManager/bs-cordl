#pragma once
// IWYU pragma private; include "UnityEngine\ExcludeFromObjectFactoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ExcludeFromObjectFactoryAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ExcludeFromObjectFactoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ExcludeFromObjectFactoryAttribute::*)()>(&::UnityEngine::ExcludeFromObjectFactoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae0028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExcludeFromObjectFactoryAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ExcludeFromObjectFactoryAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExcludeFromObjectFactoryAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ExcludeFromObjectFactoryAttribute* UnityEngine::ExcludeFromObjectFactoryAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ExcludeFromObjectFactoryAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ExcludeFromObjectFactoryAttribute::ExcludeFromObjectFactoryAttribute() {}
