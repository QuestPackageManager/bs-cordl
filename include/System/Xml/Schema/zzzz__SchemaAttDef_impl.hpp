#pragma once
#include "System/Xml/Schema/zzzz__SchemaAttDef_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve::__SchemaAttDef__Reserve(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve::__SchemaAttDef__Reserve() {}
constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve System::Xml::Schema::__SchemaAttDef__Reserve::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve System::Xml::Schema::__SchemaAttDef__Reserve::XmlSpace{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve System::Xml::Schema::__SchemaAttDef__Reserve::XmlLang{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::XmlQualifiedName*, ::StringW)>(
    &::System::Xml::Schema::SchemaAttDef::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28c4358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28c43e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_Prefix)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c4450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "System.Xml.IDtdAttributeInfo.get_Prefix", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c44f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "System.Xml.IDtdAttributeInfo.get_LocalName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "System.Xml.IDtdAttributeInfo.get_LineNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c451c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "System.Xml.IDtdAttributeInfo.get_LinePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsNonCDataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsNonCDataType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28c4524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "System.Xml.IDtdAttributeInfo.get_IsNonCDataType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                 "System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsXmlAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsXmlAttribute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c4578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "System.Xml.IDtdAttributeInfo.get_IsXmlAttribute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c4588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                 "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c45dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                 "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c45e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                 "System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c45ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                 "System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c45f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_LinePosition",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&::System::Xml::Schema::SchemaAttDef::set_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c45fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_LinePosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_LineNumber",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&::System::Xml::Schema::SchemaAttDef::set_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c460c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_LineNumber", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_ValueLinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "get_ValueLinePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_ValueLinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(int32_t)>(
    &::System::Xml::Schema::SchemaAttDef::set_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c461c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_ValueLinePosition",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_ValueLineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaAttDef::*)()>(&::System::Xml::Schema::SchemaAttDef::get_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "get_ValueLineNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_ValueLineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&::System::Xml::Schema::SchemaAttDef::set_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_ValueLineNumber",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_DefaultValueExpanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::get_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c0858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                               "get_DefaultValueExpanded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_DefaultValueExpanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::StringW)>(
    &::System::Xml::Schema::SchemaAttDef::set_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_DefaultValueExpanded",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_TokenizedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTokenizedType (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::get_TokenizedType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28c4550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_TokenizedType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_TokenizedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::XmlTokenizedType)>(
    &::System::Xml::Schema::SchemaAttDef::set_TokenizedType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c463c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_TokenizedType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTokenizedType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.get_Reserved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::__SchemaAttDef__Reserve (::System::Xml::Schema::SchemaAttDef::*)()>(
    &::System::Xml::Schema::SchemaAttDef::get_Reserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c46b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_Reserved",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.set_Reserved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::Schema::__SchemaAttDef__Reserve)>(
    &::System::Xml::Schema::SchemaAttDef::set_Reserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c46b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_Reserved", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaAttDef__Reserve>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaAttDef.CheckXmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaAttDef::*)(::System::Xml::IValidationEventHandling*)>(
    &::System::Xml::Schema::SchemaAttDef::CheckXmlSpace)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x28c46c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "CheckXmlSpace", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IValidationEventHandling*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IDtdDefaultAttributeInfo"
constexpr System::Xml::Schema::SchemaAttDef::operator ::System::Xml::IDtdDefaultAttributeInfo*() noexcept {
  return static_cast<::System::Xml::IDtdDefaultAttributeInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IDtdAttributeInfo"
constexpr System::Xml::Schema::SchemaAttDef::operator ::System::Xml::IDtdAttributeInfo*() noexcept {
  return static_cast<::System::Xml::IDtdAttributeInfo*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Xml::Schema::SchemaAttDef::__get_defExpanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defExpanded;
}
constexpr ::StringW const& System::Xml::Schema::SchemaAttDef::__get_defExpanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defExpanded;
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_defExpanded(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defExpanded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::SchemaAttDef::__get_lineNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNum;
}
constexpr int32_t const& System::Xml::Schema::SchemaAttDef::__get_lineNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNum;
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_lineNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNum = value;
}
constexpr int32_t& System::Xml::Schema::SchemaAttDef::__get_linePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePos;
}
constexpr int32_t const& System::Xml::Schema::SchemaAttDef::__get_linePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePos;
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_linePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePos = value;
}
constexpr int32_t& System::Xml::Schema::SchemaAttDef::__get_valueLineNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLineNum;
}
constexpr int32_t const& System::Xml::Schema::SchemaAttDef::__get_valueLineNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLineNum;
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_valueLineNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueLineNum = value;
}
constexpr int32_t& System::Xml::Schema::SchemaAttDef::__get_valueLinePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLinePos;
}
constexpr int32_t const& System::Xml::Schema::SchemaAttDef::__get_valueLinePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLinePos;
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_valueLinePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueLinePos = value;
}
constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve& System::Xml::Schema::SchemaAttDef::__get_reserved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reserved;
}
constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve const& System::Xml::Schema::SchemaAttDef::__get_reserved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reserved;
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_reserved(::System::Xml::Schema::__SchemaAttDef__Reserve value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reserved = value;
}
inline void System::Xml::Schema::SchemaAttDef::setStaticF_Empty(::System::Xml::Schema::SchemaAttDef* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::SchemaAttDef*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get>(
      std::forward<::System::Xml::Schema::SchemaAttDef*>(value));
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaAttDef::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::SchemaAttDef*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get>();
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaAttDef::New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::SchemaAttDef*>(name, prefix));
}
inline void System::Xml::Schema::SchemaAttDef::_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, prefix);
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaAttDef::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::SchemaAttDef*>());
}
inline void System::Xml::Schema::SchemaAttDef::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                             "System.Xml.IDtdAttributeInfo.get_Prefix", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                             "System.Xml.IDtdAttributeInfo.get_LocalName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                             "System.Xml.IDtdAttributeInfo.get_LineNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                             "System.Xml.IDtdAttributeInfo.get_LinePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsNonCDataType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                             "System.Xml.IDtdAttributeInfo.get_IsNonCDataType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                               "System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsXmlAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                             "System.Xml.IDtdAttributeInfo.get_IsXmlAttribute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                               "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                               "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                               "System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                               "System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaAttDef::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_LinePosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_LinePosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_LinePosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::SchemaAttDef::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_LineNumber",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_LineNumber(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_LineNumber", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::SchemaAttDef::get_ValueLinePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                             "get_ValueLinePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_ValueLinePosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_ValueLinePosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::SchemaAttDef::get_ValueLineNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_ValueLineNumber",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_ValueLineNumber(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_ValueLineNumber", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::SchemaAttDef::get_DefaultValueExpanded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                             "get_DefaultValueExpanded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_DefaultValueExpanded(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_DefaultValueExpanded",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlTokenizedType System::Xml::Schema::SchemaAttDef::get_TokenizedType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_TokenizedType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTokenizedType, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_TokenizedType(::System::Xml::XmlTokenizedType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_TokenizedType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTokenizedType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::__SchemaAttDef__Reserve System::Xml::Schema::SchemaAttDef::get_Reserved() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "get_Reserved",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::__SchemaAttDef__Reserve, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaAttDef::set_Reserved(::System::Xml::Schema::__SchemaAttDef__Reserve value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "set_Reserved", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaAttDef__Reserve>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaAttDef::CheckXmlSpace(::System::Xml::IValidationEventHandling* validationEventHandling) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaAttDef*>::get(), "CheckXmlSpace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IValidationEventHandling*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, validationEventHandling);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaAttDef::SchemaAttDef() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
