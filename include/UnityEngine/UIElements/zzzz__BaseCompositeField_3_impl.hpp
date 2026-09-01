#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BaseCompositeField_3.hpp"
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>::Invoke(::by_ref<TValueType> val, TFieldValue fieldValue) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val, fieldValue);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*
UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*>(object, method));
}
// Ctor Parameters []
template <typename TValueType, typename TField, typename TFieldValue>
constexpr ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>::FieldDescription_BaseCompositeField_3_WriteDelegate() {}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>::_ctor(
    ::StringW name, ::StringW ussName, ::System::Func_2<TValueType, TFieldValue>* read,
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>* write) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_2<TValueType, TFieldValue>*>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, ussName, read, write);
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
  this->___field = value;
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
  this->_____4__this = value;
}
template <typename TValueType, typename TField, typename TFieldValue> inline void UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline TFieldValue UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__ctor_b__0(TFieldValue newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*>(),
                                                           { "<.ctor>b__0", {}, { ::i2c::type_of<TFieldValue>() } })));
  return ::cordl_internals::RunMethodRethrow<TFieldValue>(this, ___internal_method, newValue);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::__ctor_b__1(::UnityEngine::UIElements::ChangeEvent_1<TFieldValue>* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*>(),
                                                           { "<.ctor>b__1", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<TFieldValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*
UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseCompositeField_3___c__DisplayClass18_0<TValueType, TField, TFieldValue>*>());
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
  this->___m_Fields = value;
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
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_spacerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "spacerUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_spacerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "spacerUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_multilineVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "multilineVariantUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_multilineVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "multilineVariantUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_fieldGroupUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "fieldGroupUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_fieldGroupUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "fieldGroupUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_fieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "fieldUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue> inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_fieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "fieldUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_firstFieldVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "firstFieldVariantUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_firstFieldVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "firstFieldVariantUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::setStaticF_twoLinesVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "twoLinesVariantUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::StringW UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::getStaticF_twoLinesVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "twoLinesVariantUssClassName", ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>();
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::GetSpacer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(), { "GetSpacer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>>
UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::DescribeFields() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(), 154 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<TValueType, TField, TFieldValue>>>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::_ctor(::StringW label, int32_t fieldsByLine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, fieldsByLine);
}
template <typename TValueType, typename TField, typename TFieldValue> inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::UpdateDisplay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(), { "UpdateDisplay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::SetValueWithoutNotify(TValueType newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(), 153 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
template <typename TValueType, typename TField, typename TFieldValue> inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::OnViewDataReady() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(), 132 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue> inline void UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::UpdateMixedValueContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(), 152 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TField, typename TFieldValue>
inline ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*
UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::New_ctor(::StringW label, int32_t fieldsByLine) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*>(label, fieldsByLine));
}
// Ctor Parameters []
template <typename TValueType, typename TField, typename TFieldValue> constexpr ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>::BaseCompositeField_3() {}
