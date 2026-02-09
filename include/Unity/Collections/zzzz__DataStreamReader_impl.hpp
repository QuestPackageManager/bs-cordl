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
// Ctor Parameters [CppParam { name: "m_ReadByteIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BitIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BitBuffer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FailedReads", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::DataStreamReader_Context::DataStreamReader_Context(int32_t  m_ReadByteIndex, int32_t  m_BitIndex, uint64_t  m_BitBuffer, int32_t  m_FailedReads) noexcept  {
this->m_ReadByteIndex = m_ReadByteIndex;
this->m_BitIndex = m_BitIndex;
this->m_BitBuffer = m_BitBuffer;
this->m_FailedReads = m_FailedReads;
}
// Ctor Parameters []
constexpr ::Unity::Collections::DataStreamReader_Context::DataStreamReader_Context()   {
}
//  Writing Method size for method: ::Unity::Collections::DataStreamReader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(&::Unity::Collections::DataStreamReader::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f6928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Collections::DataStreamReader>, ::Unity::Collections::NativeArray_1<uint8_t>)>(&::Unity::Collections::DataStreamReader::Initialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f6984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.get_IsLittleEndian
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::Collections::DataStreamReader::get_IsLittleEndian)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f69e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "get_IsLittleEndian",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ByteSwap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(int16_t)>(&::Unity::Collections::DataStreamReader::ByteSwap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f69f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ByteSwap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ByteSwap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::DataStreamReader::ByteSwap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f69fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ByteSwap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.get_HasFailedReads
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::get_HasFailedReads)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f6a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "get_HasFailedReads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.get_Length
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f6a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "get_Length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.get_IsCreated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f6a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "get_IsCreated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadBytesInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamReader::*)(uint8_t*, int32_t)>(&::Unity::Collections::DataStreamReader::ReadBytesInternal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x62f6a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadBytesInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(&::Unity::Collections::DataStreamReader::ReadBytes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f6b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamReader::*)(::System::Span_1<uint8_t>)>(&::Unity::Collections::DataStreamReader::ReadBytes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62f6b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.GetBytesRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::GetBytesRead)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f6b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "GetBytesRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.GetBitsRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::GetBitsRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f6c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "GetBitsRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.SeekSet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamReader::*)(int32_t)>(&::Unity::Collections::DataStreamReader::SeekSet)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f6c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "SeekSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f6c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadShort
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f6c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadShort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadUShort
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadUShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f6c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadUShort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadInt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f6ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadUInt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadUInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f6cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadUInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadLong
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62f6ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadLong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadULong
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadULong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62f6cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadULong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::Flush)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f6b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "Flush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadShortNetworkByteOrder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadShortNetworkByteOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f6d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadShortNetworkByteOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadUShortNetworkByteOrder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadUShortNetworkByteOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f6d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadUShortNetworkByteOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadIntNetworkByteOrder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadIntNetworkByteOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f6d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadIntNetworkByteOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadUIntNetworkByteOrder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadUIntNetworkByteOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f6d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadUIntNetworkByteOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFloat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f6db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFloat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadDouble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadDouble)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62f6dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadDouble",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedUInt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedUInt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f6dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedUInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedUIntInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(int32_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedUIntInternal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62f6df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedUIntInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.FillBitBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::FillBitBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62f6eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "FillBitBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadRawBitsInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(int32_t)>(&::Unity::Collections::DataStreamReader::ReadRawBitsInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62f6f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadRawBitsInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadRawBits
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(int32_t)>(&::Unity::Collections::DataStreamReader::ReadRawBits)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f6f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadRawBits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedULong
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Unity::Collections::DataStreamReader::*)(::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedULong)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62f6fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedULong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedInt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)(::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedInt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f700c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedLong
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Collections::DataStreamReader::*)(::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62f7030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedLong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFloat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Collections::DataStreamReader::*)(::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFloat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f704c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFloat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedDouble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Unity::Collections::DataStreamReader::*)(::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f70d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedDouble",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedIntDelta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::DataStreamReader::*)(int32_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedIntDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f71bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedIntDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedUIntDelta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Collections::DataStreamReader::*)(uint32_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedUIntDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f71e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedUIntDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedLongDelta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Collections::DataStreamReader::*)(int64_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedLongDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f720c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedLongDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedULongDelta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Unity::Collections::DataStreamReader::*)(uint64_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedULongDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62f7234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedULongDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFloatDelta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Collections::DataStreamReader::*)(float_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFloatDelta)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62f7054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFloatDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedDoubleDelta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Unity::Collections::DataStreamReader::*)(double_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedDoubleDelta)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62f70dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedDoubleDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString32
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString32Bytes (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadFixedString32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62f725c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString32",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString64
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString64Bytes (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadFixedString64)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62f731c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString64",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString128
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString128Bytes (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadFixedString128)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62f738c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString128",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString512
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString512Bytes (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadFixedString512)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62f7404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString512",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString4096
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString4096Bytes (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::ReadFixedString4096)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x62f7488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString4096",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(&::Unity::Collections::DataStreamReader::ReadFixedString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f7514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadFixedStringInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)(uint8_t*, int32_t)>(&::Unity::Collections::DataStreamReader::ReadFixedStringInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f72c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedStringInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString32Delta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString32Bytes (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::FixedString32Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString32Delta)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62f7570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString32Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString64Delta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString64Bytes (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::FixedString64Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString64Delta)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62f7728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString64Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString128Delta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString128Bytes (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::FixedString128Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString128Delta)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62f77a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString128Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString512Delta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString512Bytes (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::FixedString512Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString512Delta)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x62f7828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString512Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedString4096Delta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FixedString4096Bytes (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::FixedString4096Bytes, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedString4096Delta)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62f78c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString4096Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedStringDelta
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)(::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint8_t>, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedStringDelta)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62f7970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedStringDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.ReadPackedFixedStringDeltaInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Unity::Collections::DataStreamReader::*)(uint8_t*, int32_t, uint8_t*, uint16_t, ::ByRef<::Unity::Collections::StreamCompressionModel>)>(&::Unity::Collections::DataStreamReader::ReadPackedFixedStringDeltaInternal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x62f75e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedStringDeltaInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.CheckRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DataStreamReader::*)()>(&::Unity::Collections::DataStreamReader::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f79f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "CheckRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DataStreamReader.CheckBits
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::Collections::DataStreamReader::CheckBits)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62f79f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "CheckBits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Collections::DataStreamReader::_ctor(::Unity::Collections::NativeArray_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
inline void Unity::Collections::DataStreamReader::Initialize(::ByRef<::Unity::Collections::DataStreamReader>  self, ::Unity::Collections::NativeArray_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::DataStreamReader>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, array);
}
inline bool Unity::Collections::DataStreamReader::get_IsLittleEndian()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "get_IsLittleEndian",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int16_t Unity::Collections::DataStreamReader::ByteSwap(int16_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ByteSwap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, val);
}
inline int32_t Unity::Collections::DataStreamReader::ByteSwap(int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ByteSwap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, val);
}
inline bool Unity::Collections::DataStreamReader::get_HasFailedReads()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "get_HasFailedReads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamReader::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "get_Length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Unity::Collections::DataStreamReader::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "get_IsCreated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamReader::ReadBytesInternal(uint8_t*  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadBytesInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length);
}
inline void Unity::Collections::DataStreamReader::ReadBytes(::Unity::Collections::NativeArray_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
inline void Unity::Collections::DataStreamReader::ReadBytes(::System::Span_1<uint8_t>  span)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, span);
}
inline int32_t Unity::Collections::DataStreamReader::GetBytesRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "GetBytesRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamReader::GetBitsRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "GetBitsRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamReader::SeekSet(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "SeekSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline uint8_t Unity::Collections::DataStreamReader::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline int16_t Unity::Collections::DataStreamReader::ReadShort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadShort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadUShort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadUShort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamReader::ReadInt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadUInt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadUInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline int64_t Unity::Collections::DataStreamReader::ReadLong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadLong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline uint64_t Unity::Collections::DataStreamReader::ReadULong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadULong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamReader::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "Flush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int16_t Unity::Collections::DataStreamReader::ReadShortNetworkByteOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadShortNetworkByteOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadUShortNetworkByteOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadUShortNetworkByteOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::DataStreamReader::ReadIntNetworkByteOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadIntNetworkByteOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadUIntNetworkByteOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadUIntNetworkByteOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline float_t Unity::Collections::DataStreamReader::ReadFloat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFloat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline double_t Unity::Collections::DataStreamReader::ReadDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadDouble",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadPackedUInt(::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedUInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, model);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadPackedUIntInternal(int32_t  maxSymbolLength, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedUIntInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, maxSymbolLength, model);
}
inline void Unity::Collections::DataStreamReader::FillBitBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "FillBitBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadRawBitsInternal(int32_t  numbits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadRawBitsInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, numbits);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadRawBits(int32_t  numbits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadRawBits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, numbits);
}
inline uint64_t Unity::Collections::DataStreamReader::ReadPackedULong(::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedULong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, model);
}
inline int32_t Unity::Collections::DataStreamReader::ReadPackedInt(::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, model);
}
inline int64_t Unity::Collections::DataStreamReader::ReadPackedLong(::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedLong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, model);
}
inline float_t Unity::Collections::DataStreamReader::ReadPackedFloat(::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFloat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, model);
}
inline double_t Unity::Collections::DataStreamReader::ReadPackedDouble(::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedDouble",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, model);
}
inline int32_t Unity::Collections::DataStreamReader::ReadPackedIntDelta(int32_t  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedIntDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, baseline, model);
}
inline uint32_t Unity::Collections::DataStreamReader::ReadPackedUIntDelta(uint32_t  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedUIntDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, baseline, model);
}
inline int64_t Unity::Collections::DataStreamReader::ReadPackedLongDelta(int64_t  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedLongDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, baseline, model);
}
inline uint64_t Unity::Collections::DataStreamReader::ReadPackedULongDelta(uint64_t  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedULongDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, baseline, model);
}
inline float_t Unity::Collections::DataStreamReader::ReadPackedFloatDelta(float_t  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFloatDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, baseline, model);
}
inline double_t Unity::Collections::DataStreamReader::ReadPackedDoubleDelta(double_t  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedDoubleDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString32Bytes Unity::Collections::DataStreamReader::ReadFixedString32()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString32",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString32Bytes, false>(this, ___internal_method);
}
inline ::Unity::Collections::FixedString64Bytes Unity::Collections::DataStreamReader::ReadFixedString64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString64",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString64Bytes, false>(this, ___internal_method);
}
inline ::Unity::Collections::FixedString128Bytes Unity::Collections::DataStreamReader::ReadFixedString128()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString128",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString128Bytes, false>(this, ___internal_method);
}
inline ::Unity::Collections::FixedString512Bytes Unity::Collections::DataStreamReader::ReadFixedString512()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString512",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString512Bytes, false>(this, ___internal_method);
}
inline ::Unity::Collections::FixedString4096Bytes Unity::Collections::DataStreamReader::ReadFixedString4096()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString4096",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString4096Bytes, false>(this, ___internal_method);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadFixedString(::Unity::Collections::NativeArray_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, array);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadFixedStringInternal(uint8_t*  data, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadFixedStringInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, data, maxLength);
}
inline ::Unity::Collections::FixedString32Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString32Delta(::Unity::Collections::FixedString32Bytes  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString32Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString32Bytes, false>(this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString64Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString64Delta(::Unity::Collections::FixedString64Bytes  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString64Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString64Bytes, false>(this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString128Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString128Delta(::Unity::Collections::FixedString128Bytes  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString128Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString128Bytes, false>(this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString512Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString512Delta(::Unity::Collections::FixedString512Bytes  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString512Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString512Bytes, false>(this, ___internal_method, baseline, model);
}
inline ::Unity::Collections::FixedString4096Bytes Unity::Collections::DataStreamReader::ReadPackedFixedString4096Delta(::Unity::Collections::FixedString4096Bytes  baseline, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedString4096Delta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString4096Bytes, false>(this, ___internal_method, baseline, model);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadPackedFixedStringDelta(::Unity::Collections::NativeArray_1<uint8_t>  data, ::Unity::Collections::NativeArray_1<uint8_t>  baseData, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedStringDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, data, baseData, model);
}
inline uint16_t Unity::Collections::DataStreamReader::ReadPackedFixedStringDeltaInternal(uint8_t*  data, int32_t  maxLength, uint8_t*  baseData, uint16_t  baseLength, ::ByRef<::Unity::Collections::StreamCompressionModel>  model)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "ReadPackedFixedStringDeltaInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::StreamCompressionModel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, data, maxLength, baseData, baseLength, model);
}
inline void Unity::Collections::DataStreamReader::CheckRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "CheckRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::DataStreamReader::CheckBits(int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DataStreamReader>::get(),
                        "CheckBits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, numBits);
}
// Ctor Parameters [CppParam { name: "m_BufferPtr", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Context", ty: "::Unity::Collections::DataStreamReader_Context", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::DataStreamReader::DataStreamReader(uint8_t*  m_BufferPtr, ::Unity::Collections::DataStreamReader_Context  m_Context, int32_t  m_Length) noexcept  {
this->m_BufferPtr = m_BufferPtr;
this->m_Context = m_Context;
this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::Unity::Collections::DataStreamReader::DataStreamReader()   {
}
