#pragma once
// IWYU pragma private; include "System/Xml/QueryOutputWriter.hpp"
#include "System/Xml/zzzz__XmlRawWriter_impl.hpp"
#include "System/Xml/zzzz__QueryOutputWriter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__BitStack_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::QueryOutputWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::System::Xml::XmlRawWriter*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::QueryOutputWriter::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x61ac2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlRawWriter*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.set_NamespaceResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::QueryOutputWriter::set_NamespaceResolver)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61ac5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::System::Xml::XmlStandalone)>(&::System::Xml::QueryOutputWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ac5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW)>(&::System::Xml::QueryOutputWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ac614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::QueryOutputWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61ac634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::QueryOutputWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x61ac664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::QueryOutputWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61ac840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::QueryOutputWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61ac8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)()>(&::System::Xml::QueryOutputWriter::StartElementContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ac920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::QueryOutputWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61ac940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)()>(&::System::Xml::QueryOutputWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61ac968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW, ::StringW)>(&::System::Xml::QueryOutputWriter::WriteNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ac990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.get_SupportsNamespaceDeclarationInChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::QueryOutputWriter::*)()>(&::System::Xml::QueryOutputWriter::get_SupportsNamespaceDeclarationInChunks)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ac9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteStartNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW)>(&::System::Xml::QueryOutputWriter::WriteStartNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ac9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteEndNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)()>(&::System::Xml::QueryOutputWriter::WriteEndNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ac9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW)>(&::System::Xml::QueryOutputWriter::WriteCData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61aca10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW)>(&::System::Xml::QueryOutputWriter::WriteComment)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61aca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW, ::StringW)>(&::System::Xml::QueryOutputWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61aca58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW)>(&::System::Xml::QueryOutputWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61aca80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW)>(&::System::Xml::QueryOutputWriter::WriteString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61acb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::QueryOutputWriter::WriteChars)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61acb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW)>(&::System::Xml::QueryOutputWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61acc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(char16_t)>(&::System::Xml::QueryOutputWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61acc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(char16_t, char16_t)>(&::System::Xml::QueryOutputWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61acc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::QueryOutputWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61acc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)(::StringW)>(&::System::Xml::QueryOutputWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61acd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)()>(&::System::Xml::QueryOutputWriter::Close)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x61acd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)()>(&::System::Xml::QueryOutputWriter::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ace38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.StartCDataSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::QueryOutputWriter::*)()>(&::System::Xml::QueryOutputWriter::StartCDataSection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x61acaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { "StartCDataSection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::QueryOutputWriter.EndCDataSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::QueryOutputWriter::*)()>(&::System::Xml::QueryOutputWriter::EndCDataSection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ac838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { "EndCDataSection", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlRawWriter*& System::Xml::QueryOutputWriter::__cordl_internal_get_wrapped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapped;
}
constexpr ::System::Xml::XmlRawWriter* const& System::Xml::QueryOutputWriter::__cordl_internal_get_wrapped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapped;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_wrapped(::System::Xml::XmlRawWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wrapped = value;
}
constexpr bool& System::Xml::QueryOutputWriter::__cordl_internal_get_inCDataSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inCDataSection;
}
constexpr bool const& System::Xml::QueryOutputWriter::__cordl_internal_get_inCDataSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inCDataSection;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_inCDataSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inCDataSection = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, int32_t>*& System::Xml::QueryOutputWriter::__cordl_internal_get_lookupCDataElems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookupCDataElems;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, int32_t>* const& System::Xml::QueryOutputWriter::__cordl_internal_get_lookupCDataElems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookupCDataElems;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_lookupCDataElems(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookupCDataElems = value;
}
constexpr ::System::Xml::BitStack*& System::Xml::QueryOutputWriter::__cordl_internal_get_bitsCData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitsCData;
}
constexpr ::System::Xml::BitStack* const& System::Xml::QueryOutputWriter::__cordl_internal_get_bitsCData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitsCData;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_bitsCData(::System::Xml::BitStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitsCData = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::QueryOutputWriter::__cordl_internal_get_qnameCData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameCData;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::QueryOutputWriter::__cordl_internal_get_qnameCData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameCData;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_qnameCData(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qnameCData = value;
}
constexpr bool& System::Xml::QueryOutputWriter::__cordl_internal_get_outputDocType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputDocType;
}
constexpr bool const& System::Xml::QueryOutputWriter::__cordl_internal_get_outputDocType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputDocType;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_outputDocType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputDocType = value;
}
constexpr bool& System::Xml::QueryOutputWriter::__cordl_internal_get_checkWellFormedDoc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkWellFormedDoc;
}
constexpr bool const& System::Xml::QueryOutputWriter::__cordl_internal_get_checkWellFormedDoc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkWellFormedDoc;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_checkWellFormedDoc(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkWellFormedDoc = value;
}
constexpr bool& System::Xml::QueryOutputWriter::__cordl_internal_get_hasDocElem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDocElem;
}
constexpr bool const& System::Xml::QueryOutputWriter::__cordl_internal_get_hasDocElem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDocElem;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_hasDocElem(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDocElem = value;
}
constexpr bool& System::Xml::QueryOutputWriter::__cordl_internal_get_inAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inAttr;
}
constexpr bool const& System::Xml::QueryOutputWriter::__cordl_internal_get_inAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inAttr;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_inAttr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inAttr = value;
}
constexpr ::StringW& System::Xml::QueryOutputWriter::__cordl_internal_get_systemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemId;
}
constexpr ::StringW const& System::Xml::QueryOutputWriter::__cordl_internal_get_systemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemId;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_systemId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemId = value;
}
constexpr ::StringW& System::Xml::QueryOutputWriter::__cordl_internal_get_publicId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicId;
}
constexpr ::StringW const& System::Xml::QueryOutputWriter::__cordl_internal_get_publicId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicId;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_publicId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicId = value;
}
constexpr int32_t& System::Xml::QueryOutputWriter::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::QueryOutputWriter::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::QueryOutputWriter::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
inline void System::Xml::QueryOutputWriter::_ctor(::System::Xml::XmlRawWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlRawWriter*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, settings);
}
inline void System::Xml::QueryOutputWriter::set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::QueryOutputWriter::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Xml::QueryOutputWriter::WriteXmlDeclaration(::StringW xmldecl) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmldecl);
}
inline void System::Xml::QueryOutputWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::QueryOutputWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::QueryOutputWriter::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::QueryOutputWriter::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::QueryOutputWriter::StartElementContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::QueryOutputWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::QueryOutputWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::QueryOutputWriter::WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline bool System::Xml::QueryOutputWriter::get_SupportsNamespaceDeclarationInChunks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::QueryOutputWriter::WriteStartNamespaceDeclaration(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline void System::Xml::QueryOutputWriter::WriteEndNamespaceDeclaration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::QueryOutputWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::QueryOutputWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::QueryOutputWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void System::Xml::QueryOutputWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void System::Xml::QueryOutputWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::QueryOutputWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::QueryOutputWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::QueryOutputWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::QueryOutputWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::QueryOutputWriter::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::QueryOutputWriter::WriteRaw(::StringW data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Xml::QueryOutputWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::QueryOutputWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::QueryOutputWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::QueryOutputWriter::StartCDataSection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { "StartCDataSection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::QueryOutputWriter::EndCDataSection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::QueryOutputWriter*>(), { "EndCDataSection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::QueryOutputWriter* System::Xml::QueryOutputWriter::New_ctor(::System::Xml::XmlRawWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::QueryOutputWriter*>(writer, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::QueryOutputWriter::QueryOutputWriter() {}
