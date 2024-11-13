#pragma once
// IWYU pragma private; include "GlobalNamespace/ValueDropdownController_1.hpp"
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
template <typename T> inline void GlobalNamespace::__ValueDropdownController_1____c<T>::setStaticF___9(::GlobalNamespace::__ValueDropdownController_1____c<T>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__ValueDropdownController_1____c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueDropdownController_1____c<T>*>::get>(
      std::forward<::GlobalNamespace::__ValueDropdownController_1____c<T>*>(value));
}
template <typename T> inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* GlobalNamespace::__ValueDropdownController_1____c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__ValueDropdownController_1____c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueDropdownController_1____c<T>*>::get>();
}
template <typename T> inline void GlobalNamespace::__ValueDropdownController_1____c<T>::setStaticF___9__9_0(::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueDropdownController_1____c<T>*>::get>(
      std::forward<::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* GlobalNamespace::__ValueDropdownController_1____c<T>::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueDropdownController_1____c<T>*>::get>();
}
template <typename T> inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* GlobalNamespace::__ValueDropdownController_1____c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ValueDropdownController_1____c<T>*>());
}
template <typename T> inline void GlobalNamespace::__ValueDropdownController_1____c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueDropdownController_1____c<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::__ValueDropdownController_1____c<T>::_Start_b__9_0(::System::Tuple_2<T, ::StringW>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ValueDropdownController_1____c<T>*>::get(), "<Start>b__9_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Tuple_2<T, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__ValueDropdownController_1____c<T>::__ValueDropdownController_1____c() {}
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
  ::cordl_internals::setInstanceField(this, &this->____simpleTextDropdown, value);
}
template <typename T> constexpr ::System::Action_2<int32_t, T>*& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, T>*> const& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
template <typename T> constexpr void GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___didSelectCellWithIdxEvent, value);
}
template <typename T> constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*& GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get__namedValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namedValues;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*> const&
GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_get__namedValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namedValues;
}
template <typename T>
constexpr void GlobalNamespace::ValueDropdownController_1<T>::__cordl_internal_set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____namedValues, value);
}
template <typename T> inline ::UnityW<::HMUI::SimpleTextDropdown> GlobalNamespace::ValueDropdownController_1<T>::get_innerDropdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(),
                                                                             "get_innerDropdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::SimpleTextDropdown>, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::add_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(), "add_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(), "remove_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* GlobalNamespace::ValueDropdownController_1<T>::get_namedValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(),
                                                                             "get_namedValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* GlobalNamespace::ValueDropdownController_1<T>::GetNamedValues() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::ValueDropdownController_1<T>::GetSelectedItemValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(),
                                                                             "GetSelectedItemValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::SelectCellWithValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(), "SelectCellWithValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t GlobalNamespace::ValueDropdownController_1<T>::GetIdxForValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(), "GetIdxForValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(),
                                               "HandleSimpleTextDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dropdownWithTableView, idx);
}
template <typename T> inline ::GlobalNamespace::ValueDropdownController_1<T>* GlobalNamespace::ValueDropdownController_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ValueDropdownController_1<T>*>());
}
template <typename T> inline void GlobalNamespace::ValueDropdownController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ValueDropdownController_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ValueDropdownController_1<T>::ValueDropdownController_1() {}
