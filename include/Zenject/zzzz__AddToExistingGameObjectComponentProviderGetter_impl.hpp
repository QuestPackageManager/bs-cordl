#pragma once
// IWYU pragma private; include "Zenject\AddToExistingGameObjectComponentProviderGetter.hpp"
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_impl.hpp"
#include "Zenject/zzzz__AddToExistingGameObjectComponentProviderGetter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProviderGetter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)(
    ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*, ::Zenject::DiContainer*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
    ::System::Object*, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::AddToExistingGameObjectComponentProviderGetter::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e85994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::Zenject::DiContainer*>(),
                                                    ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                    ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProviderGetter.get_ShouldToggleActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)()>(
    &::Zenject::AddToExistingGameObjectComponentProviderGetter::get_ShouldToggleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e859cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(),
                                                                                          { ::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProviderGetter.GetGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)(::Zenject::InjectContext*)>(
    &::Zenject::AddToExistingGameObjectComponentProviderGetter::GetGameObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e859d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(),
                                                                                          { ::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& Zenject::AddToExistingGameObjectComponentProviderGetter::__cordl_internal_get__gameObjectGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectGetter;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const&
Zenject::AddToExistingGameObjectComponentProviderGetter::__cordl_internal_get__gameObjectGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectGetter;
}
constexpr void
Zenject::AddToExistingGameObjectComponentProviderGetter::__cordl_internal_set__gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectGetter = value;
}
inline void Zenject::AddToExistingGameObjectComponentProviderGetter::_ctor(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter,
                                                                           ::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                           ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArguments, ::System::Object* concreteIdentifier,
                                                                           ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::Zenject::DiContainer*>(),
                                                  ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                  ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObjectGetter, container, componentType, extraArguments, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::AddToExistingGameObjectComponentProviderGetter::get_ShouldToggleActive() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::AddToExistingGameObjectComponentProviderGetter::GetGameObject(::Zenject::InjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, context);
}
inline ::Zenject::AddToExistingGameObjectComponentProviderGetter*
Zenject::AddToExistingGameObjectComponentProviderGetter::New_ctor(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter, ::Zenject::DiContainer* container,
                                                                  ::System::Type* componentType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArguments,
                                                                  ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(gameObjectGetter, container, componentType, extraArguments, concreteIdentifier, instantiateCallback));
}
// Ctor Parameters []
constexpr ::Zenject::AddToExistingGameObjectComponentProviderGetter::AddToExistingGameObjectComponentProviderGetter() {}
