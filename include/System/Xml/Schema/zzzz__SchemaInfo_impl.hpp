#pragma once
#include "System/Xml/Schema/zzzz__SchemaType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaEntity_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNotation_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeListInfo_def.hpp"
#include "System/Xml/zzzz__IDtdEntityInfo_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x28c54ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_DocTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaInfo::set_DocTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "set_DocTypeName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_InternalDtdSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::StringW)>(&::System::Xml::Schema::SchemaInfo::set_InternalDtdSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c56a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "set_InternalDtdSubset",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_ElementDecls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* (::System::Xml::Schema::SchemaInfo::*)()>(
        &::System::Xml::Schema::SchemaInfo::get_ElementDecls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c56a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_ElementDecls",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_UndeclaredElementDecls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* (::System::Xml::Schema::SchemaInfo::*)()>(
        &::System::Xml::Schema::SchemaInfo::get_UndeclaredElementDecls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c56b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                               "get_UndeclaredElementDecls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_GeneralEntities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* (::System::Xml::Schema::SchemaInfo::*)()>(
        &::System::Xml::Schema::SchemaInfo::get_GeneralEntities)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c56b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_GeneralEntities",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_ParameterEntities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* (::System::Xml::Schema::SchemaInfo::*)()>(
        &::System::Xml::Schema::SchemaInfo::get_ParameterEntities)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c5738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                               "get_ParameterEntities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_SchemaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaType (::System::Xml::Schema::SchemaInfo::*)()>(
    &::System::Xml::Schema::SchemaInfo::get_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c57b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_SchemaType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_SchemaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::Schema::SchemaType)>(
    &::System::Xml::Schema::SchemaInfo::set_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c57c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "set_SchemaType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_Notations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* (
    ::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_Notations)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c57c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_Notations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::Finish)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x28c5848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "Finish",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_HasDefaultAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaInfo::*)()>(
    &::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasDefaultAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c59fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.get_HasDefaultAttributes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_HasNonCDataAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaInfo::*)()>(
    &::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasNonCDataAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.get_HasNonCDataAttributes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_LookupAttributeList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdAttributeListInfo* (::System::Xml::Schema::SchemaInfo::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupAttributeList)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28c5a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.LookupAttributeList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_LookupEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdEntityInfo* (::System::Xml::Schema::SchemaInfo::*)(::StringW)>(
    &::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupEntity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28c5ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.LookupEntity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaInfo::*)()>(
    &::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                               "System.Xml.IDtdInfo.get_Name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_InternalDtdSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaInfo::*)()>(
    &::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_InternalDtdSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.get_InternalDtdSubset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IDtdInfo"
constexpr System::Xml::Schema::SchemaInfo::operator ::System::Xml::IDtdInfo*() noexcept {
  return static_cast<::System::Xml::IDtdInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdInfo"
constexpr ::System::Xml::IDtdInfo* System::Xml::Schema::SchemaInfo::i___System__Xml__IDtdInfo() noexcept {
  return static_cast<::System::Xml::IDtdInfo*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_elementDecls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDecls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_elementDecls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDecls;
}
constexpr void
System::Xml::Schema::SchemaInfo::__cordl_internal_set_elementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementDecls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_undeclaredElementDecls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___undeclaredElementDecls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_undeclaredElementDecls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___undeclaredElementDecls;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_undeclaredElementDecls(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___undeclaredElementDecls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_generalEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalEntities;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*> const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_generalEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalEntities;
}
constexpr void
System::Xml::Schema::SchemaInfo::__cordl_internal_set_generalEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___generalEntities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_parameterEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameterEntities;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*> const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_parameterEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameterEntities;
}
constexpr void
System::Xml::Schema::SchemaInfo::__cordl_internal_set_parameterEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameterEntities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaInfo::__cordl_internal_get_docTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeName;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_docTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeName;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_docTypeName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___docTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaInfo::__cordl_internal_get_internalDtdSubset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalDtdSubset;
}
constexpr ::StringW const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_internalDtdSubset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalDtdSubset;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_internalDtdSubset(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internalDtdSubset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::SchemaInfo::__cordl_internal_get_hasNonCDataAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNonCDataAttributes;
}
constexpr bool const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_hasNonCDataAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNonCDataAttributes;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_hasNonCDataAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasNonCDataAttributes = value;
}
constexpr bool& System::Xml::Schema::SchemaInfo::__cordl_internal_get_hasDefaultAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDefaultAttributes;
}
constexpr bool const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_hasDefaultAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDefaultAttributes;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_hasDefaultAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDefaultAttributes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& System::Xml::Schema::SchemaInfo::__cordl_internal_get_targetNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespaces;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, bool>*> const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_targetNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespaces;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_targetNamespaces(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_attributeDecls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeDecls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*> const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_attributeDecls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeDecls;
}
constexpr void
System::Xml::Schema::SchemaInfo::__cordl_internal_set_attributeDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeDecls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SchemaType& System::Xml::Schema::SchemaInfo::__cordl_internal_get_schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr ::System::Xml::Schema::SchemaType const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_schemaType(::System::Xml::Schema::SchemaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_elementDeclsByType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDeclsByType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_elementDeclsByType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDeclsByType;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_elementDeclsByType(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementDeclsByType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*& System::Xml::Schema::SchemaInfo::__cordl_internal_get_notations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*> const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_notations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_notations(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___notations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::Schema::SchemaInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::SchemaInfo*>());
}
inline void System::Xml::Schema::SchemaInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::set_DocTypeName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "set_DocTypeName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaInfo::set_InternalDtdSubset(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "set_InternalDtdSubset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::get_ElementDecls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_ElementDecls",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*, false>(this,
                                                                                                                                                                                ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::get_UndeclaredElementDecls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                             "get_UndeclaredElementDecls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*, false>(this,
                                                                                                                                                                                ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* System::Xml::Schema::SchemaInfo::get_GeneralEntities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_GeneralEntities",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* System::Xml::Schema::SchemaInfo::get_ParameterEntities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_ParameterEntities",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaType System::Xml::Schema::SchemaInfo::get_SchemaType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_SchemaType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaType, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::set_SchemaType(::System::Xml::Schema::SchemaType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "set_SchemaType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* System::Xml::Schema::SchemaInfo::get_Notations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "get_Notations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::Finish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "Finish",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasDefaultAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.get_HasDefaultAttributes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasNonCDataAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.get_HasNonCDataAttributes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::IDtdAttributeListInfo* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupAttributeList(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.LookupAttributeList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdAttributeListInfo*, false>(this, ___internal_method, prefix, localName);
}
inline ::System::Xml::IDtdEntityInfo* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupEntity(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.LookupEntity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdEntityInfo*, false>(this, ___internal_method, name);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                             "System.Xml.IDtdInfo.get_Name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_InternalDtdSubset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(), "System.Xml.IDtdInfo.get_InternalDtdSubset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaInfo::SchemaInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
