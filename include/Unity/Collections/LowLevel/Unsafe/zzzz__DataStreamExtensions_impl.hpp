#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\DataStreamExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__DataStreamExtensions_def.hpp"
#include "Unity/Collections/zzzz__DataStreamReader_def.hpp"
#include "Unity/Collections/zzzz__DataStreamWriter_def.hpp"
#include "Unity/Collections/zzzz__StreamCompressionModel_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::DataStreamWriter (*)(uint8_t*, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::Create)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64cd35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.WriteBytesUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::DataStreamWriter>, uint8_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::WriteBytesUnsafe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64cd3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                         { "WriteBytesUnsafe", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamWriter>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.ReadBytesUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::DataStreamReader>, uint8_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadBytesUnsafe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64cd454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                         { "ReadBytesUnsafe", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.ReadFixedStringUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::by_ref<::Unity::Collections::DataStreamReader>, uint8_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadFixedStringUnsafe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64cd4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                            { "ReadFixedStringUnsafe", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.ReadPackedFixedStringDeltaUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<uint16_t (*)(::by_ref<::Unity::Collections::DataStreamReader>, uint8_t*, int32_t, uint8_t*, uint16_t, ::Unity::Collections::StreamCompressionModel)>(
        &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadPackedFixedStringDeltaUnsafe)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64cd51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                                             { "ReadPackedFixedStringDeltaUnsafe",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Unity::Collections::StreamCompressionModel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.GetUnsafeReadOnlyPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::by_ref<::Unity::Collections::DataStreamReader>)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::GetUnsafeReadOnlyPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cd5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                                                                           { "GetUnsafeReadOnlyPtr", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::DataStreamWriter Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::Create(uint8_t* data, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(), { "Create", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::DataStreamWriter>(nullptr, ___internal_method, data, length);
}
inline bool Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::WriteBytesUnsafe(::by_ref<::Unity::Collections::DataStreamWriter> writer, uint8_t* data, int32_t bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                       { "WriteBytesUnsafe", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamWriter>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, writer, data, bytes);
}
inline void Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadBytesUnsafe(::by_ref<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                       { "ReadBytesUnsafe", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader, data, length);
}
inline uint16_t Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadFixedStringUnsafe(::by_ref<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t maxLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                          { "ReadFixedStringUnsafe", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, reader, data, maxLength);
}
inline uint16_t Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadPackedFixedStringDeltaUnsafe(::by_ref<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t maxLength,
                                                                                                             uint8_t* baseData, uint16_t baseLength,
                                                                                                             ::Unity::Collections::StreamCompressionModel model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                                           { "ReadPackedFixedStringDeltaUnsafe",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Unity::Collections::StreamCompressionModel>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, reader, data, maxLength, baseData, baseLength, model);
}
inline void* Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::GetUnsafeReadOnlyPtr(::by_ref<::Unity::Collections::DataStreamReader> reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>(),
                                                                                         { "GetUnsafeReadOnlyPtr", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::DataStreamExtensions() {}
