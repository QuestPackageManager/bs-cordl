#pragma once
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(
    ::Zenject::DiContainer*, ::Zenject::IPrefabProvider*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2da43fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext.CreateGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(ByRef<bool>)>(
    &::Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2da4438;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPrefabProvider*& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__prefabProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabProvider;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> const& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__prefabProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabProvider;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabDynamicContext::__set__prefabProvider(::Zenject::IPrefabProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefabProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabDynamicContext::__set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SubContainerCreatorByNewPrefabDynamicContext* Zenject::SubContainerCreatorByNewPrefabDynamicContext::New_ctor(::Zenject::DiContainer* container,
                                                                                                                                ::Zenject::IPrefabProvider* prefabProvider,
                                                                                                                                ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(container, prefabProvider, gameObjectBindInfo));
}
inline void Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                         ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, prefabProvider, gameObjectBindInfo);
}
inline ::UnityEngine::GameObject* Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject(ByRef<bool> shouldMakeActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(), "CreateGameObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, shouldMakeActive);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::SubContainerCreatorByNewPrefabDynamicContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
