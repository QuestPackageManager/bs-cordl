#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelMultiHashMapDebuggerTypeProxy_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap_2_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMapDebuggerTypeProxy_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__ListPair_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue>&
Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>::__cordl_internal_get_m_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue> const&
Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>::__cordl_internal_get_m_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
template <typename TKey, typename TValue>
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>::__cordl_internal_set_m_Target(
    ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Target = value;
}
template <typename TKey, typename TValue>
inline void
Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue> target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
template <typename TKey, typename TValue>
inline ::System::ValueTuple_2<::Unity::Collections::NativeArray_1<TKey>, int32_t> Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>::GetUniqueKeyArray(
    ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue>> hashMap, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>*>::get(), "GetUniqueKeyArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Unity::Collections::NativeArray_1<TKey>, int32_t>, false>(nullptr, ___internal_method, hashMap, allocator);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::List_1<::Unity::Collections::ListPair_2<TKey, ::System::Collections::Generic::List_1<TValue>*>>*
Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>::get_Items() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>*>::get(),
                                  "get_Items", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Collections::ListPair_2<TKey, ::System::Collections::Generic::List_1<TValue>*>>*, false>(
      this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>*
Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>::New_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue> target) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>*>(target));
}
// Ctor Parameters []
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>::UnsafeParallelMultiHashMapDebuggerTypeProxy_2() {}
