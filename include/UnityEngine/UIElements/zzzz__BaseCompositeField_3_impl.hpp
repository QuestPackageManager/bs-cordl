#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseCompositeField_3.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>::Invoke(::ByRef<TValueType> val, TFieldValue fieldValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val, fieldValue);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*
UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*>(object, method));
}
// Ctor Parameters []
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>::FieldDescription_BaseCompositeField_3_WriteDelegate() {}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>::_ctor(
    ::StringW name, ::StringW ussName, ::System::Func_2<TValueType, TFieldValue>* read,
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>* write) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TValueType, TFieldValue>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, ussName, read, write);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "ussName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "read", ty: "::System::Func_2<TValueType,TFieldValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "write", ty:
// "::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*", modifiers: "", def_value: Some("{}") }]
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>::BaseCompositeField_3_FieldDescription(
    ::StringW name, ::StringW ussName, ::System::Func_2<TValueType, TFieldValue>* read,
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>* write) noexcept {
  this->name = name;
  this->ussName = ussName;
  this->read = read;
  this->write = write;
}
// Ctor Parameters []
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>::BaseCompositeField_3_FieldDescription() {}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>&
UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_get_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desc;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue> const&
UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_get_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desc;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr void UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_set_desc(
    ::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___desc = value;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr TField& UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_get_field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___field;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr TField const& UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_get_field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___field;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr void UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_set_field(TField value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___field, value);
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*&
UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>* const&
UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr void UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__cordl_internal_set___4__this(
    ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TValueType, typename TField, typename TFieldValue> inline void UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline TFieldValue UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__ctor_b__0(TFieldValue newValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*>::get(), "<.ctor>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFieldValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<TFieldValue, false>(this, ___internal_method, newValue);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__ctor_b__1(::UnityEngine::UIElements::ChangeEvent_1<TFieldValue>* e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*>::get(),
                                 "<.ctor>b__1", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<TFieldValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*
UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*>());
}
// Ctor Parameters []
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::BaseCompositeField_3___c__DisplayClass18_0() {}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::System::Collections::Generic::List_1<TField>*& UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_get_m_Fields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fields;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::System::Collections::Generic::List_1<TField>* const& UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_get_m_Fields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fields;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_set_m_Fields(::System::Collections::Generic::List_1<TField>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Fields, value);
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr bool& UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_get_m_ShouldUpdateDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldUpdateDisplay;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr bool const& UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_get_m_ShouldUpdateDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldUpdateDisplay;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_set_m_ShouldUpdateDisplay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldUpdateDisplay = value;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr bool& UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_get_m_ForceUpdateDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceUpdateDisplay;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr bool const& UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_get_m_ForceUpdateDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceUpdateDisplay;
}
template <typename TValueType, typename TField, typename TFieldValue>
constexpr void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::__cordl_internal_set_m_ForceUpdateDisplay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceUpdateDisplay = value;
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_spacerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "spacerUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_spacerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "spacerUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_multilineVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "multilineVariantUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_multilineVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "multilineVariantUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_fieldGroupUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "fieldGroupUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_fieldGroupUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "fieldGroupUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_fieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "fieldUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_fieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "fieldUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_firstFieldVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "firstFieldVariantUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_firstFieldVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "firstFieldVariantUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_twoLinesVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "twoLinesVariantUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_twoLinesVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "twoLinesVariantUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::GetSpacer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get(),
                                               "GetSpacer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>,
                ::Array<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>>*>
UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::DescribeFields() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get(), 154)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>,
                                                      ::Array<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>>*>,
                                             false>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::_ctor(::StringW label, int32_t fieldsByLine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, fieldsByLine);
}
template <typename TValueType, typename TField, typename TFieldValue> inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::UpdateDisplay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get(),
                                               "UpdateDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::SetValueWithoutNotify(TValueType newValue) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get(), 153)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
template <typename TValueType, typename TField, typename TFieldValue> inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get(), 132)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue> inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::UpdateMixedValueContent() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>::get(), 152)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*
UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::New_ctor(::StringW label, int32_t fieldsByLine) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(label, fieldsByLine));
}
// Ctor Parameters []
template <typename TValueType, typename TField, typename TFieldValue> constexpr ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::BaseCompositeField_3() {}
