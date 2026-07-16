#pragma once
// IWYU pragma private; include "System/Xml/XmlAutoDetectWriter.hpp"
#include "System/Xml/zzzz__XmlRawWriter_impl.hpp"
#include "System/Xml/zzzz__XmlAutoDetectWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__OnRemoveWriter_def.hpp"
#include "System/Xml/zzzz__XmlEventCache_def.hpp"
#include "System/Xml/zzzz__XmlOutputMethod_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::Xml::XmlWriterSettings*)>(&::System::Xml::XmlAutoDetectWriter::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61b0720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::XmlAutoDetectWriter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61b07c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::XmlAutoDetectWriter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61b07f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61b0818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61b0890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61b0ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)()>(&::System::Xml::XmlAutoDetectWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61b0b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteCData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61b0b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteComment)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61b0bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61b0c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61b0c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61b0c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlAutoDetectWriter::WriteChars)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61b0cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlAutoDetectWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61b0cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61b0d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b0d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(char16_t)>(&::System::Xml::XmlAutoDetectWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b0db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(char16_t, char16_t)>(&::System::Xml::XmlAutoDetectWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61b0e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlAutoDetectWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61b0e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlAutoDetectWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61b0eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)()>(&::System::Xml::XmlAutoDetectWriter::Close)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x61b0f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)()>(&::System::Xml::XmlAutoDetectWriter::Flush)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x61b0f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b0f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(bool)>(&::System::Xml::XmlAutoDetectWriter::WriteValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b0fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::DateTime)>(&::System::Xml::XmlAutoDetectWriter::WriteValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b102c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(double_t)>(&::System::Xml::XmlAutoDetectWriter::WriteValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b1078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(float_t)>(&::System::Xml::XmlAutoDetectWriter::WriteValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b10c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::Decimal)>(&::System::Xml::XmlAutoDetectWriter::WriteValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61b1110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(int32_t)>(&::System::Xml::XmlAutoDetectWriter::WriteValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b1164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(int64_t)>(&::System::Xml::XmlAutoDetectWriter::WriteValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b11b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.set_NamespaceResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::XmlAutoDetectWriter::set_NamespaceResolver)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61b11fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::Xml::XmlStandalone)>(&::System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b1278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)()>(&::System::Xml::XmlAutoDetectWriter::StartElementContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61b12c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61b12e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61b1304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61b1324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.get_SupportsNamespaceDeclarationInChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAutoDetectWriter::*)()>(&::System::Xml::XmlAutoDetectWriter::get_SupportsNamespaceDeclarationInChunks)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61b1378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteStartNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::WriteStartNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b1398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.WriteEndNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)()>(&::System::Xml::XmlAutoDetectWriter::WriteEndNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61b13e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.IsHtmlTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::IsHtmlTag)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61b0910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { "IsHtmlTag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.EnsureWrappedWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::Xml::XmlOutputMethod)>(&::System::Xml::XmlAutoDetectWriter::EnsureWrappedWriter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61b0880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { "EnsureWrappedWriter", {}, { ::i2c::type_of<::System::Xml::XmlOutputMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.TextBlockCreatesWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAutoDetectWriter::*)(::StringW)>(&::System::Xml::XmlAutoDetectWriter::TextBlockCreatesWriter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61b0b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { "TextBlockCreatesWriter", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAutoDetectWriter.CreateWrappedWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAutoDetectWriter::*)(::System::Xml::XmlOutputMethod)>(&::System::Xml::XmlAutoDetectWriter::CreateWrappedWriter)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61b0978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { "CreateWrappedWriter", {}, { ::i2c::type_of<::System::Xml::XmlOutputMethod>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlRawWriter*& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_wrapped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapped;
}
constexpr ::System::Xml::XmlRawWriter* const& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_wrapped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapped;
}
constexpr void System::Xml::XmlAutoDetectWriter::__cordl_internal_set_wrapped(::System::Xml::XmlRawWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wrapped = value;
}
constexpr ::System::Xml::OnRemoveWriter*& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_onRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRemove;
}
constexpr ::System::Xml::OnRemoveWriter* const& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_onRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRemove;
}
constexpr void System::Xml::XmlAutoDetectWriter::__cordl_internal_set_onRemove(::System::Xml::OnRemoveWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onRemove = value;
}
constexpr ::System::Xml::XmlWriterSettings*& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_writerSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writerSettings;
}
constexpr ::System::Xml::XmlWriterSettings* const& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_writerSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writerSettings;
}
constexpr void System::Xml::XmlAutoDetectWriter::__cordl_internal_set_writerSettings(::System::Xml::XmlWriterSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writerSettings = value;
}
constexpr ::System::Xml::XmlEventCache*& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_eventCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventCache;
}
constexpr ::System::Xml::XmlEventCache* const& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_eventCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventCache;
}
constexpr void System::Xml::XmlAutoDetectWriter::__cordl_internal_set_eventCache(::System::Xml::XmlEventCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventCache = value;
}
constexpr ::System::IO::TextWriter*& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_textWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textWriter;
}
constexpr ::System::IO::TextWriter* const& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_textWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textWriter;
}
constexpr void System::Xml::XmlAutoDetectWriter::__cordl_internal_set_textWriter(::System::IO::TextWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textWriter = value;
}
constexpr ::System::IO::Stream*& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_strm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strm;
}
constexpr ::System::IO::Stream* const& System::Xml::XmlAutoDetectWriter::__cordl_internal_get_strm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strm;
}
constexpr void System::Xml::XmlAutoDetectWriter::__cordl_internal_set_strm(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strm = value;
}
inline void System::Xml::XmlAutoDetectWriter::_ctor(::System::Xml::XmlWriterSettings* writerSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writerSettings);
}
inline void System::Xml::XmlAutoDetectWriter::_ctor(::System::IO::TextWriter* textWriter, ::System::Xml::XmlWriterSettings* writerSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textWriter, writerSettings);
}
inline void System::Xml::XmlAutoDetectWriter::_ctor(::System::IO::Stream* strm, ::System::Xml::XmlWriterSettings* writerSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strm, writerSettings);
}
inline void System::Xml::XmlAutoDetectWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlAutoDetectWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlAutoDetectWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlAutoDetectWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAutoDetectWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlAutoDetectWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlAutoDetectWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void System::Xml::XmlAutoDetectWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void System::Xml::XmlAutoDetectWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlAutoDetectWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlAutoDetectWriter::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlAutoDetectWriter::WriteRaw(::StringW data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Xml::XmlAutoDetectWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::XmlAutoDetectWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlAutoDetectWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlAutoDetectWriter::WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlAutoDetectWriter::WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlAutoDetectWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAutoDetectWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAutoDetectWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration(::StringW xmldecl) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmldecl);
}
inline void System::Xml::XmlAutoDetectWriter::StartElementContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAutoDetectWriter::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlAutoDetectWriter::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlAutoDetectWriter::WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline bool System::Xml::XmlAutoDetectWriter::get_SupportsNamespaceDeclarationInChunks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlAutoDetectWriter::WriteStartNamespaceDeclaration(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlAutoDetectWriter::WriteEndNamespaceDeclaration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlAutoDetectWriter::IsHtmlTag(::StringW tagName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { "IsHtmlTag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tagName);
}
inline void System::Xml::XmlAutoDetectWriter::EnsureWrappedWriter(::System::Xml::XmlOutputMethod outMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { "EnsureWrappedWriter", {}, { ::i2c::type_of<::System::Xml::XmlOutputMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outMethod);
}
inline bool System::Xml::XmlAutoDetectWriter::TextBlockCreatesWriter(::StringW textBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { "TextBlockCreatesWriter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, textBlock);
}
inline void System::Xml::XmlAutoDetectWriter::CreateWrappedWriter(::System::Xml::XmlOutputMethod outMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAutoDetectWriter*>(), { "CreateWrappedWriter", {}, { ::i2c::type_of<::System::Xml::XmlOutputMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outMethod);
}
inline ::System::Xml::XmlAutoDetectWriter* System::Xml::XmlAutoDetectWriter::New_ctor(::System::Xml::XmlWriterSettings* writerSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAutoDetectWriter*>(writerSettings));
}
inline ::System::Xml::XmlAutoDetectWriter* System::Xml::XmlAutoDetectWriter::New_ctor(::System::IO::TextWriter* textWriter, ::System::Xml::XmlWriterSettings* writerSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAutoDetectWriter*>(textWriter, writerSettings));
}
inline ::System::Xml::XmlAutoDetectWriter* System::Xml::XmlAutoDetectWriter::New_ctor(::System::IO::Stream* strm, ::System::Xml::XmlWriterSettings* writerSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAutoDetectWriter*>(strm, writerSettings));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAutoDetectWriter::XmlAutoDetectWriter() {}
