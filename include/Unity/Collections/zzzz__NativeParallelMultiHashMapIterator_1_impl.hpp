#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMapIterator_1.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMapIterator_1_def.hpp"
template <typename TKey> inline int32_t Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>::GetEntryIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>::get(), "GetEntryIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
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
