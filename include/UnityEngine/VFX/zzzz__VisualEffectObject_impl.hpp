#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectObject.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectObject::*)()>(&::UnityEngine::VFX::VisualEffectObject::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2a628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VisualEffectObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VisualEffectObject* UnityEngine::VFX::VisualEffectObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectObject*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectObject::VisualEffectObject() {}
