#pragma once
// IWYU pragma private; include "HMUI/ValueChangedBinder_1.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->____bindings, value);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ValueChangedBinder_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::_ctor(::HMUI::IValueChanger_1<T>* valueChanger, ::System::Action_1<T>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ValueChangedBinder_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::IValueChanger_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueChanger, action);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ValueChangedBinder_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ValueChangedBinder_1<T>*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void HMUI::ValueChangedBinder_1<T>::AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ValueChangedBinder_1<T>*>::get(), "AddBindings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::AddBinding(::HMUI::IValueChanger_1<T>* valueChanger, ::System::Action_1<T>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ValueChangedBinder_1<T>*>::get(), "AddBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::IValueChanger_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueChanger, action);
}
template <typename T> inline void HMUI::ValueChangedBinder_1<T>::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ValueChangedBinder_1<T>*>::get(), "ClearBindings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::HMUI::ValueChangedBinder_1<T>* HMUI::ValueChangedBinder_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ValueChangedBinder_1<T>*>());
}
template <typename T> inline ::HMUI::ValueChangedBinder_1<T>* HMUI::ValueChangedBinder_1<T>::New_ctor(::HMUI::IValueChanger_1<T>* valueChanger, ::System::Action_1<T>* action) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ValueChangedBinder_1<T>*>(valueChanger, action));
}
template <typename T>
inline ::HMUI::ValueChangedBinder_1<T>*
HMUI::ValueChangedBinder_1<T>::New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*, ::System::Action_1<T>*>*>* bindingData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ValueChangedBinder_1<T>*>(bindingData));
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::ValueChangedBinder_1<T>::ValueChangedBinder_1() {}
