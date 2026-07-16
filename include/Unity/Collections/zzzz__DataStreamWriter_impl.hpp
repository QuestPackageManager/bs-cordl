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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Collections::DataStreamWriter::get_IsLittleEndian)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a718c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_IsLittleEndian", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::DataStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64a8220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64a8328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)(uint8_t*, int32_t)>(&::Unity::Collections::DataStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64a8388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { ".ctor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.AsNativeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::Unity::Collections::DataStreamWriter::*)()>(
    &::Unity::Collections::DataStreamWriter::AsNativeArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64a8410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "AsNativeArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::DataStreamWriter>, ::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamWriter::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64a82c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                            { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamWriter>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.ByteSwap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int16_t)>(&::Unity::Collections::DataStreamWriter::ByteSwap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a84b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "ByteSwap", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.ByteSwap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::DataStreamWriter::ByteSwap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a84c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "ByteSwap", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a84cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_HasFailedWrites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_HasFailedWrites)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a84dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_HasFailedWrites", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a84ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_Capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_Length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64a8468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.get_LengthInBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::get_LengthInBits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64a8534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_LengthInBits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.SyncBitData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::SyncBitData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64a84f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "SyncBitData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::Flush)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64a8580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteBytesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint8_t*, int32_t)>(&::Unity::Collections::DataStreamWriter::WriteBytesInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x64a85cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteBytesInternal", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint8_t)>(&::Unity::Collections::DataStreamWriter::WriteByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a868c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a86ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteBytes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::System::Span_1<uint8_t>)>(&::Unity::Collections::DataStreamWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64a8708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int16_t)>(&::Unity::Collections::DataStreamWriter::WriteShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a877c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteShort", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteUShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint16_t)>(&::Unity::Collections::DataStreamWriter::WriteUShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a879c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteUShort", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int32_t)>(&::Unity::Collections::DataStreamWriter::WriteInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a87bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteInt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t)>(&::Unity::Collections::DataStreamWriter::WriteUInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a87dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteUInt", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int64_t)>(&::Unity::Collections::DataStreamWriter::WriteLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a87fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteLong", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint64_t)>(&::Unity::Collections::DataStreamWriter::WriteULong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a8818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteULong", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteShortNetworkByteOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int16_t)>(&::Unity::Collections::DataStreamWriter::WriteShortNetworkByteOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a8834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteShortNetworkByteOrder", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteUShortNetworkByteOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint16_t)>(&::Unity::Collections::DataStreamWriter::WriteUShortNetworkByteOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a885c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteUShortNetworkByteOrder", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteIntNetworkByteOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int32_t)>(&::Unity::Collections::DataStreamWriter::WriteIntNetworkByteOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a8884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteIntNetworkByteOrder", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteUIntNetworkByteOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t)>(&::Unity::Collections::DataStreamWriter::WriteUIntNetworkByteOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a88a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteUIntNetworkByteOrder", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(float_t)>(&::Unity::Collections::DataStreamWriter::WriteFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a88cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFloat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(double_t)>(&::Unity::Collections::DataStreamWriter::WriteDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a88ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteDouble", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.FlushBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::FlushBits)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64a890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "FlushBits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteRawBitsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)(uint32_t, int32_t)>(&::Unity::Collections::DataStreamWriter::WriteRawBitsInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a8954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteRawBitsInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteRawBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t, int32_t)>(&::Unity::Collections::DataStreamWriter::WriteRawBits)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64a8978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteRawBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedUInt)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x64a89dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedUInt", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint64_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedULong)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64a8ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedULong", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int32_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedInt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a8b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int64_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedLong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a8b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedLong", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(float_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFloat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a8b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedFloat", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(double_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a8bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedDouble", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedUIntDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint32_t, uint32_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedUIntDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                            { "WritePackedUIntDelta", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedIntDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int32_t, int32_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedIntDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                            { "WritePackedIntDelta", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedLongDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(int64_t, int64_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedLongDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                            { "WritePackedLongDelta", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedULongDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(uint64_t, uint64_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedULongDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                            { "WritePackedULongDelta", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFloatDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(float_t, float_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFloatDelta)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64a8b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                            { "WritePackedFloatDelta", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedDoubleDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(double_t, double_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedDoubleDelta)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64a8bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                            { "WritePackedDoubleDelta", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString32)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a8ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString32", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a8cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString64", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString128)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a8cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString128", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString512
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString512)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a8d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString512", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WriteFixedString4096
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::DataStreamWriter::WriteFixedString4096)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a8d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString4096", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString32Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString32Bytes, ::Unity::Collections::FixedString32Bytes,
                                                                                                        ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString32Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedFixedString32Delta",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString32Bytes>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString64Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString64Bytes, ::Unity::Collections::FixedString64Bytes,
                                                                                                        ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString64Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedFixedString64Delta",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString64Bytes>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString128Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString128Bytes, ::Unity::Collections::FixedString128Bytes,
                                                                                                        ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString128Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedFixedString128Delta",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString128Bytes>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString512Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString512Bytes, ::Unity::Collections::FixedString512Bytes,
                                                                                                        ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString512Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedFixedString512Delta",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString512Bytes>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedString4096Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(::Unity::Collections::FixedString4096Bytes, ::Unity::Collections::FixedString4096Bytes,
                                                                                                        ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamWriter::WritePackedFixedString4096Delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a8ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                             { "WritePackedFixedString4096Delta",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.WritePackedFixedStringDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamWriter::*)(
    uint8_t*, uint32_t, uint8_t*, uint32_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamWriter::WritePackedFixedStringDelta)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x64a8d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WritePackedFixedStringDelta",
                                                                                         {},
                                                                                         { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(),
                                                                                           ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a8ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.CheckRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a8ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "CheckRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.CheckWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamWriter::*)()>(&::Unity::Collections::DataStreamWriter::CheckWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a8ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "CheckWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.CheckAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::DataStreamWriter::CheckAllocator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64a8ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                                                           { "CheckAllocator", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamWriter.CheckBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, int32_t)>(&::Unity::Collections::DataStreamWriter::CheckBits)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x64a8f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "CheckBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool Unity::Collections::DataStreamWriter::get_IsLittleEndian() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_IsLittleEndian", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::_ctor(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator);
}
inline void Unity::Collections::DataStreamWriter::_ctor(::Unity::Collections::NativeArray_1<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline void Unity::Collections::DataStreamWriter::_ctor(uint8_t* data, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { ".ctor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, length);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> Unity::Collections::DataStreamWriter::AsNativeArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "AsNativeArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::Initialize(::by_ref<::Unity::Collections::DataStreamWriter> self, ::Unity::Collections::NativeArray_1<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                       { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamWriter>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, data);
}
inline int16_t Unity::Collections::DataStreamWriter::ByteSwap(int16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "ByteSwap", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, val);
}
inline int32_t Unity::Collections::DataStreamWriter::ByteSwap(int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "ByteSwap", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val);
}
inline bool Unity::Collections::DataStreamWriter::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::DataStreamWriter::get_HasFailedWrites() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_HasFailedWrites", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamWriter::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamWriter::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamWriter::get_LengthInBits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "get_LengthInBits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::SyncBitData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "SyncBitData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Collections::DataStreamWriter::WriteBytesInternal(uint8_t* data, int32_t bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteBytesInternal", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, data, bytes);
}
inline bool Unity::Collections::DataStreamWriter::WriteByte(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteBytes(::Unity::Collections::NativeArray_1<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteBytes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteBytes(::System::Span_1<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteShort(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteShort", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteUShort(uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteUShort", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteInt(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteInt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteUInt(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteUInt", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteLong(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteLong", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteULong(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteULong", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteShortNetworkByteOrder(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteShortNetworkByteOrder", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteUShortNetworkByteOrder(uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteUShortNetworkByteOrder", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteIntNetworkByteOrder(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteIntNetworkByteOrder", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteUIntNetworkByteOrder(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteUIntNetworkByteOrder", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFloat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Unity::Collections::DataStreamWriter::WriteDouble(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteDouble", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline void Unity::Collections::DataStreamWriter::FlushBits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "FlushBits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::WriteRawBitsInternal(uint32_t value, int32_t numbits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteRawBitsInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, numbits);
}
inline bool Unity::Collections::DataStreamWriter::WriteRawBits(uint32_t value, int32_t numbits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteRawBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, numbits);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedUInt(uint32_t value, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedUInt", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedULong(uint64_t value, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedULong", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedInt(int32_t value, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedLong(int64_t value, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedLong", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFloat(float_t value, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedFloat", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedDouble(double_t value, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedDouble", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedUIntDelta(uint32_t value, uint32_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                          { "WritePackedUIntDelta", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedIntDelta(int32_t value, int32_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                          { "WritePackedIntDelta", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedLongDelta(int64_t value, int64_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                          { "WritePackedLongDelta", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedULongDelta(uint64_t value, uint64_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                          { "WritePackedULongDelta", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFloatDelta(float_t value, float_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                          { "WritePackedFloatDelta", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedDoubleDelta(double_t value, double_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                          { "WritePackedDoubleDelta", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString32(::Unity::Collections::FixedString32Bytes str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString32", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString64(::Unity::Collections::FixedString64Bytes str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString64", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString128(::Unity::Collections::FixedString128Bytes str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString128", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString512(::Unity::Collections::FixedString512Bytes str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString512", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WriteFixedString4096(::Unity::Collections::FixedString4096Bytes str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WriteFixedString4096", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString32Delta(::Unity::Collections::FixedString32Bytes str, ::Unity::Collections::FixedString32Bytes baseline,
                                                                                ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedFixedString32Delta",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString32Bytes>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString64Delta(::Unity::Collections::FixedString64Bytes str, ::Unity::Collections::FixedString64Bytes baseline,
                                                                                ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedFixedString64Delta",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString64Bytes>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString128Delta(::Unity::Collections::FixedString128Bytes str, ::Unity::Collections::FixedString128Bytes baseline,
                                                                                 ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedFixedString128Delta",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString128Bytes>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString512Delta(::Unity::Collections::FixedString512Bytes str, ::Unity::Collections::FixedString512Bytes baseline,
                                                                                 ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedFixedString512Delta",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString512Bytes>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedString4096Delta(::Unity::Collections::FixedString4096Bytes str, ::Unity::Collections::FixedString4096Bytes baseline,
                                                                                  ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                           { "WritePackedFixedString4096Delta",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>(), ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str, baseline, model);
}
inline bool Unity::Collections::DataStreamWriter::WritePackedFixedStringDelta(uint8_t* data, uint32_t length, uint8_t* baseData, uint32_t baseLength,
                                                                              ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "WritePackedFixedStringDelta",
                                                                                       {},
                                                                                       { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(),
                                                                                         ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, data, length, baseData, baseLength, model);
}
inline void Unity::Collections::DataStreamWriter::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::CheckWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "CheckWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamWriter::CheckAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(),
                                                                                         { "CheckAllocator", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allocator);
}
inline void Unity::Collections::DataStreamWriter::CheckBits(uint32_t value, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamWriter>(), { "CheckBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, numBits);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::DataStreamWriter_StreamData", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SendHandleData", ty:
// "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::DataStreamWriter::DataStreamWriter(::Unity::Collections::DataStreamWriter_StreamData m_Data, ::System::IntPtr m_SendHandleData) noexcept {
  this->m_Data = m_Data;
  this->m_SendHandleData = m_SendHandleData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::DataStreamWriter::DataStreamWriter() {}
