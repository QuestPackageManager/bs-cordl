#pragma once
// IWYU pragma private; include "UnityEngine\Audio\AudioPlayableGraphExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioPlayableGraphExtensions_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableGraphExtensions.InternalCreateAudioOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::StringW, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
    &::UnityEngine::Audio::AudioPlayableGraphExtensions::InternalCreateAudioOutput)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6a58a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioPlayableGraphExtensions*>(),
                                                                                           { "InternalCreateAudioOutput",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableGraphExtensions.InternalCreateAudioOutput_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
        &::UnityEngine::Audio::AudioPlayableGraphExtensions::InternalCreateAudioOutput_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a58b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioPlayableGraphExtensions*>(),
                                                { "InternalCreateAudioOutput_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::AudioPlayableGraphExtensions::InternalCreateAudioOutput(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name,
                                                                                        ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioPlayableGraphExtensions*>(),
                                                                                         { "InternalCreateAudioOutput",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, name, handle);
}
inline bool UnityEngine::Audio::AudioPlayableGraphExtensions::InternalCreateAudioOutput_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> graph,
                                                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                                                 ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioPlayableGraphExtensions*>(),
                                              { "InternalCreateAudioOutput_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, name, handle);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioPlayableGraphExtensions::AudioPlayableGraphExtensions() {}
