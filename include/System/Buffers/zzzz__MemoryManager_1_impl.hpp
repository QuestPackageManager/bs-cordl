#pragma once
// IWYU pragma private; include "System/Buffers/MemoryManager_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__MemoryManager_1_def.hpp"
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template <typename T> inline ::System::Span_1<T> System::Buffers::MemoryManager_1<T>::GetSpan() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(this, ___internal_method);
}
template <typename T> inline ::System::Buffers::MemoryHandle System::Buffers::MemoryManager_1<T>::Pin(int32_t elementIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::MemoryHandle>(this, ___internal_method, elementIndex);
}
template <typename T> inline bool System::Buffers::MemoryManager_1<T>::TryGetArray(::by_ref<::System::ArraySegment_1<T>> segment) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segment);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::MemoryManager_1<T>::MemoryManager_1() {}
