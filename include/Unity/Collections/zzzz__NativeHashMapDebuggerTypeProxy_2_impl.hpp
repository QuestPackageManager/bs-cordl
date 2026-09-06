#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashMapDebuggerTypeProxy_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMapDebuggerTypeProxy_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__Pair_2_def.hpp"
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*& Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* const& Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
template <typename TKey, typename TValue>
constexpr void Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::__cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::_ctor(::Unity::Collections::NativeHashMap_2<TKey, TValue> target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::_ctor(::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue> target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::List_1<::Unity::Collections::Pair_2<TKey, TValue>>* Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::get_Items() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Collections::Pair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*
Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::New_ctor(::Unity::Collections::NativeHashMap_2<TKey, TValue> target) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>(target));
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*
Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::New_ctor(::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue> target) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>(target));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::NativeHashMapDebuggerTypeProxy_2() {}
