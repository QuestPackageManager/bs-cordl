#pragma once
// IWYU pragma private; include "System/Xml/XmlSigningNodeWriter.hpp"
#include "System/Xml/zzzz__XmlNodeWriter_impl.hpp"
#include "System/Xml/zzzz__XmlSigningNodeWriter_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNodeWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)()>(&::System::Xml::XmlSigningNodeWriter::Flush)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x654fe68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)()>(&::System::Xml::XmlSigningNodeWriter::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x654feb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)()>(&::System::Xml::XmlSigningNodeWriter::WriteDeclaration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x654fee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW)>(&::System::Xml::XmlSigningNodeWriter::WriteComment)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x654ff14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW)>(&::System::Xml::XmlSigningNodeWriter::WriteCData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x654ff58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlSigningNodeWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x654ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlSigningNodeWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x654ffe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteEndStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(bool)>(&::System::Xml::XmlSigningNodeWriter::WriteEndStartElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6550038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlSigningNodeWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6550080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlSigningNodeWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65500d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlSigningNodeWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6550120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlSigningNodeWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6550174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlSigningNodeWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x65501c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)()>(&::System::Xml::XmlSigningNodeWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6550218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(int32_t)>(&::System::Xml::XmlSigningNodeWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6550250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW)>(&::System::Xml::XmlSigningNodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6550298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlSigningNodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65502e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlSigningNodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6550340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlSigningNodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x655038c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW)>(&::System::Xml::XmlSigningNodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65503ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlSigningNodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6550434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlSigningNodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6550494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlSigningNodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65504f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteInt32Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(int32_t)>(&::System::Xml::XmlSigningNodeWriter::WriteInt32Text)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6550540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteInt64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(int64_t)>(&::System::Xml::XmlSigningNodeWriter::WriteInt64Text)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6550624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteBoolText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(bool)>(&::System::Xml::XmlSigningNodeWriter::WriteBoolText)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6550708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteUInt64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(uint64_t)>(&::System::Xml::XmlSigningNodeWriter::WriteUInt64Text)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65507ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteFloatText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(float_t)>(&::System::Xml::XmlSigningNodeWriter::WriteFloatText)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65508d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteDoubleText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(double_t)>(&::System::Xml::XmlSigningNodeWriter::WriteDoubleText)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65509b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteDecimalText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::System::Decimal)>(&::System::Xml::XmlSigningNodeWriter::WriteDecimalText)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6550a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteDateTimeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::System::DateTime)>(&::System::Xml::XmlSigningNodeWriter::WriteDateTimeText)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6550b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteUniqueIdText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::System::Xml::UniqueId*)>(&::System::Xml::XmlSigningNodeWriter::WriteUniqueIdText)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6550c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteTimeSpanText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::System::TimeSpan)>(&::System::Xml::XmlSigningNodeWriter::WriteTimeSpanText)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6550d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteGuidText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::System::Guid)>(&::System::Xml::XmlSigningNodeWriter::WriteGuidText)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6550e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteStartListText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)()>(&::System::Xml::XmlSigningNodeWriter::WriteStartListText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6550ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteListSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)()>(&::System::Xml::XmlSigningNodeWriter::WriteListSeparator)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6550f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteEndListText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)()>(&::System::Xml::XmlSigningNodeWriter::WriteEndListText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6550f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteBase64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlSigningNodeWriter::WriteBase64Text)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6550f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteBase64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlSigningNodeWriter::WriteBase64Text)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6551010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(),
                                                             { "WriteBase64Text", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSigningNodeWriter.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlSigningNodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlSigningNodeWriter::WriteQualifiedName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6551754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 46 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNodeWriter*& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlNodeWriter* const& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Xml::XmlSigningNodeWriter::__cordl_internal_set_writer(::System::Xml::XmlNodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writer = value;
}
constexpr ::System::Xml::XmlCanonicalWriter*& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_signingWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingWriter;
}
constexpr ::System::Xml::XmlCanonicalWriter* const& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_signingWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingWriter;
}
constexpr void System::Xml::XmlSigningNodeWriter::__cordl_internal_set_signingWriter(::System::Xml::XmlCanonicalWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signingWriter = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::XmlSigningNodeWriter::__cordl_internal_set_chars(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chars = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_base64Chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base64Chars;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_base64Chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base64Chars;
}
constexpr void System::Xml::XmlSigningNodeWriter::__cordl_internal_set_base64Chars(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___base64Chars = value;
}
constexpr bool& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr bool const& System::Xml::XmlSigningNodeWriter::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void System::Xml::XmlSigningNodeWriter::__cordl_internal_set_text(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___text = value;
}
inline void System::Xml::XmlSigningNodeWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlSigningNodeWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlSigningNodeWriter::WriteDeclaration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlSigningNodeWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlSigningNodeWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlSigningNodeWriter::WriteStartElement(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlSigningNodeWriter::WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlSigningNodeWriter::WriteEndStartElement(bool isEmpty) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEmpty);
}
inline void System::Xml::XmlSigningNodeWriter::WriteEndElement(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlSigningNodeWriter::WriteXmlnsAttribute(::StringW prefix, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlSigningNodeWriter::WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlSigningNodeWriter::WriteStartAttribute(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlSigningNodeWriter::WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlSigningNodeWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlSigningNodeWriter::WriteCharEntity(int32_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlSigningNodeWriter::WriteEscapedText(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteEscapedText(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlSigningNodeWriter::WriteEscapedText(::System::Xml::XmlDictionaryString* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteEscapedText(::ArrayW<uint8_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlSigningNodeWriter::WriteText(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteText(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlSigningNodeWriter::WriteText(::ArrayW<uint8_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlSigningNodeWriter::WriteText(::System::Xml::XmlDictionaryString* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteInt32Text(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteInt64Text(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteBoolText(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteUInt64Text(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteFloatText(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteDoubleText(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteDecimalText(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteDateTimeText(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteUniqueIdText(::System::Xml::UniqueId* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteTimeSpanText(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteGuidText(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlSigningNodeWriter::WriteStartListText() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlSigningNodeWriter::WriteListSeparator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlSigningNodeWriter::WriteEndListText() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlSigningNodeWriter::WriteBase64Text(::ArrayW<uint8_t> trailBytes, int32_t trailByteCount, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailBytes, trailByteCount, buffer, offset, count);
}
inline void System::Xml::XmlSigningNodeWriter::WriteBase64Text(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(),
                                                           { "WriteBase64Text", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::Xml::XmlSigningNodeWriter::WriteQualifiedName(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlSigningNodeWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSigningNodeWriter::XmlSigningNodeWriter() {}
