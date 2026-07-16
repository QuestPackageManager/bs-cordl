#pragma once
// IWYU pragma private; include "UnityEngine/DisallowMultipleComponent.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__DisallowMultipleComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::DisallowMultipleComponent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DisallowMultipleComponent::*)()>(&::UnityEngine::DisallowMultipleComponent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ad778c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DisallowMultipleComponent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::DisallowMultipleComponent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DisallowMultipleComponent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::DisallowMultipleComponent* UnityEngine::DisallowMultipleComponent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::DisallowMultipleComponent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::DisallowMultipleComponent::DisallowMultipleComponent() {}
