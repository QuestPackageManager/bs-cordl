#pragma once
// IWYU pragma private; include "System/Xml/XmlEncodedRawTextWriterIndent.hpp"
#include "System/Xml/zzzz__ConformanceLevel_impl.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_impl.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriterIndent_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Xml/zzzz__BitStack_def.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61b3b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61b3c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteDocType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61b3c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteStartElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61b3d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.StartElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)()>(&::System::Xml::XmlEncodedRawTextWriterIndent::StartElementContent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61b3dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.OnRootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::System::Xml::ConformanceLevel)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::OnRootElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b3e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteEndElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61b3e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61b3ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x61b3f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlEncodedRawTextWriterIndent::WriteCData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b3f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlEncodedRawTextWriterIndent::WriteComment)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61b3f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61b3fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlEncodedRawTextWriterIndent::WriteEntityRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b4008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(char16_t)>(&::System::Xml::XmlEncodedRawTextWriterIndent::WriteCharEntity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b4014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(char16_t, char16_t)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b4020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlEncodedRawTextWriterIndent::WriteWhitespace)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b402c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlEncodedRawTextWriterIndent::WriteString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b4038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteChars)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b4044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b4050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlEncodedRawTextWriterIndent::WriteRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::WriteBase64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61b4068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)(::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::XmlEncodedRawTextWriterIndent::Init)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x61b3b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { "Init", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEncodedRawTextWriterIndent.WriteIndent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEncodedRawTextWriterIndent::*)()>(&::System::Xml::XmlEncodedRawTextWriterIndent::WriteIndent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61b3ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { "WriteIndent", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_indentLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentLevel;
}
constexpr int32_t const& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_indentLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentLevel;
}
constexpr void System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_set_indentLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentLevel = value;
}
constexpr bool& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_newLineOnAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineOnAttributes;
}
constexpr bool const& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_newLineOnAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineOnAttributes;
}
constexpr void System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_set_newLineOnAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLineOnAttributes = value;
}
constexpr ::StringW& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_indentChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentChars;
}
constexpr ::StringW const& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_indentChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentChars;
}
constexpr void System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_set_indentChars(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentChars = value;
}
constexpr bool& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_mixedContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedContent;
}
constexpr bool const& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_mixedContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedContent;
}
constexpr void System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_set_mixedContent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mixedContent = value;
}
constexpr ::System::Xml::BitStack*& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_mixedContentStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedContentStack;
}
constexpr ::System::Xml::BitStack* const& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_mixedContentStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedContentStack;
}
constexpr void System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_set_mixedContentStack(::System::Xml::BitStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mixedContentStack = value;
}
constexpr ::System::Xml::ConformanceLevel& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_conformanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr ::System::Xml::ConformanceLevel const& System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_get_conformanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr void System::Xml::XmlEncodedRawTextWriterIndent::__cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___conformanceLevel = value;
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, settings);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, settings);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::StartElementContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::OnRootElement(::System::Xml::ConformanceLevel currentConformanceLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentConformanceLevel);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteCData(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteComment(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteProcessingInstruction(::StringW target, ::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, text);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteEntityRef(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteCharEntity(char16_t ch) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteWhitespace(::StringW ws) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteString(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteRaw(::StringW data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::Init(::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { "Init", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void System::Xml::XmlEncodedRawTextWriterIndent::WriteIndent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEncodedRawTextWriterIndent*>(), { "WriteIndent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlEncodedRawTextWriterIndent* System::Xml::XmlEncodedRawTextWriterIndent::New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlEncodedRawTextWriterIndent*>(writer, settings));
}
inline ::System::Xml::XmlEncodedRawTextWriterIndent* System::Xml::XmlEncodedRawTextWriterIndent::New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlEncodedRawTextWriterIndent*>(stream, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlEncodedRawTextWriterIndent::XmlEncodedRawTextWriterIndent() {}
