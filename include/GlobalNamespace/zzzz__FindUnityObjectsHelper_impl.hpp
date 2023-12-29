#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FindUnityObjectsHelper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FindUnityObjectsHelper.GetMonoBehavioursInLoadedScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* (*)()>(
    &::GlobalNamespace::FindUnityObjectsHelper::GetMonoBehavioursInLoadedScenes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1f90824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(),
                                                                               "GetMonoBehavioursInLoadedScenes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FindUnityObjectsHelper.GetAllRootGameObjectsInLoadedScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (*)()>(
    &::GlobalNamespace::FindUnityObjectsHelper::GetAllRootGameObjectsInLoadedScenes)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1f90ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(),
                                                                               "GetAllRootGameObjectsInLoadedScenes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FindUnityObjectsHelper.GetAllGameObjectsInGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::FindUnityObjectsHelper::GetAllGameObjectsInGameObject)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1f90bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(), "GetAllGameObjectsInGameObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FindUnityObjectsHelper.GetAllGameObjectsInLoadedScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> (*)()>(
    &::GlobalNamespace::FindUnityObjectsHelper::GetAllGameObjectsInLoadedScenes)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x1f90884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(),
                                                                               "GetAllGameObjectsInLoadedScenes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* GlobalNamespace::FindUnityObjectsHelper::GetMonoBehavioursInLoadedScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(),
                                                                             "GetMonoBehavioursInLoadedScenes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GlobalNamespace::FindUnityObjectsHelper::GetAllRootGameObjectsInLoadedScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(),
                                                                             "GetAllRootGameObjectsInLoadedScenes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GlobalNamespace::FindUnityObjectsHelper::GetAllGameObjectsInGameObject(::UnityEngine::GameObject* go) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(), "GetAllGameObjectsInGameObject",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, false>(nullptr, ___internal_method, go);
}
inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GlobalNamespace::FindUnityObjectsHelper::GetAllGameObjectsInLoadedScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(),
                                                                             "GetAllGameObjectsInLoadedScenes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>, false>(nullptr, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::List_1<T>*
GlobalNamespace::FindUnityObjectsHelper::GetComponentsInGameObjects(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* gameObjects) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(), "GetComponentsInGameObjects",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method, gameObjects);
}
/// @param includeInactive: bool (default: false)
template <typename T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::FindUnityObjectsHelper::GetComponentsInScene(::UnityEngine::SceneManagement::Scene scene, bool includeInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(), "GetComponentsInScene",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method, scene, includeInactive);
}
/// @param includeInactive: bool (default: false)
template <typename T> inline T GlobalNamespace::FindUnityObjectsHelper::GetComponentInScene(::UnityEngine::SceneManagement::Scene scene, bool includeInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FindUnityObjectsHelper*>::get(), "GetComponentInScene",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, scene, includeInactive);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FindUnityObjectsHelper::FindUnityObjectsHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
