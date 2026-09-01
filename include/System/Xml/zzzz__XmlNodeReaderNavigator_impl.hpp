#pragma once
// IWYU pragma private; include "System\Xml\XmlNodeReaderNavigator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlNodeReaderNavigator_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__XmlDeclaration_def.hpp"
#include "System/Xml/zzzz__XmlDocumentType_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlNodeReaderNavigator_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator_VirtualAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator_VirtualAttribute::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator_VirtualAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cb610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlNodeReaderNavigator_VirtualAttribute::_ctor(::StringW name, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, value);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNodeReaderNavigator_VirtualAttribute::XmlNodeReaderNavigator_VirtualAttribute(::StringW name, ::StringW value) noexcept {
  this->name = name;
  this->value = value;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNodeReaderNavigator_VirtualAttribute::XmlNodeReaderNavigator_VirtualAttribute() {}
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlNodeReaderNavigator::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x62c8820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_NodeType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62c89f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c8a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_NamespaceURI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_Name)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x62c8a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_LocalName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62c8b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_LocalName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_CreatedOnAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_CreatedOnAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c8bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_CreatedOnAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.IsLocalNameEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlNodeReaderNavigator::IsLocalNameEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c8b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "IsLocalNameEmpty", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_Prefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c8bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_Value)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x62c8bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_BaseURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c8fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_BaseURI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c9004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_XmlSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c9024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_XmlLang", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x62c9044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_IsEmptyElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_IsDefault)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x62c90f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_IsDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62c91ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_SchemaInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c91cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_NameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_AttributeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_AttributeCount)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x62c91d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_AttributeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.CheckIndexCondition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(&::System::Xml::XmlNodeReaderNavigator::CheckIndexCondition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62c93f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "CheckIndexCondition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.InitDecAttr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::InitDecAttr)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x62c8e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "InitDecAttr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDeclarationAttr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlDeclaration*, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetDeclarationAttr)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62c9458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                             { "GetDeclarationAttr", {}, { ::i2c::type_of<::System::Xml::XmlDeclaration*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDeclarationAttr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(&::System::Xml::XmlNodeReaderNavigator::GetDeclarationAttr)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62c9538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDeclarationAttr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDecAttrInd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(&::System::Xml::XmlNodeReaderNavigator::GetDecAttrInd)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62c958c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDecAttrInd", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.InitDocTypeAttr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::InitDocTypeAttr)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x62c9314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "InitDocTypeAttr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDocumentTypeAttr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlDocumentType*, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetDocumentTypeAttr)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62c9620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                             { "GetDocumentTypeAttr", {}, { ::i2c::type_of<::System::Xml::XmlDocumentType*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDocumentTypeAttr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(&::System::Xml::XmlNodeReaderNavigator::GetDocumentTypeAttr)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62c96cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDocumentTypeAttr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDocTypeAttrInd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(&::System::Xml::XmlNodeReaderNavigator::GetDocTypeAttrInd)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62c9720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDocTypeAttrInd", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttributeFromElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlElement*, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetAttributeFromElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62c97b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                             { "GetAttributeFromElement", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(&::System::Xml::XmlNodeReaderNavigator::GetAttribute)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x62c97f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttributeFromElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlElement*, ::StringW, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetAttributeFromElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62c99b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                { "GetAttributeFromElement", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW, ::StringW)>(&::System::Xml::XmlNodeReaderNavigator::GetAttribute)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x62c99fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(&::System::Xml::XmlNodeReaderNavigator::GetAttribute)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x62c9bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetAttribute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.LogMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(&::System::Xml::XmlNodeReaderNavigator::LogMove)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62c9d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "LogMove", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.RollBackMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(::by_ref<int32_t>)>(&::System::Xml::XmlNodeReaderNavigator::RollBackMove)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62c9db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "RollBackMove", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_IsOnDeclOrDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_IsOnDeclOrDocType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x62c9de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_IsOnDeclOrDocType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.ResetToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(::by_ref<int32_t>)>(&::System::Xml::XmlNodeReaderNavigator::ResetToAttribute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62c9e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "ResetToAttribute", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.ResetMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(::by_ref<int32_t>, ::by_ref<::System::Xml::XmlNodeType>)>(
    &::System::Xml::XmlNodeReaderNavigator::ResetMove)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x62c9ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                             { "ResetMove", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Xml::XmlNodeType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(&::System::Xml::XmlNodeReaderNavigator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62ca048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToAttributeFromElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlElement*, ::StringW, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::MoveToAttributeFromElement)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62ca1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                { "MoveToAttributeFromElement", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::StringW, ::StringW)>(&::System::Xml::XmlNodeReaderNavigator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x62ca05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(&::System::Xml::XmlNodeReaderNavigator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x62ca274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::by_ref<int32_t>)>(&::System::Xml::XmlNodeReaderNavigator::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x62ca3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToNextAttribute", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::MoveToParent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62ca5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToFirstChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::MoveToFirstChild)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x62ca600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToFirstChild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToNextSibling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlNodeReaderNavigator::MoveToNextSibling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62ca64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToNextSibling", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::MoveToNext)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x62ca69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::MoveToElement)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62ca6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(&::System::Xml::XmlNodeReaderNavigator::LookupNamespace)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x62ca758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.DefaultLookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(&::System::Xml::XmlNodeReaderNavigator::DefaultLookupNamespace)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x62caa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "DefaultLookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(&::System::Xml::XmlNodeReaderNavigator::LookupPrefix)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x62cab48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XmlNodeReaderNavigator::GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x62caf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::by_ref<int32_t>, ::by_ref<bool>, ::by_ref<::System::Xml::XmlNodeType>)>(
    &::System::Xml::XmlNodeReaderNavigator::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x62cb438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                            { "ReadAttributeValue", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::Xml::XmlNodeType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_Document
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_Document)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cb608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_Document", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_curNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_curNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_curNode(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curNode = value;
}
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_elemNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemNode;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_elemNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemNode;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_elemNode(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elemNode = value;
}
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_logNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logNode;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_logNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logNode;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_logNode(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logNode = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_attrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrIndex;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_attrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrIndex;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_attrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrIndex = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_logAttrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logAttrIndex;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_logAttrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logAttrIndex;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_logAttrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logAttrIndex = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr ::System::Xml::XmlDocument*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_doc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doc;
}
constexpr ::System::Xml::XmlDocument* const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_doc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doc;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_doc(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doc = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nAttrInd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nAttrInd;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nAttrInd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nAttrInd;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nAttrInd(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nAttrInd = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nDeclarationAttrCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nDeclarationAttrCount;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nDeclarationAttrCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nDeclarationAttrCount;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nDeclarationAttrCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nDeclarationAttrCount = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nDocTypeAttrCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nDocTypeAttrCount;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nDocTypeAttrCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nDocTypeAttrCount;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nDocTypeAttrCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nDocTypeAttrCount = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nLogLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nLogLevel;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nLogLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nLogLevel;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nLogLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nLogLevel = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nLogAttrInd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nLogAttrInd;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nLogAttrInd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nLogAttrInd;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nLogAttrInd(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nLogAttrInd = value;
}
constexpr bool& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bLogOnAttrVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bLogOnAttrVal;
}
constexpr bool const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bLogOnAttrVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bLogOnAttrVal;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_bLogOnAttrVal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bLogOnAttrVal = value;
}
constexpr bool& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bCreatedOnAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bCreatedOnAttribute;
}
constexpr bool const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bCreatedOnAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bCreatedOnAttribute;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_bCreatedOnAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bCreatedOnAttribute = value;
}
constexpr ::ArrayW<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute>& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_decNodeAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decNodeAttributes;
}
constexpr ::ArrayW<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute> const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_decNodeAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decNodeAttributes;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_decNodeAttributes(::ArrayW<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decNodeAttributes = value;
}
constexpr ::ArrayW<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute>& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_docTypeNodeAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeNodeAttributes;
}
constexpr ::ArrayW<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute> const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_docTypeNodeAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeNodeAttributes;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_docTypeNodeAttributes(::ArrayW<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___docTypeNodeAttributes = value;
}
constexpr bool& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bOnAttrVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bOnAttrVal;
}
constexpr bool const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bOnAttrVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bOnAttrVal;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_bOnAttrVal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bOnAttrVal = value;
}
inline void System::Xml::XmlNodeReaderNavigator::_ctor(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlNodeReaderNavigator::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_NamespaceURI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_NamespaceURI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_LocalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::get_CreatedOnAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_CreatedOnAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::IsLocalNameEmpty(::System::Xml::XmlNodeType nt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "IsLocalNameEmpty", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nt);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_BaseURI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_BaseURI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlNodeReaderNavigator::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_XmlSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_XmlLang", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_IsEmptyElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::get_IsDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_IsDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlNodeReaderNavigator::get_SchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_SchemaInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlNodeReaderNavigator::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_NameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline int32_t System::Xml::XmlNodeReaderNavigator::get_AttributeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_AttributeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlNodeReaderNavigator::CheckIndexCondition(int32_t attributeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "CheckIndexCondition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeIndex);
}
inline void System::Xml::XmlNodeReaderNavigator::InitDecAttr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "InitDecAttr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetDeclarationAttr(::System::Xml::XmlDeclaration* decl, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDeclarationAttr", {}, { ::i2c::type_of<::System::Xml::XmlDeclaration*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, decl, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetDeclarationAttr(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDeclarationAttr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline int32_t System::Xml::XmlNodeReaderNavigator::GetDecAttrInd(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDecAttrInd", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline void System::Xml::XmlNodeReaderNavigator::InitDocTypeAttr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "InitDocTypeAttr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetDocumentTypeAttr(::System::Xml::XmlDocumentType* docType, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                           { "GetDocumentTypeAttr", {}, { ::i2c::type_of<::System::Xml::XmlDocumentType*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, docType, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetDocumentTypeAttr(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDocumentTypeAttr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline int32_t System::Xml::XmlNodeReaderNavigator::GetDocTypeAttrInd(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetDocTypeAttrInd", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                           { "GetAttributeFromElement", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, elem, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttribute(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                              { "GetAttributeFromElement", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, elem, name, ns);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttribute(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, ns);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttribute(int32_t attributeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetAttribute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, attributeIndex);
}
inline void System::Xml::XmlNodeReaderNavigator::LogMove(int32_t level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "LogMove", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void System::Xml::XmlNodeReaderNavigator::RollBackMove(::by_ref<int32_t> level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "RollBackMove", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline bool System::Xml::XmlNodeReaderNavigator::get_IsOnDeclOrDocType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_IsOnDeclOrDocType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlNodeReaderNavigator::ResetToAttribute(::by_ref<int32_t> level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "ResetToAttribute", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void System::Xml::XmlNodeReaderNavigator::ResetMove(::by_ref<int32_t> level, ::by_ref<::System::Xml::XmlNodeType> nt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                                           { "ResetMove", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Xml::XmlNodeType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, nt);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToAttribute(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                                              { "MoveToAttributeFromElement", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elem, name, ns);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToAttribute(::StringW name, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, namespaceURI);
}
inline void System::Xml::XmlNodeReaderNavigator::MoveToAttribute(int32_t attributeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeIndex);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToNextAttribute(::by_ref<int32_t> level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToNextAttribute", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToFirstChild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToFirstChild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToNextSibling(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToNextSibling", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "MoveToElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::DefaultLookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "DefaultLookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceName);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Xml::XmlNodeReaderNavigator::GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline bool System::Xml::XmlNodeReaderNavigator::ReadAttributeValue(::by_ref<int32_t> level, ::by_ref<bool> bResolveEntity, ::by_ref<::System::Xml::XmlNodeType> nt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(),
                          { "ReadAttributeValue", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::Xml::XmlNodeType>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level, bResolveEntity, nt);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlNodeReaderNavigator::get_Document() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReaderNavigator*>(), { "get_Document", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeReaderNavigator* System::Xml::XmlNodeReaderNavigator::New_ctor(::System::Xml::XmlNode* node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlNodeReaderNavigator*>(node));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNodeReaderNavigator::XmlNodeReaderNavigator() {}
