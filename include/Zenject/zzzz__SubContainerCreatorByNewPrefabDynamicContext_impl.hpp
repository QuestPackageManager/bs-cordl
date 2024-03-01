#pragma once
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(
    ::Zenject::DiContainer*, ::Zenject::IPrefabProvider*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x301ba3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext.CreateGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(ByRef<bool>)>(
    &::Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x301ba78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPrefabProvider*& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_get__prefabProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabProvider;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> const& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_get__prefabProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabProvider;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_set__prefabProvider(::Zenject::IPrefabProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefabProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SubContainerCreatorByNewPrefabDynamicContext* Zenject::SubContainerCreatorByNewPrefabDynamicContext::New_ctor(::Zenject::DiContainer* container,
                                                                                                                                ::Zenject::IPrefabProvider* prefabProvider,
                                                                                                                                ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(container, prefabProvider, gameObjectBindInfo));
}
inline void Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                         ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, prefabProvider, gameObjectBindInfo);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject(ByRef<bool> shouldMakeActive) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, shouldMakeActive);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::SubContainerCreatorByNewPrefabDynamicContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
