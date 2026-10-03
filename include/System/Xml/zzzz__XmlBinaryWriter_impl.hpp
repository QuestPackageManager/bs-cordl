#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryWriter.hpp"
#include "System/Xml/zzzz__XmlBaseWriter_impl.hpp"
#include "System/Xml/zzzz__XmlBinaryWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeType_def.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeWriter_def.hpp"
#include "System/Xml/zzzz__XmlBinaryWriterSession_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.SetOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::System::IO::Stream*, ::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession*, bool)>(
    &::System::Xml::XmlBinaryWriter::SetOutput)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x653b304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { "SetOutput",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::IXmlDictionary*>(),
                                                                                                        ::i2c::type_of<::System::Xml::XmlBinaryWriterSession*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteTextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::System::Xml::XmlDictionaryReader*, bool)>(&::System::Xml::XmlBinaryWriter::WriteTextNode)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x653b40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x653bb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(),
                                                { "WriteStartArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x653bbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { "WriteStartArray",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                                                        ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteEndArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)()>(&::System::Xml::XmlBinaryWriter::WriteEndArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x653bc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { "WriteEndArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.UnsafeWriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::System::Xml::XmlBinaryNodeType, int32_t, uint8_t*, uint8_t*)>(
    &::System::Xml::XmlBinaryWriter::UnsafeWriteArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x653bc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(),
                                                { "UnsafeWriteArray",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.UnsafeWriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                ::System::Xml::XmlBinaryNodeType, int32_t, uint8_t*, uint8_t*)>(
    &::System::Xml::XmlBinaryWriter::UnsafeWriteArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x653bc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(),
                                                { "UnsafeWriteArray",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.CheckArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::System::Array*, int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::CheckArray)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x653bcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { "CheckArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<bool>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653bf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<bool>,
                                                                                                int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<int16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x653c0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int16_t>,
                                                                                                int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x653c1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<int32_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int32_t>,
                                                                                                int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<int64_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int64_t>,
                                                                                                int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<float_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<float_t>,
                                                                                                int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<double_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<double_t>,
                                                                                                int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653c924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::System::Decimal>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653ca0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                ::ArrayW<::System::Decimal>, int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x653caf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::System::DateTime>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x653cbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                ::ArrayW<::System::DateTime>, int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x653ccbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::System::Guid>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x653cd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                ::ArrayW<::System::Guid>, int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x653ce7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 76 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x653cf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 77 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(&::System::Xml::XmlBinaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x653d03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriter::*)()>(&::System::Xml::XmlBinaryWriter::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x653d11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlBinaryNodeWriter*& System::Xml::XmlBinaryWriter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlBinaryNodeWriter* const& System::Xml::XmlBinaryWriter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Xml::XmlBinaryWriter::__cordl_internal_set_writer(::System::Xml::XmlBinaryNodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writer = value;
}
constexpr ::ArrayW<char16_t>& System::Xml::XmlBinaryWriter::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t> const& System::Xml::XmlBinaryWriter::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::XmlBinaryWriter::__cordl_internal_set_chars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chars = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlBinaryWriter::__cordl_internal_get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlBinaryWriter::__cordl_internal_get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr void System::Xml::XmlBinaryWriter::__cordl_internal_set_bytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bytes = value;
}
inline void System::Xml::XmlBinaryWriter::SetOutput(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlBinaryWriterSession* session, bool ownsStream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { "SetOutput",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::IXmlDictionary*>(),
                                                                                                      ::i2c::type_of<::System::Xml::XmlBinaryWriterSession*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, dictionary, session, ownsStream);
}
inline void System::Xml::XmlBinaryWriter::WriteTextNode(::System::Xml::XmlDictionaryReader* reader, bool attribute) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, attribute);
}
inline void System::Xml::XmlBinaryWriter::WriteStartArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(),
                                              { "WriteStartArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, count);
}
inline void System::Xml::XmlBinaryWriter::WriteStartArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { "WriteStartArray",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                                                      ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, count);
}
inline void System::Xml::XmlBinaryWriter::WriteEndArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { "WriteEndArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryWriter::UnsafeWriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::System::Xml::XmlBinaryNodeType nodeType, int32_t count, uint8_t* array,
                                                           uint8_t* arrayMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(),
                                              { "UnsafeWriteArray",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, nodeType, count, array, arrayMax);
}
inline void System::Xml::XmlBinaryWriter::UnsafeWriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                           ::System::Xml::XmlBinaryNodeType nodeType, int32_t count, uint8_t* array, uint8_t* arrayMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(),
                                              { "UnsafeWriteArray",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, nodeType, count, array, arrayMax);
}
inline void System::Xml::XmlBinaryWriter::CheckArray(::System::Array* array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { "CheckArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool> array,
                                                     int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int16_t> array,
                                                     int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array,
                                                     int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t> array,
                                                     int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array,
                                                     int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array,
                                                     int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                     ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                     ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Guid> array,
                                                     int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 76 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                     ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlBinaryWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBinaryWriter* System::Xml::XmlBinaryWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBinaryWriter*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBinaryWriter::XmlBinaryWriter() {}
