#pragma once
// IWYU pragma private; include "Unity/Properties/DelegateProperty_2.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__DelegateProperty_2_def.hpp"
#include "Unity/Properties/zzzz__PropertyGetter_2_def.hpp"
#include "Unity/Properties/zzzz__PropertySetter_2_def.hpp"
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::PropertyGetter_2<TContainer, TValue>*& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get_m_Getter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Getter;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* const& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get_m_Getter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Getter;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_set_m_Getter(::Unity::Properties::PropertyGetter_2<TContainer, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Getter, value);
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::PropertySetter_2<TContainer, TValue>*& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get_m_Setter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Setter;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::PropertySetter_2<TContainer, TValue>* const& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get_m_Setter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Setter;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_set_m_Setter(::Unity::Properties::PropertySetter_2<TContainer, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Setter, value);
}
template <typename TContainer, typename TValue> constexpr ::StringW& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue> constexpr ::StringW const& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue> constexpr void Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____Name_k__BackingField, value);
}
template <typename TContainer, typename TValue> inline ::StringW Unity::Properties::DelegateProperty_2<TContainer, TValue>::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline bool Unity::Properties::DelegateProperty_2<TContainer, TValue>::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::DelegateProperty_2<TContainer, TValue>::_ctor(::StringW name, ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* getter,
                                                                             ::Unity::Properties::PropertySetter_2<TContainer, TValue>* setter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::PropertyGetter_2<TContainer, TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::PropertySetter_2<TContainer, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, getter, setter);
}
template <typename TContainer, typename TValue> inline TValue Unity::Properties::DelegateProperty_2<TContainer, TValue>::GetValue(::ByRef<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, container);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::DelegateProperty_2<TContainer, TValue>::SetValue(::ByRef<TContainer> container, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::DelegateProperty_2<TContainer, TValue>*
Unity::Properties::DelegateProperty_2<TContainer, TValue>::New_ctor(::StringW name, ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* getter,
                                                                    ::Unity::Properties::PropertySetter_2<TContainer, TValue>* setter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>(name, getter, setter));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::DelegateProperty_2<TContainer, TValue>::DelegateProperty_2() {}
