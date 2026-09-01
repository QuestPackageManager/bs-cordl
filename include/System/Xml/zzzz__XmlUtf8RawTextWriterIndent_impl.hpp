#pragma once
// IWYU pragma private; include "System\Xml\XmlUtf8RawTextWriterIndent.hpp"
#include "System/Xml/zzzz__ConformanceLevel_impl.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_impl.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriterIndent_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__BitStack_def.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x629f5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteDocType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x629f6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteStartElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x629f780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.StartElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)()>(&::System::Xml::XmlUtf8RawTextWriterIndent::StartElementContent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x629f808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.OnRootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::System::Xml::ConformanceLevel)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::OnRootElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x629f848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteEndElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x629f850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x629f8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x629f980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteCData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629f9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteComment)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x629f9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x629fa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteEntityRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629fa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(char16_t)>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteCharEntity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629fa5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(char16_t, char16_t)>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629fa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteWhitespace)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629fa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629fa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteChars)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629fa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629fa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::StringW)>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629faa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUtf8RawTextWriterIndent::WriteBase64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x629fab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)(::System::Xml::XmlWriterSettings*)>(&::System::Xml::XmlUtf8RawTextWriterIndent::Init)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x629f5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { "Init", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUtf8RawTextWriterIndent.WriteIndent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUtf8RawTextWriterIndent::*)()>(&::System::Xml::XmlUtf8RawTextWriterIndent::WriteIndent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x629f738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { "WriteIndent", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_indentLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentLevel;
}
constexpr int32_t const& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_indentLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentLevel;
}
constexpr void System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_set_indentLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentLevel = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_newLineOnAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineOnAttributes;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_newLineOnAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineOnAttributes;
}
constexpr void System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_set_newLineOnAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLineOnAttributes = value;
}
constexpr ::StringW& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_indentChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentChars;
}
constexpr ::StringW const& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_indentChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentChars;
}
constexpr void System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_set_indentChars(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentChars = value;
}
constexpr bool& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_mixedContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedContent;
}
constexpr bool const& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_mixedContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedContent;
}
constexpr void System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_set_mixedContent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mixedContent = value;
}
constexpr ::System::Xml::BitStack*& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_mixedContentStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedContentStack;
}
constexpr ::System::Xml::BitStack* const& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_mixedContentStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedContentStack;
}
constexpr void System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_set_mixedContentStack(::System::Xml::BitStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mixedContentStack = value;
}
constexpr ::System::Xml::ConformanceLevel& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_conformanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr ::System::Xml::ConformanceLevel const& System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_get_conformanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr void System::Xml::XmlUtf8RawTextWriterIndent::__cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___conformanceLevel = value;
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, settings);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::StartElementContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::OnRootElement(::System::Xml::ConformanceLevel currentConformanceLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentConformanceLevel);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteCData(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteComment(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteProcessingInstruction(::StringW target, ::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, text);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteEntityRef(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteCharEntity(char16_t ch) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteWhitespace(::StringW ws) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteString(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteRaw(::StringW data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::Init(::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { "Init", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void System::Xml::XmlUtf8RawTextWriterIndent::WriteIndent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUtf8RawTextWriterIndent*>(), { "WriteIndent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlUtf8RawTextWriterIndent* System::Xml::XmlUtf8RawTextWriterIndent::New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlUtf8RawTextWriterIndent*>(stream, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlUtf8RawTextWriterIndent::XmlUtf8RawTextWriterIndent() {}
