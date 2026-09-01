#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceProviders\IInstanceProvider.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider.ProvideInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ProvideInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider.ReleaseInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::GameObject*)>(&::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ReleaseInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ProvideInstance(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> prefabHandle,
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourceManager, prefabHandle, instantiateParameters);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                                   ::UnityEngine::GameObject* instance) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceManager, instance);
}
