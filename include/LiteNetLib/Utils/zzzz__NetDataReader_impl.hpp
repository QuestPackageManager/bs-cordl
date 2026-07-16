#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NetDataReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.get_RawData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::get_RawData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58abcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_RawData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.get_RawDataSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::get_RawDataSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58abd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_RawDataSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.get_UserDataOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::get_UserDataOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58abd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_UserDataOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.get_UserDataSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::get_UserDataSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58abd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_UserDataSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a1c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58abd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.get_EndOfData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::get_EndOfData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58abd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_EndOfData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.get_AvailableBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::get_AvailableBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58abd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_AvailableBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.SkipBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(int32_t)>(&::LiteNetLib::Utils::NetDataReader::SkipBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58abd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SkipBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.SetSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::LiteNetLib::Utils::NetDataReader::SetSource)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58abd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SetSource", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.SetSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Utils::NetDataReader::SetSource)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58abd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SetSource", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.SetSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::ArrayW<uint8_t>, int32_t)>(&::LiteNetLib::Utils::NetDataReader::SetSource)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58abd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SetSource", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.SetSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::NetDataReader::SetSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x589e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(),
                                                             { "SetSource", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589e52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Utils::NetDataReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58abdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::ArrayW<uint8_t>, int32_t)>(&::LiteNetLib::Utils::NetDataReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58abde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::NetDataReader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a6634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetNetEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetNetEndPoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58abe08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetNetEndPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58abf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetSByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58abfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetSByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetByteArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58ac014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetByteArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetBoolArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetBoolArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58ac0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBoolArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetUShortArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint16_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetUShortArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ac154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetUShortArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetShortArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int16_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetShortArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ac1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetShortArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetLongArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int64_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetLongArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ac29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetLongArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetULongArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint64_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetULongArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ac340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetULongArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetIntArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ac3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetIntArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetUIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetUIntArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ac488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetUIntArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetFloatArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ac52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetFloatArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetDoubleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<double_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetDoubleArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ac5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetDoubleArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetStringArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetStringArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58ac674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetStringArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetStringArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::LiteNetLib::Utils::NetDataReader::*)(int32_t)>(&::LiteNetLib::Utils::NetDataReader::GetStringArray)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58ac734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetStringArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetBool)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58ac804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetChar)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58ac84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetUShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetUShort)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58ac874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetUShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetShort)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetLong)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetLong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetULong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58ac8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetULong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58abf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetUInt)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58ac91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetUInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetFloat)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetFloat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetDouble)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::Utils::NetDataReader::*)(int32_t)>(&::LiteNetLib::Utils::NetDataReader::GetString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58abe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x589bad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetRemainingBytesSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetRemainingBytesSegment)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58ac99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetRemainingBytesSegment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetRemainingBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetRemainingBytes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58aca10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetRemainingBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::NetDataReader::GetBytes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58aca9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)(::ArrayW<uint8_t>, int32_t)>(&::LiteNetLib::Utils::NetDataReader::GetBytes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58acae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetSBytesWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int8_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetSBytesWithLength)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58acb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetSBytesWithLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.GetBytesWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::GetBytesWithLength)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58acbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBytesWithLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekByte)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58acc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekSByte)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58acca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekSByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekBool)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58accdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekBool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekChar)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58acd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekUShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekUShort)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58acd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekUShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekShort)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58acd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekLong)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58acd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekLong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekULong)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58acd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekULong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekInt)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58acd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekUInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58acd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekUInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58acd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekFloat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58acdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::Utils::NetDataReader::*)(int32_t)>(&::LiteNetLib::Utils::NetDataReader::PeekString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58acdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.PeekString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::PeekString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58ace98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<uint8_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetByte)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58acf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetByte", {}, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<int8_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetSByte)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58acf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetSByte", {}, { ::i2c::type_of<::by_ref<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<bool>)>(&::LiteNetLib::Utils::NetDataReader::TryGetBool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58acf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetBool", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<char16_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetChar)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58acfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetChar", {}, { ::i2c::type_of<::by_ref<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<int16_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetShort)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58ad03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetShort", {}, { ::i2c::type_of<::by_ref<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetUShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<uint16_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetUShort)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ad09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetUShort", {}, { ::i2c::type_of<::by_ref<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<int32_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetInt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58ad0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetInt", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<uint32_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetUInt)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ad158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetUInt", {}, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<int64_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetLong)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58ad1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetLong", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<uint64_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetULong)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ad214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetULong", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<float_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetFloat)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ad270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetFloat", {}, { ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<double_t>)>(&::LiteNetLib::Utils::NetDataReader::TryGetDouble)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ad2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetDouble", {}, { ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<::StringW>)>(&::LiteNetLib::Utils::NetDataReader::TryGetString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58ad328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetString", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetStringArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<::ArrayW<::StringW>>)>(&::LiteNetLib::Utils::NetDataReader::TryGetStringArray)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58ad398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetStringArray", {}, { ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.TryGetBytesWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::Utils::NetDataReader::*)(::by_ref<::ArrayW<uint8_t>>)>(&::LiteNetLib::Utils::NetDataReader::TryGetBytesWithLength)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58ad484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetBytesWithLength", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataReader.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataReader::*)()>(&::LiteNetLib::Utils::NetDataReader::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589fcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& LiteNetLib::Utils::NetDataReader::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<uint8_t> const& LiteNetLib::Utils::NetDataReader::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void LiteNetLib::Utils::NetDataReader::__cordl_internal_set__data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
constexpr int32_t& LiteNetLib::Utils::NetDataReader::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr int32_t const& LiteNetLib::Utils::NetDataReader::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void LiteNetLib::Utils::NetDataReader::__cordl_internal_set__position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr int32_t& LiteNetLib::Utils::NetDataReader::__cordl_internal_get__dataSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSize;
}
constexpr int32_t const& LiteNetLib::Utils::NetDataReader::__cordl_internal_get__dataSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSize;
}
constexpr void LiteNetLib::Utils::NetDataReader::__cordl_internal_set__dataSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSize = value;
}
constexpr int32_t& LiteNetLib::Utils::NetDataReader::__cordl_internal_get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr int32_t const& LiteNetLib::Utils::NetDataReader::__cordl_internal_get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void LiteNetLib::Utils::NetDataReader::__cordl_internal_set__offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
inline ::ArrayW<uint8_t> LiteNetLib::Utils::NetDataReader::get_RawData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_RawData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NetDataReader::get_RawDataSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_RawDataSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NetDataReader::get_UserDataOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_UserDataOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NetDataReader::get_UserDataSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_UserDataSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool LiteNetLib::Utils::NetDataReader::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NetDataReader::get_Position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool LiteNetLib::Utils::NetDataReader::get_EndOfData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_EndOfData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NetDataReader::get_AvailableBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "get_AvailableBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetDataReader::SkipBytes(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SkipBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void LiteNetLib::Utils::NetDataReader::SetSource(::LiteNetLib::Utils::NetDataWriter* dataWriter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SetSource", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataWriter);
}
inline void LiteNetLib::Utils::NetDataReader::SetSource(::ArrayW<uint8_t> source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SetSource", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void LiteNetLib::Utils::NetDataReader::SetSource(::ArrayW<uint8_t> source, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SetSource", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, offset);
}
inline void LiteNetLib::Utils::NetDataReader::SetSource(::ArrayW<uint8_t> source, int32_t offset, int32_t maxSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "SetSource", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, offset, maxSize);
}
inline void LiteNetLib::Utils::NetDataReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetDataReader::_ctor(::ArrayW<uint8_t> source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void LiteNetLib::Utils::NetDataReader::_ctor(::ArrayW<uint8_t> source, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, offset);
}
inline void LiteNetLib::Utils::NetDataReader::_ctor(::ArrayW<uint8_t> source, int32_t offset, int32_t maxSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, offset, maxSize);
}
inline ::System::Net::IPEndPoint* LiteNetLib::Utils::NetDataReader::GetNetEndPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetNetEndPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline uint8_t LiteNetLib::Utils::NetDataReader::GetByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline int8_t LiteNetLib::Utils::NetDataReader::GetSByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetSByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> LiteNetLib::Utils::NetDataReader::GetByteArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetByteArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<bool> LiteNetLib::Utils::NetDataReader::GetBoolArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBoolArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline ::ArrayW<uint16_t> LiteNetLib::Utils::NetDataReader::GetUShortArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetUShortArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t>>(this, ___internal_method);
}
inline ::ArrayW<int16_t> LiteNetLib::Utils::NetDataReader::GetShortArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetShortArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t>>(this, ___internal_method);
}
inline ::ArrayW<int64_t> LiteNetLib::Utils::NetDataReader::GetLongArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetLongArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t>>(this, ___internal_method);
}
inline ::ArrayW<uint64_t> LiteNetLib::Utils::NetDataReader::GetULongArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetULongArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint64_t>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> LiteNetLib::Utils::NetDataReader::GetIntArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetIntArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<uint32_t> LiteNetLib::Utils::NetDataReader::GetUIntArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetUIntArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(this, ___internal_method);
}
inline ::ArrayW<float_t> LiteNetLib::Utils::NetDataReader::GetFloatArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetFloatArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline ::ArrayW<double_t> LiteNetLib::Utils::NetDataReader::GetDoubleArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetDoubleArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> LiteNetLib::Utils::NetDataReader::GetStringArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetStringArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> LiteNetLib::Utils::NetDataReader::GetStringArray(int32_t maxStringLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetStringArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, maxStringLength);
}
inline bool LiteNetLib::Utils::NetDataReader::GetBool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline char16_t LiteNetLib::Utils::NetDataReader::GetChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline uint16_t LiteNetLib::Utils::NetDataReader::GetUShort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetUShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline int16_t LiteNetLib::Utils::NetDataReader::GetShort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline int64_t LiteNetLib::Utils::NetDataReader::GetLong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetLong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline uint64_t LiteNetLib::Utils::NetDataReader::GetULong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetULong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NetDataReader::GetInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t LiteNetLib::Utils::NetDataReader::GetUInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetUInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline float_t LiteNetLib::Utils::NetDataReader::GetFloat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetFloat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t LiteNetLib::Utils::NetDataReader::GetDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::StringW LiteNetLib::Utils::NetDataReader::GetString(int32_t maxLength) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, maxLength);
}
inline ::StringW LiteNetLib::Utils::NetDataReader::GetString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ArraySegment_1<uint8_t> LiteNetLib::Utils::NetDataReader::GetRemainingBytesSegment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetRemainingBytesSegment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method);
}
template <typename T> inline T LiteNetLib::Utils::NetDataReader::Get() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "Get", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> LiteNetLib::Utils::NetDataReader::GetRemainingBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetRemainingBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetDataReader::GetBytes(::ArrayW<uint8_t> destination, int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, start, count);
}
inline void LiteNetLib::Utils::NetDataReader::GetBytes(::ArrayW<uint8_t> destination, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, count);
}
inline ::ArrayW<int8_t> LiteNetLib::Utils::NetDataReader::GetSBytesWithLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetSBytesWithLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> LiteNetLib::Utils::NetDataReader::GetBytesWithLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "GetBytesWithLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline uint8_t LiteNetLib::Utils::NetDataReader::PeekByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline int8_t LiteNetLib::Utils::NetDataReader::PeekSByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekSByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method);
}
inline bool LiteNetLib::Utils::NetDataReader::PeekBool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekBool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline char16_t LiteNetLib::Utils::NetDataReader::PeekChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline uint16_t LiteNetLib::Utils::NetDataReader::PeekUShort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekUShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline int16_t LiteNetLib::Utils::NetDataReader::PeekShort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline int64_t LiteNetLib::Utils::NetDataReader::PeekLong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekLong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline uint64_t LiteNetLib::Utils::NetDataReader::PeekULong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekULong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NetDataReader::PeekInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t LiteNetLib::Utils::NetDataReader::PeekUInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekUInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline float_t LiteNetLib::Utils::NetDataReader::PeekFloat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekFloat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t LiteNetLib::Utils::NetDataReader::PeekDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::StringW LiteNetLib::Utils::NetDataReader::PeekString(int32_t maxLength) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, maxLength);
}
inline ::StringW LiteNetLib::Utils::NetDataReader::PeekString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "PeekString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetByte(::by_ref<uint8_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetByte", {}, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetSByte(::by_ref<int8_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetSByte", {}, { ::i2c::type_of<::by_ref<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetBool(::by_ref<bool> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetBool", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetChar(::by_ref<char16_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetChar", {}, { ::i2c::type_of<::by_ref<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetShort(::by_ref<int16_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetShort", {}, { ::i2c::type_of<::by_ref<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetUShort(::by_ref<uint16_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetUShort", {}, { ::i2c::type_of<::by_ref<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetInt(::by_ref<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetInt", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetUInt(::by_ref<uint32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetUInt", {}, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetLong(::by_ref<int64_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetLong", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetULong(::by_ref<uint64_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetULong", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetFloat(::by_ref<float_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetFloat", {}, { ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetDouble(::by_ref<double_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetDouble", {}, { ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetString(::by_ref<::StringW> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetString", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetStringArray(::by_ref<::ArrayW<::StringW>> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetStringArray", {}, { ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline bool LiteNetLib::Utils::NetDataReader::TryGetBytesWithLength(::by_ref<::ArrayW<uint8_t>> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "TryGetBytesWithLength", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline void LiteNetLib::Utils::NetDataReader::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataReader*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetDataReader* LiteNetLib::Utils::NetDataReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetDataReader*>());
}
inline ::LiteNetLib::Utils::NetDataReader* LiteNetLib::Utils::NetDataReader::New_ctor(::ArrayW<uint8_t> source) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetDataReader*>(source));
}
inline ::LiteNetLib::Utils::NetDataReader* LiteNetLib::Utils::NetDataReader::New_ctor(::ArrayW<uint8_t> source, int32_t offset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetDataReader*>(source, offset));
}
inline ::LiteNetLib::Utils::NetDataReader* LiteNetLib::Utils::NetDataReader::New_ctor(::ArrayW<uint8_t> source, int32_t offset, int32_t maxSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetDataReader*>(source, offset, maxSize));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NetDataReader::NetDataReader() {}
