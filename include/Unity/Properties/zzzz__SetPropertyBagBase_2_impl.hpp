#pragma once
// IWYU pragma private; include "Unity/Properties/SetPropertyBagBase_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__SetPropertyBagBase_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__IKeyedProperties_2_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__ISetElementProperty_def.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
#include "Unity/Properties/zzzz__SetPropertyBagBase_2_def.hpp"
template <typename TSet, typename TElement> constexpr TElement& Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename TSet, typename TElement> constexpr TElement const& Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename TSet, typename TElement> constexpr void Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::__cordl_internal_set_m_Value(TElement value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Value, value);
}
template <typename TSet, typename TElement> inline ::StringW Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline bool Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline TElement Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::GetValue(::ByRef<TSet> container) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<TElement, false>(this, ___internal_method, container);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::SetValue(::ByRef<TSet> container, TElement value) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, value);
}
template <typename TSet, typename TElement> inline ::System::Object* Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::get_ObjectKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>::get(),
                                               "get_ObjectKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSet, typename TElement>
inline ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>());
}
/// @brief Convert operator to "::Unity::Properties::ISetElementProperty"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::operator ::Unity::Properties::ISetElementProperty*() noexcept {
  return static_cast<::Unity::Properties::ISetElementProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ISetElementProperty"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::ISetElementProperty* Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::i___Unity__Properties__ISetElementProperty() noexcept {
  return static_cast<::Unity::Properties::ISetElementProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSet, typename TElement> constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::SetPropertyBagBase_2_SetElementProperty() {}
template <typename TSet, typename TElement> constexpr int32_t& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSet, typename TElement> constexpr int32_t const& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSet, typename TElement> constexpr void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::IProperty_1<TSet>*& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::IProperty_1<TSet>* const& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSet, typename TElement>
constexpr void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_set___2__current(::Unity::Properties::IProperty_1<TSet>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____2__current, value);
}
template <typename TSet, typename TElement> constexpr int32_t& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSet, typename TElement>
constexpr int32_t const& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSet, typename TElement>
constexpr void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSet, typename TElement> constexpr TSet& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
template <typename TSet, typename TElement> constexpr TSet const& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
template <typename TSet, typename TElement> constexpr void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_set_container(TSet value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___container, value);
}
template <typename TSet, typename TElement> constexpr TSet& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___3__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__container;
}
template <typename TSet, typename TElement> constexpr TSet const& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___3__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__container;
}
template <typename TSet, typename TElement> constexpr void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_set___3__container(TSet value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____3__container, value);
}
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* const&
Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TSet, typename TElement>
constexpr void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_set___4__this(::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TSet, typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<TElement>*& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___s__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__1;
}
template <typename TSet, typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<TElement>* const& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get___s__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__1;
}
template <typename TSet, typename TElement>
constexpr void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____s__1, value);
}
template <typename TSet, typename TElement> constexpr TElement& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get__element_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____element_5__2;
}
template <typename TSet, typename TElement>
constexpr TElement const& Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_get__element_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____element_5__2;
}
template <typename TSet, typename TElement> constexpr void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__cordl_internal_set__element_5__2(TElement value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____element_5__2, value);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline bool Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSet, typename TElement>
inline ::Unity::Properties::IProperty_1<TSet>*
Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::System_Collections_Generic_IEnumerator_Unity_Properties_IProperty_TSet___get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(),
      "System.Collections.Generic.IEnumerator<Unity.Properties.IProperty<TSet>>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty_1<TSet>*, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSet, typename TElement>
inline ::System::Object* Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSet, typename TElement>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>*
Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TSet___GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(),
      "System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TSet>>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>*, false>(this, ___internal_method);
}
template <typename TSet, typename TElement>
inline ::System::Collections::IEnumerator* Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TSet, typename TElement>
inline ::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*
Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>"
template <typename TSet, typename TElement>
constexpr Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet,
                                                                                TElement>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>"
