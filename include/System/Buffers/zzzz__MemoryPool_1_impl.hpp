#pragma once
// IWYU pragma private; include "System/Buffers/MemoryPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__MemoryPool_1_def.hpp"
#include "System/Buffers/zzzz__IMemoryOwner_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template <typename T> inline void System::Buffers::MemoryPool_1<T>::setStaticF_s_shared(::System::Buffers::MemoryPool_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Buffers::MemoryPool_1<T>*, "s_shared", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryPool_1<T>*>::get>(
      std::forward<::System::Buffers::MemoryPool_1<T>*>(value));
}
template <typename T> inline ::System::Buffers::MemoryPool_1<T>* System::Buffers::MemoryPool_1<T>::getStaticF_s_shared() {
  return ::cordl_internals::getStaticField<::System::Buffers::MemoryPool_1<T>*, "s_shared", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryPool_1<T>*>::get>();
}
template <typename T> inline ::System::Buffers::MemoryPool_1<T>* System::Buffers::MemoryPool_1<T>::get_Shared() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryPool_1<T>*>::get(), "get_Shared",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::MemoryPool_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Buffers::IMemoryOwner_1<T>* System::Buffers::MemoryPool_1<T>::Rent(int32_t minBufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryPool_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::IMemoryOwner_1<T>*, false>(this, ___internal_method, minBufferSize);
}
template <typename T> inline void System::Buffers::MemoryPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryPool_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Buffers::MemoryPool_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryPool_1<T>*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Buffers::MemoryPool_1<T>::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryPool_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T> inline ::System::Buffers::MemoryPool_1<T>* System::Buffers::MemoryPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Buffers::MemoryPool_1<T>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Buffers::MemoryPool_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Buffers::MemoryPool_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::MemoryPool_1<T>::MemoryPool_1() {}
