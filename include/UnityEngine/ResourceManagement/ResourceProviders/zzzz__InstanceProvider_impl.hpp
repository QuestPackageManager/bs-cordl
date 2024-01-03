#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (
    ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*,
                                                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>,
                                                                               ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ProvideInstance)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bd6e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>::get(), "ProvideInstance", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider.ReleaseInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::GameObject*)>(&::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ReleaseInstance)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2bd6f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>::get(), "ReleaseInstance", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bd7118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider"
constexpr UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::operator ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider"
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*
UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::i___UnityEngine__ResourceManagement__ResourceProviders__IInstanceProvider() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>*&
UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::__get_m_InstanceObjectToPrefabHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceObjectToPrefabHandle;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>*> const&
UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::__get_m_InstanceObjectToPrefabHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceObjectToPrefabHandle;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::__set_m_InstanceObjectToPrefabHandle(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstanceObjectToPrefabHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::GameObject* UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ProvideInstance(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> prefabHandle,
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>::get(), "ProvideInstance", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, resourceManager, prefabHandle, instantiateParameters);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                                  ::UnityEngine::GameObject* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>::get(), "ReleaseInstance", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resourceManager, instance);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider* UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::InstanceProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
