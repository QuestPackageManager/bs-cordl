#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeAnimatorController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeAnimatorController::*)()>(&::UnityEngine::RuntimeAnimatorController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d74da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeAnimatorController.get_animationClips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*> (
    ::UnityEngine::RuntimeAnimatorController::*)()>(&::UnityEngine::RuntimeAnimatorController::get_animationClips)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d75dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController*>::get(),
                                                                               "get_animationClips", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::RuntimeAnimatorController* UnityEngine::RuntimeAnimatorController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::RuntimeAnimatorController*>());
}
inline void UnityEngine::RuntimeAnimatorController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*> UnityEngine::RuntimeAnimatorController::get_animationClips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController*>::get(),
                                                                             "get_animationClips", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeAnimatorController::RuntimeAnimatorController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