template <typename TSet, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>*
Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TSet___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSet, typename TElement>
constexpr ::System::Collections::IEnumerable* Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>"
template <typename TSet, typename TElement>
constexpr Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet,
                                                                                TElement>::operator ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>"
template <typename TSet, typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>*
Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TSet___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSet, typename TElement>
constexpr ::System::Collections::IEnumerator* Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSet, typename TElement> constexpr ::System::IDisposable* Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSet, typename TElement> constexpr ::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4() {}
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*& Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::__cordl_internal_get_m_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* const& Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::__cordl_internal_get_m_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
template <typename TSet, typename TElement>
constexpr void Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::__cordl_internal_set_m_Property(::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Property, value);
}
template <typename TSet, typename TElement> inline ::Unity::Properties::PropertyCollection_1<TSet> Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::GetProperties() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TSet>, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline ::Unity::Properties::PropertyCollection_1<TSet> Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::GetProperties(::ByRef<TSet> container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TSet>, false>(this, ___internal_method, container);
}
template <typename TSet, typename TElement>
inline ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::GetPropertiesEnumerable(TSet container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>::get(), "GetPropertiesEnumerable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSet>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>*, false>(this, ___internal_method, container);
}
template <typename TSet, typename TElement>
inline void Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::Unity_Properties_ICollectionPropertyBagAccept_TSet__Accept(::Unity::Properties::ICollectionPropertyBagVisitor* visitor,
                                                                                                                                ::ByRef<TSet> container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>::get(),
                                               "Unity.Properties.ICollectionPropertyBagAccept<TSet>.Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ICollectionPropertyBagVisitor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TSet>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
template <typename TSet, typename TElement>
inline void Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::Unity_Properties_ISetPropertyBagAccept_TSet__Accept(::Unity::Properties::ISetPropertyBagVisitor* visitor,
                                                                                                                         ::ByRef<TSet> container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>::get(),
                                               "Unity.Properties.ISetPropertyBagAccept<TSet>.Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ISetPropertyBagVisitor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TSet>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
template <typename TSet, typename TElement>
inline bool Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::TryGetProperty(::ByRef<TSet> container, ::System::Object* key, ::ByRef<::Unity::Properties::IProperty_1<TSet>*> property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>::get(), "TryGetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TSet>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::IProperty_1<TSet>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, container, key, property);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>());
}
/// @brief Convert operator to "::Unity::Properties::ISetPropertyBag_2<TSet,TElement>"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::ISetPropertyBag_2<TSet, TElement>*() noexcept {
  return static_cast<::Unity::Properties::ISetPropertyBag_2<TSet, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ISetPropertyBag_2<TSet,TElement>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::ISetPropertyBag_2<TSet, TElement>* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__ISetPropertyBag_2_TSet_TElement_() noexcept {
  return static_cast<::Unity::Properties::ISetPropertyBag_2<TSet, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TSet,TElement>"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TSet,TElement>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*
Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__ICollectionPropertyBag_2_TSet_TElement_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TSet>"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::IPropertyBag_1<TSet>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TSet>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::IPropertyBag_1<TSet>* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__IPropertyBag_1_TSet_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TSet, typename TElement> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__ICollectionPropertyBagAccept_1_TSet_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ISetPropertyBagAccept_1<TSet>"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::ISetPropertyBagAccept_1<TSet>*() noexcept {
  return static_cast<::Unity::Properties::ISetPropertyBagAccept_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ISetPropertyBagAccept_1<TSet>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::ISetPropertyBagAccept_1<TSet>* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__ISetPropertyBagAccept_1_TSet_() noexcept {
  return static_cast<::Unity::Properties::ISetPropertyBagAccept_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IKeyedProperties_2<TSet,::System::Object*>"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*() noexcept {
  return static_cast<::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IKeyedProperties_2<TSet,::System::Object*>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*
Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__IKeyedProperties_2_TSet___System__Object__() noexcept {
  return static_cast<::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSet, typename TElement> constexpr ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::SetPropertyBagBase_2() {}
