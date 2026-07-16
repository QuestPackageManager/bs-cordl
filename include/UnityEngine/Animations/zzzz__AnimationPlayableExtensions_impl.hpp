#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableExtensions.SetAnimatedPropertiesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::UnityEngine::AnimationClip*)>(
    &::UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedPropertiesInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a43ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableExtensions*>(),
                            { "SetAnimatedPropertiesInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableExtensions.SetAnimatedPropertiesInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::System::IntPtr)>(
    &::UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedPropertiesInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a43c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableExtensions*>(),
                            { "SetAnimatedPropertiesInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
template <typename U> inline void UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedProperties(U playable, ::UnityEngine::AnimationClip* clip) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableExtensions*>(),
                                                           { "SetAnimatedProperties", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, clip);
}
inline void UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedPropertiesInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> playable,
                                                                                                ::UnityEngine::AnimationClip* animatedProperties) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableExtensions*>(),
                          { "SetAnimatedPropertiesInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, animatedProperties);
}
inline void UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedPropertiesInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> playable,
                                                                                                         ::System::IntPtr animatedProperties) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPlayableExtensions*>(),
                          { "SetAnimatedPropertiesInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, animatedProperties);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPlayableExtensions::AnimationPlayableExtensions() {}
