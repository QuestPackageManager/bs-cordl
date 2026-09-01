#pragma once
// IWYU pragma private; include "UnityEngine\AudioBehaviour.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioBehaviour::*)()>(&::UnityEngine::AudioBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a4e964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AudioBehaviour* UnityEngine::AudioBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioBehaviour*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioBehaviour::AudioBehaviour() {}
