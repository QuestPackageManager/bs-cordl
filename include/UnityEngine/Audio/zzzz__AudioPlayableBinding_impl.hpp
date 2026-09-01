#pragma once
// IWYU pragma private; include "UnityEngine\Audio\AudioPlayableBinding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioPlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableBinding.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableBinding (*)(::StringW, ::UnityEngine::Object*)>(&::UnityEngine::Audio::AudioPlayableBinding::Create)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6a588d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioPlayableBinding*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableBinding.CreateAudioOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW)>(
    &::UnityEngine::Audio::AudioPlayableBinding::CreateAudioOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a589d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioPlayableBinding*>(),
                                                             { "CreateAudioOutput", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::PlayableBinding UnityEngine::Audio::AudioPlayableBinding::Create(::StringW name, ::UnityEngine::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioPlayableBinding*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding>(nullptr, ___internal_method, name, key);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Audio::AudioPlayableBinding::CreateAudioOutput(::UnityEngine::Playables::PlayableGraph graph, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioPlayableBinding*>(),
                                                           { "CreateAudioOutput", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput>(nullptr, ___internal_method, graph, name);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioPlayableBinding::AudioPlayableBinding() {}
