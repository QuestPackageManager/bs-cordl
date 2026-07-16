#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtilityExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeUtilityExtensions_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions.MemSwap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::MemSwap)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64ca3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                                                                                           { "MemSwap", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions.CheckMemSwapOverlap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::CheckMemSwapOverlap)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64ca50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                                                             { "CheckMemSwapOverlap", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions.CheckIndexRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::CheckIndexRange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64ca574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                                                                                           { "CheckIndexRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::MemSwap(void* ptr, void* otherPtr, int64_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                                                                                         { "MemSwap", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, otherPtr, size);
}
template <typename T> inline T Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::ReadArrayElementBoundsChecked(void* source, int32_t index, int32_t capacity) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                                              { "ReadArrayElementBoundsChecked", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source, index, capacity);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::WriteArrayElementBoundsChecked(void* destination, int32_t index, T value, int32_t capacity) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                          { "WriteArrayElementBoundsChecked", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, index, value, capacity);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::AddressOf(::by_ref<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                                                                                              { "AddressOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, value);
}
template <typename T> inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::AsRef(::by_ref<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(), { "AsRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, value);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::CheckMemSwapOverlap(uint8_t* dst, uint8_t* src, int64_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                                                           { "CheckMemSwapOverlap", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, size);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::CheckIndexRange(int32_t index, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*>(),
                                                                                         { "CheckIndexRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, capacity);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions::UnsafeUtilityExtensions() {}
