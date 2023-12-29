#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
template <typename T> inline ::HMUI::__UIItemsList_1__DataCallback<T>* HMUI::__UIItemsList_1__DataCallback<T>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__UIItemsList_1__DataCallback<T>*>(object, method));
}
template <typename T> inline void HMUI::__UIItemsList_1__DataCallback<T>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIItemsList_1__DataCallback<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T> inline void HMUI::__UIItemsList_1__DataCallback<T>::Invoke(int32_t idx, T item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIItemsList_1__DataCallback<T>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, item);
}
template <typename T> inline ::System::IAsyncResult* HMUI::__UIItemsList_1__DataCallback<T>::BeginInvoke(int32_t idx, T item, ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIItemsList_1__DataCallback<T>*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, idx, item, callback, object);
}
template <typename T> inline void HMUI::__UIItemsList_1__DataCallback<T>::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIItemsList_1__DataCallback<T>*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::__UIItemsList_1__DataCallback<T>::__UIItemsList_1__DataCallback() {}
template <typename T> constexpr T& HMUI::UIItemsList_1<T>::__get__prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
template <typename T> constexpr T const& HMUI::UIItemsList_1<T>::__get__prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__set__prefab(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::Transform*& HMUI::UIItemsList_1<T>::__get__itemsContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemsContainer;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& HMUI::UIItemsList_1<T>::__get__itemsContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemsContainer;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__set__itemsContainer(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____itemsContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& HMUI::UIItemsList_1<T>::__get__insertInTheBeginning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____insertInTheBeginning;
}
template <typename T> constexpr bool const& HMUI::UIItemsList_1<T>::__get__insertInTheBeginning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____insertInTheBeginning;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__set__insertInTheBeginning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____insertInTheBeginning = value;
}
template <typename T> constexpr ::Zenject::DiContainer*& HMUI::UIItemsList_1<T>::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& HMUI::UIItemsList_1<T>::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& HMUI::UIItemsList_1<T>::__get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& HMUI::UIItemsList_1<T>::__get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__set__items(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* HMUI::UIItemsList_1<T>::get_items() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(), "get_items",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void HMUI::UIItemsList_1<T>::SetData(int32_t numberOfElements, ::HMUI::__UIItemsList_1__DataCallback<T>* dataCallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__UIItemsList_1__DataCallback<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfElements, dataCallback);
}
template <typename T> inline ::HMUI::UIItemsList_1<T>* HMUI::UIItemsList_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::UIItemsList_1<T>*>());
}
template <typename T> inline void HMUI::UIItemsList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::UIItemsList_1<T>::UIItemsList_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
