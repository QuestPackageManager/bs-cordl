#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\KeyValue_2.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__KeyValue_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapData_def.hpp"
template <typename TKey, typename TValue> inline ::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue> Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::by_ref<TValue> Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<TValue>>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>::GetKeyValue(::by_ref<TKey> key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>(),
                                                                                         { "GetKeyValue", {}, { ::i2c::type_of<::by_ref<TKey>>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>::KeyValue_2(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* m_Buffer, int32_t m_Index,
                                                                                       int32_t m_Next) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_Index = m_Index;
  this->m_Next = m_Next;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>::KeyValue_2() {}
