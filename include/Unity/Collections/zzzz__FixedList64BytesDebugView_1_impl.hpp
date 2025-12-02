#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList64BytesDebugView_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__FixedList64Bytes_1_impl.hpp"
#include "Unity/Collections/zzzz__FixedList64BytesDebugView_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList64Bytes_1_def.hpp"
template <typename T> constexpr ::Unity::Collections::FixedList64Bytes_1<T>& Unity::Collections::FixedList64BytesDebugView_1<T>::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr ::Unity::Collections::FixedList64Bytes_1<T> const& Unity::Collections::FixedList64BytesDebugView_1<T>::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr void Unity::Collections::FixedList64BytesDebugView_1<T>::__cordl_internal_set_m_List(::Unity::Collections::FixedList64Bytes_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
template <typename T> inline void Unity::Collections::FixedList64BytesDebugView_1<T>::_ctor(::Unity::Collections::FixedList64Bytes_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList64BytesDebugView_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList64Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> Unity::Collections::FixedList64BytesDebugView_1<T>::get_Items() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList64BytesDebugView_1<T>*>::get(),
                                                                             "get_Items", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::FixedList64BytesDebugView_1<T>* Unity::Collections::FixedList64BytesDebugView_1<T>::New_ctor(::Unity::Collections::FixedList64Bytes_1<T> list) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::FixedList64BytesDebugView_1<T>*>(list));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::FixedList64BytesDebugView_1<T>::FixedList64BytesDebugView_1() {}
