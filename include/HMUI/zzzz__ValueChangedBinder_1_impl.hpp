#pragma once
// IWYU pragma private; include "HMUI\ValueChangedBinder_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__ValueChangedBinder_1_def.hpp"
#include "HMUI/zzzz__IValueChanger_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
template <typename T>
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>*& HMUI::ValueChangedBinder_1<T>::__cordl_internal_get__bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>* const&
HMUI::ValueChangedBinder_1<T>::__cordl_internal_get__bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
template <typename T>
constexpr void HMUI::ValueChangedBinder_1<T>::__cordl_internal_set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindings = value;
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ValueChangedBinder_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::_ctor(::HMUI::IValueChanger_1<T>* valueChanger, ::System::Action_1<T>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ValueChangedBinder_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::HMUI::IValueChanger_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueChanger, action);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>* bindingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ValueChangedBinder_1<T>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ValueChangedBinder_1<T>*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void HMUI::ValueChangedBinder_1<T>::AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>* bindingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ValueChangedBinder_1<T>*>(),
                                       { "AddBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::AddBinding(::HMUI::IValueChanger_1<T>* valueChanger, ::System::Action_1<T>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ValueChangedBinder_1<T>*>(), { "AddBinding", {}, { ::i2c::type_of<::HMUI::IValueChanger_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueChanger, action);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ValueChangedBinder_1<T>*>(), { "ClearBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::HMUI::ValueChangedBinder_1<T>* HMUI::ValueChangedBinder_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ValueChangedBinder_1<T>*>());
}
template <typename T> inline ::HMUI::ValueChangedBinder_1<T>* HMUI::ValueChangedBinder_1<T>::New_ctor(::HMUI::IValueChanger_1<T>* valueChanger, ::System::Action_1<T>* action) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ValueChangedBinder_1<T>*>(valueChanger, action));
}
template <typename T>
inline ::HMUI::ValueChangedBinder_1<T>*
HMUI::ValueChangedBinder_1<T>::New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>* bindingData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ValueChangedBinder_1<T>*>(bindingData));
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::ValueChangedBinder_1<T>::ValueChangedBinder_1() {}
