#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValuePropertyBag_2.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValuePropertyBag_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValuePropertyBag_2_def.hpp"
template <typename TContainer, typename TValue> constexpr ::StringW& UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue>
constexpr ::StringW const& UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue>
constexpr void UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____Name_k__BackingField, value);
}
template <typename TContainer, typename TValue> constexpr bool& UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
template <typename TContainer, typename TValue>
constexpr bool const& UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
template <typename TContainer, typename TValue>
constexpr void UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
template <typename TContainer, typename TValue> inline ::StringW UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline bool UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline TValue UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::GetValue(::ByRef<TContainer> container) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, container);
}
template <typename TContainer, typename TValue> inline void UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::SetValue(::ByRef<TContainer> container, TValue value) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue> inline void UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline ::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>* UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>*>());
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>::StyleValuePropertyBag_2_ValueProperty() {}
template <typename TContainer, typename TValue>
constexpr ::StringW& UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue>
constexpr ::StringW const& UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue>
constexpr void UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____Name_k__BackingField, value);
}
template <typename TContainer, typename TValue>
constexpr bool& UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
template <typename TContainer, typename TValue>
constexpr bool const& UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
template <typename TContainer, typename TValue>
constexpr void UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
template <typename TContainer, typename TValue> inline ::StringW UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline bool UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::GetValue(::ByRef<TContainer> container) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword, false>(this, ___internal_method, container);
}
template <typename TContainer, typename TValue>
inline void UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::SetValue(::ByRef<TContainer> container, ::UnityEngine::UIElements::StyleKeyword value) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue> inline void UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline ::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>* UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>*>());
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>::StyleValuePropertyBag_2_KeywordProperty() {}
template <typename TContainer, typename TValue> inline void UnityEngine::UIElements::StyleValuePropertyBag_2<TContainer, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValuePropertyBag_2<TContainer, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline ::UnityEngine::UIElements::StyleValuePropertyBag_2<TContainer, TValue>* UnityEngine::UIElements::StyleValuePropertyBag_2<TContainer, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleValuePropertyBag_2<TContainer, TValue>*>());
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::UnityEngine::UIElements::StyleValuePropertyBag_2<TContainer, TValue>::StyleValuePropertyBag_2() {}
