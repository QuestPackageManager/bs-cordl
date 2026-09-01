#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\MemoryMarshal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__MemoryMarshal_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template <typename T> inline ::System::Span_1<uint8_t> System::Runtime::InteropServices::MemoryMarshal::AsBytes(::System::Span_1<T> span) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(), { "AsBytes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Span_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(nullptr, ___internal_method, span);
}
template <typename T> inline ::System::ReadOnlySpan_1<uint8_t> System::Runtime::InteropServices::MemoryMarshal::AsBytes(::System::ReadOnlySpan_1<T> span) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                                                                                              { "AsBytes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method, span);
}
template <typename T> inline ::System::Memory_1<T> System::Runtime::InteropServices::MemoryMarshal::AsMemory(::System::ReadOnlyMemory_1<T> memory) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                                                                                              { "AsMemory", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlyMemory_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Memory_1<T>>(nullptr, ___internal_method, memory);
}
template <typename T> inline ::by_ref<T> System::Runtime::InteropServices::MemoryMarshal::GetReference(::System::Span_1<T> span) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                                                                                              { "GetReference", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Span_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, span);
}
template <typename T> inline ::by_ref<T> System::Runtime::InteropServices::MemoryMarshal::GetReference(::System::ReadOnlySpan_1<T> span) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                                                                                              { "GetReference", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, span);
}
template <typename T> inline ::by_ref<T> System::Runtime::InteropServices::MemoryMarshal::GetNonNullPinnableReference(::System::Span_1<T> span) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                                                                                              { "GetNonNullPinnableReference", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Span_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, span);
}
template <typename T> inline ::by_ref<T> System::Runtime::InteropServices::MemoryMarshal::GetNonNullPinnableReference(::System::ReadOnlySpan_1<T> span) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                                                           { "GetNonNullPinnableReference", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, span);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> System::Runtime::InteropServices::MemoryMarshal::CreateReadOnlySpan(::by_ref<T> reference, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                                                           { "CreateReadOnlySpan", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, reference, length);
}
template <typename T> inline bool System::Runtime::InteropServices::MemoryMarshal::TryGetArray(::System::ReadOnlyMemory_1<T> memory, ::by_ref<::System::ArraySegment_1<T>> segment) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                                       { "TryGetArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlyMemory_1<T>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memory, segment);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::MemoryMarshal::MemoryMarshal() {}
