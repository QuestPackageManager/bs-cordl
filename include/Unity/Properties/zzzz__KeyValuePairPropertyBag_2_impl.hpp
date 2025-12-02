#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValuePairPropertyBag_2.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__KeyValuePairPropertyBag_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__DelegateProperty_2_def.hpp"
#include "Unity/Properties/zzzz__INamedProperties_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__KeyValuePairPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
template <typename TKey, typename TValue>
inline void Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>::setStaticF___9(::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*>::get>(
      std::forward<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue> inline void Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline TKey Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>::__cctor_b__7_0(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*>::get(), "<.cctor>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method, container);
}
template <typename TKey, typename TValue>
inline TValue Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>::__cctor_b__7_1(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*>::get(), "<.cctor>b__7_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, container);
}
template <typename TKey, typename TValue> inline ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>::KeyValuePairPropertyBag_2___c() {}
template <typename TKey, typename TValue> constexpr int32_t& Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TValue> constexpr int32_t const& Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TValue> constexpr void Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TKey, typename TValue>
constexpr ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*&
Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TValue>
constexpr ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* const&
Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TValue>
constexpr void Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_set___2__current(
    ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____2__current, value);
}
template <typename TKey, typename TValue> constexpr int32_t& Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TKey, typename TValue>
constexpr int32_t const& Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TKey, typename TValue>
constexpr void Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TKey, typename TValue> inline void Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TKey, typename TValue> inline void Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>::get(),
                                  "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<
    TKey, TValue>::System_Collections_Generic_IEnumerator_Unity_Properties_IProperty_System_Collections_Generic_KeyValuePair_TKey_TValue____get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.IEnumerator<Unity.Properties.IProperty<System.Collections.Generic.KeyValuePair<TKey,TValue>>>.get_Current",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>::get(),
                                  "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>::get(),
                                  "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*
Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<
    TKey, TValue>::System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_System_Collections_Generic_KeyValuePair_TKey_TValue____GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<System.Collections.Generic.KeyValuePair<TKey,TValue>>>.GetEnumerator",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*, false>(
      this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>::get(),
                                  "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*
Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>"
template <typename TKey, typename TValue>
constexpr Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<
    ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*
Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<
    TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue____() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>"
template <typename TKey, typename TValue>
constexpr Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<
    ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*
Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<
    TKey, TValue>::i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue____() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue>
constexpr ::System::IDisposable* Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4() {}
template <typename TKey, typename TValue>
inline void Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::setStaticF_s_KeyProperty(
    ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*, "s_KeyProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get>(
      std::forward<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*>(value));
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*
Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::getStaticF_s_KeyProperty() {
  return ::cordl_internals::getStaticField<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*, "s_KeyProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue>
inline void Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::setStaticF_s_ValueProperty(
    ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*, "s_ValueProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get>(
      std::forward<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*>(value));
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*
Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::getStaticF_s_ValueProperty() {
  return ::cordl_internals::getStaticField<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*, "s_ValueProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::PropertyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::GetProperties() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::PropertyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>
Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::GetProperties(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>, false>(this, ___internal_method, container);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*
Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::GetPropertiesEnumerable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), "GetPropertiesEnumerable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*, false>(
      nullptr, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool
Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::TryGetProperty(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container, ::StringW name,
                                                                           ::ByRef<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), "TryGetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, container, name, property);
}
template <typename TKey, typename TValue> inline void Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>* Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>());
}
/// @brief Convert operator to "::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::operator ::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::i___Unity__Properties__INamedProperties_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::KeyValuePairPropertyBag_2() {}
