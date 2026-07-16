#pragma once
// IWYU pragma private; include "Unity/Collections/DataStreamReader.hpp"
#include "Unity/Collections/zzzz__DataStreamReader_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__DataStreamReader_def.hpp"
#include "Unity/Collections/zzzz__FixedString128Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString4096Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__StreamCompressionModel_def.hpp"
// Ctor Parameters [CppParam { name: "m_ReadByteIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BitIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_BitBuffer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FailedReads", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::DataStreamReader_Context::DataStreamReader_Context(int32_t m_ReadByteIndex, int32_t m_BitIndex, uint64_t m_BitBuffer, int32_t m_FailedReads) noexcept {
  this->m_ReadByteIndex = m_ReadByteIndex;
  this->m_BitIndex = m_BitIndex;
  this->m_BitBuffer = m_BitBuffer;
  this->m_FailedReads = m_FailedReads;
}
// Ctor Parameters []
constexpr ::Unity::Collections::DataStreamReader_Context::DataStreamReader_Context() {}
//  Writing Method size for method: ::Unity::Collections::DataStreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamReader::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a70cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::DataStreamReader>, ::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamReader::Initialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a7128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                            { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.get_IsLittleEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Collections::DataStreamReader::get_IsLittleEndian)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a7184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "get_IsLittleEndian", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ByteSwap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int16_t)>(&::Unity::Collections::DataStreamReader::ByteSwap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a7194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ByteSwap", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ByteSwap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::DataStreamReader::ByteSwap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a71a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ByteSwap", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.get_HasFailedReads
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::get_HasFailedReads)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a71a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "get_HasFailedReads", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a71b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a71c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadBytesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamReader::*)(uint8_t*, int32_t)>(&::Unity::Collections::DataStreamReader::ReadBytesInternal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x64a71d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadBytesInternal", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamReader::ReadBytes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a72dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadBytes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamReader::*)(::System::Span_1<uint8_t>)>(&::Unity::Collections::DataStreamReader::ReadBytes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64a7338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.GetBytesRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::GetBytesRead)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a72bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "GetBytesRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.GetBitsRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::GetBitsRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a73ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "GetBitsRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.SeekSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamReader::*)(int32_t)>(&::Unity::Collections::DataStreamReader::SeekSet)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a73bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "SeekSet", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a73e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a7404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadUShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadUShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a7424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadUShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a7444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadUInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a7464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadUInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a7484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadLong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadULong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a74a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadULong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::Flush)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a72c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadShortNetworkByteOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadShortNetworkByteOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a74bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadShortNetworkByteOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadUShortNetworkByteOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadUShortNetworkByteOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a74e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadUShortNetworkByteOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadIntNetworkByteOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadIntNetworkByteOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a750c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadIntNetworkByteOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadUIntNetworkByteOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadUIntNetworkByteOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a7530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadUIntNetworkByteOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a7554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFloat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadDouble)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a7574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedUInt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a7590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                           { "ReadPackedUInt", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedUIntInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(int32_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedUIntInternal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x64a759c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                { "ReadPackedUIntInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.FillBitBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::FillBitBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64a7658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "FillBitBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadRawBitsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(int32_t)>(&::Unity::Collections::DataStreamReader::ReadRawBitsInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64a76c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadRawBitsInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadRawBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(int32_t)>(&::Unity::Collections::DataStreamReader::ReadRawBits)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a7704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadRawBits", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Unity::Collections::DataStreamReader::*)(::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedULong)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64a7760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                           { "ReadPackedULong", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)(::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedInt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a77b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                           { "ReadPackedInt", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::DataStreamReader::*)(::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a77d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                           { "ReadPackedLong", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Collections::DataStreamReader::*)(::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedFloat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a77f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                           { "ReadPackedFloat", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Collections::DataStreamReader::*)(::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a7878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                           { "ReadPackedDouble", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedIntDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)(int32_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedIntDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a7960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                             { "ReadPackedIntDelta", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedUIntDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(uint32_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedUIntDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a7988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                             { "ReadPackedUIntDelta", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedLongDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::DataStreamReader::*)(int64_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedLongDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a79b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                             { "ReadPackedLongDelta", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedULongDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Unity::Collections::DataStreamReader::*)(uint64_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedULongDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64a79d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                { "ReadPackedULongDelta", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFloatDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Collections::DataStreamReader::*)(float_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedFloatDelta)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64a77f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                             { "ReadPackedFloatDelta", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedDoubleDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Collections::DataStreamReader::*)(double_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedDoubleDelta)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x64a7880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                { "ReadPackedDoubleDelta", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString32Bytes (::Unity::Collections::DataStreamReader::*)()>(
    &::Unity::Collections::DataStreamReader::ReadFixedString32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64a7a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString64Bytes (::Unity::Collections::DataStreamReader::*)()>(
    &::Unity::Collections::DataStreamReader::ReadFixedString64)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64a7ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString128Bytes (::Unity::Collections::DataStreamReader::*)()>(
    &::Unity::Collections::DataStreamReader::ReadFixedString128)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x64a7b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString128", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString512
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString512Bytes (::Unity::Collections::DataStreamReader::*)()>(
    &::Unity::Collections::DataStreamReader::ReadFixedString512)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64a7ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString512", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString4096
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString4096Bytes (::Unity::Collections::DataStreamReader::*)()>(
    &::Unity::Collections::DataStreamReader::ReadFixedString4096)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64a7c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString4096", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Collections::DataStreamReader::ReadFixedString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a7cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedStringInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)(uint8_t*, int32_t)>(&::Unity::Collections::DataStreamReader::ReadFixedStringInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a7a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedStringInternal", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString32Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString32Bytes (::Unity::Collections::DataStreamReader::*)(
    ::Unity::Collections::FixedString32Bytes, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString32Delta)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64a7d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
            { "ReadPackedFixedString32Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString64Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString64Bytes (::Unity::Collections::DataStreamReader::*)(
    ::Unity::Collections::FixedString64Bytes, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString64Delta)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64a7ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
            { "ReadPackedFixedString64Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString128Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString128Bytes (::Unity::Collections::DataStreamReader::*)(
    ::Unity::Collections::FixedString128Bytes, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString128Delta)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64a7f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
            { "ReadPackedFixedString128Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString512Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString512Bytes (::Unity::Collections::DataStreamReader::*)(
    ::Unity::Collections::FixedString512Bytes, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString512Delta)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64a7fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
            { "ReadPackedFixedString512Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString4096Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString4096Bytes (::Unity::Collections::DataStreamReader::*)(
    ::Unity::Collections::FixedString4096Bytes, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString4096Delta)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64a806c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
            { "ReadPackedFixedString4096Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedStringDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint8_t>,
                                                                                                            ::by_ref<::Unity::Collections::StreamCompressionModel>)>(
    &::Unity::Collections::DataStreamReader::ReadPackedFixedStringDelta)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64a8114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                             { "ReadPackedFixedStringDelta",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedStringDeltaInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)(
    uint8_t*, int32_t, uint8_t*, uint16_t, ::by_ref<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedStringDeltaInternal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x64a7d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadPackedFixedStringDeltaInternal",
                                                                                         {},
                                                                                         { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                                                                                           ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.CheckRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a8198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "CheckRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.CheckBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::DataStreamReader::CheckBits)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64a819c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "CheckBits", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::DataStreamReader::_ctor(::Unity::Collections::NativeArray_1<uint8_t> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
inline void Unity::Collections::DataStreamReader::Initialize(::by_ref<::Unity::Collections::DataStreamReader> self, ::Unity::Collections::NativeArray_1<uint8_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                       { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::DataStreamReader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, array);
}
inline bool Unity::Collections::DataStreamReader::get_IsLittleEndian() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "get_IsLittleEndian", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int16_t Unity::Collections::DataStreamReader::ByteSwap(int16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ByteSwap", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, val);
}
inline int32_t Unity::Collections::DataStreamReader::ByteSwap(int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ByteSwap", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val);
}
inline bool Unity::Collections::DataStreamReader::get_HasFailedReads() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "get_HasFailedReads", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamReader::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Collections::DataStreamReader::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamReader::ReadBytesInternal(uint8_t* data, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadBytesInternal", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, length);
}
inline void Unity::Collections::DataStreamReader::ReadBytes(::Unity::Collections::NativeArray_1<uint8_t> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadBytes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
inline void Unity::Collections::DataStreamReader::ReadBytes(::System::Span_1<uint8_t> span) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, span);
}
inline int32_t Unity::Collections::DataStreamReader::GetBytesRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "GetBytesRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamReader::GetBitsRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "GetBitsRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamReader::SeekSet(int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "SeekSet", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos);
}
inline uint8_t Unity::Collections::DataStreamReader::ReadByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline int16_t Unity::Collections::DataStreamReader::ReadShort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadUShort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadUShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamReader::ReadInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadUInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadUInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline int64_t Unity::Collections::DataStreamReader::ReadLong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadLong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline uint64_t Unity::Collections::DataStreamReader::ReadULong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadULong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamReader::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int16_t Unity::Collections::DataStreamReader::ReadShortNetworkByteOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadShortNetworkByteOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadUShortNetworkByteOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadUShortNetworkByteOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamReader::ReadIntNetworkByteOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadIntNetworkByteOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadUIntNetworkByteOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadUIntNetworkByteOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline float_t Unity::Collections::DataStreamReader::ReadFloat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFloat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline double_t Unity::Collections::DataStreamReader::ReadDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadPackedUInt(::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                         { "ReadPackedUInt", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, model);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadPackedUIntInternal(int32_t maxSymbolLength, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                           { "ReadPackedUIntInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, maxSymbolLength, model);
}
inline void Unity::Collections::DataStreamReader::FillBitBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "FillBitBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadRawBitsInternal(int32_t numbits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadRawBitsInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, numbits);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadRawBits(int32_t numbits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadRawBits", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, numbits);
}
inline uint64_t Unity::Collections::DataStreamReader::ReadPackedULong(::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                         { "ReadPackedULong", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, model);
}
inline int32_t Unity::Collections::DataStreamReader::ReadPackedInt(::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                         { "ReadPackedInt", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, model);
}
inline int64_t Unity::Collections::DataStreamReader::ReadPackedLong(::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                         { "ReadPackedLong", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, model);
}
inline float_t Unity::Collections::DataStreamReader::ReadPackedFloat(::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                         { "ReadPackedFloat", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, model);
}
inline double_t Unity::Collections::DataStreamReader::ReadPackedDouble(::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                                                         { "ReadPackedDouble", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, model);
}
inline int32_t Unity::Collections::DataStreamReader::ReadPackedIntDelta(int32_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                           { "ReadPackedIntDelta", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, baseline, model);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadPackedUIntDelta(uint32_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                           { "ReadPackedUIntDelta", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, baseline, model);
}
inline int64_t Unity::Collections::DataStreamReader::ReadPackedLongDelta(int64_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                           { "ReadPackedLongDelta", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, baseline, model);
}
inline uint64_t Unity::Collections::DataStreamReader::ReadPackedULongDelta(uint64_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                           { "ReadPackedULongDelta", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, baseline, model);
}
inline float_t Unity::Collections::DataStreamReader::ReadPackedFloatDelta(float_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                           { "ReadPackedFloatDelta", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, baseline, model);
}
inline double_t Unity::Collections::DataStreamReader::ReadPackedDoubleDelta(double_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                           { "ReadPackedDoubleDelta", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString32Bytes Unity::Collections::DataStreamReader::ReadFixedString32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString32Bytes>(*this, ___internal_method);
}
inline ::Unity::Collections::FixedString64Bytes Unity::Collections::DataStreamReader::ReadFixedString64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString64Bytes>(*this, ___internal_method);
}
inline ::Unity::Collections::FixedString128Bytes Unity::Collections::DataStreamReader::ReadFixedString128() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString128", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString128Bytes>(*this, ___internal_method);
}
inline ::Unity::Collections::FixedString512Bytes Unity::Collections::DataStreamReader::ReadFixedString512() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString512", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString512Bytes>(*this, ___internal_method);
}
inline ::Unity::Collections::FixedString4096Bytes Unity::Collections::DataStreamReader::ReadFixedString4096() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString4096", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString4096Bytes>(*this, ___internal_method);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadFixedString(::Unity::Collections::NativeArray_1<uint8_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedString", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, array);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadFixedStringInternal(uint8_t* data, int32_t maxLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadFixedStringInternal", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, data, maxLength);
}
inline ::Unity::Collections::FixedString32Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString32Delta(::Unity::Collections::FixedString32Bytes baseline,
                                                                                                                   ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
          { "ReadPackedFixedString32Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString32Bytes>(*this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString64Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString64Delta(::Unity::Collections::FixedString64Bytes baseline,
                                                                                                                   ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
          { "ReadPackedFixedString64Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString64Bytes>(*this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString128Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString128Delta(::Unity::Collections::FixedString128Bytes baseline,
                                                                                                                     ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
          { "ReadPackedFixedString128Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString128Bytes>(*this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString512Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString512Delta(::Unity::Collections::FixedString512Bytes baseline,
                                                                                                                     ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
          { "ReadPackedFixedString512Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString512Bytes>(*this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString4096Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString4096Delta(::Unity::Collections::FixedString4096Bytes baseline,
                                                                                                                       ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::DataStreamReader>(),
          { "ReadPackedFixedString4096Delta", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>(), ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString4096Bytes>(*this, ___internal_method, baseline, model);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadPackedFixedStringDelta(::Unity::Collections::NativeArray_1<uint8_t> data, ::Unity::Collections::NativeArray_1<uint8_t> baseData,
                                                                                 ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(),
                                                           { "ReadPackedFixedStringDelta",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, data, baseData, model);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadPackedFixedStringDeltaInternal(uint8_t* data, int32_t maxLength, uint8_t* baseData, uint16_t baseLength,
                                                                                         ::by_ref<::Unity::Collections::StreamCompressionModel> model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "ReadPackedFixedStringDeltaInternal",
                                                                                       {},
                                                                                       { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>(),
                                                                                         ::i2c::type_of<::by_ref<::Unity::Collections::StreamCompressionModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, data, maxLength, baseData, baseLength, model);
}
inline void Unity::Collections::DataStreamReader::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::DataStreamReader::CheckBits(int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DataStreamReader>(), { "CheckBits", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numBits);
}
// Ctor Parameters [CppParam { name: "m_BufferPtr", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Context", ty: "::Unity::Collections::DataStreamReader_Context",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::DataStreamReader::DataStreamReader(uint8_t* m_BufferPtr, ::Unity::Collections::DataStreamReader_Context m_Context, int32_t m_Length) noexcept {
  this->m_BufferPtr = m_BufferPtr;
  this->m_Context = m_Context;
  this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::Unity::Collections::DataStreamReader::DataStreamReader() {}
