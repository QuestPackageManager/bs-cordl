#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewPrefabDynamicContext.hpp"
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(
    ::Zenject::DiContainer*, ::Zenject::IPrefabProvider*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e87f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(),
                         { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::IPrefabProvider*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext.CreateGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(::by_ref<bool>)>(
    &::Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6e87fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(),
                                                                                          { ::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPrefabProvider*& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_get__prefabProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabProvider;
}
constexpr ::Zenject::IPrefabProvider* const& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_get__prefabProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabProvider;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_set__prefabProvider(::Zenject::IPrefabProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefabProvider = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabDynamicContext::__cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectBindInfo = value;
}
inline void Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                         ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::IPrefabProvider*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, prefabProvider, gameObjectBindInfo);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject(::by_ref<bool> shouldMakeActive) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, shouldMakeActive);
}
inline ::Zenject::SubContainerCreatorByNewPrefabDynamicContext* Zenject::SubContainerCreatorByNewPrefabDynamicContext::New_ctor(::Zenject::DiContainer* container,
                                                                                                                                ::Zenject::IPrefabProvider* prefabProvider,
                                                                                                                                ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(container, prefabProvider, gameObjectBindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::SubContainerCreatorByNewPrefabDynamicContext() {}
