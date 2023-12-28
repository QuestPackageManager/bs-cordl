#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneManagerAPIInternal_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.GetNumScenesInBuildSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetNumScenesInBuildSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cf1b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>::get(),
                                                                               "GetNumScenesInBuildSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(
    &::UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2cf1b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>::get(), "LoadSceneAsyncNameIndexInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.UnloadSceneNameIndexInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, bool, ::UnityEngine::SceneManagement::UnloadSceneOptions, ByRef<bool>)>(
        &::UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cf1c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>::get(), "UnloadSceneNameIndexInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, ByRef<::UnityEngine::SceneManagement::LoadSceneParameters>, bool)>(
        &::UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cf1bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>::get(), "LoadSceneAsyncNameIndexInternal_Injected",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::SceneManagement::LoadSceneParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::SceneManagement::SceneManagerAPIInternal::GetNumScenesInBuildSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>::get(),
                                                                             "GetNumScenesInBuildSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex,
                                                                                                                             ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                                                                             bool mustCompleteNextFrame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>::get(), "LoadSceneAsyncNameIndexInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, bool immediately,
                                                                                                                          ::UnityEngine::SceneManagement::UnloadSceneOptions options,
                                                                                                                          ByRef<bool> outSuccess) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>::get(), "UnloadSceneNameIndexInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, sceneName, sceneBuildIndex, immediately, options, outSuccess);
}
inline ::UnityEngine::AsyncOperation*
UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(::StringW sceneName, int32_t sceneBuildIndex,
                                                                                                ByRef<::UnityEngine::SceneManagement::LoadSceneParameters> parameters, bool mustCompleteNextFrame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>::get(), "LoadSceneAsyncNameIndexInternal_Injected", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::SceneManagement::LoadSceneParameters>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneManagerAPIInternal::SceneManagerAPIInternal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
