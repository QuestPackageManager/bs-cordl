#pragma once
// IWYU pragma private; include "HMUI\UIItemsList_1.hpp"
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
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::UIItemsList_1_DataCallback<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T> inline void HMUI::UIItemsList_1_DataCallback<T>::Invoke(int32_t idx, T item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::UIItemsList_1_DataCallback<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, item);
}
template <typename T> inline ::System::IAsyncResult* HMUI::UIItemsList_1_DataCallback<T>::BeginInvoke(int32_t idx, T item, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::UIItemsList_1_DataCallback<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, idx, item, callback, object);
}
template <typename T> inline void HMUI::UIItemsList_1_DataCallback<T>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::UIItemsList_1_DataCallback<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename T> inline ::HMUI::UIItemsList_1_DataCallback<T>* HMUI::UIItemsList_1_DataCallback<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::UIItemsList_1_DataCallback<T>*>(object, method));
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
  this->____prefab = value;
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
  this->____itemsContainer = value;
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
  this->____items = value;
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
  this->____container = value;
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* HMUI::UIItemsList_1<T>::get_items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIItemsList_1<T>*>(), { "get_items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(this, ___internal_method);
}
template <typename T> inline void HMUI::UIItemsList_1<T>::SetData(int32_t numberOfElements, ::HMUI::UIItemsList_1_DataCallback<T>* dataCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::UIItemsList_1<T>*>(), { "SetData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::HMUI::UIItemsList_1_DataCallback<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfElements, dataCallback);
}
template <typename T> inline void HMUI::UIItemsList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIItemsList_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::HMUI::UIItemsList_1<T>* HMUI::UIItemsList_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::UIItemsList_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::UIItemsList_1<T>::UIItemsList_1() {}
