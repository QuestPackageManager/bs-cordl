#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\KdTree\KdTree_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__AddDuplicateBehavior_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTree_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__AddDuplicateBehavior_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__HyperRect_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__IKdTree_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTree_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__NearestNeighbourList_2_def.hpp"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*&
UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::__cordl_internal_get_left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* const&
UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::__cordl_internal_get_left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::__cordl_internal_set_left(
    ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___left = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*&
UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::__cordl_internal_get_right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* const&
UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::__cordl_internal_get_right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::__cordl_internal_set_right(
    ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___right = value;
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::_GetEnumerator_b__0(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>*>(),
                                                           { "<GetEnumerator>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::_GetEnumerator_b__1(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>*>(),
                                                           { "<GetEnumerator>b__1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TKey, typename TValue>
inline ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>::KdTree_2___c__DisplayClass33_0() {}
template <typename TKey, typename TValue> constexpr int32_t& UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TValue> constexpr int32_t const& UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TValue> constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* const&
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_set___2__current(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*& UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* const& UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_set___4__this(::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>*&
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* const&
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
template <typename TKey, typename TValue>
constexpr void
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_set___8__1(::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____8__1 = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*&
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get__addLeft_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addLeft_5__2;
}
template <typename TKey, typename TValue>
constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* const&
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get__addLeft_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addLeft_5__2;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_set__addLeft_5__2(
    ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addLeft_5__2 = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*&
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get__addRight_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addRight_5__3;
}
template <typename TKey, typename TValue>
constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* const&
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_get__addRight_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addRight_5__3;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::__cordl_internal_set__addRight_5__3(
    ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addRight_5__3 = value;
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
template <typename TKey, typename TValue>
constexpr UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*
UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey,
                                                               TValue>::i___System__Collections__Generic__IEnumerator_1___UnityEngine__ProBuilder__KdTree__KdTreeNode_2_TKey_TValue___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>::KdTree_2__GetEnumerator_d__33() {}
template <typename TKey, typename TValue> constexpr int32_t& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get_dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
template <typename TKey, typename TValue> constexpr int32_t const& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get_dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
template <typename TKey, typename TValue> constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_set_dimensions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dimensions = value;
}
template <typename TKey, typename TValue> constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get_typeMath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeMath;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* const& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get_typeMath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeMath;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_set_typeMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeMath = value;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* const& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_set_root(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___root = value;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get__AddDuplicateBehavior_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AddDuplicateBehavior_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get__AddDuplicateBehavior_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AddDuplicateBehavior_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_set__AddDuplicateBehavior_k__BackingField(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AddDuplicateBehavior_k__BackingField = value;
}
template <typename TKey, typename TValue> constexpr int32_t& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get__Count_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
template <typename TKey, typename TValue> constexpr int32_t const& UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_get__Count_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
template <typename TKey, typename TValue> constexpr void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::__cordl_internal_set__Count_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Count_k__BackingField = value;
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dimensions, typeMath);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath,
                                                                           ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dimensions, typeMath, addDuplicateBehavior);
}
template <typename TKey, typename TValue> inline ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::get_AddDuplicateBehavior() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "get_AddDuplicateBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::set_AddDuplicateBehavior(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                           { "set_AddDuplicateBehavior", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::Add(::ArrayW<TKey> point, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, value);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::ReadChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* removedNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                           { "ReadChildNodes", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedNode);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::RemoveAt(::ArrayW<TKey> point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "RemoveAt", {}, { ::i2c::type_of<::ArrayW<TKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
template <typename TKey, typename TValue>
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::GetNearestNeighbours(::ArrayW<TKey> point, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                                                         { "GetNearestNeighbours", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>>(this, ___internal_method, point, count);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::AddNearestNeighbours(
    ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node, ::ArrayW<TKey> target, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey> rect, int32_t depth,
    ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, TKey>* nearestNeighbours, TKey maxSearchRadiusSquared) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                              { "AddNearestNeighbours",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(), ::i2c::type_of<::ArrayW<TKey>>(),
                                                  ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, TKey>*>(),
                                                  ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, target, rect, depth, nearestNeighbours, maxSearchRadiusSquared);
}
template <typename TKey, typename TValue>
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::RadialSearch(::ArrayW<TKey> center, TKey radius,
                                                                                                                                                      int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                           { "RadialSearch", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<TKey>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>>(this, ___internal_method, center, radius, count);
}
template <typename TKey, typename TValue> inline int32_t UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::set_Count(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "set_Count", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::TryFindValueAt(::ArrayW<TKey> point, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                                                         { "TryFindValueAt", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, value);
}
template <typename TKey, typename TValue> inline TValue UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::FindValueAt(::ArrayW<TKey> point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "FindValueAt", {}, { ::i2c::type_of<::ArrayW<TKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, point);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::TryFindValue(TValue value, ::by_ref<::ArrayW<TKey>> point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                                                         { "TryFindValue", {}, { ::i2c::type_of<TValue>(), ::i2c::type_of<::by_ref<::ArrayW<TKey>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, point);
}
template <typename TKey, typename TValue> inline ::ArrayW<TKey> UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::FindValue(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "FindValue", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TKey>>(this, ___internal_method, value);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::AddNodeToStringBuilder(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node, ::System::Text::StringBuilder* sb,
                                                                                            int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                          { "AddNodeToStringBuilder",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, sb, depth);
}
template <typename TKey, typename TValue> inline ::StringW UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::AddNodesToList(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node,
                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* nodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                           { "AddNodesToList",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, nodes);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::SortNodesArray(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> nodes, int32_t byDimension,
                                                                                    int32_t fromIndex, int32_t toIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                                                         { "SortNodesArray",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes, byDimension, fromIndex, toIndex);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::AddNodesBalanced(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> nodes, int32_t byDimension,
                                                                                      int32_t fromIndex, int32_t toIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                                                         { "AddNodesBalanced",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes, byDimension, fromIndex, toIndex);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::Balance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "Balance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::RemoveChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(),
                                                           { "RemoveChildNodes", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::SaveToFile(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "SaveToFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filename);
}
template <typename TKey, typename TValue> inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::LoadFromFile(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "LoadFromFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(nullptr, ___internal_method, filename);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::New_ctor(int32_t dimensions,
                                                                                                                                    ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(dimensions, typeMath));
}
template <typename TKey, typename TValue>
inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*
UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::New_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath,
                                                                  ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*>(dimensions, typeMath, addDuplicateBehavior));
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::operator ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::i___UnityEngine__ProBuilder__KdTree__IKdTree_2_TKey_TValue_() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
template <typename TKey, typename TValue>
constexpr UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*
UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___UnityEngine__ProBuilder__KdTree__KdTreeNode_2_TKey_TValue___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::KdTree_2() {}
