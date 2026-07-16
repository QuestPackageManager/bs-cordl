#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/InstanceProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstanceProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider.ProvideInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ProvideInstance)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x691a198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>(),
                                                             { "ProvideInstance",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider.ReleaseInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::GameObject*)>(&::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ReleaseInstance)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x691a288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>(),
                                                { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x691a4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,
                                                       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*&
UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::__cordl_internal_get_m_InstanceObjectToPrefabHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceObjectToPrefabHandle;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,
                                                       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>* const&
UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::__cordl_internal_get_m_InstanceObjectToPrefabHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceObjectToPrefabHandle;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::__cordl_internal_set_m_InstanceObjectToPrefabHandle(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceObjectToPrefabHandle = value;
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ProvideInstance(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> prefabHandle,
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>(),
                                                           { "ProvideInstance",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourceManager, prefabHandle, instantiateParameters);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                                  ::UnityEngine::GameObject* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>(),
                                              { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceManager, instance);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider* UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider"
constexpr UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::operator ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider"
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*
UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::i___UnityEngine__ResourceManagement__ResourceProviders__IInstanceProvider() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::InstanceProvider() {}
