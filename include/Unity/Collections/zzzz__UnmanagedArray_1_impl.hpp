#pragma once
// IWYU pragma private; include "Unity/Collections/UnmanagedArray_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__UnmanagedArray_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
template <typename T> inline int32_t Unity::Collections::UnmanagedArray_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnmanagedArray_1<T>>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnmanagedArray_1<T>::_ctor(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnmanagedArray_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length, allocator);
}
template <typename T> inline void Unity::Collections::UnmanagedArray_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnmanagedArray_1<T>>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T* Unity::Collections::UnmanagedArray_1<T>::GetUnsafePointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnmanagedArray_1<T>>::get(),
                                                                             "GetUnsafePointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T*, false>(this, ___internal_method);
}
template <typename T> inline ::ByRef<T> Unity::Collections::UnmanagedArray_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnmanagedArray_1<T>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::UnmanagedArray_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::UnmanagedArray_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_pointer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::UnmanagedArray_1<T>::UnmanagedArray_1(::System::IntPtr m_pointer, int32_t m_length, ::Unity::Collections::AllocatorManager_AllocatorHandle m_allocator) noexcept {
  this->m_pointer = m_pointer;
  this->m_length = m_length;
  this->m_allocator = m_allocator;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::UnmanagedArray_1<T>::UnmanagedArray_1() {}
