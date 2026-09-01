#pragma once
// IWYU pragma private; include "Unity\Collections\NativeParallelMultiHashMapIterator_1.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMapIterator_1_def.hpp"
template <typename TKey> inline int32_t Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>::GetEntryIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>(), { "GetEntryIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "NextEntryIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "EntryIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TKey>
constexpr ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>::NativeParallelMultiHashMapIterator_1(TKey key, int32_t NextEntryIndex, int32_t EntryIndex) noexcept {
  this->key = key;
  this->NextEntryIndex = NextEntryIndex;
  this->EntryIndex = EntryIndex;
}
// Ctor Parameters []
template <typename TKey> constexpr ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>::NativeParallelMultiHashMapIterator_1() {}
