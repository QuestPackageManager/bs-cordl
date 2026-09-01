#pragma once
// IWYU pragma private; include "UnityEngine\Playables\IPlayableOutput.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::IPlayableOutput.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Playables::IPlayableOutput::*)()>(
    &::UnityEngine::Playables::IPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::IPlayableOutput*>(), { ::i2c::class_of<::UnityEngine::Playables::IPlayableOutput*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::IPlayableOutput::GetHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::IPlayableOutput*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle>(this, ___internal_method);
}
