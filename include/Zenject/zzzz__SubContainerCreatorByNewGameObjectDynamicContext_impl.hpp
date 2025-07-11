#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::*)(
    ::Zenject::DiContainer*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4b4193c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext.CreateGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::*)(::ByRef<bool>)>(
    &::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::CreateGameObject)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4b41990;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerCreatorByNewGameObjectDynamicContext::__cordl_internal_get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerCreatorByNewGameObjectDynamicContext::__cordl_internal_get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::SubContainerCreatorByNewGameObjectDynamicContext::__cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::SubContainerCreatorByNewGameObjectDynamicContext::_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, gameObjectBindInfo);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::SubContainerCreatorByNewGameObjectDynamicContext::CreateGameObject(::ByRef<bool> shouldMakeActive) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, shouldMakeActive);
}
inline ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext* Zenject::SubContainerCreatorByNewGameObjectDynamicContext::New_ctor(::Zenject::DiContainer* container,
                                                                                                                                        ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>(container, gameObjectBindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::SubContainerCreatorByNewGameObjectDynamicContext() {}
