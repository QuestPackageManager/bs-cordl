#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::*)(::Zenject::DiContainer*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext.CreateGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::*)(::by_ref<bool>)>(
    &::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::CreateGameObject)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e8773c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>(),
                                                                                          { ::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>(), 6 }));
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
  this->____gameObjectBindInfo = value;
}
inline void Zenject::SubContainerCreatorByNewGameObjectDynamicContext::_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, gameObjectBindInfo);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::SubContainerCreatorByNewGameObjectDynamicContext::CreateGameObject(::by_ref<bool> shouldMakeActive) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, shouldMakeActive);
}
inline ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext* Zenject::SubContainerCreatorByNewGameObjectDynamicContext::New_ctor(::Zenject::DiContainer* container,
                                                                                                                                        ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*>(container, gameObjectBindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext::SubContainerCreatorByNewGameObjectDynamicContext() {}
