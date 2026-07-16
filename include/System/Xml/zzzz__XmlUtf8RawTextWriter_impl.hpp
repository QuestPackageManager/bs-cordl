#pragma once
// IWYU pragma private; include "System/Xml/XmlUtf8RawTextWriter.hpp"
#include "System/Xml/zzzz__NewLineHandling_impl.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/Xml/zzzz__XmlOutputMethod_impl.hpp"
#include "System/Xml/zzzz__XmlRawWriter_impl.hpp"
#include "System/Xml/zzzz__XmlStandalone_impl.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::System::Xml::XmlWriterSettings*)>(&::System::Xml::XmlUtf8RawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6296c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::XmlUtf8RawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x629703c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::System::Xml::XmlStandalone)>(&::System::Xml::XmlUtf8RawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6297188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6297328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x62973b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62975c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)()>(&::System::Xml::XmlUtf8RawTextWriter::StartElementContent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6297674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x62976bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x629781c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6297918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)()>(&::System::Xml::XmlUtf8RawTextWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6297a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6297a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.get_SupportsNamespaceDeclarationInChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlUtf8RawTextWriter::*)()>(&::System::Xml::XmlUtf8RawTextWriter::get_SupportsNamespaceDeclarationInChunks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6297acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteStartNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteStartNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6297ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteEndNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)()>(&::System::Xml::XmlUtf8RawTextWriter::WriteEndNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6297be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteCData)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6297c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteComment)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6298184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x62985dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6298704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(char16_t)>(&::System::Xml::XmlUtf8RawTextWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x62987a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6298964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6298f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(char16_t, char16_t)>(&::System::Xml::XmlUtf8RawTextWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6298f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlUtf8RawTextWriter::WriteChars)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6299094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlUtf8RawTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x62990d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6299338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)()>(&::System::Xml::XmlUtf8RawTextWriter::Close)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6299368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)()>(&::System::Xml::XmlUtf8RawTextWriter::Flush)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x629945c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.FlushBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)()>(&::System::Xml::XmlUtf8RawTextWriter::FlushBuffer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6299498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.FlushEncoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)()>(&::System::Xml::XmlUtf8RawTextWriter::FlushEncoder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6299458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "FlushEncoder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteAttributeTextBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::XmlUtf8RawTextWriter::WriteAttributeTextBlock)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x629898c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteAttributeTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteElementTextBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::XmlUtf8RawTextWriter::WriteElementTextBlock)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6298c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteElementTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.RawText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::RawText)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x629730c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "RawText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.RawText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::XmlUtf8RawTextWriter::RawText)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x62999ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "RawText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteRawWithCharChecking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::XmlUtf8RawTextWriter::WriteRawWithCharChecking)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6299114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteRawWithCharChecking", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteCommentOrPi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, int32_t)>(&::System::Xml::XmlUtf8RawTextWriter::WriteCommentOrPi)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x62982dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteCommentOrPi", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteCDataSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriter::WriteCDataSection)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6297e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteCDataSection", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.IsSurrogateByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::System::Xml::XmlUtf8RawTextWriter::IsSurrogateByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6299b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "IsSurrogateByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.EncodeSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(char16_t*, char16_t*, uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::EncodeSurrogate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x62996d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                             { "EncodeSurrogate", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.InvalidXmlChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::System::Xml::XmlUtf8RawTextWriter::*)(int32_t, uint8_t*, bool)>(&::System::Xml::XmlUtf8RawTextWriter::InvalidXmlChar)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6299864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "InvalidXmlChar", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.EncodeChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::by_ref<char16_t*>, char16_t*, ::by_ref<uint8_t*>)>(
    &::System::Xml::XmlUtf8RawTextWriter::EncodeChar)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6299c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                             { "EncodeChar", {}, { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.EncodeMultibyteUTF8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(int32_t, uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::EncodeMultibyteUTF8)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6299914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "EncodeMultibyteUTF8", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.CharToUTF8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<char16_t*>, char16_t*, ::by_ref<uint8_t*>)>(&::System::Xml::XmlUtf8RawTextWriter::CharToUTF8)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6299cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                             { "CharToUTF8", {}, { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.WriteNewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::System::Xml::XmlUtf8RawTextWriter::*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::WriteNewLine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6299958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteNewLine", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.LtEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::LtEntity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6299644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "LtEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.GtEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::GtEntity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6299654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "GtEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.AmpEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::AmpEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6299628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "AmpEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.QuoteEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::QuoteEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6299664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "QuoteEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.TabEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::TabEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6299680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "TabEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.LineFeedEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::LineFeedEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62996b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "LineFeedEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.CarriageReturnEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::CarriageReturnEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x629969c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "CarriageReturnEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.CharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*, char16_t)>(&::System::Xml::XmlUtf8RawTextWriter::CharEntity)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6299b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "CharEntity", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.RawStartCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::RawStartCData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6299b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "RawStartCData", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.RawEndCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*)>(&::System::Xml::XmlUtf8RawTextWriter::RawEndCData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6299b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "RawEndCData", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriter.ValidateContentChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriter::*)(::StringW, ::StringW, bool)>(&::System::Xml::XmlUtf8RawTextWriter::ValidateContentChars)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6296cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                             { "ValidateContentChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_useAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAsync;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_useAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAsync;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_useAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAsync = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_bufBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufBytes;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_bufBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufBytes;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_bufBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufBytes = value;
}
constexpr ::System::IO::Stream*& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::System::IO::Stream* const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
constexpr ::System::Text::Encoding*& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::System::Text::Encoding* const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
constexpr ::System::Xml::XmlCharType& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
constexpr int32_t& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_bufPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufPos;
}
constexpr int32_t const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_bufPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufPos;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_bufPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufPos = value;
}
constexpr int32_t& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_textPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textPos;
}
constexpr int32_t const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_textPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textPos;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_textPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textPos = value;
}
constexpr int32_t& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_contentPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentPos;
}
constexpr int32_t const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_contentPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentPos;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_contentPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentPos = value;
}
constexpr int32_t& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_cdataPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cdataPos;
}
constexpr int32_t const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_cdataPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cdataPos;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_cdataPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cdataPos = value;
}
constexpr int32_t& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_attrEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrEndPos;
}
constexpr int32_t const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_attrEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrEndPos;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_attrEndPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrEndPos = value;
}
constexpr int32_t& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_bufLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufLen;
}
constexpr int32_t const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_bufLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufLen;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_bufLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufLen = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_writeToNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeToNull;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_writeToNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeToNull;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_writeToNull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeToNull = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_hadDoubleBracket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hadDoubleBracket;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_hadDoubleBracket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hadDoubleBracket;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_hadDoubleBracket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hadDoubleBracket = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_inAttributeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inAttributeValue;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_inAttributeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inAttributeValue;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_inAttributeValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inAttributeValue = value;
}
constexpr ::System::Xml::NewLineHandling& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_newLineHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineHandling;
}
constexpr ::System::Xml::NewLineHandling const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_newLineHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineHandling;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_newLineHandling(::System::Xml::NewLineHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLineHandling = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_closeOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeOutput;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_closeOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeOutput;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_closeOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeOutput = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_omitXmlDeclaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___omitXmlDeclaration;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_omitXmlDeclaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___omitXmlDeclaration;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_omitXmlDeclaration(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___omitXmlDeclaration = value;
}
constexpr ::StringW& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_newLineChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineChars;
}
constexpr ::StringW const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_newLineChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineChars;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_newLineChars(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLineChars = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_checkCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_checkCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_checkCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkCharacters = value;
}
constexpr ::System::Xml::XmlStandalone& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_standalone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standalone;
}
constexpr ::System::Xml::XmlStandalone const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_standalone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standalone;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_standalone(::System::Xml::XmlStandalone value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___standalone = value;
}
constexpr ::System::Xml::XmlOutputMethod& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_outputMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputMethod;
}
constexpr ::System::Xml::XmlOutputMethod const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_outputMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputMethod;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_outputMethod(::System::Xml::XmlOutputMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputMethod = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_autoXmlDeclaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoXmlDeclaration;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_autoXmlDeclaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoXmlDeclaration;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_autoXmlDeclaration(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoXmlDeclaration = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_mergeCDataSections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mergeCDataSections;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriter::__cordl_internal_get_mergeCDataSections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mergeCDataSections;
}
constexpr void System::Xml::XmlUtf8RawTextWriter::__cordl_internal_set_mergeCDataSections(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mergeCDataSections = value;
}
inline void System::Xml::XmlUtf8RawTextWriter::_ctor(::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void System::Xml::XmlUtf8RawTextWriter::_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, settings);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteXmlDeclaration(::StringW xmldecl) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmldecl);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlUtf8RawTextWriter::StartElementContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteNamespaceDeclaration(::StringW prefix, ::StringW namespaceName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, namespaceName);
}
inline bool System::Xml::XmlUtf8RawTextWriter::get_SupportsNamespaceDeclarationInChunks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteStartNamespaceDeclaration(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteEndNamespaceDeclaration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteRaw(::StringW data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Xml::XmlUtf8RawTextWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriter::FlushBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriter::FlushEncoder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "FlushEncoder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteAttributeTextBlock(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteAttributeTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteElementTextBlock(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteElementTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::XmlUtf8RawTextWriter::RawText(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "RawText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Xml::XmlUtf8RawTextWriter::RawText(char16_t* pSrcBegin, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "RawText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrcBegin, pSrcEnd);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteRawWithCharChecking(char16_t* pSrcBegin, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteRawWithCharChecking", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrcBegin, pSrcEnd);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteCommentOrPi(::StringW text, int32_t stopChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteCommentOrPi", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, stopChar);
}
inline void System::Xml::XmlUtf8RawTextWriter::WriteCDataSection(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteCDataSection", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline bool System::Xml::XmlUtf8RawTextWriter::IsSurrogateByte(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "IsSurrogateByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::EncodeSurrogate(char16_t* pSrc, char16_t* pSrcEnd, uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                           { "EncodeSurrogate", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pSrc, pSrcEnd, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::InvalidXmlChar(int32_t ch, uint8_t* pDst, bool entitize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                                                         { "InvalidXmlChar", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(this, ___internal_method, ch, pDst, entitize);
}
inline void System::Xml::XmlUtf8RawTextWriter::EncodeChar(::by_ref<char16_t*> pSrc, char16_t* pSrcEnd, ::by_ref<uint8_t*> pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                           { "EncodeChar", {}, { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::EncodeMultibyteUTF8(int32_t ch, uint8_t* pDst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "EncodeMultibyteUTF8", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, ch, pDst);
}
inline void System::Xml::XmlUtf8RawTextWriter::CharToUTF8(::by_ref<char16_t*> pSrc, char16_t* pSrcEnd, ::by_ref<uint8_t*> pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                           { "CharToUTF8", {}, { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pSrc, pSrcEnd, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::WriteNewLine(uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "WriteNewLine", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(this, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::LtEntity(uint8_t* pDst) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "LtEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::GtEntity(uint8_t* pDst) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "GtEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::AmpEntity(uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "AmpEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::QuoteEntity(uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "QuoteEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::TabEntity(uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "TabEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::LineFeedEntity(uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "LineFeedEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::CarriageReturnEntity(uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "CarriageReturnEntity", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::CharEntity(uint8_t* pDst, char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "CharEntity", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst, ch);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::RawStartCData(uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "RawStartCData", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline uint8_t* System::Xml::XmlUtf8RawTextWriter::RawEndCData(uint8_t* pDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(), { "RawEndCData", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, pDst);
}
inline void System::Xml::XmlUtf8RawTextWriter::ValidateContentChars(::StringW chars, ::StringW propertyName, bool allowOnlyWhitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriter*>(),
                                                           { "ValidateContentChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, propertyName, allowOnlyWhitespace);
}
inline ::System::Xml::XmlUtf8RawTextWriter* System::Xml::XmlUtf8RawTextWriter::New_ctor(::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlUtf8RawTextWriter*>(settings));
}
inline ::System::Xml::XmlUtf8RawTextWriter* System::Xml::XmlUtf8RawTextWriter::New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlUtf8RawTextWriter*>(stream, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlUtf8RawTextWriter::XmlUtf8RawTextWriter() {}
