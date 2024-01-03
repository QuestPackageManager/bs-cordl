#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)(
    ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*, ::Zenject::DiContainer*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
    ::System::Object*, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::AddToExistingGameObjectComponentProviderGetter::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2f063b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProviderGetter.get_ShouldToggleActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)()>(
    &::Zenject::AddToExistingGameObjectComponentProviderGetter::get_ShouldToggleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f063e8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProviderGetter.GetGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)(::Zenject::InjectContext*)>(
    &::Zenject::AddToExistingGameObjectComponentProviderGetter::GetGameObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f063f0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*& Zenject::AddToExistingGameObjectComponentProviderGetter::__get__gameObjectGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectGetter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*> const&
Zenject::AddToExistingGameObjectComponentProviderGetter::__get__gameObjectGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectGetter;
}
constexpr void Zenject::AddToExistingGameObjectComponentProviderGetter::__set__gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::AddToExistingGameObjectComponentProviderGetter*
Zenject::AddToExistingGameObjectComponentProviderGetter::New_ctor(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter, ::Zenject::DiContainer* container,
                                                                  ::System::Type* componentType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArguments,
                                                                  ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(gameObjectGetter, container, componentType, extraArguments, concreteIdentifier, instantiateCallback));
}
inline void Zenject::AddToExistingGameObjectComponentProviderGetter::_ctor(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter, ::Zenject::DiContainer* container,
                                                                           ::System::Type* componentType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArguments,
                                                                           ::System::Object* concreteIdentifier,
                                                                           ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameObjectGetter, container, componentType, extraArguments, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::AddToExistingGameObjectComponentProviderGetter::get_ShouldToggleActive() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* Zenject::AddToExistingGameObjectComponentProviderGetter::GetGameObject(::Zenject::InjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::Zenject::AddToExistingGameObjectComponentProviderGetter::AddToExistingGameObjectComponentProviderGetter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
