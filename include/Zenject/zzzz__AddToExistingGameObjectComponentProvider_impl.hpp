#pragma once
// IWYU pragma private; include "Zenject\AddToExistingGameObjectComponentProvider.hpp"
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_impl.hpp"
#include "Zenject/zzzz__AddToExistingGameObjectComponentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AddToExistingGameObjectComponentProvider::*)(
    ::UnityEngine::GameObject*, ::Zenject::DiContainer*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*, ::System::Object*,
    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::AddToExistingGameObjectComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e8586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProvider*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProvider.get_ShouldToggleActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::AddToExistingGameObjectComponentProvider::*)()>(&::Zenject::AddToExistingGameObjectComponentProvider::get_ShouldToggleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e85984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProvider*>(),
                                                                                          { ::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProvider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProvider.GetGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::AddToExistingGameObjectComponentProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::AddToExistingGameObjectComponentProvider::GetGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8598c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProvider*>(),
                                                                                          { ::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProvider*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Zenject::AddToExistingGameObjectComponentProvider::__cordl_internal_get__gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Zenject::AddToExistingGameObjectComponentProvider::__cordl_internal_get__gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr void Zenject::AddToExistingGameObjectComponentProvider::__cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObject = value;
}
inline void Zenject::AddToExistingGameObjectComponentProvider::_ctor(::UnityEngine::GameObject* gameObject, ::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                     ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::System::Object* concreteIdentifier,
                                                                     ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProvider*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject, container, componentType, extraArguments, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::AddToExistingGameObjectComponentProvider::get_ShouldToggleActive() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProvider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::AddToExistingGameObjectComponentProvider::GetGameObject(::Zenject::InjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProvider*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, context);
}
inline ::Zenject::AddToExistingGameObjectComponentProvider*
Zenject::AddToExistingGameObjectComponentProvider::New_ctor(::UnityEngine::GameObject* gameObject, ::Zenject::DiContainer* container, ::System::Type* componentType,
                                                            ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::System::Object* concreteIdentifier,
                                                            ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Zenject::AddToExistingGameObjectComponentProvider*>(gameObject, container, componentType, extraArguments, concreteIdentifier, instantiateCallback));
}
// Ctor Parameters []
constexpr ::Zenject::AddToExistingGameObjectComponentProvider::AddToExistingGameObjectComponentProvider() {}
