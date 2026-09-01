#pragma once
// IWYU pragma private; include "System\Xml\XmlReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlParserContext_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlReader.get_Settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628f9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_NodeType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Name)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x628f9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_LocalName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Prefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Depth)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_BaseURI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628fa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628fa94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628fa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x628faa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x628fab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_ValueType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x628fb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsObject)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x628fb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x628fe68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6290018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x62901c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsFloat)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6290374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6290520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsInt)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x62906cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsLong)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6290888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6290a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::XmlReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6290a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementContentAsBoolean)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6290d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementContentAsDateTime)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6290fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementContentAsDouble)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62910a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementContentAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementContentAsFloat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6291178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementContentAsDecimal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6291248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementContentAsInt)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6291314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementContentAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementContentAsLong)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x62913e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x62914bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)(::StringW)>(&::System::Xml::XmlReader::GetAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlReader::GetAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)(int32_t)>(&::System::Xml::XmlReader::GetAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)(::StringW)>(&::System::Xml::XmlReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)(int32_t)>(&::System::Xml::XmlReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6291548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::MoveToElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_EOF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_EOF)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6291610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_ReadState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadState (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_ReadState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Skip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::Skip)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6291614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_NameTable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)(::StringW)>(&::System::Xml::XmlReader::LookupNamespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_CanResolveEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x629171c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ResolveEntity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6291724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62917d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_CanReadValueChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_CanReadValueChunk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x629187c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadValueChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlReader::ReadValueChunk)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6291884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadString)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x62918d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::MoveToContent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6291af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadStartElement)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6291b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadElementString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadElementString)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6291c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadEndElement)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6291eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::IsStartElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6291fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlReader::IsStartElement)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6291fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadInnerXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadInnerXml)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x629204c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.WriteNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)(::System::Xml::XmlWriter*, bool)>(&::System::Xml::XmlReader::WriteNode)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x62924b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "WriteNode", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.WriteAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlReader::WriteAttributeValue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x62923e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "WriteAttributeValue", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CreateWriterForInnerOuterXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlWriter* (::System::Xml::XmlReader::*)(::System::IO::StringWriter*)>(&::System::Xml::XmlReader::CreateWriterForInnerOuterXml)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62922e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CreateWriterForInnerOuterXml", {}, { ::i2c::type_of<::System::IO::StringWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.SetNamespacesFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)(::System::Xml::XmlTextWriter*)>(&::System::Xml::XmlReader::SetNamespacesFlag)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x62929f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "SetNamespacesFlag", {}, { ::i2c::type_of<::System::Xml::XmlTextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_HasAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_HasAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6292b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6292bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)(bool)>(&::System::Xml::XmlReader::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6292bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_NamespaceManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNamespaceManager* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_NamespaceManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6292c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.IsTextualNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlReader::IsTextualNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6291a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "IsTextualNode", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CanReadContentAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlReader::CanReadContentAs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6292c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CanReadContentAs", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.HasValueInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlReader::HasValueInternal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6292c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "HasValueInternal", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.SkipSubtree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::SkipSubtree)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6291648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "SkipSubtree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CreateReadContentAsException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::XmlReader::*)(::StringW)>(&::System::Xml::XmlReader::CreateReadContentAsException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x628fbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CreateReadContentAsException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CreateReadElementContentAsException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::XmlReader::*)(::StringW)>(&::System::Xml::XmlReader::CreateReadElementContentAsException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6292e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CreateReadElementContentAsException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CanReadContentAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::CanReadContentAs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x628fb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CanReadContentAs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CreateReadContentAsException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Xml::XmlNodeType, ::System::Xml::IXmlLineInfo*)>(
    &::System::Xml::XmlReader::CreateReadContentAsException)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6292ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(),
                            { "CreateReadContentAsException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CreateReadElementContentAsException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Xml::XmlNodeType, ::System::Xml::IXmlLineInfo*)>(
    &::System::Xml::XmlReader::CreateReadElementContentAsException)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6292f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlReader*>(),
            { "CreateReadElementContentAsException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.AddLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Xml::IXmlLineInfo*)>(&::System::Xml::XmlReader::AddLineInfo)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6293074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "AddLineInfo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.InternalReadContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::InternalReadContentAsString)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x628fc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "InternalReadContentAsString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.SetupReadElementContentAsXxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)(::StringW)>(&::System::Xml::XmlReader::SetupReadElementContentAsXxx)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6290dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "SetupReadElementContentAsXxx", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.FinishReadElementContentAsXxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::FinishReadElementContentAsXxx)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6290f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "FinishReadElementContentAsXxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_IsDefaultInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_IsDefaultInternal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6293298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "get_IsDefaultInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_DtdInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_DtdInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x629337c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ::i2c::class_of<::System::Xml::XmlReader*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (*)(::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::StringW)>(&::System::Xml::XmlReader::Create)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6293384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(),
                                                { "Create", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (*)(::System::IO::TextReader*, ::System::Xml::XmlReaderSettings*, ::StringW)>(&::System::Xml::XmlReader::Create)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62935a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(),
                                                { "Create", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CreateSqlReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (*)(::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*)>(
    &::System::Xml::XmlReader::CreateSqlReader)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x629374c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlReader*>(),
            { "CreateSqlReader", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::System::Xml::XmlParserContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CalcBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::System::Xml::XmlReader::CalcBufferSize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6293a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CalcBufferSize", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6293bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlReader::setStaticF_IsTextualNodeBitmap(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "IsTextualNodeBitmap", ::System::Xml::XmlReader*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::XmlReader::getStaticF_IsTextualNodeBitmap() {
  return ::cordl_internals::getStaticField<uint32_t, "IsTextualNodeBitmap", ::System::Xml::XmlReader*>();
}
inline void System::Xml::XmlReader::setStaticF_CanReadContentAsBitmap(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "CanReadContentAsBitmap", ::System::Xml::XmlReader*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::XmlReader::getStaticF_CanReadContentAsBitmap() {
  return ::cordl_internals::getStaticField<uint32_t, "CanReadContentAsBitmap", ::System::Xml::XmlReader*>();
}
inline void System::Xml::XmlReader::setStaticF_HasValueBitmap(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "HasValueBitmap", ::System::Xml::XmlReader*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::XmlReader::getStaticF_HasValueBitmap() {
  return ::cordl_internals::getStaticField<uint32_t, "HasValueBitmap", ::System::Xml::XmlReader*>();
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XmlReader::get_Settings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlReader::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XmlReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline char16_t System::Xml::XmlReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlReader::get_SchemaInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XmlReader::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlReader::ReadContentAsObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::ReadContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlReader::ReadContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline double_t System::Xml::XmlReader::ReadContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t System::Xml::XmlReader::ReadContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlReader::ReadContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline int32_t System::Xml::XmlReader::ReadContentAsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::XmlReader::ReadContentAsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::ReadContentAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlReader::ReadContentAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* namespaceResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, returnType, namespaceResolver);
}
inline bool System::Xml::XmlReader::ReadElementContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlReader::ReadElementContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline double_t System::Xml::XmlReader::ReadElementContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t System::Xml::XmlReader::ReadElementContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlReader::ReadElementContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline int32_t System::Xml::XmlReader::ReadElementContentAsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::XmlReader::ReadElementContentAsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::ReadElementContentAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XmlReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlReader::GetAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, namespaceURI);
}
inline ::StringW System::Xml::XmlReader::GetAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline bool System::Xml::XmlReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Xml::XmlReader::MoveToAttribute(::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, ns);
}
inline void System::Xml::XmlReader::MoveToAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline bool System::Xml::XmlReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState>(this, ___internal_method);
}
inline void System::Xml::XmlReader::Skip() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline bool System::Xml::XmlReader::get_CanResolveEntity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::XmlReader::ReadContentAsBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Xml::XmlReader::ReadContentAsBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline bool System::Xml::XmlReader::get_CanReadValueChunk() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlReader::ReadValueChunk(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline ::StringW System::Xml::XmlReader::ReadString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlReader::MoveToContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline void System::Xml::XmlReader::ReadStartElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::ReadElementString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlReader::ReadEndElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::IsStartElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::IsStartElement(::StringW localname, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localname, ns);
}
inline ::StringW System::Xml::XmlReader::ReadInnerXml() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlReader::WriteNode(::System::Xml::XmlWriter* xtw, bool defattr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "WriteNode", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xtw, defattr);
}
inline void System::Xml::XmlReader::WriteAttributeValue(::System::Xml::XmlWriter* xtw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "WriteAttributeValue", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xtw);
}
inline ::System::Xml::XmlWriter* System::Xml::XmlReader::CreateWriterForInnerOuterXml(::System::IO::StringWriter* sw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CreateWriterForInnerOuterXml", {}, { ::i2c::type_of<::System::IO::StringWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWriter*>(this, ___internal_method, sw);
}
inline void System::Xml::XmlReader::SetNamespacesFlag(::System::Xml::XmlTextWriter* xtw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "SetNamespacesFlag", {}, { ::i2c::type_of<::System::Xml::XmlTextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xtw);
}
inline bool System::Xml::XmlReader::get_HasAttributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlReader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlReader::get_NamespaceManager() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamespaceManager*>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::IsTextualNode(::System::Xml::XmlNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "IsTextualNode", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeType);
}
inline bool System::Xml::XmlReader::CanReadContentAs(::System::Xml::XmlNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CanReadContentAs", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeType);
}
inline bool System::Xml::XmlReader::HasValueInternal(::System::Xml::XmlNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "HasValueInternal", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeType);
}
inline bool System::Xml::XmlReader::SkipSubtree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "SkipSubtree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Exception* System::Xml::XmlReader::CreateReadContentAsException(::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CreateReadContentAsException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, methodName);
}
inline ::System::Exception* System::Xml::XmlReader::CreateReadElementContentAsException(::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CreateReadElementContentAsException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, methodName);
}
inline bool System::Xml::XmlReader::CanReadContentAs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CanReadContentAs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Exception* System::Xml::XmlReader::CreateReadContentAsException(::StringW methodName, ::System::Xml::XmlNodeType nodeType, ::System::Xml::IXmlLineInfo* lineInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(),
                          { "CreateReadContentAsException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, methodName, nodeType, lineInfo);
}
inline ::System::Exception* System::Xml::XmlReader::CreateReadElementContentAsException(::StringW methodName, ::System::Xml::XmlNodeType nodeType, ::System::Xml::IXmlLineInfo* lineInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::XmlReader*>(),
                       { "CreateReadElementContentAsException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, methodName, nodeType, lineInfo);
}
inline ::StringW System::Xml::XmlReader::AddLineInfo(::StringW message, ::System::Xml::IXmlLineInfo* lineInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "AddLineInfo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, message, lineInfo);
}
inline ::StringW System::Xml::XmlReader::InternalReadContentAsString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "InternalReadContentAsString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::SetupReadElementContentAsXxx(::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "SetupReadElementContentAsXxx", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, methodName);
}
inline void System::Xml::XmlReader::FinishReadElementContentAsXxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "FinishReadElementContentAsXxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::get_IsDefaultInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "get_IsDefaultInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::IDtdInfo* System::Xml::XmlReader::get_DtdInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlReader*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Xml::XmlReader::Create(::System::IO::Stream* input, ::System::Xml::XmlReaderSettings* settings, ::StringW baseUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(),
                                              { "Create", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(nullptr, ___internal_method, input, settings, baseUri);
}
inline ::System::Xml::XmlReader* System::Xml::XmlReader::Create(::System::IO::TextReader* input, ::System::Xml::XmlReaderSettings* settings, ::StringW baseUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(),
                                              { "Create", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(nullptr, ___internal_method, input, settings, baseUri);
}
inline ::System::Xml::XmlReader* System::Xml::XmlReader::CreateSqlReader(::System::IO::Stream* input, ::System::Xml::XmlReaderSettings* settings, ::System::Xml::XmlParserContext* inputContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlReader*>(),
          { "CreateSqlReader", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::System::Xml::XmlParserContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(nullptr, ___internal_method, input, settings, inputContext);
}
inline int32_t System::Xml::XmlReader::CalcBufferSize(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { "CalcBufferSize", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline void System::Xml::XmlReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Xml::XmlReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlReader*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Xml::XmlReader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Xml::XmlReader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlReader::XmlReader() {}
