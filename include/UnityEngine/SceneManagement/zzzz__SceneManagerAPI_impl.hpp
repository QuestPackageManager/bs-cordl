#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneManagerAPI_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.get_ActiveAPI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::SceneManagerAPI* (*)()>(
    &::UnityEngine::SceneManagement::SceneManagerAPI::get_ActiveAPI)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x34328fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(),
                                                                               "get_ActiveAPI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.get_overrideAPI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::SceneManagerAPI* (*)()>(
    &::UnityEngine::SceneManagement::SceneManagerAPI::get_overrideAPI)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x34334b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(),
                                                                               "get_overrideAPI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SceneManagement::SceneManagerAPI::*)()>(
    &::UnityEngine::SceneManagement::SceneManagerAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3433510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.GetNumScenesInBuildSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::SceneManagement::SceneManagerAPI::*)()>(
    &::UnityEngine::SceneManagement::SceneManagerAPI::GetNumScenesInBuildSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3433518;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.LoadSceneAsyncByNameOrIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::SceneManagement::SceneManagerAPI::*)(::StringW, int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(
        &::UnityEngine::SceneManagement::SceneManagerAPI::LoadSceneAsyncByNameOrIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3433540;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.LoadFirstScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::SceneManagement::SceneManagerAPI::*)(bool)>(
    &::UnityEngine::SceneManagement::SceneManagerAPI::LoadFirstScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34335a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(), 6));
    return ___internal_method;
  }
};
inline void UnityEngine::SceneManagement::SceneManagerAPI::setStaticF_s_DefaultAPI(::UnityEngine::SceneManagement::SceneManagerAPI* value) {
  ::cordl_internals::setStaticField<::UnityEngine::SceneManagement::SceneManagerAPI*, "s_DefaultAPI",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get>(
      std::forward<::UnityEngine::SceneManagement::SceneManagerAPI*>(value));
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::getStaticF_s_DefaultAPI() {
  return ::cordl_internals::getStaticField<::UnityEngine::SceneManagement::SceneManagerAPI*, "s_DefaultAPI",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get>();
}
inline void UnityEngine::SceneManagement::SceneManagerAPI::setStaticF__overrideAPI_k__BackingField(::UnityEngine::SceneManagement::SceneManagerAPI* value) {
  ::cordl_internals::setStaticField<::UnityEngine::SceneManagement::SceneManagerAPI*, "<overrideAPI>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get>(
      std::forward<::UnityEngine::SceneManagement::SceneManagerAPI*>(value));
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::getStaticF__overrideAPI_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::SceneManagement::SceneManagerAPI*, "<overrideAPI>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get>();
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::get_ActiveAPI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(),
                                                                             "get_ActiveAPI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::SceneManagerAPI*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::get_overrideAPI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(),
                                                                             "get_overrideAPI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::SceneManagerAPI*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::SceneManagement::SceneManagerAPI*>());
}
inline void UnityEngine::SceneManagement::SceneManagerAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::SceneManagement::SceneManagerAPI::GetNumScenesInBuildSettings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPI::LoadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex,
                                                                                                                 ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                                                                 bool mustCompleteNextFrame) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPI::LoadFirstScene(bool mustLoadAsync) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, mustLoadAsync);
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneManagerAPI::SceneManagerAPI() {}
