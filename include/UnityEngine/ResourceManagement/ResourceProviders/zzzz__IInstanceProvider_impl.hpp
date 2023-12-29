#pragma once
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider.ProvideInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (
    ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*,
                                                                                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>,
                                                                                ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ProvideInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider.ReleaseInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::GameObject*)>(&::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ReleaseInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), 1));
    return ___internal_method;
  }
};
inline ::UnityEngine::GameObject* UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ProvideInstance(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> prefabHandle,
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, resourceManager, prefabHandle, instantiateParameters);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                                   ::UnityEngine::GameObject* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resourceManager, instance);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
