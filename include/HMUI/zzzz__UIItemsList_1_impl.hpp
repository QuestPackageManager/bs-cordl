#pragma once
// IWYU pragma private; include "HMUI/UIItemsList_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename T> inline void HMUI::UIItemsList_1_DataCallback<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1_DataCallback<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T> inline void HMUI::UIItemsList_1_DataCallback<T>::Invoke(int32_t idx, T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1_DataCallback<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, item);
}
template <typename T> inline ::System::IAsyncResult* HMUI::UIItemsList_1_DataCallback<T>::BeginInvoke(int32_t idx, T item, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1_DataCallback<T>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, idx, item, callback, object);
}
template <typename T> inline void HMUI::UIItemsList_1_DataCallback<T>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1_DataCallback<T>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename T> inline ::HMUI::UIItemsList_1_DataCallback<T>* HMUI::UIItemsList_1_DataCallback<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::UIItemsList_1_DataCallback<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::UIItemsList_1_DataCallback<T>::UIItemsList_1_DataCallback() {}
template <typename T> constexpr T& HMUI::UIItemsList_1<T>::__cordl_internal_get__prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
template <typename T> constexpr T const& HMUI::UIItemsList_1<T>::__cordl_internal_get__prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__cordl_internal_set__prefab(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____prefab, value);
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform>& HMUI::UIItemsList_1<T>::__cordl_internal_get__itemsContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemsContainer;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform> const& HMUI::UIItemsList_1<T>::__cordl_internal_get__itemsContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemsContainer;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__cordl_internal_set__itemsContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____itemsContainer, value);
}
template <typename T> constexpr bool& HMUI::UIItemsList_1<T>::__cordl_internal_get__insertInTheBeginning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____insertInTheBeginning;
}
template <typename T> constexpr bool const& HMUI::UIItemsList_1<T>::__cordl_internal_get__insertInTheBeginning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____insertInTheBeginning;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__cordl_internal_set__insertInTheBeginning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____insertInTheBeginning = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& HMUI::UIItemsList_1<T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& HMUI::UIItemsList_1<T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__cordl_internal_set__items(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____items, value);
}
template <typename T> constexpr ::Zenject::DiContainer*& HMUI::UIItemsList_1<T>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename T> constexpr ::Zenject::DiContainer* const& HMUI::UIItemsList_1<T>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename T> constexpr void HMUI::UIItemsList_1<T>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____container, value);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* HMUI::UIItemsList_1<T>::get_items() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(), "get_items",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void HMUI::UIItemsList_1<T>::SetData(int32_t numberOfElements, ::HMUI::UIItemsList_1_DataCallback<T>* dataCallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIItemsList_1_DataCallback<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfElements, dataCallback);
}
template <typename T> inline void HMUI::UIItemsList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::HMUI::UIItemsList_1<T>* HMUI::UIItemsList_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::UIItemsList_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::UIItemsList_1<T>::UIItemsList_1() {}
