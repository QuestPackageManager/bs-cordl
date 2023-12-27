#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableGraphExtensions_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableGraphExtensions.InternalCreateAnimationOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::UnityEngine::Playables::PlayableGraph>, ::StringW, ByRef<::UnityEngine::Playables::PlayableOutputHandle>)>(
        &::UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c9765c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>::get(), "InternalCreateAnimationOutput", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::PlayableGraph>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::PlayableOutputHandle>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name,
                                                                                                     ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>::get(), "InternalCreateAnimationOutput", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::PlayableGraph>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::PlayableOutputHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, graph, name, handle);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPlayableGraphExtensions::AnimationPlayableGraphExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
