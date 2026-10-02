#pragma once
// IWYU pragma private; include "System/Xml/XmlBufferReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlBufferReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/Xml/zzzz__ValueHandleType_def.hpp"
#include "System/Xml/zzzz__ValueHandle_def.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeType_def.hpp"
#include "System/Xml/zzzz__XmlBinaryReaderSession_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlBufferReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::System::Xml::XmlDictionaryReader*)>(&::System::Xml::XmlBufferReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x653d5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::ArrayW<uint8_t>)>(&::System::Xml::XmlBufferReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x653d5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.get_Empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBufferReader* (*)()>(&::System::Xml::XmlBufferReader::get_Empty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x653d5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_Empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.get_Buffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::get_Buffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x653d648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_Buffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.get_IsStreamed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::get_IsStreamed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x653d650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_IsStreamed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.SetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::System::IO::Stream*, ::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryReaderSession*)>(
    &::System::Xml::XmlBufferReader::SetBuffer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65335b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlBufferReader*>(),
            { "SetBuffer", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<::System::Xml::XmlBinaryReaderSession*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.SetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, int32_t, ::System::Xml::IXmlDictionary*,
                                                                                                ::System::Xml::XmlBinaryReaderSession*)>(&::System::Xml::XmlBufferReader::SetBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x653d660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "SetBuffer",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<::System::Xml::XmlBinaryReaderSession*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::Close)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x653d67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.get_EndOfFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::get_EndOfFile)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6534d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_EndOfFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::GetByte)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x653d7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.SkipByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::SkipByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x653d860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "SkipByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetByteHard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::GetByteHard)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x653d824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetByteHard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlBufferReader::*)(int32_t, ::by_ref<int32_t>)>(&::System::Xml::XmlBufferReader::GetBuffer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x653d894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlBufferReader::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Xml::XmlBufferReader::GetBuffer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x653d8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "GetBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlBufferReader::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Xml::XmlBufferReader::GetBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x653db20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetBuffer", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetBufferHard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlBufferReader::*)(int32_t, ::by_ref<int32_t>)>(&::System::Xml::XmlBufferReader::GetBufferHard)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x653d8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetBufferHard", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.EnsureByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::EnsureByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x653d870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "EnsureByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.TryEnsureByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::TryEnsureByte)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x653d728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "TryEnsureByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.EnsureBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::EnsureBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x653db3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "EnsureBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.TryEnsureBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::TryEnsureBytes)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x653d99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "TryEnsureBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Advance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::Advance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6534cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Advance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.InsertBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBufferReader::InsertBytes)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6536bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "InsertBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.SetWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::SetWindow)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6535848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "SetWindow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.get_Offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::get_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x653db60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_Offset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.set_Offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::set_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x653db68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "set_Offset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::ReadBytes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6536850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadMultiByteUInt31
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadMultiByteUInt31)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6536e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadMultiByteUInt31", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadUInt8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadUInt8)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6533c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUInt8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadInt8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadInt8)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6533dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadInt8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadUInt16)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6534c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUInt16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadInt16)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6533de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadInt16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadInt32)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6533df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadInt32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadUInt31
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadUInt31)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6534cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUInt31", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadInt64)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x653db70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadSingle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6533f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadSingle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadDouble)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x65340bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadDecimal)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x65342a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadDateTime)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x65344e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadDateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadTimeSpan)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6534744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadTimeSpan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadGuid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65349a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadGuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadUTF8String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::ReadUTF8String)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6533938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUTF8String", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.UnsafeReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(uint8_t*, uint8_t*)>(&::System::Xml::XmlBufferReader::UnsafeReadArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6537560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "UnsafeReadArray", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.UnsafeReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(uint8_t*, int32_t)>(&::System::Xml::XmlBufferReader::UnsafeReadArray)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x653ddec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "UnsafeReadArray", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetCharBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetCharBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x653dc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetCharBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::ArrayW<char16_t>)>(&::System::Xml::XmlBufferReader::GetChars)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x653dce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&::System::Xml::XmlBufferReader::GetChars)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x653df2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                { "GetChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x653e058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetUnicodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetUnicodeString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x653e0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetUnicodeString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::System::Xml::XmlNameTable*)>(&::System::Xml::XmlBufferReader::GetString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x653e124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "GetString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetEscapedChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::ArrayW<char16_t>)>(&::System::Xml::XmlBufferReader::GetEscapedChars)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x653e190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "GetEscapedChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.IsAttrChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::IsAttrChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x653e3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "IsAttrChar", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetEscapedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetEscapedString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x653e504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetEscapedString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetEscapedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::System::Xml::XmlNameTable*)>(
    &::System::Xml::XmlBufferReader::GetEscapedString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x653e558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "GetEscapedString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetLessThanCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetLessThanCharEntity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x653e5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetLessThanCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetGreaterThanCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetGreaterThanCharEntity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x653e634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetGreaterThanCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetQuoteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetQuoteCharEntity)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x653e6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetQuoteCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetAmpersandCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetAmpersandCharEntity)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x653e74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetAmpersandCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetApostropheCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetApostropheCharEntity)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x653e7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetApostropheCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetDecimalCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetDecimalCharEntity)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x653e880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetDecimalCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetHexCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetHexCharEntity)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x653e90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetHexCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetCharEntity)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x653e40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.IsWhitespaceKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::IsWhitespaceKey)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x653e9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "IsWhitespaceKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.IsWhitespaceUTF8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::IsWhitespaceUTF8)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x653eaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "IsWhitespaceUTF8", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.IsWhitespaceUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::IsWhitespaceUnicode)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x653ebb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "IsWhitespaceUnicode", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::System::Xml::XmlBufferReader*)>(&::System::Xml::XmlBufferReader::Equals2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x653ec94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBufferReader::Equals2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x653ecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::ArrayW<uint8_t>)>(&::System::Xml::XmlBufferReader::Equals2)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x653ed48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::System::Xml::XmlBufferReader*, int32_t, int32_t)>(
    &::System::Xml::XmlBufferReader::Equals2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x653edd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlBufferReader*>(),
            { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlBufferReader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Xml::XmlBufferReader::Equals2)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x653ee84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, ::StringW)>(&::System::Xml::XmlBufferReader::Equals2)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x653ef20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                                                           { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Xml::XmlBufferReader::Compare)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x653f11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "Compare", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetByte)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65368a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetByte", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetInt8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetInt8)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x653f200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetInt8", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetInt16)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6536b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetInt16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x653f214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetInt32", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetInt64)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x653f288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetInt64", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetUInt64)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x653f358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetUInt64", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetSingle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x653f35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetSingle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetDouble)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x653f3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetDouble", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetDecimal)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x653f4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetDecimal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetUniqueId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::UniqueId* (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetUniqueId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x653f64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetUniqueId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetGuid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x653db9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetGuid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetBase64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x653f6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                { "GetBase64", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBinaryNodeType (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::GetNodeType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6536cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetNodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.SkipNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::SkipNodeType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6536cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "SkipNodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Xml::XmlBufferReader::*)(int32_t, int32_t)>(&::System::Xml::XmlBufferReader::GetList)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x653f6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetList", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Xml::XmlBufferReader::*)(int32_t)>(&::System::Xml::XmlBufferReader::GetDictionaryString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x65339ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetDictionaryString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadDictionaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::ReadDictionaryKey)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6536ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadDictionaryKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::System::Xml::XmlBinaryNodeType, ::System::Xml::ValueHandle*)>(
    &::System::Xml::XmlBufferReader::ReadValue)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x65360f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                             { "ReadValue", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::System::Xml::ValueHandle*, ::System::Xml::ValueHandleType, int32_t)>(
    &::System::Xml::XmlBufferReader::ReadValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x653f860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                { "ReadValue", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>(), ::i2c::type_of<::System::Xml::ValueHandleType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadUnicodeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::System::Xml::ValueHandle*, int32_t)>(&::System::Xml::XmlBufferReader::ReadUnicodeValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x653f8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                                                           { "ReadUnicodeValue", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::System::Xml::ValueHandle*)>(&::System::Xml::XmlBufferReader::ReadList)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x653f8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadList", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.ReadQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBufferReader::*)(::System::Xml::ValueHandle*)>(&::System::Xml::XmlBufferReader::ReadQName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6535f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadQName", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBufferReader.GetRows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Xml::XmlBufferReader::*)()>(&::System::Xml::XmlBufferReader::GetRows)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x653f9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetRows", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDictionaryReader*& System::Xml::XmlBufferReader::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlDictionaryReader* const& System::Xml::XmlBufferReader::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_reader(::System::Xml::XmlDictionaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr ::System::IO::Stream*& System::Xml::XmlBufferReader::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::System::IO::Stream* const& System::Xml::XmlBufferReader::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlBufferReader::__cordl_internal_get_streamBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlBufferReader::__cordl_internal_get_streamBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamBuffer;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_streamBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streamBuffer = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlBufferReader::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlBufferReader::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& System::Xml::XmlBufferReader::__cordl_internal_get_offsetMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetMin;
}
constexpr int32_t const& System::Xml::XmlBufferReader::__cordl_internal_get_offsetMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetMin;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_offsetMin(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetMin = value;
}
constexpr int32_t& System::Xml::XmlBufferReader::__cordl_internal_get_offsetMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetMax;
}
constexpr int32_t const& System::Xml::XmlBufferReader::__cordl_internal_get_offsetMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetMax;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_offsetMax(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetMax = value;
}
constexpr ::System::Xml::IXmlDictionary*& System::Xml::XmlBufferReader::__cordl_internal_get_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr ::System::Xml::IXmlDictionary* const& System::Xml::XmlBufferReader::__cordl_internal_get_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_dictionary(::System::Xml::IXmlDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dictionary = value;
}
constexpr ::System::Xml::XmlBinaryReaderSession*& System::Xml::XmlBufferReader::__cordl_internal_get_session() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session;
}
constexpr ::System::Xml::XmlBinaryReaderSession* const& System::Xml::XmlBufferReader::__cordl_internal_get_session() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_session(::System::Xml::XmlBinaryReaderSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___session = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlBufferReader::__cordl_internal_get_guid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guid;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlBufferReader::__cordl_internal_get_guid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guid;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_guid(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___guid = value;
}
constexpr int32_t& System::Xml::XmlBufferReader::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& System::Xml::XmlBufferReader::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr ::ArrayW<char16_t>& System::Xml::XmlBufferReader::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t> const& System::Xml::XmlBufferReader::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_chars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chars = value;
}
constexpr int32_t& System::Xml::XmlBufferReader::__cordl_internal_get_windowOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowOffset;
}
constexpr int32_t const& System::Xml::XmlBufferReader::__cordl_internal_get_windowOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowOffset;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_windowOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowOffset = value;
}
constexpr int32_t& System::Xml::XmlBufferReader::__cordl_internal_get_windowOffsetMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowOffsetMax;
}
constexpr int32_t const& System::Xml::XmlBufferReader::__cordl_internal_get_windowOffsetMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowOffsetMax;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_windowOffsetMax(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowOffsetMax = value;
}
constexpr ::System::Xml::ValueHandle*& System::Xml::XmlBufferReader::__cordl_internal_get_listValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listValue;
}
constexpr ::System::Xml::ValueHandle* const& System::Xml::XmlBufferReader::__cordl_internal_get_listValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listValue;
}
constexpr void System::Xml::XmlBufferReader::__cordl_internal_set_listValue(::System::Xml::ValueHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listValue = value;
}
inline void System::Xml::XmlBufferReader::setStaticF_emptyByteArray(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptyByteArray", ::System::Xml::XmlBufferReader*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::XmlBufferReader::getStaticF_emptyByteArray() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptyByteArray", ::System::Xml::XmlBufferReader*>();
}
inline void System::Xml::XmlBufferReader::setStaticF_empty(::System::Xml::XmlBufferReader* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBufferReader*, "empty", ::System::Xml::XmlBufferReader*>(std::forward<::System::Xml::XmlBufferReader*>(value));
}
inline ::System::Xml::XmlBufferReader* System::Xml::XmlBufferReader::getStaticF_empty() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBufferReader*, "empty", ::System::Xml::XmlBufferReader*>();
}
inline void System::Xml::XmlBufferReader::_ctor(::System::Xml::XmlDictionaryReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Xml::XmlBufferReader::_ctor(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::System::Xml::XmlBufferReader* System::Xml::XmlBufferReader::get_Empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_Empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBufferReader*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::XmlBufferReader::get_Buffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_Buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool System::Xml::XmlBufferReader::get_IsStreamed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_IsStreamed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlBufferReader::SetBuffer(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlBinaryReaderSession* session) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                       { "SetBuffer", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<::System::Xml::XmlBinaryReaderSession*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, dictionary, session);
}
inline void System::Xml::XmlBufferReader::SetBuffer(::System::IO::Stream* stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Xml::IXmlDictionary* dictionary,
                                                    ::System::Xml::XmlBinaryReaderSession* session) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "SetBuffer",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<::System::Xml::XmlBinaryReaderSession*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, buffer, offset, count, dictionary, session);
}
inline void System::Xml::XmlBufferReader::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlBufferReader::get_EndOfFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_EndOfFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint8_t System::Xml::XmlBufferReader::GetByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void System::Xml::XmlBufferReader::SkipByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "SkipByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t System::Xml::XmlBufferReader::GetByteHard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetByteHard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::XmlBufferReader::GetBuffer(int32_t count, ::by_ref<int32_t> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, count, offset);
}
inline ::ArrayW<uint8_t> System::Xml::XmlBufferReader::GetBuffer(int32_t count, ::by_ref<int32_t> offset, ::by_ref<int32_t> offsetMax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "GetBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, count, offset, offsetMax);
}
inline ::ArrayW<uint8_t> System::Xml::XmlBufferReader::GetBuffer(::by_ref<int32_t> offset, ::by_ref<int32_t> offsetMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetBuffer", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, offset, offsetMax);
}
inline ::ArrayW<uint8_t> System::Xml::XmlBufferReader::GetBufferHard(int32_t count, ::by_ref<int32_t> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetBufferHard", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, count, offset);
}
inline void System::Xml::XmlBufferReader::EnsureByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "EnsureByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlBufferReader::TryEnsureByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "TryEnsureByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlBufferReader::EnsureBytes(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "EnsureBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline bool System::Xml::XmlBufferReader::TryEnsureBytes(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "TryEnsureBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, count);
}
inline void System::Xml::XmlBufferReader::Advance(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Advance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void System::Xml::XmlBufferReader::InsertBytes(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "InsertBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::Xml::XmlBufferReader::SetWindow(int32_t windowOffset, int32_t windowLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "SetWindow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windowOffset, windowLength);
}
inline int32_t System::Xml::XmlBufferReader::get_Offset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "get_Offset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlBufferReader::set_Offset(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "set_Offset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::XmlBufferReader::ReadBytes(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, count);
}
inline int32_t System::Xml::XmlBufferReader::ReadMultiByteUInt31() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadMultiByteUInt31", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBufferReader::ReadUInt8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUInt8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBufferReader::ReadInt8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadInt8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBufferReader::ReadUInt16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUInt16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBufferReader::ReadInt16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadInt16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBufferReader::ReadInt32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadInt32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBufferReader::ReadUInt31() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUInt31", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::XmlBufferReader::ReadInt64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline float_t System::Xml::XmlBufferReader::ReadSingle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadSingle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t System::Xml::XmlBufferReader::ReadDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlBufferReader::ReadDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlBufferReader::ReadDateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadDateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::XmlBufferReader::ReadTimeSpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadTimeSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::Guid System::Xml::XmlBufferReader::ReadGuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadGuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBufferReader::ReadUTF8String(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUTF8String", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, length);
}
inline void System::Xml::XmlBufferReader::UnsafeReadArray(uint8_t* dst, uint8_t* dstMax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "UnsafeReadArray", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dst, dstMax);
}
inline void System::Xml::XmlBufferReader::UnsafeReadArray(uint8_t* dst, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "UnsafeReadArray", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dst, length);
}
inline ::ArrayW<char16_t> System::Xml::XmlBufferReader::GetCharBuffer(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetCharBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method, count);
}
inline int32_t System::Xml::XmlBufferReader::GetChars(int32_t offset, int32_t length, ::ArrayW<char16_t> chars) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length, chars);
}
inline int32_t System::Xml::XmlBufferReader::GetChars(int32_t offset, int32_t length, ::ArrayW<char16_t> chars, int32_t charOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                              { "GetChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length, chars, charOffset);
}
inline ::StringW System::Xml::XmlBufferReader::GetString(int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, offset, length);
}
inline ::StringW System::Xml::XmlBufferReader::GetUnicodeString(int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetUnicodeString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, offset, length);
}
inline ::StringW System::Xml::XmlBufferReader::GetString(int32_t offset, int32_t length, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "GetString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, offset, length, nameTable);
}
inline int32_t System::Xml::XmlBufferReader::GetEscapedChars(int32_t offset, int32_t length, ::ArrayW<char16_t> chars) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "GetEscapedChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length, chars);
}
inline bool System::Xml::XmlBufferReader::IsAttrChar(int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "IsAttrChar", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch);
}
inline ::StringW System::Xml::XmlBufferReader::GetEscapedString(int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetEscapedString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, offset, length);
}
inline ::StringW System::Xml::XmlBufferReader::GetEscapedString(int32_t offset, int32_t length, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "GetEscapedString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, offset, length, nameTable);
}
inline int32_t System::Xml::XmlBufferReader::GetLessThanCharEntity(int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetLessThanCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length);
}
inline int32_t System::Xml::XmlBufferReader::GetGreaterThanCharEntity(int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetGreaterThanCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length);
}
inline int32_t System::Xml::XmlBufferReader::GetQuoteCharEntity(int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetQuoteCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length);
}
inline int32_t System::Xml::XmlBufferReader::GetAmpersandCharEntity(int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetAmpersandCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length);
}
inline int32_t System::Xml::XmlBufferReader::GetApostropheCharEntity(int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetApostropheCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length);
}
inline int32_t System::Xml::XmlBufferReader::GetDecimalCharEntity(int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetDecimalCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length);
}
inline int32_t System::Xml::XmlBufferReader::GetHexCharEntity(int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetHexCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length);
}
inline int32_t System::Xml::XmlBufferReader::GetCharEntity(int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetCharEntity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset, length);
}
inline bool System::Xml::XmlBufferReader::IsWhitespaceKey(int32_t key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "IsWhitespaceKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool System::Xml::XmlBufferReader::IsWhitespaceUTF8(int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "IsWhitespaceUTF8", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset, length);
}
inline bool System::Xml::XmlBufferReader::IsWhitespaceUnicode(int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "IsWhitespaceUnicode", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset, length);
}
inline bool System::Xml::XmlBufferReader::Equals2(int32_t key1, int32_t key2, ::System::Xml::XmlBufferReader* bufferReader2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key1, key2, bufferReader2);
}
inline bool System::Xml::XmlBufferReader::Equals2(int32_t key1, ::System::Xml::XmlDictionaryString* xmlString2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key1, xmlString2);
}
inline bool System::Xml::XmlBufferReader::Equals2(int32_t offset1, int32_t length1, ::ArrayW<uint8_t> buffer2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset1, length1, buffer2);
}
inline bool System::Xml::XmlBufferReader::Equals2(int32_t offset1, int32_t length1, ::System::Xml::XmlBufferReader* bufferReader2, int32_t offset2, int32_t length2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlBufferReader*>(),
          { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlBufferReader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset1, length1, bufferReader2, offset2, length2);
}
inline bool System::Xml::XmlBufferReader::Equals2(int32_t offset1, int32_t length1, int32_t offset2, int32_t length2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset1, length1, offset2, length2);
}
inline bool System::Xml::XmlBufferReader::Equals2(int32_t offset1, int32_t length1, ::StringW s2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset1, length1, s2);
}
inline int32_t System::Xml::XmlBufferReader::Compare(int32_t offset1, int32_t length1, int32_t offset2, int32_t length2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "Compare", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset1, length1, offset2, length2);
}
inline uint8_t System::Xml::XmlBufferReader::GetByte(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetByte", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, offset);
}
inline int32_t System::Xml::XmlBufferReader::GetInt8(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetInt8", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset);
}
inline int32_t System::Xml::XmlBufferReader::GetInt16(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetInt16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset);
}
inline int32_t System::Xml::XmlBufferReader::GetInt32(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetInt32", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset);
}
inline int64_t System::Xml::XmlBufferReader::GetInt64(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetInt64", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset);
}
inline uint64_t System::Xml::XmlBufferReader::GetUInt64(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetUInt64", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, offset);
}
inline float_t System::Xml::XmlBufferReader::GetSingle(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetSingle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, offset);
}
inline double_t System::Xml::XmlBufferReader::GetDouble(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetDouble", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, offset);
}
inline ::System::Decimal System::Xml::XmlBufferReader::GetDecimal(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetDecimal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, offset);
}
inline ::System::Xml::UniqueId* System::Xml::XmlBufferReader::GetUniqueId(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetUniqueId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*>(this, ___internal_method, offset);
}
inline ::System::Guid System::Xml::XmlBufferReader::GetGuid(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetGuid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method, offset);
}
inline void System::Xml::XmlBufferReader::GetBase64(int32_t srcOffset, ::ArrayW<uint8_t> buffer, int32_t dstOffset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                              { "GetBase64", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcOffset, buffer, dstOffset, count);
}
inline ::System::Xml::XmlBinaryNodeType System::Xml::XmlBufferReader::GetNodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetNodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBinaryNodeType>(this, ___internal_method);
}
inline void System::Xml::XmlBufferReader::SkipNodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "SkipNodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Xml::XmlBufferReader::GetList(int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetList", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, offset, count);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::XmlBufferReader::GetDictionaryString(int32_t key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetDictionaryString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method, key);
}
inline int32_t System::Xml::XmlBufferReader::ReadDictionaryKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadDictionaryKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlBufferReader::ReadValue(::System::Xml::XmlBinaryNodeType nodeType, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                                           { "ReadValue", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, value);
}
inline void System::Xml::XmlBufferReader::ReadValue(::System::Xml::ValueHandle* value, ::System::Xml::ValueHandleType type, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(),
                                              { "ReadValue", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>(), ::i2c::type_of<::System::Xml::ValueHandleType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, type, length);
}
inline void System::Xml::XmlBufferReader::ReadUnicodeValue(::System::Xml::ValueHandle* value, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadUnicodeValue", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, length);
}
inline void System::Xml::XmlBufferReader::ReadList(::System::Xml::ValueHandle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadList", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBufferReader::ReadQName(::System::Xml::ValueHandle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "ReadQName", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> System::Xml::XmlBufferReader::GetRows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBufferReader*>(), { "GetRows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::System::Xml::XmlBufferReader* System::Xml::XmlBufferReader::New_ctor(::System::Xml::XmlDictionaryReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBufferReader*>(reader));
}
inline ::System::Xml::XmlBufferReader* System::Xml::XmlBufferReader::New_ctor(::ArrayW<uint8_t> buffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBufferReader*>(buffer));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBufferReader::XmlBufferReader() {}
