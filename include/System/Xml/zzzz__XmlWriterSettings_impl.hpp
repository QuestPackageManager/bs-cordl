#pragma once
// IWYU pragma private; include "System/Xml/XmlWriterSettings.hpp"
#include "System/Xml/zzzz__ConformanceLevel_impl.hpp"
#include "System/Xml/zzzz__NamespaceHandling_impl.hpp"
#include "System/Xml/zzzz__NewLineHandling_impl.hpp"
#include "System/Xml/zzzz__TriState_impl.hpp"
#include "System/Xml/zzzz__XmlOutputMethod_impl.hpp"
#include "System/Xml/zzzz__XmlStandalone_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__NamespaceHandling_def.hpp"
#include "System/Xml/zzzz__NewLineHandling_def.hpp"
#include "System/Xml/zzzz__TriState_def.hpp"
#include "System/Xml/zzzz__XmlOutputMethod_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlWriterSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62a4cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_Async)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a56b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_Async", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a56c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_OmitXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_OmitXmlDeclaration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a56c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_OmitXmlDeclaration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.set_OmitXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)(bool)>(&::System::Xml::XmlWriterSettings::set_OmitXmlDeclaration)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62a56d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_OmitXmlDeclaration", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_NewLineHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::NewLineHandling (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_NewLineHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a57e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_NewLineHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_NewLineChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_NewLineChars)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a57e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_NewLineChars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_Indent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_Indent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62a57f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_Indent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.set_Indent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)(bool)>(&::System::Xml::XmlWriterSettings::set_Indent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62a5800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_Indent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_IndentChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_IndentChars)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_IndentChars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_NewLineOnAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_NewLineOnAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_NewLineOnAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_CloseOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_CloseOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a587c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_CloseOutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_ConformanceLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ConformanceLevel (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_ConformanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_ConformanceLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.set_ConformanceLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)(::System::Xml::ConformanceLevel)>(&::System::Xml::XmlWriterSettings::set_ConformanceLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x62a588c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_ConformanceLevel", {}, { ::i2c::type_of<::System::Xml::ConformanceLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_CheckCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_CheckCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a593c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_CheckCharacters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_NamespaceHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::NamespaceHandling (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_NamespaceHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_NamespaceHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.set_NamespaceHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)(::System::Xml::NamespaceHandling)>(&::System::Xml::XmlWriterSettings::set_NamespaceHandling)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x62a594c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_NamespaceHandling", {}, { ::i2c::type_of<::System::Xml::NamespaceHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_WriteEndDocumentOnClose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_WriteEndDocumentOnClose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a59fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_WriteEndDocumentOnClose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_OutputMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlOutputMethod (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_OutputMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_OutputMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.set_OutputMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)(::System::Xml::XmlOutputMethod)>(&::System::Xml::XmlWriterSettings::set_OutputMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_OutputMethod", {}, { ::i2c::type_of<::System::Xml::XmlOutputMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlWriterSettings* (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::Clone)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62a5a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_CDataSectionElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* (::System::Xml::XmlWriterSettings::*)()>(
    &::System::Xml::XmlWriterSettings::get_CDataSectionElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_CDataSectionElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_DoNotEscapeUriAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_DoNotEscapeUriAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_DoNotEscapeUriAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_MergeCDataSections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_MergeCDataSections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_MergeCDataSections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_MediaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_MediaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_MediaType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_DocTypeSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_DocTypeSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_DocTypeSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_DocTypePublic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_DocTypePublic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_DocTypePublic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_Standalone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlStandalone (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_Standalone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_Standalone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_AutoXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_AutoXmlDeclaration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_AutoXmlDeclaration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_IndentInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::TriState (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_IndentInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_IndentInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.get_IsQuerySpecific
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::get_IsQuerySpecific)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62a5b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_IsQuerySpecific", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.CreateWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlWriter* (::System::Xml::XmlWriterSettings::*)(::System::IO::Stream*)>(&::System::Xml::XmlWriterSettings::CreateWriter)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x62a4d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "CreateWriter", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.CreateWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlWriter* (::System::Xml::XmlWriterSettings::*)(::System::IO::TextWriter*)>(&::System::Xml::XmlWriterSettings::CreateWriter)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x62a5284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "CreateWriter", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.set_ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)(bool)>(&::System::Xml::XmlWriterSettings::set_ReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a5b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_ReadOnly", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.CheckReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)(::StringW)>(&::System::Xml::XmlWriterSettings::CheckReadOnly)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62a5734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "CheckReadOnly", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWriterSettings.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlWriterSettings::*)()>(&::System::Xml::XmlWriterSettings::Initialize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x62a55cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_useAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAsync;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_useAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAsync;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_useAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAsync = value;
}
constexpr ::System::Text::Encoding*& System::Xml::XmlWriterSettings::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::System::Text::Encoding* const& System::Xml::XmlWriterSettings::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_omitXmlDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___omitXmlDecl;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_omitXmlDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___omitXmlDecl;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_omitXmlDecl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___omitXmlDecl = value;
}
constexpr ::System::Xml::NewLineHandling& System::Xml::XmlWriterSettings::__cordl_internal_get_newLineHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineHandling;
}
constexpr ::System::Xml::NewLineHandling const& System::Xml::XmlWriterSettings::__cordl_internal_get_newLineHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineHandling;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_newLineHandling(::System::Xml::NewLineHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLineHandling = value;
}
constexpr ::StringW& System::Xml::XmlWriterSettings::__cordl_internal_get_newLineChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineChars;
}
constexpr ::StringW const& System::Xml::XmlWriterSettings::__cordl_internal_get_newLineChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineChars;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_newLineChars(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLineChars = value;
}
constexpr ::System::Xml::TriState& System::Xml::XmlWriterSettings::__cordl_internal_get_indent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indent;
}
constexpr ::System::Xml::TriState const& System::Xml::XmlWriterSettings::__cordl_internal_get_indent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indent;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_indent(::System::Xml::TriState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indent = value;
}
constexpr ::StringW& System::Xml::XmlWriterSettings::__cordl_internal_get_indentChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentChars;
}
constexpr ::StringW const& System::Xml::XmlWriterSettings::__cordl_internal_get_indentChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentChars;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_indentChars(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentChars = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_newLineOnAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineOnAttributes;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_newLineOnAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineOnAttributes;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_newLineOnAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLineOnAttributes = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_closeOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeOutput;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_closeOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeOutput;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_closeOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeOutput = value;
}
constexpr ::System::Xml::NamespaceHandling& System::Xml::XmlWriterSettings::__cordl_internal_get_namespaceHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceHandling;
}
constexpr ::System::Xml::NamespaceHandling const& System::Xml::XmlWriterSettings::__cordl_internal_get_namespaceHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceHandling;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_namespaceHandling(::System::Xml::NamespaceHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaceHandling = value;
}
constexpr ::System::Xml::ConformanceLevel& System::Xml::XmlWriterSettings::__cordl_internal_get_conformanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr ::System::Xml::ConformanceLevel const& System::Xml::XmlWriterSettings::__cordl_internal_get_conformanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___conformanceLevel = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_checkCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_checkCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_checkCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkCharacters = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_writeEndDocumentOnClose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeEndDocumentOnClose;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_writeEndDocumentOnClose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeEndDocumentOnClose;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_writeEndDocumentOnClose(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeEndDocumentOnClose = value;
}
constexpr ::System::Xml::XmlOutputMethod& System::Xml::XmlWriterSettings::__cordl_internal_get_outputMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputMethod;
}
constexpr ::System::Xml::XmlOutputMethod const& System::Xml::XmlWriterSettings::__cordl_internal_get_outputMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputMethod;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_outputMethod(::System::Xml::XmlOutputMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputMethod = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>*& System::Xml::XmlWriterSettings::__cordl_internal_get_cdataSections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cdataSections;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* const& System::Xml::XmlWriterSettings::__cordl_internal_get_cdataSections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cdataSections;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_cdataSections(::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cdataSections = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_doNotEscapeUriAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_doNotEscapeUriAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_doNotEscapeUriAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doNotEscapeUriAttributes = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_mergeCDataSections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mergeCDataSections;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_mergeCDataSections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mergeCDataSections;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_mergeCDataSections(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mergeCDataSections = value;
}
constexpr ::StringW& System::Xml::XmlWriterSettings::__cordl_internal_get_mediaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr ::StringW const& System::Xml::XmlWriterSettings::__cordl_internal_get_mediaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_mediaType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mediaType = value;
}
constexpr ::StringW& System::Xml::XmlWriterSettings::__cordl_internal_get_docTypeSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeSystem;
}
constexpr ::StringW const& System::Xml::XmlWriterSettings::__cordl_internal_get_docTypeSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeSystem;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_docTypeSystem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___docTypeSystem = value;
}
constexpr ::StringW& System::Xml::XmlWriterSettings::__cordl_internal_get_docTypePublic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypePublic;
}
constexpr ::StringW const& System::Xml::XmlWriterSettings::__cordl_internal_get_docTypePublic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypePublic;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_docTypePublic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___docTypePublic = value;
}
constexpr ::System::Xml::XmlStandalone& System::Xml::XmlWriterSettings::__cordl_internal_get_standalone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standalone;
}
constexpr ::System::Xml::XmlStandalone const& System::Xml::XmlWriterSettings::__cordl_internal_get_standalone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standalone;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_standalone(::System::Xml::XmlStandalone value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___standalone = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_autoXmlDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoXmlDecl;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_autoXmlDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoXmlDecl;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_autoXmlDecl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoXmlDecl = value;
}
constexpr bool& System::Xml::XmlWriterSettings::__cordl_internal_get_isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
constexpr bool const& System::Xml::XmlWriterSettings::__cordl_internal_get_isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
constexpr void System::Xml::XmlWriterSettings::__cordl_internal_set_isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReadOnly = value;
}
inline void System::Xml::XmlWriterSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_Async() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_Async", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Xml::XmlWriterSettings::get_Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_OmitXmlDeclaration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_OmitXmlDeclaration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlWriterSettings::set_OmitXmlDeclaration(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_OmitXmlDeclaration", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::NewLineHandling System::Xml::XmlWriterSettings::get_NewLineHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_NewLineHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::NewLineHandling>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlWriterSettings::get_NewLineChars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_NewLineChars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_Indent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_Indent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlWriterSettings::set_Indent(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_Indent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::XmlWriterSettings::get_IndentChars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_IndentChars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_NewLineOnAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_NewLineOnAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_CloseOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_CloseOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::ConformanceLevel System::Xml::XmlWriterSettings::get_ConformanceLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_ConformanceLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ConformanceLevel>(this, ___internal_method);
}
inline void System::Xml::XmlWriterSettings::set_ConformanceLevel(::System::Xml::ConformanceLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_ConformanceLevel", {}, { ::i2c::type_of<::System::Xml::ConformanceLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlWriterSettings::get_CheckCharacters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_CheckCharacters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::NamespaceHandling System::Xml::XmlWriterSettings::get_NamespaceHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_NamespaceHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::NamespaceHandling>(this, ___internal_method);
}
inline void System::Xml::XmlWriterSettings::set_NamespaceHandling(::System::Xml::NamespaceHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_NamespaceHandling", {}, { ::i2c::type_of<::System::Xml::NamespaceHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlWriterSettings::get_WriteEndDocumentOnClose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_WriteEndDocumentOnClose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlOutputMethod System::Xml::XmlWriterSettings::get_OutputMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_OutputMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlOutputMethod>(this, ___internal_method);
}
inline void System::Xml::XmlWriterSettings::set_OutputMethod(::System::Xml::XmlOutputMethod value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_OutputMethod", {}, { ::i2c::type_of<::System::Xml::XmlOutputMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlWriterSettings* System::Xml::XmlWriterSettings::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWriterSettings*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* System::Xml::XmlWriterSettings::get_CDataSectionElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_CDataSectionElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>*>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_DoNotEscapeUriAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_DoNotEscapeUriAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_MergeCDataSections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_MergeCDataSections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlWriterSettings::get_MediaType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_MediaType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlWriterSettings::get_DocTypeSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_DocTypeSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlWriterSettings::get_DocTypePublic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_DocTypePublic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlStandalone System::Xml::XmlWriterSettings::get_Standalone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_Standalone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlStandalone>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_AutoXmlDeclaration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_AutoXmlDeclaration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::TriState System::Xml::XmlWriterSettings::get_IndentInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_IndentInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::TriState>(this, ___internal_method);
}
inline bool System::Xml::XmlWriterSettings::get_IsQuerySpecific() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "get_IsQuerySpecific", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlWriter* System::Xml::XmlWriterSettings::CreateWriter(::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "CreateWriter", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWriter*>(this, ___internal_method, output);
}
inline ::System::Xml::XmlWriter* System::Xml::XmlWriterSettings::CreateWriter(::System::IO::TextWriter* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "CreateWriter", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWriter*>(this, ___internal_method, output);
}
inline void System::Xml::XmlWriterSettings::set_ReadOnly(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "set_ReadOnly", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlWriterSettings::CheckReadOnly(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "CheckReadOnly", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline void System::Xml::XmlWriterSettings::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlWriterSettings*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlWriterSettings* System::Xml::XmlWriterSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlWriterSettings*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWriterSettings::XmlWriterSettings() {}
