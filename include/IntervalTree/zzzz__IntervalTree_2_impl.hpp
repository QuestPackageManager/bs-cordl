#pragma once
// IWYU pragma private; include "IntervalTree\IntervalTree_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "IntervalTree/zzzz__IntervalTree_2_def.hpp"
#include "IntervalTree/zzzz__IIntervalTree_2_def.hpp"
#include "IntervalTree/zzzz__IntervalTreeNode_2_def.hpp"
#include "IntervalTree/zzzz__IntervalTree_2_def.hpp"
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2___c<TKey, TValue>::setStaticF___9(::IntervalTree::IntervalTree_2___c<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::IntervalTree::IntervalTree_2___c<TKey, TValue>*, "<>9", ::IntervalTree::IntervalTree_2___c<TKey, TValue>*>(
      std::forward<::IntervalTree::IntervalTree_2___c<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTree_2___c<TKey, TValue>* IntervalTree::IntervalTree_2___c<TKey, TValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::IntervalTree::IntervalTree_2___c<TKey, TValue>*, "<>9", ::IntervalTree::IntervalTree_2___c<TKey, TValue>*>();
}
template <typename TKey, typename TValue>
inline void IntervalTree::IntervalTree_2___c<TKey, TValue>::setStaticF___9__10_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>*, "<>9__10_0", ::IntervalTree::IntervalTree_2___c<TKey, TValue>*>(
      std::forward<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* IntervalTree::IntervalTree_2___c<TKey, TValue>::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>*, "<>9__10_0", ::IntervalTree::IntervalTree_2___c<TKey, TValue>*>();
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2___c<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue IntervalTree::IntervalTree_2___c<TKey, TValue>::_get_Values_b__10_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c<TKey, TValue>*>(),
                                                                                         { "<get_Values>b__10_0", {}, { ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, i);
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTree_2___c<TKey, TValue>* IntervalTree::IntervalTree_2___c<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IntervalTree::IntervalTree_2___c<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2___c<TKey, TValue>::IntervalTree_2___c() {}
template <typename TKey, typename TValue> constexpr TValue& IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr TValue const& IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>::__cordl_internal_set_value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>::_Remove_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>*>(),
                                                                                         { "<Remove>b__0", {}, { ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>* IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2___c__DisplayClass19_0<TKey, TValue>::IntervalTree_2___c__DisplayClass19_0() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*& IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* const& IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr void IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>::__cordl_internal_set_items(::System::Collections::Generic::IEnumerable_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___items = value;
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>::_Remove_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>*>(),
                                                                                         { "<Remove>b__0", {}, { ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>* IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2___c__DisplayClass20_0<TKey, TValue>::IntervalTree_2___c__DisplayClass20_0() {}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>*& IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>* const& IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr void IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::__cordl_internal_set___4__this(::IntervalTree::IntervalTree_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TKey, typename TValue> constexpr TKey& IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr TKey const& IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::__cordl_internal_set_key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::_GetClosestPrevValueTo_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> pair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>*>(),
                                                                                         { "<GetClosestPrevValueTo>b__0", {}, { ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pair);
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>* IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2___c__DisplayClass23_0<TKey, TValue>::IntervalTree_2___c__DisplayClass23_0() {}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>*& IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>* const& IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr void IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::__cordl_internal_set___4__this(::IntervalTree::IntervalTree_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TKey, typename TValue> constexpr TKey& IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr TKey const& IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::__cordl_internal_set_key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::_GetClosestNextValueTo_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> pair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>*>(),
                                                                                         { "<GetClosestNextValueTo>b__0", {}, { ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pair);
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>* IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2___c__DisplayClass24_0<TKey, TValue>::IntervalTree_2___c__DisplayClass24_0() {}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* const& IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_set_root(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___root = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*& IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* const& IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr void IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_set_items(::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___items = value;
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comparer = value;
}
template <typename TKey, typename TValue> constexpr bool& IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_get_isInSync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInSync;
}
template <typename TKey, typename TValue> constexpr bool const& IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_get_isInSync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInSync;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2<TKey, TValue>::__cordl_internal_set_isInSync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInSync = value;
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* IntervalTree::IntervalTree_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::IntervalTree_2<TKey, TValue>::get_Max() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "get_Max", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::IntervalTree_2<TKey, TValue>::get_Min() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "get_Min", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t IntervalTree::IntervalTree_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::Query(TKey value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "Query", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::Query(TKey from, TKey to) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "Query", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::List_1<TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::QueryWithCount(TKey from, TKey to) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "QueryWithCount", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TValue>*>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Add(TKey from, TKey to, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, value);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Remove(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "Remove", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Remove(::System::Collections::Generic::IEnumerable_1<TValue>* items) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(),
                                                                                         { "Remove", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* IntervalTree::IntervalTree_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue IntervalTree::IntervalTree_2<TKey, TValue>::GetClosestPrevValueTo(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "GetClosestPrevValueTo", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline TValue IntervalTree::IntervalTree_2<TKey, TValue>::GetClosestNextValueTo(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "GetClosestNextValueTo", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::IntervalTree_2<TKey, TValue>*>(), { "Rebuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTree_2<TKey, TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IntervalTree::IntervalTree_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::IntervalTree::IntervalTree_2<TKey, TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IntervalTree::IntervalTree_2<TKey, TValue>*>(comparer));
}
/// @brief Convert operator to "::IntervalTree::IIntervalTree_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr IntervalTree::IntervalTree_2<TKey, TValue>::operator ::IntervalTree::IIntervalTree_2<TKey, TValue>*() noexcept {
  return static_cast<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::IntervalTree::IIntervalTree_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::IntervalTree::IIntervalTree_2<TKey, TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::i___IntervalTree__IIntervalTree_2_TKey_TValue_() noexcept {
  return static_cast<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr IntervalTree::IntervalTree_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*
IntervalTree::IntervalTree_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___IntervalTree__RangeValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr IntervalTree::IntervalTree_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* IntervalTree::IntervalTree_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>::IntervalTree_2() {}
