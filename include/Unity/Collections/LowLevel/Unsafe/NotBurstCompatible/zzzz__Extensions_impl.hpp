#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\NotBurstCompatible\Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NotBurstCompatible/zzzz__Extensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashSet_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions.AddNBC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>, ::StringW)>(
    &::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::AddNBC)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64cfe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>(),
                                                { "AddNBC", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions.ToBytesNBC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>)>(
    &::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ToBytesNBC)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64cfee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>(),
                                                             { "ToBytesNBC", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions.ReadNextNBC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader>, ::by_ref<::StringW>)>(
    &::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ReadNextNBC)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64cff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>(),
                            { "ReadNextNBC", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
template <typename T> inline ::ArrayW<T> Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ToArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> set) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>(),
                                                           { "ToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, set);
}
inline void Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::AddNBC(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer> buffer, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>(),
                                                           { "AddNBC", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, value);
}
inline ::ArrayW<uint8_t> Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ToBytesNBC(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>(),
                                                           { "ToBytesNBC", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, buffer);
}
inline void Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ReadNextNBC(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader> reader,
                                                                                              ::by_ref<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>(),
                          { "ReadNextNBC", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader, value);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::Extensions() {}
