#pragma once
// IWYU pragma private; include "UnityEngine\Playables\IDataPlayer.hpp"
#include "UnityEngine/Playables/zzzz__IDataPlayer_def.hpp"
#include "UnityEngine/Playables/zzzz__DataPlayableOutput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::IDataPlayer.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::IDataPlayer::*)(::UnityEngine::Playables::DataPlayableOutput)>(&::UnityEngine::Playables::IDataPlayer::Bind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::IDataPlayer*>(), { ::i2c::class_of<::UnityEngine::Playables::IDataPlayer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::IDataPlayer.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::IDataPlayer::*)(::UnityEngine::Playables::DataPlayableOutput)>(
    &::UnityEngine::Playables::IDataPlayer::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::IDataPlayer*>(), { ::i2c::class_of<::UnityEngine::Playables::IDataPlayer*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::IDataPlayer::Bind(::UnityEngine::Playables::DataPlayableOutput output) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::IDataPlayer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void UnityEngine::Playables::IDataPlayer::Release(::UnityEngine::Playables::DataPlayableOutput output) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::IDataPlayer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
