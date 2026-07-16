#pragma once
// IWYU pragma private; include "System/Xml/XmlReaderSettings.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_impl.hpp"
#include "System/Xml/zzzz__ConformanceLevel_impl.hpp"
#include "System/Xml/zzzz__DtdProcessing_impl.hpp"
#include "System/Xml/zzzz__ValidationType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_def.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__DtdProcessing_def.hpp"
#include "System/Xml/zzzz__ValidationType_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlParserContext_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlValidatingReaderImpl_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlReaderSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628dbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_Async)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_Async", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(bool)>(&::System::Xml::XmlReaderSettings::set_Async)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x628e428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_Async", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_NameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::XmlReaderSettings::set_NameTable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x628e540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_NameTable", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_IsXmlResolverSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_IsXmlResolverSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_IsXmlResolverSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_IsXmlResolverSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(bool)>(&::System::Xml::XmlReaderSettings::set_IsXmlResolverSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_IsXmlResolverSet", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::System::Xml::XmlResolver*)>(&::System::Xml::XmlReaderSettings::set_XmlResolver)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x628e5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.GetXmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlResolver* (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::GetXmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "GetXmlResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.GetXmlResolver_CheckConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlResolver* (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::GetXmlResolver_CheckConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "GetXmlResolver_CheckConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_LineNumberOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_LineNumberOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_LineNumberOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_LineNumberOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(int32_t)>(&::System::Xml::XmlReaderSettings::set_LineNumberOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x628e630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_LineNumberOffset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_LinePositionOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_LinePositionOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_LinePositionOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_LinePositionOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(int32_t)>(&::System::Xml::XmlReaderSettings::set_LinePositionOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x628e698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_LinePositionOffset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_ConformanceLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ConformanceLevel (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_ConformanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_ConformanceLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_ConformanceLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::System::Xml::ConformanceLevel)>(&::System::Xml::XmlReaderSettings::set_ConformanceLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x628e700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_ConformanceLevel", {}, { ::i2c::type_of<::System::Xml::ConformanceLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_CheckCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_CheckCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_CheckCharacters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_CheckCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(bool)>(&::System::Xml::XmlReaderSettings::set_CheckCharacters)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x628e7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_CheckCharacters", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_MaxCharactersInDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_MaxCharactersInDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_MaxCharactersInDocument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_MaxCharactersInDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(int64_t)>(&::System::Xml::XmlReaderSettings::set_MaxCharactersInDocument)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x628e824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_MaxCharactersInDocument", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_MaxCharactersFromEntities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_MaxCharactersFromEntities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_MaxCharactersFromEntities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_MaxCharactersFromEntities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(int64_t)>(&::System::Xml::XmlReaderSettings::set_MaxCharactersFromEntities)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x628e8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_MaxCharactersFromEntities", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_IgnoreWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_IgnoreWhitespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_IgnoreWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_IgnoreWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(bool)>(&::System::Xml::XmlReaderSettings::set_IgnoreWhitespace)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x628e98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_IgnoreWhitespace", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_IgnoreProcessingInstructions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_IgnoreProcessingInstructions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_IgnoreProcessingInstructions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_IgnoreProcessingInstructions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(bool)>(&::System::Xml::XmlReaderSettings::set_IgnoreProcessingInstructions)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x628e9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_IgnoreProcessingInstructions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_IgnoreComments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_IgnoreComments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628ea5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_IgnoreComments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_IgnoreComments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(bool)>(&::System::Xml::XmlReaderSettings::set_IgnoreComments)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x628ea64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_IgnoreComments", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_DtdProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::DtdProcessing (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_DtdProcessing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628eac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_DtdProcessing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_DtdProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::System::Xml::DtdProcessing)>(&::System::Xml::XmlReaderSettings::set_DtdProcessing)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x628ead0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_DtdProcessing", {}, { ::i2c::type_of<::System::Xml::DtdProcessing>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_CloseInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_CloseInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628eb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_CloseInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_CloseInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(bool)>(&::System::Xml::XmlReaderSettings::set_CloseInput)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x628eb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_CloseInput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_ValidationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ValidationType (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_ValidationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628ebec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_ValidationType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_ValidationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::System::Xml::ValidationType)>(&::System::Xml::XmlReaderSettings::set_ValidationType)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x628ebf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_ValidationType", {}, { ::i2c::type_of<::System::Xml::ValidationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_ValidationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaValidationFlags (::System::Xml::XmlReaderSettings::*)()>(
    &::System::Xml::XmlReaderSettings::get_ValidationFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628eca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_ValidationFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_ValidationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::System::Xml::Schema::XmlSchemaValidationFlags)>(
    &::System::Xml::XmlReaderSettings::set_ValidationFlags)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x628ecac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_ValidationFlags", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.get_Schemas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSet* (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::get_Schemas)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x628ed5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_Schemas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_Schemas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Xml::XmlReaderSettings::set_Schemas)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x628edc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_Schemas", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x628ee24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.GetEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ValidationEventHandler* (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::GetEventHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628ee8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "GetEventHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.CreateReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (
    ::System::Xml::XmlReaderSettings::*)(::System::IO::Stream*, ::System::Uri*, ::StringW, ::System::Xml::XmlParserContext*)>(&::System::Xml::XmlReaderSettings::CreateReader)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x628dbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlReaderSettings*>(),
            { "CreateReader", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlParserContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.CreateReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (::System::Xml::XmlReaderSettings::*)(::System::IO::TextReader*, ::StringW, ::System::Xml::XmlParserContext*)>(
    &::System::Xml::XmlReaderSettings::CreateReader)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x628de10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(),
                                         { "CreateReader", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlParserContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.set_ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(bool)>(&::System::Xml::XmlReaderSettings::set_ReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628ee94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_ReadOnly", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.CheckReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::StringW)>(&::System::Xml::XmlReaderSettings::CheckReadOnly)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x628e48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "CheckReadOnly", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)()>(&::System::Xml::XmlReaderSettings::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReaderSettings::*)(::System::Xml::XmlResolver*)>(&::System::Xml::XmlReaderSettings::Initialize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x628ee9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "Initialize", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.CreateDefaultResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlResolver* (*)()>(&::System::Xml::XmlReaderSettings::CreateDefaultResolver)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x628efd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "CreateDefaultResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.AddValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (::System::Xml::XmlReaderSettings::*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlReaderSettings::AddValidation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x628e2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "AddValidation", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.CreateDtdValidatingReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlValidatingReaderImpl* (::System::Xml::XmlReaderSettings::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::XmlReaderSettings::CreateDtdValidatingReader)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x628f014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "CreateDtdValidatingReader", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReaderSettings.EnableLegacyXmlSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Xml::XmlReaderSettings::EnableLegacyXmlSettings)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x628ef20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "EnableLegacyXmlSettings", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::XmlReaderSettings::__cordl_internal_get_useAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAsync;
}
constexpr bool const& System::Xml::XmlReaderSettings::__cordl_internal_get_useAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAsync;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_useAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAsync = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlReaderSettings::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XmlReaderSettings::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::XmlReaderSettings::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::XmlReaderSettings::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolver = value;
}
constexpr int32_t& System::Xml::XmlReaderSettings::__cordl_internal_get_lineNumberOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumberOffset;
}
constexpr int32_t const& System::Xml::XmlReaderSettings::__cordl_internal_get_lineNumberOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumberOffset;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_lineNumberOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNumberOffset = value;
}
constexpr int32_t& System::Xml::XmlReaderSettings::__cordl_internal_get_linePositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePositionOffset;
}
constexpr int32_t const& System::Xml::XmlReaderSettings::__cordl_internal_get_linePositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePositionOffset;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_linePositionOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePositionOffset = value;
}
constexpr ::System::Xml::ConformanceLevel& System::Xml::XmlReaderSettings::__cordl_internal_get_conformanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr ::System::Xml::ConformanceLevel const& System::Xml::XmlReaderSettings::__cordl_internal_get_conformanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___conformanceLevel = value;
}
constexpr bool& System::Xml::XmlReaderSettings::__cordl_internal_get_checkCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr bool const& System::Xml::XmlReaderSettings::__cordl_internal_get_checkCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_checkCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkCharacters = value;
}
constexpr int64_t& System::Xml::XmlReaderSettings::__cordl_internal_get_maxCharactersInDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharactersInDocument;
}
constexpr int64_t const& System::Xml::XmlReaderSettings::__cordl_internal_get_maxCharactersInDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharactersInDocument;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_maxCharactersInDocument(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCharactersInDocument = value;
}
constexpr int64_t& System::Xml::XmlReaderSettings::__cordl_internal_get_maxCharactersFromEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharactersFromEntities;
}
constexpr int64_t const& System::Xml::XmlReaderSettings::__cordl_internal_get_maxCharactersFromEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharactersFromEntities;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_maxCharactersFromEntities(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCharactersFromEntities = value;
}
constexpr bool& System::Xml::XmlReaderSettings::__cordl_internal_get_ignoreWhitespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreWhitespace;
}
constexpr bool const& System::Xml::XmlReaderSettings::__cordl_internal_get_ignoreWhitespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreWhitespace;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_ignoreWhitespace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreWhitespace = value;
}
constexpr bool& System::Xml::XmlReaderSettings::__cordl_internal_get_ignorePIs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignorePIs;
}
constexpr bool const& System::Xml::XmlReaderSettings::__cordl_internal_get_ignorePIs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignorePIs;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_ignorePIs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignorePIs = value;
}
constexpr bool& System::Xml::XmlReaderSettings::__cordl_internal_get_ignoreComments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreComments;
}
constexpr bool const& System::Xml::XmlReaderSettings::__cordl_internal_get_ignoreComments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreComments;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_ignoreComments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreComments = value;
}
constexpr ::System::Xml::DtdProcessing& System::Xml::XmlReaderSettings::__cordl_internal_get_dtdProcessing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdProcessing;
}
constexpr ::System::Xml::DtdProcessing const& System::Xml::XmlReaderSettings::__cordl_internal_get_dtdProcessing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdProcessing;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_dtdProcessing(::System::Xml::DtdProcessing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dtdProcessing = value;
}
constexpr ::System::Xml::ValidationType& System::Xml::XmlReaderSettings::__cordl_internal_get_validationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationType;
}
constexpr ::System::Xml::ValidationType const& System::Xml::XmlReaderSettings::__cordl_internal_get_validationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationType;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_validationType(::System::Xml::ValidationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationType = value;
}
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags& System::Xml::XmlReaderSettings::__cordl_internal_get_validationFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationFlags;
}
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags const& System::Xml::XmlReaderSettings::__cordl_internal_get_validationFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationFlags;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_validationFlags(::System::Xml::Schema::XmlSchemaValidationFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationFlags = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSet*& System::Xml::XmlReaderSettings::__cordl_internal_get_schemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemas;
}
constexpr ::System::Xml::Schema::XmlSchemaSet* const& System::Xml::XmlReaderSettings::__cordl_internal_get_schemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemas;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_schemas(::System::Xml::Schema::XmlSchemaSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemas = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::XmlReaderSettings::__cordl_internal_get_valEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valEventHandler;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::XmlReaderSettings::__cordl_internal_get_valEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valEventHandler;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_valEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valEventHandler = value;
}
constexpr bool& System::Xml::XmlReaderSettings::__cordl_internal_get_closeInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeInput;
}
constexpr bool const& System::Xml::XmlReaderSettings::__cordl_internal_get_closeInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeInput;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_closeInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeInput = value;
}
constexpr bool& System::Xml::XmlReaderSettings::__cordl_internal_get_isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
constexpr bool const& System::Xml::XmlReaderSettings::__cordl_internal_get_isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set_isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReadOnly = value;
}
constexpr bool& System::Xml::XmlReaderSettings::__cordl_internal_get__IsXmlResolverSet_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsXmlResolverSet_k__BackingField;
}
constexpr bool const& System::Xml::XmlReaderSettings::__cordl_internal_get__IsXmlResolverSet_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsXmlResolverSet_k__BackingField;
}
constexpr void System::Xml::XmlReaderSettings::__cordl_internal_set__IsXmlResolverSet_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsXmlResolverSet_k__BackingField = value;
}
inline void System::Xml::XmlReaderSettings::setStaticF_s_enableLegacyXmlSettings(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "s_enableLegacyXmlSettings", ::System::Xml::XmlReaderSettings*>(std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> System::Xml::XmlReaderSettings::getStaticF_s_enableLegacyXmlSettings() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "s_enableLegacyXmlSettings", ::System::Xml::XmlReaderSettings*>();
}
inline void System::Xml::XmlReaderSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlReaderSettings::get_Async() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_Async", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_Async(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_Async", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlReaderSettings::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_NameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_NameTable(::System::Xml::XmlNameTable* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_NameTable", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlReaderSettings::get_IsXmlResolverSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_IsXmlResolverSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_IsXmlResolverSet(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_IsXmlResolverSet", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlReaderSettings::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlReaderSettings::GetXmlResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "GetXmlResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*>(this, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlReaderSettings::GetXmlResolver_CheckConfig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "GetXmlResolver_CheckConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*>(this, ___internal_method);
}
inline int32_t System::Xml::XmlReaderSettings::get_LineNumberOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_LineNumberOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_LineNumberOffset(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_LineNumberOffset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::XmlReaderSettings::get_LinePositionOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_LinePositionOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_LinePositionOffset(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_LinePositionOffset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::ConformanceLevel System::Xml::XmlReaderSettings::get_ConformanceLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_ConformanceLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ConformanceLevel>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_ConformanceLevel(::System::Xml::ConformanceLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_ConformanceLevel", {}, { ::i2c::type_of<::System::Xml::ConformanceLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlReaderSettings::get_CheckCharacters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_CheckCharacters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_CheckCharacters(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_CheckCharacters", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Xml::XmlReaderSettings::get_MaxCharactersInDocument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_MaxCharactersInDocument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_MaxCharactersInDocument(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_MaxCharactersInDocument", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Xml::XmlReaderSettings::get_MaxCharactersFromEntities() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_MaxCharactersFromEntities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_MaxCharactersFromEntities(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_MaxCharactersFromEntities", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlReaderSettings::get_IgnoreWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_IgnoreWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_IgnoreWhitespace(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_IgnoreWhitespace", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlReaderSettings::get_IgnoreProcessingInstructions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_IgnoreProcessingInstructions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_IgnoreProcessingInstructions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_IgnoreProcessingInstructions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlReaderSettings::get_IgnoreComments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_IgnoreComments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_IgnoreComments(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_IgnoreComments", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::DtdProcessing System::Xml::XmlReaderSettings::get_DtdProcessing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_DtdProcessing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdProcessing>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_DtdProcessing(::System::Xml::DtdProcessing value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_DtdProcessing", {}, { ::i2c::type_of<::System::Xml::DtdProcessing>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlReaderSettings::get_CloseInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_CloseInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_CloseInput(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_CloseInput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::ValidationType System::Xml::XmlReaderSettings::get_ValidationType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_ValidationType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidationType>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_ValidationType(::System::Xml::ValidationType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_ValidationType", {}, { ::i2c::type_of<::System::Xml::ValidationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaValidationFlags System::Xml::XmlReaderSettings::get_ValidationFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_ValidationFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaValidationFlags>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_ValidationFlags(::System::Xml::Schema::XmlSchemaValidationFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_ValidationFlags", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::XmlReaderSettings::get_Schemas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "get_Schemas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSet*>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::set_Schemas(::System::Xml::Schema::XmlSchemaSet* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_Schemas", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XmlReaderSettings::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*>(this, ___internal_method);
}
inline ::System::Xml::Schema::ValidationEventHandler* System::Xml::XmlReaderSettings::GetEventHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "GetEventHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ValidationEventHandler*>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Xml::XmlReaderSettings::CreateReader(::System::IO::Stream* input, ::System::Uri* baseUri, ::StringW baseUriString,
                                                                              ::System::Xml::XmlParserContext* inputContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlReaderSettings*>(),
          { "CreateReader", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlParserContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(this, ___internal_method, input, baseUri, baseUriString, inputContext);
}
inline ::System::Xml::XmlReader* System::Xml::XmlReaderSettings::CreateReader(::System::IO::TextReader* input, ::StringW baseUriString, ::System::Xml::XmlParserContext* inputContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(),
                                       { "CreateReader", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlParserContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(this, ___internal_method, input, baseUriString, inputContext);
}
inline void System::Xml::XmlReaderSettings::set_ReadOnly(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "set_ReadOnly", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlReaderSettings::CheckReadOnly(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "CheckReadOnly", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline void System::Xml::XmlReaderSettings::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlReaderSettings::Initialize(::System::Xml::XmlResolver* resolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "Initialize", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolver);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlReaderSettings::CreateDefaultResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "CreateDefaultResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Xml::XmlReaderSettings::AddValidation(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "AddValidation", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(this, ___internal_method, reader);
}
inline ::System::Xml::XmlValidatingReaderImpl* System::Xml::XmlReaderSettings::CreateDtdValidatingReader(::System::Xml::XmlReader* baseReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "CreateDtdValidatingReader", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlValidatingReaderImpl*>(this, ___internal_method, baseReader);
}
inline bool System::Xml::XmlReaderSettings::EnableLegacyXmlSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReaderSettings*>(), { "EnableLegacyXmlSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XmlReaderSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlReaderSettings*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlReaderSettings::XmlReaderSettings() {}
