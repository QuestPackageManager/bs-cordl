#pragma once
// IWYU pragma private; include "Unity\Properties\ReflectedMemberProperty_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__ReflectedMemberProperty_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__IMemberInfo_def.hpp"
#include "Unity/Properties/zzzz__ReflectedMemberProperty_2_def.hpp"
template <typename TContainer, typename TValue>
inline void Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TContainer, typename TValue> inline TValue Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>::Invoke(::by_ref<TContainer> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, container);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>*
Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>*>(object, method));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>::ReflectedMemberProperty_2_GetStructValueAction() {}
template <typename TContainer, typename TValue>
inline void Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>::Invoke(::by_ref<TContainer> container, TValue value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>*
Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>*>(object, method));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>::ReflectedMemberProperty_2_SetStructValueAction() {}
template <typename TContainer, typename TValue>
inline void Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TContainer, typename TValue> inline TValue Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>::Invoke(TContainer container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, container);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>*
Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>*>(object, method));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>::ReflectedMemberProperty_2_GetClassValueAction() {}
template <typename TContainer, typename TValue>
inline void Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>::Invoke(TContainer container, TValue value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>*
Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>*>(object, method));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>::ReflectedMemberProperty_2_SetClassValueAction() {}
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::IMemberInfo*& Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_Info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Info;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::IMemberInfo* const& Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_Info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Info;
}
template <typename TContainer, typename TValue> constexpr void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_set_m_Info(::Unity::Properties::IMemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Info = value;
}
template <typename TContainer, typename TValue> constexpr bool& Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_IsStructContainerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsStructContainerType;
}
template <typename TContainer, typename TValue> constexpr bool const& Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_IsStructContainerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsStructContainerType;
}
template <typename TContainer, typename TValue> constexpr void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_set_m_IsStructContainerType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsStructContainerType = value;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>*&
Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_GetStructValueAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetStructValueAction;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>* const&
Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_GetStructValueAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetStructValueAction;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_set_m_GetStructValueAction(
    ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GetStructValueAction = value;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>*&
Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_SetStructValueAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SetStructValueAction;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>* const&
Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_SetStructValueAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SetStructValueAction;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_set_m_SetStructValueAction(
    ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SetStructValueAction = value;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>*&
Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_GetClassValueAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetClassValueAction;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>* const&
Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_GetClassValueAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetClassValueAction;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_set_m_GetClassValueAction(
    ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GetClassValueAction = value;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>*&
Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_SetClassValueAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SetClassValueAction;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>* const&
Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get_m_SetClassValueAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SetClassValueAction;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_set_m_SetClassValueAction(
    ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SetClassValueAction = value;
}
template <typename TContainer, typename TValue> constexpr ::StringW& Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue> constexpr ::StringW const& Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue> constexpr void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
template <typename TContainer, typename TValue> constexpr bool& Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
template <typename TContainer, typename TValue> constexpr bool const& Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
template <typename TContainer, typename TValue> constexpr void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
template <typename TContainer, typename TValue> inline ::StringW Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline bool Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::_ctor(::Unity::Properties::IMemberInfo* info, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Properties::IMemberInfo*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, name);
}
template <typename TContainer, typename TValue> inline TValue Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::GetValue(::by_ref<TContainer> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, container);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::SetValue(::by_ref<TContainer> container, TValue value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>* Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::New_ctor(::Unity::Properties::IMemberInfo* info,
                                                                                                                                                      ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>*>(info, name));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>::ReflectedMemberProperty_2() {}
