#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PopupField_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BasePopupField_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PopupField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__PopupField_1_def.hpp"
template <typename T> constexpr T& UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::__cordl_internal_get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr T const& UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::__cordl_internal_get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr void UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::__cordl_internal_set_item(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___item)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::PopupField_1<T>*& UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PopupField_1<T>*> const&
UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::__cordl_internal_set___4__this(::UnityEngine::UIElements::PopupField_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>* UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::_AddMenuItems_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>*>::get(),
                                               "<AddMenuItems>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__PopupField_1____c__DisplayClass26_0<T>::__PopupField_1____c__DisplayClass26_0() {}
template <typename T> constexpr int32_t& UnityEngine::UIElements::PopupField_1<T>::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::PopupField_1<T>::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
template <typename T> constexpr void UnityEngine::UIElements::PopupField_1<T>::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get>(
      std::forward<::StringW>(value));
}
template <typename T> inline ::StringW UnityEngine::UIElements::PopupField_1<T>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get>(
      std::forward<::StringW>(value));
}
template <typename T> inline ::StringW UnityEngine::UIElements::PopupField_1<T>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get>(
      std::forward<::StringW>(value));
}
template <typename T> inline ::StringW UnityEngine::UIElements::PopupField_1<T>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get>();
}
template <typename T> inline ::StringW UnityEngine::UIElements::PopupField_1<T>::GetValueToDisplay() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), 118)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW UnityEngine::UIElements::PopupField_1<T>::GetListItemToDisplay(T value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), 119)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::PopupField_1<T>::get_value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), 107)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::set_value(T value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), 108)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::SetValueWithoutNotify(T newValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), 117)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), "set_index",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param label: ::StringW (default: nullptr)
template <typename T> inline ::UnityEngine::UIElements::PopupField_1<T>* UnityEngine::UIElements::PopupField_1<T>::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PopupField_1<T>*>(label));
}
/// @param label: ::StringW (default: nullptr)
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::AddMenuItems(::UnityEngine::UIElements::IGenericMenu* menu) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), 120)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menu);
}
template <typename T> inline void UnityEngine::UIElements::PopupField_1<T>::ChangeValueFromMenu(T menuItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PopupField_1<T>*>::get(), "ChangeValueFromMenu",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuItem);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::PopupField_1<T>::PopupField_1() {}
