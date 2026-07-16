#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeTextExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeTextExtensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions.AsUnsafeListOfBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>> (*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64c9c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*>(),
                                                             { "AsUnsafeListOfBytes", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions.AsUnsafeListOfBytesRO
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeText)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytesRO)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c9c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*>(),
                                                                                           { "AsUnsafeListOfBytesRO", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>() } })));
    return ___internal_method;
  }
};
inline ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>>
Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytes(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*>(),
                                                           { "AsUnsafeListOfBytes", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>>>(nullptr, ___internal_method, text);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>
Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytesRO(::Unity::Collections::LowLevel::Unsafe::UnsafeText text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*>(),
                                                                                         { "AsUnsafeListOfBytesRO", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>>(nullptr, ___internal_method, text);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::UnsafeTextExtensions() {}
