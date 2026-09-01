#pragma once
// IWYU pragma private; include "GlobalNamespace\ValueDropdownController_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
template <typename T> inline void GlobalNamespace::ValueDropdownController_1___c<T>::setStaticF___9(::GlobalNamespace::ValueDropdownController_1___c<T>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ValueDropdownController_1___c<T>*, "<>9", ::GlobalNamespace::ValueDropdownController_1___c<T>*>(
      std::forward<::GlobalNamespace::ValueDropdownController_1___c<T>*>(value));
}
template <typename T> inline ::GlobalNamespace::ValueDropdownController_1___c<T>* GlobalNamespace::ValueDropdownController_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ValueDropdownController_1___c<T>*, "<>9", ::GlobalNamespace::ValueDropdownController_1___c<T>*>();
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1___c<T>::setStaticF___9__9_0(::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>*, "<>9__9_0", ::GlobalNamespace::ValueDropdownController_1___c<T>*>(
      std::forward<::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* GlobalNamespace::ValueDropdownController_1___c<T>::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>*, "<>9__9_0", ::GlobalNamespace::ValueDropdownController_1___c<T>*>();
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::ValueDropdownController_1___c<T>::_Start_b__9_0(::System::Tuple_2<T, ::StringW>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1___c<T>*>(), { "<Start>b__9_0", {}, { ::i2c::type_of<::System::Tuple_2<T, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
template <typename T> inline ::GlobalNamespace::ValueDropdownController_1___c<T>* GlobalNamespace::ValueDropdownController_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ValueDropdownController_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ValueDropdownController_1___c<T>::ValueDropdownController_1___c() {}
template <typename T> constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get__simpleTextDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
template <typename T> constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get__simpleTextDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
template <typename T> constexpr void GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simpleTextDropdown = value;
}
template <typename T> constexpr ::System::Action_2<int32_t, T>*& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
template <typename T> constexpr ::System::Action_2<int32_t, T>* const& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
template <typename T> constexpr void GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCellWithIdxEvent = value;
}
template <typename T> constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get__namedValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namedValues;
}
template <typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* const& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get__namedValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namedValues;
}
template <typename T>
constexpr void GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____namedValues = value;
}
template <typename T> inline ::UnityW<::HMUI::SimpleTextDropdown> GlobalNamespace::ValueDropdownController_1<T>::get_innerDropdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), { "get_innerDropdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::SimpleTextDropdown>>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::add_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(),
                                                                                         { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(),
                                                                                         { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* GlobalNamespace::ValueDropdownController_1<T>::get_namedValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), { "get_namedValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* GlobalNamespace::ValueDropdownController_1<T>::GetNamedValues() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::ValueDropdownController_1<T>::GetSelectedItemValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), { "GetSelectedItemValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::SelectCellWithValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), { "SelectCellWithValue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t GlobalNamespace::ValueDropdownController_1<T>::GetIdxForValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), { "GetIdxForValue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(),
                                                           { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdownWithTableView, idx);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ValueDropdownController_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::ValueDropdownController_1<T>* GlobalNamespace::ValueDropdownController_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ValueDropdownController_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ValueDropdownController_1<T>::ValueDropdownController_1() {}
