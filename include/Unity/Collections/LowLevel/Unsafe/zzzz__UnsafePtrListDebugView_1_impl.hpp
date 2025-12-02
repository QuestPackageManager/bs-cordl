#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafePtrListDebugView_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrList_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrListDebugView_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrList_1_def.hpp"
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>& Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> const& Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
template <typename T> constexpr void Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>::__cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
template <typename T> inline ::ArrayW<T*, ::Array<T*>*> Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>::get_Items() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>*>::get(), "get_Items",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T*, ::Array<T*>*>, false>(this, ___internal_method);
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>*
Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>::New_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>*>(data));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrListDebugView_1<T>::UnsafePtrListDebugView_1() {}
