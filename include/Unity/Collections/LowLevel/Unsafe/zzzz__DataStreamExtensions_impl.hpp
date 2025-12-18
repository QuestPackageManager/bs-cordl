#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/DataStreamExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__DataStreamExtensions_def.hpp"
#include "Unity/Collections/zzzz__DataStreamReader_def.hpp"
#include "Unity/Collections/zzzz__DataStreamWriter_def.hpp"
#include "Unity/Collections/zzzz__StreamCompressionModel_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::DataStreamWriter (*)(uint8_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::Create)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6316ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.WriteBytesUnsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::DataStreamWriter>, uint8_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::WriteBytesUnsafe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6316d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "WriteBytesUnsafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamWriter>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.ReadBytesUnsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Collections::DataStreamReader>, uint8_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadBytesUnsafe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6316dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "ReadBytesUnsafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.ReadFixedStringUnsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::ByRef<::Unity::Collections::DataStreamReader>, uint8_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadFixedStringUnsafe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6316e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "ReadFixedStringUnsafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.ReadPackedFixedStringDeltaUnsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint16_t (*)(::ByRef<::Unity::Collections::DataStreamReader>, uint8_t*, int32_t, uint8_t*, uint16_t, ::Unity::Collections::StreamCompressionModel)>(
        &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadPackedFixedStringDeltaUnsafe)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6316ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "ReadPackedFixedStringDeltaUnsafe",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::StreamCompressionModel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions.GetUnsafeReadOnlyPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::ByRef<::Unity::Collections::DataStreamReader>)>(
    &::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::GetUnsafeReadOnlyPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "GetUnsafeReadOnlyPtr", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::DataStreamWriter Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::Create(uint8_t* data, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::DataStreamWriter, false>(nullptr, ___internal_method, data, length);
}
inline bool Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::WriteBytesUnsafe(::ByRef<::Unity::Collections::DataStreamWriter> writer, uint8_t* data, int32_t bytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "WriteBytesUnsafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamWriter>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, writer, data, bytes);
}
inline void Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadBytesUnsafe(::ByRef<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "ReadBytesUnsafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, reader, data, length);
}
inline uint16_t Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadFixedStringUnsafe(::ByRef<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t maxLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "ReadFixedStringUnsafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, reader, data, maxLength);
}
inline uint16_t Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::ReadPackedFixedStringDeltaUnsafe(::ByRef<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t maxLength,
                                                                                                             uint8_t* baseData, uint16_t baseLength,
                                                                                                             ::Unity::Collections::StreamCompressionModel model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "ReadPackedFixedStringDeltaUnsafe",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::StreamCompressionModel>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, reader, data, maxLength, baseData, baseLength, model);
}
inline void* Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::GetUnsafeReadOnlyPtr(::ByRef<::Unity::Collections::DataStreamReader> reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*>::get(), "GetUnsafeReadOnlyPtr", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions::DataStreamExtensions() {}
