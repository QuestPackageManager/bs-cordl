#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\ThreadSafeAttribute.hpp"
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__ThreadSafeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::ThreadSafeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::ThreadSafeAttribute::*)()>(&::UnityEngine::Bindings::ThreadSafeAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb6528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ThreadSafeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::ThreadSafeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ThreadSafeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::ThreadSafeAttribute* UnityEngine::Bindings::ThreadSafeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::ThreadSafeAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::ThreadSafeAttribute::ThreadSafeAttribute() {}
