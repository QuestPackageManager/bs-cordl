#pragma once
// IWYU pragma private; include "System/Xml/XmlUTF8NodeWriter.hpp"
#include "System/Xml/zzzz__XmlStreamNodeWriter_impl.hpp"
#include "System/Xml/zzzz__XmlUTF8NodeWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6127998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<bool>, ::ArrayW<bool>)>(&::System::Xml::XmlUTF8NodeWriter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6127af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.SetOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::System::IO::Stream*, bool, ::System::Text::Encoding*)>(
    &::System::Xml::XmlUTF8NodeWriter::SetOutput)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61279fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(),
                                                             { "SetOutput", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.GetCharEntityBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::GetCharEntityBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6127b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "GetCharEntityBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.GetCharBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::Xml::XmlUTF8NodeWriter::*)(int32_t)>(&::System::Xml::XmlUTF8NodeWriter::GetCharBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6127bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "GetCharBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteDeclaration)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6127c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteCData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6127da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteStartComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteStartComment)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6127f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteStartComment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEndComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteEndComment)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6128048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteEndComment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteComment)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61280e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6128118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61281a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x61281c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEndStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(bool)>(&::System::Xml::XmlUTF8NodeWriter::WriteEndStartElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612827c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6128294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61282fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteStartXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteStartXmlnsAttribute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6128388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteStartXmlnsAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6128488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612850c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x612852c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61285d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6128648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6128668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6128700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WritePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WritePrefix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6128170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WritePrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WritePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WritePrefix)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x612823c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(),
                                                             { "WritePrefix", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteLocalName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61281a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteLocalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteLocalName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6128278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(),
                                                             { "WriteLocalName", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlUTF8NodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612871c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x612873c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6128870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.UnsafeWriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(char16_t*, int32_t)>(&::System::Xml::XmlUTF8NodeWriter::UnsafeWriteEscapedText)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6128760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "UnsafeWriteEscapedText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x61288b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6128a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteText", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6128a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6128a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW)>(&::System::Xml::XmlUTF8NodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6128abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlUTF8NodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6128ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteLessThanCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteLessThanCharEntity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6128ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteLessThanCharEntity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteGreaterThanCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteGreaterThanCharEntity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6128b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteGreaterThanCharEntity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteAmpersandCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteAmpersandCharEntity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6128c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteAmpersandCharEntity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteApostropheCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteApostropheCharEntity)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6128d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteApostropheCharEntity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteQuoteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)()>(&::System::Xml::XmlUTF8NodeWriter::WriteQuoteCharEntity)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6128e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteQuoteCharEntity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteHexCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteHexCharEntity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6128f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteHexCharEntity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61290b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.ToBase16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, uint32_t)>(&::System::Xml::XmlUTF8NodeWriter::ToBase16)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6128fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "ToBase16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteBoolText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(bool)>(&::System::Xml::XmlUTF8NodeWriter::WriteBoolText)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61290f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteDecimalText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::System::Decimal)>(&::System::Xml::XmlUTF8NodeWriter::WriteDecimalText)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x61291a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteDoubleText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(double_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteDoubleText)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6129258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteFloatText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(float_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteFloatText)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6129304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteDateTimeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::System::DateTime)>(&::System::Xml::XmlUTF8NodeWriter::WriteDateTimeText)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61293b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteUniqueIdText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::System::Xml::UniqueId*)>(&::System::Xml::XmlUTF8NodeWriter::WriteUniqueIdText)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x612945c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteInt32Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(int32_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteInt32Text)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x612951c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteInt64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(int64_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteInt64Text)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61295c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteUInt64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(uint64_t)>(&::System::Xml::XmlUTF8NodeWriter::WriteUInt64Text)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6129674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteGuidText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::System::Guid)>(&::System::Xml::XmlUTF8NodeWriter::WriteGuidText)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6129720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteBase64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteBase64Text)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x612975c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.InternalWriteBase64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8NodeWriter::InternalWriteBase64Text)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x61297b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(),
                                                             { "InternalWriteBase64Text", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteTimeSpanText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::System::TimeSpan)>(&::System::Xml::XmlUTF8NodeWriter::WriteTimeSpanText)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6129e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8NodeWriter.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8NodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlUTF8NodeWriter::WriteQualifiedName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6129ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 43 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_entityChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityChars;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_entityChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityChars;
}
constexpr void System::Xml::XmlUTF8NodeWriter::__cordl_internal_set_entityChars(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entityChars = value;
}
constexpr ::ArrayW<bool>& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_isEscapedAttributeChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEscapedAttributeChar;
}
constexpr ::ArrayW<bool> const& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_isEscapedAttributeChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEscapedAttributeChar;
}
constexpr void System::Xml::XmlUTF8NodeWriter::__cordl_internal_set_isEscapedAttributeChar(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEscapedAttributeChar = value;
}
constexpr ::ArrayW<bool>& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_isEscapedElementChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEscapedElementChar;
}
constexpr ::ArrayW<bool> const& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_isEscapedElementChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEscapedElementChar;
}
constexpr void System::Xml::XmlUTF8NodeWriter::__cordl_internal_set_isEscapedElementChar(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEscapedElementChar = value;
}
constexpr bool& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_inAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inAttribute;
}
constexpr bool const& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_inAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inAttribute;
}
constexpr void System::Xml::XmlUTF8NodeWriter::__cordl_internal_set_inAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inAttribute = value;
}
constexpr ::System::Text::Encoding*& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::System::Text::Encoding* const& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void System::Xml::XmlUTF8NodeWriter::__cordl_internal_set_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
constexpr ::ArrayW<char16_t>& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t> const& System::Xml::XmlUTF8NodeWriter::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::XmlUTF8NodeWriter::__cordl_internal_set_chars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chars = value;
}
inline void System::Xml::XmlUTF8NodeWriter::setStaticF_startDecl(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "startDecl", ::System::Xml::XmlUTF8NodeWriter*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::XmlUTF8NodeWriter::getStaticF_startDecl() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "startDecl", ::System::Xml::XmlUTF8NodeWriter*>();
}
inline void System::Xml::XmlUTF8NodeWriter::setStaticF_endDecl(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "endDecl", ::System::Xml::XmlUTF8NodeWriter*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::XmlUTF8NodeWriter::getStaticF_endDecl() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "endDecl", ::System::Xml::XmlUTF8NodeWriter*>();
}
inline void System::Xml::XmlUTF8NodeWriter::setStaticF_utf8Decl(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "utf8Decl", ::System::Xml::XmlUTF8NodeWriter*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::XmlUTF8NodeWriter::getStaticF_utf8Decl() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "utf8Decl", ::System::Xml::XmlUTF8NodeWriter*>();
}
inline void System::Xml::XmlUTF8NodeWriter::setStaticF_digits(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "digits", ::System::Xml::XmlUTF8NodeWriter*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::XmlUTF8NodeWriter::getStaticF_digits() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "digits", ::System::Xml::XmlUTF8NodeWriter*>();
}
inline void System::Xml::XmlUTF8NodeWriter::setStaticF_defaultIsEscapedAttributeChar(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "defaultIsEscapedAttributeChar", ::System::Xml::XmlUTF8NodeWriter*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Xml::XmlUTF8NodeWriter::getStaticF_defaultIsEscapedAttributeChar() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "defaultIsEscapedAttributeChar", ::System::Xml::XmlUTF8NodeWriter*>();
}
inline void System::Xml::XmlUTF8NodeWriter::setStaticF_defaultIsEscapedElementChar(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "defaultIsEscapedElementChar", ::System::Xml::XmlUTF8NodeWriter*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Xml::XmlUTF8NodeWriter::getStaticF_defaultIsEscapedElementChar() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "defaultIsEscapedElementChar", ::System::Xml::XmlUTF8NodeWriter*>();
}
inline void System::Xml::XmlUTF8NodeWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::_ctor(::ArrayW<bool> isEscapedAttributeChar, ::ArrayW<bool> isEscapedElementChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEscapedAttributeChar, isEscapedElementChar);
}
inline void System::Xml::XmlUTF8NodeWriter::SetOutput(::System::IO::Stream* stream, bool ownsStream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(),
                                                           { "SetOutput", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, ownsStream, encoding);
}
inline ::ArrayW<uint8_t> System::Xml::XmlUTF8NodeWriter::GetCharEntityBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "GetCharEntityBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<char16_t> System::Xml::XmlUTF8NodeWriter::GetCharBuffer(int32_t charCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "GetCharBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method, charCount);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteDeclaration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteStartComment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteStartComment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEndComment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteEndComment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteStartElement(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteStartElement(::ArrayW<uint8_t> prefixBuffer, int32_t prefixOffset, int32_t prefixLength, ::ArrayW<uint8_t> localNameBuffer, int32_t localNameOffset,
                                                              int32_t localNameLength) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefixBuffer, prefixOffset, prefixLength, localNameBuffer, localNameOffset, localNameLength);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEndStartElement(bool isEmpty) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEmpty);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEndElement(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEndElement(::ArrayW<uint8_t> prefixBuffer, int32_t prefixOffset, int32_t prefixLength, ::ArrayW<uint8_t> localNameBuffer, int32_t localNameOffset,
                                                            int32_t localNameLength) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefixBuffer, prefixOffset, prefixLength, localNameBuffer, localNameOffset, localNameLength);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteStartXmlnsAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteStartXmlnsAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteXmlnsAttribute(::StringW prefix, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteXmlnsAttribute(::ArrayW<uint8_t> prefixBuffer, int32_t prefixOffset, int32_t prefixLength, ::ArrayW<uint8_t> nsBuffer, int32_t nsOffset,
                                                                int32_t nsLength) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefixBuffer, prefixOffset, prefixLength, nsBuffer, nsOffset, nsLength);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteStartAttribute(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteStartAttribute(::ArrayW<uint8_t> prefixBuffer, int32_t prefixOffset, int32_t prefixLength, ::ArrayW<uint8_t> localNameBuffer, int32_t localNameOffset,
                                                                int32_t localNameLength) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefixBuffer, prefixOffset, prefixLength, localNameBuffer, localNameOffset, localNameLength);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WritePrefix(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WritePrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlUTF8NodeWriter::WritePrefix(::ArrayW<uint8_t> prefixBuffer, int32_t prefixOffset, int32_t prefixLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WritePrefix", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefixBuffer, prefixOffset, prefixLength);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteLocalName(::StringW localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteLocalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteLocalName(::ArrayW<uint8_t> localNameBuffer, int32_t localNameOffset, int32_t localNameLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(),
                                                           { "WriteLocalName", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localNameBuffer, localNameOffset, localNameLength);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEscapedText(::System::Xml::XmlDictionaryString* s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEscapedText(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEscapedText(::ArrayW<char16_t> s, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, offset, count);
}
inline void System::Xml::XmlUTF8NodeWriter::UnsafeWriteEscapedText(char16_t* chars, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "UnsafeWriteEscapedText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, count);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteEscapedText(::ArrayW<uint8_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteText(int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteText", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteText(::ArrayW<uint8_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteText(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteText(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteText(::System::Xml::XmlDictionaryString* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteLessThanCharEntity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteLessThanCharEntity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteGreaterThanCharEntity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteGreaterThanCharEntity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteAmpersandCharEntity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteAmpersandCharEntity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteApostropheCharEntity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteApostropheCharEntity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteQuoteCharEntity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteQuoteCharEntity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteHexCharEntity(int32_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "WriteHexCharEntity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteCharEntity(int32_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline int32_t System::Xml::XmlUTF8NodeWriter::ToBase16(::ArrayW<uint8_t> chars, int32_t offset, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), { "ToBase16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, offset, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteBoolText(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteDecimalText(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteDoubleText(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteFloatText(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteDateTimeText(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteUniqueIdText(::System::Xml::UniqueId* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteInt32Text(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteInt64Text(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteUInt64Text(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteGuidText(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteBase64Text(::ArrayW<uint8_t> trailBytes, int32_t trailByteCount, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailBytes, trailByteCount, buffer, offset, count);
}
inline void System::Xml::XmlUTF8NodeWriter::InternalWriteBase64Text(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(),
                                                           { "InternalWriteBase64Text", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteTimeSpanText(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlUTF8NodeWriter::WriteQualifiedName(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8NodeWriter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline ::System::Xml::XmlUTF8NodeWriter* System::Xml::XmlUTF8NodeWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlUTF8NodeWriter*>());
}
inline ::System::Xml::XmlUTF8NodeWriter* System::Xml::XmlUTF8NodeWriter::New_ctor(::ArrayW<bool> isEscapedAttributeChar, ::ArrayW<bool> isEscapedElementChar) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlUTF8NodeWriter*>(isEscapedAttributeChar, isEscapedElementChar));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlUTF8NodeWriter::XmlUTF8NodeWriter() {}
