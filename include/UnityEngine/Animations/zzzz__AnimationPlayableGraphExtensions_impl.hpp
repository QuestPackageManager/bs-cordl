#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableGraphExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableGraphExtensions_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableGraphExtensions.InternalCreateAnimationOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::StringW, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
    &::UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6a43c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                                                                                           { "InternalCreateAnimationOutput",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableGraphExtensions.InternalCreateAnimationOutput_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
        &::UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a43dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                                                { "InternalCreateAnimationOutput_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name,
                                                                                                     ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                                                                                         { "InternalCreateAnimationOutput",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, name, handle);
}
inline bool UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> graph,
                                                                                                              ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                                                              ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                                              { "InternalCreateAnimationOutput_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, name, handle);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPlayableGraphExtensions::AnimationPlayableGraphExtensions() {}
