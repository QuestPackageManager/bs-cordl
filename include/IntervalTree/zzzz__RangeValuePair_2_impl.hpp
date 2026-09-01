#pragma once
// IWYU pragma private; include "IntervalTree\RangeValuePair_2.hpp"
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue> inline TKey IntervalTree::RangeValuePair_2<TKey, TValue>::get_From() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), { "get_From", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::RangeValuePair_2<TKey, TValue>::get_To() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), { "get_To", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue IntervalTree::RangeValuePair_2<TKey, TValue>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void IntervalTree::RangeValuePair_2<TKey, TValue>::_ctor(TKey from, TKey to, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, value);
}
template <typename TKey, typename TValue> inline ::StringW IntervalTree::RangeValuePair_2<TKey, TValue>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t IntervalTree::RangeValuePair_2<TKey, TValue>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool IntervalTree::RangeValuePair_2<TKey, TValue>::Equals(::IntervalTree::RangeValuePair_2<TKey, TValue> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), { "Equals", {}, { ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename TKey, typename TValue> inline bool IntervalTree::RangeValuePair_2<TKey, TValue>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename TKey, typename TValue>
inline bool IntervalTree::RangeValuePair_2<TKey, TValue>::op_Equality(::IntervalTree::RangeValuePair_2<TKey, TValue> left, ::IntervalTree::RangeValuePair_2<TKey, TValue> right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename TKey, typename TValue>
inline bool IntervalTree::RangeValuePair_2<TKey, TValue>::op_Inequality(::IntervalTree::RangeValuePair_2<TKey, TValue> left, ::IntervalTree::RangeValuePair_2<TKey, TValue> right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>(), ::i2c::type_of<::IntervalTree::RangeValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue> constexpr IntervalTree::RangeValuePair_2<TKey, TValue>::operator ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() {
  return static_cast<::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*
IntervalTree::RangeValuePair_2<TKey, TValue>::i___System__IEquatable_1___IntervalTree__RangeValuePair_2_TKey_TValue__() {
  return static_cast<::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_From_k__BackingField", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "_To_k__BackingField", ty: "TKey", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_Value_k__BackingField", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::IntervalTree::RangeValuePair_2<TKey, TValue>::RangeValuePair_2(TKey _From_k__BackingField, TKey _To_k__BackingField, TValue _Value_k__BackingField) noexcept {
  this->_From_k__BackingField = _From_k__BackingField;
  this->_To_k__BackingField = _To_k__BackingField;
  this->_Value_k__BackingField = _Value_k__BackingField;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::RangeValuePair_2<TKey, TValue>::RangeValuePair_2() {}
