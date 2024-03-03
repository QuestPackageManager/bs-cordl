#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__MemoryManager_1_def.hpp"
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template <typename T> inline ::System::Span_1<T> System::Buffers::MemoryManager_1<T>::GetSpan() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>, false>(this, ___internal_method);
}
/// @param elementIndex: int32_t (default: static_cast<int32_t>(0x0))
template <typename T> inline ::System::Buffers::MemoryHandle System::Buffers::MemoryManager_1<T>::Pin(int32_t elementIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::MemoryHandle, false>(this, ___internal_method, elementIndex);
}
template <typename T> inline bool System::Buffers::MemoryManager_1<T>::TryGetArray(ByRef<::System::ArraySegment_1<T>> segment) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, segment);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::MemoryManager_1<T>::MemoryManager_1() {}
