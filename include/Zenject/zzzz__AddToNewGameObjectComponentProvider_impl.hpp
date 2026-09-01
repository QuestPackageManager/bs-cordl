#pragma once
// IWYU pragma private; include "Zenject\AddToNewGameObjectComponentProvider.hpp"
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_impl.hpp"
#include "Zenject/zzzz__AddToNewGameObjectComponentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::AddToNewGameObjectComponentProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AddToNewGameObjectComponentProvider::*)(
    ::Zenject::DiContainer*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectCreationParameters*, ::System::Object*,
    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::AddToNewGameObjectComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e86174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::AddToNewGameObjectComponentProvider*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>(),
                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToNewGameObjectComponentProvider.get_ShouldToggleActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::AddToNewGameObjectComponentProvider::*)()>(&::Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e861a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::AddToNewGameObjectComponentProvider*>(), { ::i2c::class_of<::Zenject::AddToNewGameObjectComponentProvider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToNewGameObjectComponentProvider.GetGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::AddToNewGameObjectComponentProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::AddToNewGameObjectComponentProvider::GetGameObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e861a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::AddToNewGameObjectComponentProvider*>(), { ::i2c::class_of<::Zenject::AddToNewGameObjectComponentProvider*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::AddToNewGameObjectComponentProvider::__cordl_internal_get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::AddToNewGameObjectComponentProvider::__cordl_internal_get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::AddToNewGameObjectComponentProvider::__cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectBindInfo = value;
}
inline void Zenject::AddToNewGameObjectComponentProvider::_ctor(::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Object* concreteIdentifier,
                                                                ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::AddToNewGameObjectComponentProvider*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>(),
                                           ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                           ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, componentType, extraArguments, gameObjectBindInfo, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::AddToNewGameObjectComponentProvider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::AddToNewGameObjectComponentProvider::GetGameObject(::Zenject::InjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::AddToNewGameObjectComponentProvider*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, context);
}
inline ::Zenject::AddToNewGameObjectComponentProvider* Zenject::AddToNewGameObjectComponentProvider::New_ctor(::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                                                              ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                                                              ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                                              ::System::Object* concreteIdentifier,
                                                                                                              ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Zenject::AddToNewGameObjectComponentProvider*>(container, componentType, extraArguments, gameObjectBindInfo, concreteIdentifier, instantiateCallback));
}
// Ctor Parameters []
constexpr ::Zenject::AddToNewGameObjectComponentProvider::AddToNewGameObjectComponentProvider() {}
