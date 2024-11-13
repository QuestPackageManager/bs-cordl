#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableExtensions_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableExtensions.SetAnimatedPropertiesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, ::UnityEngine::AnimationClip*)>(
    &::UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedPropertiesInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x47f3c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPlayableExtensions*>::get(),
                                                 "SetAnimatedPropertiesInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::PlayableHandle>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get() })));
    return ___internal_method;
  }
};
template <typename U> inline void UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedProperties(U playable, ::UnityEngine::AnimationClip* clip) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPlayableExtensions*>::get(), "SetAnimatedProperties",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<U>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playable, clip);
}
inline void UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedPropertiesInternal(ByRef<::UnityEngine::Playables::PlayableHandle> playable,
                                                                                                ::UnityEngine::AnimationClip* animatedProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPlayableExtensions*>::get(), "SetAnimatedPropertiesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::PlayableHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playable, animatedProperties);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPlayableExtensions::AnimationPlayableExtensions() {}
