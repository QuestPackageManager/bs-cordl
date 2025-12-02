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
  ::cordl_internals::setInstanceField(this, &this->___Data, value);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::_ctor(::Unity::Collections::NativeHashMap_2<TKey, TValue> target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeHashMap_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::_ctor(::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue> target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::List_1<::Unity::Collections::Pair_2<TKey, TValue>>* Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::get_Items() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>::get(), "get_Items",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Collections::Pair_2<TKey, TValue>>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*
Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::New_ctor(::Unity::Collections::NativeHashMap_2<TKey, TValue> target) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>(target));
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*
Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::New_ctor(::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue> target) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>*>(target));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>::NativeHashMapDebuggerTypeProxy_2() {}
