#pragma once
// IWYU pragma private; include "System\Xml\XmlDictionaryWriter.hpp"
#include "System/Xml/zzzz__XmlWriter_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_XmlWrappedWriter_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.CreateTextWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryWriter* (*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(
    &::System::Xml::XmlDictionaryWriter::CreateTextWriter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6124604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(),
                                                { "CreateTextWriter", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.CreateDictionaryWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryWriter* (*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlDictionaryWriter::CreateDictionaryWriter)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6124690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { "CreateDictionaryWriter", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlDictionaryWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6124770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlDictionaryWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6124814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlDictionaryWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x61248b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlDictionaryWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6124a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryWriter::WriteString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6124ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlDictionaryWriter::WriteQualifiedName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6124b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Guid)>(&::System::Xml::XmlDictionaryWriter::WriteValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6124c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::TimeSpan)>(&::System::Xml::XmlDictionaryWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6124c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteElementNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Xml::XmlDictionaryReader*, bool)>(
    &::System::Xml::XmlDictionaryWriter::WriteElementNode)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x6124cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { "WriteElementNode", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArrayNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::StringW, ::System::Type*)>(
    &::System::Xml::XmlDictionaryWriter::WriteArrayNode)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x6125080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { "WriteArrayNode",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<::StringW>(),
                                                                                                     ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArrayNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(
    ::System::Xml::XmlDictionaryReader*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::System::Type*)>(&::System::Xml::XmlDictionaryWriter::WriteArrayNode)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x6125824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(),
                                                { "WriteArrayNode",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArrayNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Xml::XmlDictionaryReader*, ::System::Type*)>(
    &::System::Xml::XmlDictionaryWriter::WriteArrayNode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6125fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(),
                                                             { "WriteArrayNode", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteTextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Xml::XmlDictionaryReader*, bool)>(&::System::Xml::XmlDictionaryWriter::WriteTextNode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x61260bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Xml::XmlReader*, bool)>(&::System::Xml::XmlDictionaryWriter::WriteNode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6126160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Xml::XmlDictionaryReader*, bool)>(&::System::Xml::XmlDictionaryWriter::WriteNode)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x612621c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.CheckArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::System::Array*, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::CheckArray)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x61265d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(),
                                                             { "CheckArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<bool>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6126804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<bool>,
                                                                                                    int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61268e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<int16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x61269ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<int16_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6126a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<int32_t>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6126b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<int32_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6126c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<int64_t>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6126cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<int64_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6126ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<float_t>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6126ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<float_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6126f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<double_t>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x612704c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<double_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x612712c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::System::Decimal>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x61271f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<::System::Decimal>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61272d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::System::DateTime>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x612739c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<::System::DateTime>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x612747c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::System::Guid>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6127544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<::System::Guid>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6127624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x61276ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                    ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryWriter::WriteArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61277cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryWriter::*)()>(&::System::Xml::XmlDictionaryWriter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6127894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::XmlDictionaryWriter* System::Xml::XmlDictionaryWriter::CreateTextWriter(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool ownsStream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(),
                                              { "CreateTextWriter", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryWriter*>(nullptr, ___internal_method, stream, encoding, ownsStream);
}
inline ::System::Xml::XmlDictionaryWriter* System::Xml::XmlDictionaryWriter::CreateDictionaryWriter(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { "CreateDictionaryWriter", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryWriter*>(nullptr, ___internal_method, writer);
}
inline void System::Xml::XmlDictionaryWriter::WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void System::Xml::XmlDictionaryWriter::WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void System::Xml::XmlDictionaryWriter::WriteXmlnsAttribute(::StringW prefix, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, namespaceUri);
}
inline void System::Xml::XmlDictionaryWriter::WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, namespaceUri);
}
inline void System::Xml::XmlDictionaryWriter::WriteString(::System::Xml::XmlDictionaryString* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlDictionaryWriter::WriteQualifiedName(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, namespaceUri);
}
inline void System::Xml::XmlDictionaryWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlDictionaryWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlDictionaryWriter::WriteElementNode(::System::Xml::XmlDictionaryReader* reader, bool defattr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { "WriteElementNode", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, defattr);
}
inline void System::Xml::XmlDictionaryWriter::WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { "WriteArrayNode",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<::StringW>(),
                                                                                                   ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, prefix, localName, namespaceUri, type);
}
inline void System::Xml::XmlDictionaryWriter::WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                             ::System::Xml::XmlDictionaryString* namespaceUri, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(),
                                              { "WriteArrayNode",
                                                {},
                                                { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, prefix, localName, namespaceUri, type);
}
inline void System::Xml::XmlDictionaryWriter::WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(),
                                                           { "WriteArrayNode", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, type);
}
inline void System::Xml::XmlDictionaryWriter::WriteTextNode(::System::Xml::XmlDictionaryReader* reader, bool isAttribute) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, isAttribute);
}
inline void System::Xml::XmlDictionaryWriter::WriteNode(::System::Xml::XmlReader* reader, bool defattr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, defattr);
}
inline void System::Xml::XmlDictionaryWriter::WriteNode(::System::Xml::XmlDictionaryReader* reader, bool defattr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, defattr);
}
inline void System::Xml::XmlDictionaryWriter::CheckArray(::System::Array* array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { "CheckArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool> array,
                                                         int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int16_t> array,
                                                         int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array,
                                                         int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t> array,
                                                         int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array,
                                                         int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array,
                                                         int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                         ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                         ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                         ::ArrayW<::System::Guid> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                         ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryWriter* System::Xml::XmlDictionaryWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDictionaryWriter*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionaryWriter::XmlDictionaryWriter() {}
