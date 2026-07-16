#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/Unsafe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__Unsafe_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::Unsafe.InitBlockUnaligned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, uint8_t, uint32_t)>(&::System::Runtime::CompilerServices::Unsafe::InitBlockUnaligned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                             { "InitBlockUnaligned", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
template <typename T> inline ::by_ref<T> System::Runtime::CompilerServices::Unsafe::Add(::by_ref<T> source, int32_t elementOffset) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                                                              { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline ::by_ref<T> System::Runtime::CompilerServices::Unsafe::Add(::by_ref<T> source, ::System::IntPtr elementOffset) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                           { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline void* System::Runtime::CompilerServices::Unsafe::Add(void* source, int32_t elementOffset) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline ::by_ref<T> System::Runtime::CompilerServices::Unsafe::AddByteOffset(::by_ref<T> source, ::System::IntPtr byteOffset) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                           { "AddByteOffset", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, byteOffset);
}
template <typename T> inline bool System::Runtime::CompilerServices::Unsafe::AreSame(::by_ref<T> left, ::by_ref<T> right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "AreSame", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline T System::Runtime::CompilerServices::Unsafe::As(::System::Object* o) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "As", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, o);
}
template <typename TFrom, typename TTo> inline ::by_ref<TTo> System::Runtime::CompilerServices::Unsafe::As(::by_ref<TFrom> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                                                              { "As", { ::i2c::class_of<TFrom>(), ::i2c::class_of<TTo>() }, { ::i2c::type_of<::by_ref<TFrom>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFrom>(), ::i2c::class_of<TTo>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<TTo>>(nullptr, ___internal_method, source);
}
template <typename T> inline void* System::Runtime::CompilerServices::Unsafe::AsPointer(::by_ref<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "AsPointer", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, value);
}
template <typename T> inline ::by_ref<T> System::Runtime::CompilerServices::Unsafe::AsRef(void* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "AsRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source);
}
template <typename T> inline ::by_ref<T> System::Runtime::CompilerServices::Unsafe::AsRef(::by_ref<T> source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "AsRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source);
}
inline void System::Runtime::CompilerServices::Unsafe::InitBlockUnaligned(::by_ref<uint8_t> startAddress, uint8_t value, uint32_t byteCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                           { "InitBlockUnaligned", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startAddress, value, byteCount);
}
template <typename T> inline T System::Runtime::CompilerServices::Unsafe::Read(void* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "Read", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source);
}
template <typename T> inline T System::Runtime::CompilerServices::Unsafe::ReadUnaligned(::by_ref<uint8_t> source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "ReadUnaligned", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::Unsafe::SizeOf() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(), { "SizeOf", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::Unsafe::WriteUnaligned(::by_ref<uint8_t> destination, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                           { "WriteUnaligned", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, value);
}
template <typename T> inline bool System::Runtime::CompilerServices::Unsafe::IsAddressLessThan(::by_ref<T> left, ::by_ref<T> right) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                           { "IsAddressLessThan", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline ::by_ref<T> System::Runtime::CompilerServices::Unsafe::AddByteOffset(::by_ref<T> source, uint64_t byteOffset) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::Unsafe*>(),
                                                           { "AddByteOffset", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, byteOffset);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::Unsafe::Unsafe() {}
