#pragma once
// IWYU pragma private; include "Unity\Collections\IUTF8Bytes.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
//  Writing Method size for method: ::Unity::Collections::IUTF8Bytes.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::IUTF8Bytes::*)()>(&::Unity::Collections::IUTF8Bytes::get_IsEmpty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), { ::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::IUTF8Bytes.GetUnsafePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::IUTF8Bytes::*)()>(&::Unity::Collections::IUTF8Bytes::GetUnsafePtr)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), { ::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::IUTF8Bytes.TryResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::IUTF8Bytes::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(&::Unity::Collections::IUTF8Bytes::TryResize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), { ::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), 2 }));
    return ___internal_method;
  }
};
inline bool Unity::Collections::IUTF8Bytes::get_IsEmpty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint8_t* Unity::Collections::IUTF8Bytes::GetUnsafePtr() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(this, ___internal_method);
}
inline bool Unity::Collections::IUTF8Bytes::TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::IUTF8Bytes*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newLength, clearOptions);
}
