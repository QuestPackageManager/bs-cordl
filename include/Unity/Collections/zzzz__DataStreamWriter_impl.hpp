#pragma once
// IWYU pragma private; include "Unity/Collections/DataStreamWriter.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__DataStreamWriter_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__DataStreamWriter_def.hpp"
#include "Unity/Collections/zzzz__FixedString128Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString4096Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__StreamCompressionModel_def.hpp"
// Ctor Parameters [CppParam { name: "buffer", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bitBuffer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bitIndex", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "failedWrites", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::DataStreamWriter_StreamData::DataStreamWriter_StreamData(uint8_t* buffer, int32_t length, int32_t capacity, uint64_t bitBuffer, int32_t bitIndex,
                                                                                         int32_t failedWrites) noexcept {
  this->buffer = buffer;
  this->length = length;
  this->capacity = capacity;
  this->bitBuffer = bitBuffer;
  this->bitIndex = bitIndex;
  this->failedWrites = failedWrites;
}
// Ctor Parameters []
constexpr ::Unity::Collections::DataStreamWriter_StreamData::DataStreamWriter_StreamData() {}
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_IsLittleEndian
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::Collections::DataStreamWriter::get_IsLittleEndian)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f6328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(),
                                                                               "get_IsLittleEndian", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::DataStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62f73bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62f74c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)(uint8_t*, int32_t)>(
    &::Unity::Collections::DataStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62f7524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.AsNativeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::Unity::Collections::DataStreamWriter::*)()>(
    &::Unity::Collections::DataStreamWriter::AsNativeArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x62f75ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "AsNativeArray",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Collections::DataStreamWriter>, ::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamWriter::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62f7464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamWriter>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.ByteSwap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(int16_t)>(&::Unity::Collections::DataStreamWriter::ByteSwap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f7654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "ByteSwap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.ByteSwap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::DataStreamWriter::ByteSwap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f7660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "ByteSwap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_IsCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f7668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "get_IsCreated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_HasFailedWrites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_HasFailedWrites)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f7678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(),
                                                                               "get_HasFailedWrites", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_Capacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f7688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "get_Capacity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_Length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62f7604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "get_Length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_LengthInBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_LengthInBits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x62f76d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(),
                                                                               "get_LengthInBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.SyncBitData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::SyncBitData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x62f7690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "SyncBitData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::Flush)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x62f771c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "Flush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteBytesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint8_t*, int32_t)>(
    &::Unity::Collections::DataStreamWriter::WriteBytesInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x62f7768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteBytesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint8_t)>(&::Unity::Collections::DataStreamWriter::WriteByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f7828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteByte", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f7848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteBytes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::System::Span_1<uint8_t>)>(
    &::Unity::Collections::DataStreamWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62f78a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteBytes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int16_t)>(&::Unity::Collections::DataStreamWriter::WriteShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f7918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteShort", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteUShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint16_t)>(&::Unity::Collections::DataStreamWriter::WriteUShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f7938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteUShort", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int32_t)>(&::Unity::Collections::DataStreamWriter::WriteInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f7958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteInt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t)>(&::Unity::Collections::DataStreamWriter::WriteUInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f7978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteUInt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int64_t)>(&::Unity::Collections::DataStreamWriter::WriteLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62f7998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteLong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteULong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint64_t)>(&::Unity::Collections::DataStreamWriter::WriteULong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62f79b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteULong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteShortNetworkByteOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int16_t)>(
    &::Unity::Collections::DataStreamWriter::WriteShortNetworkByteOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f79d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteShortNetworkByteOrder",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteUShortNetworkByteOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint16_t)>(
    &::Unity::Collections::DataStreamWriter::WriteUShortNetworkByteOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f79f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteUShortNetworkByteOrder",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteIntNetworkByteOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int32_t)>(
    &::Unity::Collections::DataStreamWriter::WriteIntNetworkByteOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f7a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteIntNetworkByteOrder",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteUIntNetworkByteOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t)>(
    &::Unity::Collections::DataStreamWriter::WriteUIntNetworkByteOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f7a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteUIntNetworkByteOrder",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(float_t)>(&::Unity::Collections::DataStreamWriter::WriteFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f7a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFloat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(double_t)>(&::Unity::Collections::DataStreamWriter::WriteDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f7a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteDouble", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.FlushBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::FlushBits)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62f7aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "FlushBits",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteRawBitsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)(uint32_t, int32_t)>(
    &::Unity::Collections::DataStreamWriter::WriteRawBitsInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f7af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteRawBitsInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteRawBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t, int32_t)>(
    &::Unity::Collections::DataStreamWriter::WriteRawBits)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62f7b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteRawBits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedUInt)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x62f7b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedUInt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedULong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint64_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedULong)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62f7c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedULong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int32_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedInt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f7cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedInt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int64_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedLong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f7cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedLong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(float_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFloat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f7ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFloat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(double_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f7d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedDouble", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedUIntDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    uint32_t, uint32_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamWriter::WritePackedUIntDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f7e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedUIntDelta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedIntDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    int32_t, int32_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamWriter::WritePackedIntDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f7e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedIntDelta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedLongDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    int64_t, int64_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamWriter::WritePackedLongDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f7e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedLongDelta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedULongDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    uint64_t, uint64_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamWriter::WritePackedULongDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f7e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedULongDelta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFloatDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    float_t, float_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamWriter::WritePackedFloatDelta)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62f7cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFloatDelta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedDoubleDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    double_t, double_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamWriter::WritePackedDoubleDelta)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62f7d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedDoubleDelta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString32)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f7e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f7e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString128)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f7e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString512
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString512)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f7ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString512", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString4096
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString4096)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f7eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString4096", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString32Delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    ::Unity::Collections::FixedString32Bytes, ::Unity::Collections::FixedString32Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString32Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f7ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString32Delta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString64Delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    ::Unity::Collections::FixedString64Bytes, ::Unity::Collections::FixedString64Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString64Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f8030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString64Delta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString128Delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    ::Unity::Collections::FixedString128Bytes, ::Unity::Collections::FixedString128Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString128Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f8044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString128Delta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString512Delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    ::Unity::Collections::FixedString512Bytes, ::Unity::Collections::FixedString512Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString512Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f8058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString512Delta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString4096Delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    ::Unity::Collections::FixedString4096Bytes, ::Unity::Collections::FixedString4096Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString4096Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f806c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString4096Delta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedStringDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    uint8_t*, uint32_t, uint8_t*, uint32_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamWriter::WritePackedFixedStringDelta)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x62f7ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedStringDelta", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f8080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.CheckRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f808c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "CheckRead",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.CheckWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::CheckWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f8090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "CheckWrite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.CheckAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::DataStreamWriter::CheckAllocator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x62f8094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "CheckAllocator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.CheckBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, int32_t)>(&::Unity::Collections::DataStreamWriter::CheckBits)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x62f80ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "CheckBits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool Unity::Collections::DataStreamWriter::get_IsLittleEndian() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(),
                                                                             "get_IsLittleEndian", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::_ctor(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length, allocator);
}
inline void Unity::Collections::DataStreamWriter::_ctor(::Unity::Collections::NativeArray_1<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Unity::Collections::DataStreamWriter::_ctor(uint8_t* data, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> Unity::Collections::DataStreamWriter::AsNativeArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "AsNativeArray",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::Initialize(::ByRef<::Unity::Collections::DataStreamWriter> self, ::Unity::Collections::NativeArray_1<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamWriter>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, data);
}
inline int16_t Unity::Collections::DataStreamWriter::ByteSwap(int16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "ByteSwap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, val);
}
inline int32_t Unity::Collections::DataStreamWriter::ByteSwap(int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "ByteSwap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, val);
}
inline bool Unity::Collections::DataStreamWriter::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "get_IsCreated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Collections::DataStreamWriter::get_HasFailedWrites() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(),
                                                                             "get_HasFailedWrites", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamWriter::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "get_Capacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamWriter::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamWriter::get_LengthInBits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "get_LengthInBits",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::SyncBitData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "SyncBitData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "Flush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Collections::DataStreamWriter::WriteBytesInternal(uint8_t* data, int32_t bytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteBytesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, bytes);
}
inline bool Unity::Collections::DataStreamWriter::WriteByte(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteBytes(::Unity::Collections::NativeArray_1<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteBytes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteBytes(::System::Span_1<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteBytes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteShort(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteShort",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteUShort(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteUShort", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteInt(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteInt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteUInt(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteUInt", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteLong(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteLong",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteULong(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteULong", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteShortNetworkByteOrder(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteShortNetworkByteOrder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteUShortNetworkByteOrder(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteUShortNetworkByteOrder",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteIntNetworkByteOrder(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteIntNetworkByteOrder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteUIntNetworkByteOrder(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteUIntNetworkByteOrder",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFloat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteDouble(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteDouble", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void Unity::Collections::DataStreamWriter::FlushBits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "FlushBits",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::WriteRawBitsInternal(uint32_t value, int32_t numbits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteRawBitsInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, numbits);
}
inline bool Unity::Collections::DataStreamWriter::WriteRawBits(uint32_t value, int32_t numbits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteRawBits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, numbits);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedUInt(uint32_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedUInt", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedULong(uint64_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedULong", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedInt(int32_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedInt", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedLong(int64_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedLong", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFloat(float_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFloat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedDouble(double_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedDouble", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedUIntDelta(uint32_t value, uint32_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedUIntDelta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedIntDelta(int32_t value, int32_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedIntDelta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedLongDelta(int64_t value, int64_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedLongDelta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedULongDelta(uint64_t value, uint64_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedULongDelta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFloatDelta(float_t value, float_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFloatDelta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedDoubleDelta(double_t value, double_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedDoubleDelta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString32(::Unity::Collections::FixedString32Bytes str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString64(::Unity::Collections::FixedString64Bytes str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString64", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString128(::Unity::Collections::FixedString128Bytes str) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString128", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString512(::Unity::Collections::FixedString512Bytes str) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString512", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString4096(::Unity::Collections::FixedString4096Bytes str) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WriteFixedString4096", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString32Delta(::Unity::Collections::FixedString32Bytes str, ::Unity::Collections::FixedString32Bytes baseline,
                                                                                ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString32Delta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString64Delta(::Unity::Collections::FixedString64Bytes str, ::Unity::Collections::FixedString64Bytes baseline,
                                                                                ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString64Delta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString128Delta(::Unity::Collections::FixedString128Bytes str, ::Unity::Collections::FixedString128Bytes baseline,
                                                                                 ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString128Delta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString512Delta(::Unity::Collections::FixedString512Bytes str, ::Unity::Collections::FixedString512Bytes baseline,
                                                                                 ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString512Delta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString4096Delta(::Unity::Collections::FixedString4096Bytes str, ::Unity::Collections::FixedString4096Bytes baseline,
                                                                                  ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedString4096Delta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedStringDelta(uint8_t* data, uint32_t length, uint8_t* baseData, uint32_t baseLength,
                                                                              ::ByRef<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "WritePackedFixedStringDelta", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, length, baseData, baseLength, model);
}
inline void Unity::Collections::DataStreamWriter::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "CheckRead",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::CheckWrite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "CheckWrite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::CheckAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "CheckAllocator", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, allocator);
}
inline void Unity::Collections::DataStreamWriter::CheckBits(uint32_t value, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamWriter>::get(), "CheckBits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, numBits);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::DataStreamWriter_StreamData", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SendHandleData", ty:
// "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::DataStreamWriter::DataStreamWriter(::Unity::Collections::DataStreamWriter_StreamData m_Data, ::System::IntPtr m_SendHandleData) noexcept {
  this->m_Data = m_Data;
  this->m_SendHandleData = m_SendHandleData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::DataStreamWriter::DataStreamWriter() {}
