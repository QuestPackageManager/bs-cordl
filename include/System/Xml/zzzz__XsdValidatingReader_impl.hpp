#pragma once
// IWYU pragma private; include "System\Xml\XsdValidatingReader.hpp"
#include "System/Xml/zzzz__AttributePSVIInfo_impl.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XsdValidatingReader_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__Parser_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueGetter_def.hpp"
#include "System/Xml/zzzz__AttributePSVIInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__ValidatingReaderNodeData_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XsdCachingReader_def.hpp"
#include "System/Xml/zzzz__XsdValidatingReader_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState::XsdValidatingReader_ValidatingReaderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState::XsdValidatingReader_ValidatingReaderState() {}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::Init{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::Read{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::OnDefaultAttribute{ static_cast<int32_t>(0xffffffff) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::OnReadAttributeValue{ static_cast<int32_t>(0xfffffffe) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::OnAttribute{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::ClearAttributes{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::ParseInlineSchema{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::ReadAhead{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::OnReadBinaryContent{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::ReaderClosed{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::_cordl_EOF{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::Error{ static_cast<int32_t>(0xa) };
//  Writing Method size for method: ::System::Xml::XsdValidatingReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)(::System::Xml::XmlReader*, ::System::Xml::XmlResolver*, ::System::Xml::XmlReaderSettings*,
                                                                                                    ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::XsdValidatingReader::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x62acc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlResolver*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)(::System::Xml::XmlReader*, ::System::Xml::XmlResolver*, ::System::Xml::XmlReaderSettings*)>(
    &::System::Xml::XsdValidatingReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ad318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlResolver*>(), ::i2c::type_of<::System::Xml::XmlReaderSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::Init)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x62acdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.SetupValidator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)(::System::Xml::XmlReaderSettings*, ::System::Xml::XmlReader*,
                                                                                                    ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::XsdValidatingReader::SetupValidator)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x62ad128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                            { "SetupValidator",
                              {},
                              { ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Settings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x62ad320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_NodeType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62ad3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Name)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x62ad47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_LocalName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62ad594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62ad5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Prefix)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62ad60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Value)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62ad648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Depth)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62ad684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62ad6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62ad6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x62ad700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62ad734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62ad754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62ad774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62ad794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_ValueType)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62ad798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62ad878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x62ad958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x62adc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x62adf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsFloat)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x62ae220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x62ae4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsInt)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x62ae7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsLong)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x62aea6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x62aed30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::XsdValidatingReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x62aefb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsBoolean)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x62af568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsDateTime)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x62af7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsDouble)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x62afa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsFloat)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x62afc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsDecimal)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x62afedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsInt)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x62b0134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsLong)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x62b038c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x62b05e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b07e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW)>(&::System::Xml::XsdValidatingReader::GetAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62b07ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW)>(&::System::Xml::XsdValidatingReader::GetAttribute)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62b09cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(int32_t)>(&::System::Xml::XsdValidatingReader::GetAttribute)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x62b0bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)(::StringW)>(&::System::Xml::XsdValidatingReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x62b0cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW)>(&::System::Xml::XsdValidatingReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x62b0efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)(int32_t)>(&::System::Xml::XsdValidatingReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x62b108c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x62b1230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x62b138c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::MoveToElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62b14f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::Read)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x62b1544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_EOF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62b19dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x62b19fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_ReadState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadState (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_ReadState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x62b1a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.Skip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::Skip)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x62b1a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b1bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW)>(&::System::Xml::XsdValidatingReader::LookupNamespace)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x62b1be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62b1c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62b1cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XsdValidatingReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62b1e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XsdValidatingReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62b1ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_IsDefault)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62b1f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_IsDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_IsNil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_IsNil)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62b2300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_IsNil", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_Validity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaValidity (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_Validity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x62b2348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_Validity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_MemberType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62b23d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_MemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62b256c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_SchemaType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62b25c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62b261c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b2660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_LineNumber)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62b2668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_LinePosition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62b271c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (::System::Xml::XsdValidatingReader::*)(::System::Xml::XmlNamespaceScope)>(
    &::System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62b27d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                             { "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW)>(
    &::System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62b289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.IXmlNamespaceResolver.LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW)>(
    &::System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62b296c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.IXmlNamespaceResolver.LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::GetStringValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62b2a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetStringValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_ElementXmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_ElementXmlType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62adc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_ElementXmlType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_AttributeXmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_AttributeXmlType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62adc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_AttributeXmlType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_AttributeSchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaInfo* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_AttributeSchemaInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62ad860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_AttributeSchemaInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ProcessReaderEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ProcessReaderEvent)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x62b16c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ProcessReaderEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ProcessElementEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ProcessElementEvent)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x62b2a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ProcessElementEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ProcessEndElementEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ProcessEndElementEvent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x62b2ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ProcessEndElementEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ValidateAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ValidateAttributes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x62b305c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ValidateAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ClearAttributesInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ClearAttributesInfo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62b19a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ClearAttributesInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttributePSVI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::AttributePSVIInfo* (::System::Xml::XsdValidatingReader::*)(::StringW)>(&::System::Xml::XsdValidatingReader::GetAttributePSVI)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x62b0d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetAttributePSVI", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttributePSVI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::AttributePSVIInfo* (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XsdValidatingReader::GetAttributePSVI)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62b1014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetAttributePSVI", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdValidatingReader::*)(::StringW, bool)>(
    &::System::Xml::XsdValidatingReader::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x62b0858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetDefaultAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW, bool)>(
    &::System::Xml::XsdValidatingReader::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x62b0a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                             { "GetDefaultAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.AddAttributePSVI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::AttributePSVIInfo* (::System::Xml::XsdValidatingReader::*)(int32_t)>(&::System::Xml::XsdValidatingReader::AddAttributePSVI)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x62b3350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "AddAttributePSVI", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.IsXSDRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW)>(&::System::Xml::XsdValidatingReader::IsXSDRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62b3038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "IsXSDRoot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ProcessInlineSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ProcessInlineSchema)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x62b18f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ProcessInlineSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::InternalReadContentAsObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62adc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "InternalReadContentAsObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(bool)>(&::System::Xml::XsdValidatingReader::InternalReadContentAsObject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62ad944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "InternalReadContentAsObject", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(bool, ::by_ref<::StringW>)>(
    &::System::Xml::XsdValidatingReader::InternalReadContentAsObject)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x62af34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                                                           { "InternalReadContentAsObject", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadElementContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::by_ref<::System::Xml::Schema::XmlSchemaType*>)>(
    &::System::Xml::XsdValidatingReader::InternalReadElementContentAsObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62af7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                             { "InternalReadElementContentAsObject", {}, { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadElementContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::by_ref<::System::Xml::Schema::XmlSchemaType*>, bool)>(
    &::System::Xml::XsdValidatingReader::InternalReadElementContentAsObject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62b3838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                { "InternalReadElementContentAsObject", {}, { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadElementContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::by_ref<::System::Xml::Schema::XmlSchemaType*>, bool, ::by_ref<::StringW>)>(
    &::System::Xml::XsdValidatingReader::InternalReadElementContentAsObject)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x62b384c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
            { "InternalReadElementContentAsObject", {}, { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadTillEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadTillEndElement)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x62b360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ReadTillEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.SwitchReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::SwitchReader)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62b3a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "SwitchReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadAheadForMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadAheadForMemberType)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x62b3a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ReadAheadForMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetIsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::GetIsDefault)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x62b1ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetIsDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::GetMemberType)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x62b2458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReturnBoxedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaType*, bool)>(
    &::System::Xml::XsdValidatingReader::ReturnBoxedValue)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x62b34a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                { "ReturnBoxedValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetCachingReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XsdCachingReader* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::GetCachingReader)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x62b3274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetCachingReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.CreateDummyTextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdValidatingReader::*)(::StringW, int32_t)>(
    &::System::Xml::XsdValidatingReader::CreateDummyTextNode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62b1d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "CreateDummyTextNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.CachingCallBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XsdValidatingReader::*)(::System::Xml::XsdCachingReader*)>(&::System::Xml::XsdValidatingReader::CachingCallBack)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62b3cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "CachingCallBack", {}, { ::i2c::type_of<::System::Xml::XsdCachingReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetOriginalAtomicValueStringOfElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::GetOriginalAtomicValueStringOfElement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62b320c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetOriginalAtomicValueStringOfElement", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReader;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_coreReader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coreReader = value;
}
constexpr ::System::Xml::IXmlNamespaceResolver*& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderNSResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNSResolver;
}
constexpr ::System::Xml::IXmlNamespaceResolver* const& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderNSResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNSResolver;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_coreReaderNSResolver(::System::Xml::IXmlNamespaceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coreReaderNSResolver = value;
}
constexpr ::System::Xml::IXmlNamespaceResolver*& System::Xml::XsdValidatingReader::__cordl_internal_get_thisNSResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisNSResolver;
}
constexpr ::System::Xml::IXmlNamespaceResolver* const& System::Xml::XsdValidatingReader::__cordl_internal_get_thisNSResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisNSResolver;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_thisNSResolver(::System::Xml::IXmlNamespaceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thisNSResolver = value;
}
constexpr ::System::Xml::Schema::XmlSchemaValidator*& System::Xml::XsdValidatingReader::__cordl_internal_get_validator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validator;
}
constexpr ::System::Xml::Schema::XmlSchemaValidator* const& System::Xml::XsdValidatingReader::__cordl_internal_get_validator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validator;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_validator(::System::Xml::Schema::XmlSchemaValidator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validator = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolver = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::XsdValidatingReader::__cordl_internal_get_validationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEvent;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::XsdValidatingReader::__cordl_internal_get_validationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEvent;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_validationEvent(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationEvent = value;
}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState& System::Xml::XsdValidatingReader::__cordl_internal_get_validationState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationState;
}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState const& System::Xml::XsdValidatingReader::__cordl_internal_get_validationState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationState;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_validationState(::System::Xml::XsdValidatingReader_ValidatingReaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationState = value;
}
constexpr ::System::Xml::Schema::XmlValueGetter*& System::Xml::XsdValidatingReader::__cordl_internal_get_valueGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueGetter;
}
constexpr ::System::Xml::Schema::XmlValueGetter* const& System::Xml::XsdValidatingReader::__cordl_internal_get_valueGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueGetter;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_valueGetter(::System::Xml::Schema::XmlValueGetter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueGetter = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::XsdValidatingReader::__cordl_internal_get_nsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsManager;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::XsdValidatingReader::__cordl_internal_get_nsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsManager;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_nsManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsManager = value;
}
constexpr bool& System::Xml::XsdValidatingReader::__cordl_internal_get_manageNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manageNamespaces;
}
constexpr bool const& System::Xml::XsdValidatingReader::__cordl_internal_get_manageNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manageNamespaces;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_manageNamespaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___manageNamespaces = value;
}
constexpr bool& System::Xml::XsdValidatingReader::__cordl_internal_get_processInlineSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processInlineSchema;
}
constexpr bool const& System::Xml::XsdValidatingReader::__cordl_internal_get_processInlineSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processInlineSchema;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_processInlineSchema(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processInlineSchema = value;
}
constexpr bool& System::Xml::XsdValidatingReader::__cordl_internal_get_replayCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___replayCache;
}
constexpr bool const& System::Xml::XsdValidatingReader::__cordl_internal_get_replayCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___replayCache;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_replayCache(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___replayCache = value;
}
constexpr ::System::Xml::ValidatingReaderNodeData*& System::Xml::XsdValidatingReader::__cordl_internal_get_cachedNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedNode;
}
constexpr ::System::Xml::ValidatingReaderNodeData* const& System::Xml::XsdValidatingReader::__cordl_internal_get_cachedNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedNode;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_cachedNode(::System::Xml::ValidatingReaderNodeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedNode = value;
}
constexpr ::System::Xml::AttributePSVIInfo*& System::Xml::XsdValidatingReader::__cordl_internal_get_attributePSVI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributePSVI;
}
constexpr ::System::Xml::AttributePSVIInfo* const& System::Xml::XsdValidatingReader::__cordl_internal_get_attributePSVI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributePSVI;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_attributePSVI(::System::Xml::AttributePSVIInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributePSVI = value;
}
constexpr int32_t& System::Xml::XsdValidatingReader::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Xml::XsdValidatingReader::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr int32_t& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderAttributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderAttributeCount;
}
constexpr int32_t const& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderAttributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderAttributeCount;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_coreReaderAttributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coreReaderAttributeCount = value;
}
constexpr int32_t& System::Xml::XsdValidatingReader::__cordl_internal_get_currentAttrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttrIndex;
}
constexpr int32_t const& System::Xml::XsdValidatingReader::__cordl_internal_get_currentAttrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttrIndex;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_currentAttrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentAttrIndex = value;
}
constexpr ::ArrayW<::System::Xml::AttributePSVIInfo*>& System::Xml::XsdValidatingReader::__cordl_internal_get_attributePSVINodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributePSVINodes;
}
constexpr ::ArrayW<::System::Xml::AttributePSVIInfo*> const& System::Xml::XsdValidatingReader::__cordl_internal_get_attributePSVINodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributePSVINodes;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_attributePSVINodes(::ArrayW<::System::Xml::AttributePSVIInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributePSVINodes = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::XsdValidatingReader::__cordl_internal_get_defaultAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttributes;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::XsdValidatingReader::__cordl_internal_get_defaultAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttributes;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_defaultAttributes(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultAttributes = value;
}
constexpr ::System::Xml::Schema::Parser*& System::Xml::XsdValidatingReader::__cordl_internal_get_inlineSchemaParser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSchemaParser;
}
constexpr ::System::Xml::Schema::Parser* const& System::Xml::XsdValidatingReader::__cordl_internal_get_inlineSchemaParser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSchemaParser;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_inlineSchemaParser(::System::Xml::Schema::Parser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inlineSchemaParser = value;
}
constexpr ::System::Object*& System::Xml::XsdValidatingReader::__cordl_internal_get_atomicValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atomicValue;
}
constexpr ::System::Object* const& System::Xml::XsdValidatingReader::__cordl_internal_get_atomicValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atomicValue;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_atomicValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atomicValue = value;
}
constexpr ::System::Xml::Schema::XmlSchemaInfo*& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlSchemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSchemaInfo;
}
constexpr ::System::Xml::Schema::XmlSchemaInfo* const& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlSchemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSchemaInfo;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_xmlSchemaInfo(::System::Xml::Schema::XmlSchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlSchemaInfo = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_originalAtomicValueString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalAtomicValueString;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_originalAtomicValueString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalAtomicValueString;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_originalAtomicValueString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalAtomicValueString = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderNameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderNameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNameTable;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_coreReaderNameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coreReaderNameTable = value;
}
constexpr ::System::Xml::XsdCachingReader*& System::Xml::XsdValidatingReader::__cordl_internal_get_cachingReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachingReader;
}
constexpr ::System::Xml::XsdCachingReader* const& System::Xml::XsdValidatingReader::__cordl_internal_get_cachingReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachingReader;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_cachingReader(::System::Xml::XsdCachingReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachingReader = value;
}
constexpr ::System::Xml::ValidatingReaderNodeData*& System::Xml::XsdValidatingReader::__cordl_internal_get_textNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textNode;
}
constexpr ::System::Xml::ValidatingReaderNodeData* const& System::Xml::XsdValidatingReader::__cordl_internal_get_textNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textNode;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_textNode(::System::Xml::ValidatingReaderNodeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textNode = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_NsXmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXmlNs = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_NsXs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXs = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXsi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXsi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_NsXsi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXsi = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiType;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiType;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsiType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsiType = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiNil() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNil;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiNil() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNil;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsiNil(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsiNil = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsdSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsdSchema;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsdSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsdSchema;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsdSchema(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsdSchema = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiSchemaLocation;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiSchemaLocation;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsiSchemaLocation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsiSchemaLocation = value;
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiNoNamespaceSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNoNamespaceSchemaLocation;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiNoNamespaceSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNoNamespaceSchemaLocation;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsiNoNamespaceSchemaLocation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsiNoNamespaceSchemaLocation = value;
}
constexpr ::System::Xml::XmlCharType& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::XsdValidatingReader::__cordl_internal_get_lineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr ::System::Xml::IXmlLineInfo* const& System::Xml::XsdValidatingReader::__cordl_internal_get_lineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineInfo = value;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper*& System::Xml::XsdValidatingReader::__cordl_internal_get_readBinaryHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBinaryHelper;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper* const& System::Xml::XsdValidatingReader::__cordl_internal_get_readBinaryHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBinaryHelper;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_readBinaryHelper(::System::Xml::ReadContentAsBinaryHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readBinaryHelper = value;
}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState& System::Xml::XsdValidatingReader::__cordl_internal_get_savedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedState;
}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState const& System::Xml::XsdValidatingReader::__cordl_internal_get_savedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedState;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_savedState(::System::Xml::XsdValidatingReader_ValidatingReaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___savedState = value;
}
inline void System::Xml::XsdValidatingReader::setStaticF_TypeOfString(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "TypeOfString", ::System::Xml::XsdValidatingReader*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::XsdValidatingReader::getStaticF_TypeOfString() {
  return ::cordl_internals::getStaticField<::System::Type*, "TypeOfString", ::System::Xml::XsdValidatingReader*>();
}
inline void System::Xml::XsdValidatingReader::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver, ::System::Xml::XmlReaderSettings* readerSettings,
                                                    ::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlResolver*>(),
                                                               ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, xmlResolver, readerSettings, partialValidationType);
}
inline void System::Xml::XsdValidatingReader::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver, ::System::Xml::XmlReaderSettings* readerSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlResolver*>(), ::i2c::type_of<::System::Xml::XmlReaderSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, xmlResolver, readerSettings);
}
inline void System::Xml::XsdValidatingReader::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::SetupValidator(::System::Xml::XmlReaderSettings* readerSettings, ::System::Xml::XmlReader* reader,
                                                             ::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
          { "SetupValidator", {}, { ::i2c::type_of<::System::Xml::XmlReaderSettings*>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readerSettings, reader, partialValidationType);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XsdValidatingReader::get_Settings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XsdValidatingReader::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline char16_t System::Xml::XsdValidatingReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XsdValidatingReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XsdValidatingReader::get_SchemaInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XsdValidatingReader::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::ReadContentAsObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::ReadContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XsdValidatingReader::ReadContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline double_t System::Xml::XsdValidatingReader::ReadContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t System::Xml::XsdValidatingReader::ReadContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XsdValidatingReader::ReadContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::ReadContentAsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::XsdValidatingReader::ReadContentAsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::ReadContentAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::ReadContentAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* namespaceResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, returnType, namespaceResolver);
}
inline bool System::Xml::XsdValidatingReader::ReadElementContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XsdValidatingReader::ReadElementContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline double_t System::Xml::XsdValidatingReader::ReadElementContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t System::Xml::XsdValidatingReader::ReadElementContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XsdValidatingReader::ReadElementContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::ReadElementContentAsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::XsdValidatingReader::ReadElementContentAsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::ReadElementContentAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XsdValidatingReader::GetAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, namespaceURI);
}
inline ::StringW System::Xml::XsdValidatingReader::GetAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline bool System::Xml::XsdValidatingReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Xml::XsdValidatingReader::MoveToAttribute(::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, ns);
}
inline void System::Xml::XsdValidatingReader::MoveToAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline bool System::Xml::XsdValidatingReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XsdValidatingReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::Skip() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XsdValidatingReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline void System::Xml::XsdValidatingReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::ReadContentAsBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Xml::XsdValidatingReader::ReadContentAsBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XsdValidatingReader*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline bool System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_IsDefault() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_IsDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_IsNil() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_IsNil", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaValidity System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_Validity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_Validity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaValidity>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_MemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_MemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_SchemaType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                           { "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.IXmlNamespaceResolver.LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "System.Xml.IXmlNamespaceResolver.LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceName);
}
inline ::System::Object* System::Xml::XsdValidatingReader::GetStringValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetStringValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XsdValidatingReader::get_ElementXmlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_ElementXmlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XsdValidatingReader::get_AttributeXmlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_AttributeXmlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaInfo* System::Xml::XsdValidatingReader::get_AttributeSchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "get_AttributeSchemaInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaInfo*>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ProcessReaderEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ProcessReaderEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ProcessElementEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ProcessElementEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ProcessEndElementEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ProcessEndElementEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ValidateAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ValidateAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ClearAttributesInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ClearAttributesInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::AttributePSVIInfo* System::Xml::XsdValidatingReader::GetAttributePSVI(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetAttributePSVI", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::AttributePSVIInfo*>(this, ___internal_method, name);
}
inline ::System::Xml::AttributePSVIInfo* System::Xml::XsdValidatingReader::GetAttributePSVI(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetAttributePSVI", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::AttributePSVIInfo*>(this, ___internal_method, localName, ns);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdValidatingReader::GetDefaultAttribute(::StringW name, bool updatePosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetDefaultAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*>(this, ___internal_method, name, updatePosition);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdValidatingReader::GetDefaultAttribute(::StringW attrLocalName, ::StringW ns, bool updatePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                           { "GetDefaultAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*>(this, ___internal_method, attrLocalName, ns, updatePosition);
}
inline ::System::Xml::AttributePSVIInfo* System::Xml::XsdValidatingReader::AddAttributePSVI(int32_t attIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "AddAttributePSVI", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::AttributePSVIInfo*>(this, ___internal_method, attIndex);
}
inline bool System::Xml::XsdValidatingReader::IsXSDRoot(::StringW localName, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "IsXSDRoot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, ns);
}
inline void System::Xml::XsdValidatingReader::ProcessInlineSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ProcessInlineSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadContentAsObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "InternalReadContentAsObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadContentAsObject(bool unwrapTypedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "InternalReadContentAsObject", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, unwrapTypedValue);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadContentAsObject(bool unwrapTypedValue, ::by_ref<::StringW> originalStringValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                                                         { "InternalReadContentAsObject", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, unwrapTypedValue, originalStringValue);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadElementContentAsObject(::by_ref<::System::Xml::Schema::XmlSchemaType*> xmlType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                                           { "InternalReadElementContentAsObject", {}, { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlType);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadElementContentAsObject(::by_ref<::System::Xml::Schema::XmlSchemaType*> xmlType, bool unwrapTypedValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                              { "InternalReadElementContentAsObject", {}, { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlType, unwrapTypedValue);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadElementContentAsObject(::by_ref<::System::Xml::Schema::XmlSchemaType*> xmlType, bool unwrapTypedValue,
                                                                                              ::by_ref<::StringW> originalString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
          { "InternalReadElementContentAsObject", {}, { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlType, unwrapTypedValue, originalString);
}
inline ::System::Object* System::Xml::XsdValidatingReader::ReadTillEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ReadTillEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::SwitchReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "SwitchReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ReadAheadForMemberType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "ReadAheadForMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::GetIsDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetIsDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::GetMemberType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::ReturnBoxedValue(::System::Object* typedValue, ::System::Xml::Schema::XmlSchemaType* xmlType, bool unWrap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(),
                                              { "ReturnBoxedValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typedValue, xmlType, unWrap);
}
inline ::System::Xml::XsdCachingReader* System::Xml::XsdValidatingReader::GetCachingReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetCachingReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XsdCachingReader*>(this, ___internal_method);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdValidatingReader::CreateDummyTextNode(::StringW attributeValue, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "CreateDummyTextNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*>(this, ___internal_method, attributeValue, depth);
}
inline void System::Xml::XsdValidatingReader::CachingCallBack(::System::Xml::XsdCachingReader* cachingReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "CachingCallBack", {}, { ::i2c::type_of<::System::Xml::XsdCachingReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cachingReader);
}
inline ::StringW System::Xml::XsdValidatingReader::GetOriginalAtomicValueStringOfElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XsdValidatingReader*>(), { "GetOriginalAtomicValueStringOfElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XsdValidatingReader* System::Xml::XsdValidatingReader::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver,
                                                                                      ::System::Xml::XmlReaderSettings* readerSettings, ::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XsdValidatingReader*>(reader, xmlResolver, readerSettings, partialValidationType));
}
inline ::System::Xml::XsdValidatingReader* System::Xml::XsdValidatingReader::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver,
                                                                                      ::System::Xml::XmlReaderSettings* readerSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XsdValidatingReader*>(reader, xmlResolver, readerSettings));
}
/// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr System::Xml::XsdValidatingReader::operator ::System::Xml::Schema::IXmlSchemaInfo*() noexcept {
  return static_cast<::System::Xml::Schema::IXmlSchemaInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XsdValidatingReader::i___System__Xml__Schema__IXmlSchemaInfo() noexcept {
  return static_cast<::System::Xml::Schema::IXmlSchemaInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Xml::XsdValidatingReader::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Xml::XsdValidatingReader::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XsdValidatingReader::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XsdValidatingReader::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XsdValidatingReader::XsdValidatingReader() {}
