#pragma once
// IWYU pragma private; include "System\Xml\Schema\SchemaAttDef.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::SchemaAttDef_Reserve::SchemaAttDef_Reserve(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaAttDef_Reserve::SchemaAttDef_Reserve() {}
constexpr ::System::Xml::Schema::SchemaAttDef_Reserve System::Xml::Schema::SchemaAttDef_Reserve::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::SchemaAttDef_Reserve System::Xml::Schema::SchemaAttDef_Reserve::XmlSpace{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::SchemaAttDef_Reserve System::Xml::Schema::SchemaAttDef_Reserve::XmlLang{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::XmlQualifiedName*, ::StringW)>(&::System::Xml::Schema::SchemaAttDef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaAttDef::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61ea55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_Prefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ea570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LocalName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61ea590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_LocalName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsNonCDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsNonCDataType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61ea5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_IsNonCDataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsXmlAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsXmlAttribute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61ea608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_IsXmlAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ea618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&::System::Xml::Schema::SchemaAttDef::set_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_LinePosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&::System::Xml::Schema::SchemaAttDef::set_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_LineNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_ValueLinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_ValueLinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_ValueLinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&::System::Xml::Schema::SchemaAttDef::set_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_ValueLinePosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_ValueLineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_ValueLineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_ValueLineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&::System::Xml::Schema::SchemaAttDef::set_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_ValueLineNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_DefaultValueExpanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ea638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_DefaultValueExpanded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_DefaultValueExpanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::StringW)>(&::System::Xml::Schema::SchemaAttDef::set_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_DefaultValueExpanded", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_TokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlTokenizedType (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_TokenizedType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61ea5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_TokenizedType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_TokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::XmlTokenizedType)>(&::System::Xml::Schema::SchemaAttDef::set_TokenizedType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61ea6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_TokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_Reserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaAttDef_Reserve (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_Reserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_Reserved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_Reserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::Schema::SchemaAttDef_Reserve)>(
    &::System::Xml::Schema::SchemaAttDef::set_Reserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_Reserved", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef_Reserve>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_DefaultValueChecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_DefaultValueChecked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_DefaultValueChecked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_SchemaAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::get_SchemaAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_SchemaAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_SchemaAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::SchemaAttDef::set_SchemaAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ea6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_SchemaAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.CheckXmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::IValidationEventHandling*)>(&::System::Xml::Schema::SchemaAttDef::CheckXmlSpace)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x61ea700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "CheckXmlSpace", {}, { ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaAttDef* (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::Clone)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61ea96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_defExpanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defExpanded;
}
constexpr ::StringW const& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_defExpanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defExpanded;
}
constexpr void System::Xml::Schema::SchemaAttDef::__cordl_internal_set_defExpanded(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defExpanded = value;
}
constexpr int32_t& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_lineNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNum;
}
constexpr int32_t const& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_lineNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNum;
}
constexpr void System::Xml::Schema::SchemaAttDef::__cordl_internal_set_lineNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNum = value;
}
constexpr int32_t& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_linePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePos;
}
constexpr int32_t const& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_linePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePos;
}
constexpr void System::Xml::Schema::SchemaAttDef::__cordl_internal_set_linePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePos = value;
}
constexpr int32_t& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_valueLineNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLineNum;
}
constexpr int32_t const& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_valueLineNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLineNum;
}
constexpr void System::Xml::Schema::SchemaAttDef::__cordl_internal_set_valueLineNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueLineNum = value;
}
constexpr int32_t& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_valueLinePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLinePos;
}
constexpr int32_t const& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_valueLinePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLinePos;
}
constexpr void System::Xml::Schema::SchemaAttDef::__cordl_internal_set_valueLinePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueLinePos = value;
}
constexpr ::System::Xml::Schema::SchemaAttDef_Reserve& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_reserved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reserved;
}
constexpr ::System::Xml::Schema::SchemaAttDef_Reserve const& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_reserved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reserved;
}
constexpr void System::Xml::Schema::SchemaAttDef::__cordl_internal_set_reserved(::System::Xml::Schema::SchemaAttDef_Reserve value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reserved = value;
}
constexpr bool& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_defaultValueChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValueChecked;
}
constexpr bool const& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_defaultValueChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValueChecked;
}
constexpr void System::Xml::Schema::SchemaAttDef::__cordl_internal_set_defaultValueChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultValueChecked = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAttribute*& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_schemaAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaAttribute;
}
constexpr ::System::Xml::Schema::XmlSchemaAttribute* const& System::Xml::Schema::SchemaAttDef::__cordl_internal_get_schemaAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaAttribute;
}
constexpr void System::Xml::Schema::SchemaAttDef::__cordl_internal_set_schemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaAttribute = value;
}
inline void System::Xml::Schema::SchemaAttDef::setStaticF_Empty(::System::Xml::Schema::SchemaAttDef* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::SchemaAttDef*, "Empty", ::System::Xml::Schema::SchemaAttDef*>(std::forward<::System::Xml::Schema::SchemaAttDef*>(value));
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaAttDef::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::SchemaAttDef*, "Empty", ::System::Xml::Schema::SchemaAttDef*>();
}
inline void System::Xml::Schema::SchemaAttDef::_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, prefix);
}
inline void System::Xml::Schema::SchemaAttDef::_ctor(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::Schema::SchemaAttDef::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_Prefix() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LocalName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_LocalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LineNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LinePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsNonCDataType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_IsNonCDataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsXmlAttribute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdAttributeInfo.get_IsXmlAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_LinePosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_LinePosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::SchemaAttDef::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_LineNumber(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_LineNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::SchemaAttDef::get_ValueLinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_ValueLinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_ValueLinePosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_ValueLinePosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::SchemaAttDef::get_ValueLineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_ValueLineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_ValueLineNumber(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_ValueLineNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::SchemaAttDef::get_DefaultValueExpanded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_DefaultValueExpanded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_DefaultValueExpanded(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_DefaultValueExpanded", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlTokenizedType System::Xml::Schema::SchemaAttDef::get_TokenizedType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_TokenizedType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTokenizedType>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_TokenizedType(::System::Xml::XmlTokenizedType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_TokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SchemaAttDef_Reserve System::Xml::Schema::SchemaAttDef::get_Reserved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_Reserved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaAttDef_Reserve>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_Reserved(::System::Xml::Schema::SchemaAttDef_Reserve value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_Reserved", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef_Reserve>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::SchemaAttDef::get_DefaultValueChecked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_DefaultValueChecked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::Schema::SchemaAttDef::get_SchemaAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "get_SchemaAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_SchemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "set_SchemaAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaAttDef::CheckXmlSpace(::System::Xml::IValidationEventHandling* validationEventHandling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "CheckXmlSpace", {}, { ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validationEventHandling);
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaAttDef::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaAttDef*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaAttDef*>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaAttDef::New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaAttDef*>(name, prefix));
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaAttDef::New_ctor(::System::Xml::XmlQualifiedName* name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaAttDef*>(name));
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaAttDef::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaAttDef*>());
}
/// @brief Convert operator to "::System::Xml::IDtdDefaultAttributeInfo"
constexpr System::Xml::Schema::SchemaAttDef::operator ::System::Xml::IDtdDefaultAttributeInfo*() noexcept {
  return static_cast<::System::Xml::IDtdDefaultAttributeInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdDefaultAttributeInfo"
constexpr ::System::Xml::IDtdDefaultAttributeInfo* System::Xml::Schema::SchemaAttDef::i___System__Xml__IDtdDefaultAttributeInfo() noexcept {
  return static_cast<::System::Xml::IDtdDefaultAttributeInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IDtdAttributeInfo"
constexpr System::Xml::Schema::SchemaAttDef::operator ::System::Xml::IDtdAttributeInfo*() noexcept {
  return static_cast<::System::Xml::IDtdAttributeInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdAttributeInfo"
constexpr ::System::Xml::IDtdAttributeInfo* System::Xml::Schema::SchemaAttDef::i___System__Xml__IDtdAttributeInfo() noexcept {
  return static_cast<::System::Xml::IDtdAttributeInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaAttDef::SchemaAttDef() {}
