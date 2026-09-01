#pragma once
// IWYU pragma private; include "GlobalNamespace\TextureProcessor3DTrack.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3DTrack_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DTrack.CreateTrackMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::TextureProcessor3DTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::GlobalNamespace::TextureProcessor3DTrack::CreateTrackMixer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x590a4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DTrack*>(), { ::i2c::class_of<::GlobalNamespace::TextureProcessor3DTrack*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3DTrack::*)()>(&::GlobalNamespace::TextureProcessor3DTrack::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x590a57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::Playable GlobalNamespace::TextureProcessor3DTrack::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextureProcessor3DTrack*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, inputCount);
}
inline void GlobalNamespace::TextureProcessor3DTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureProcessor3DTrack* GlobalNamespace::TextureProcessor3DTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureProcessor3DTrack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3DTrack::TextureProcessor3DTrack() {}
