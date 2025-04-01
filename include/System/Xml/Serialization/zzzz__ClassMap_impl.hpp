#pragma once
// IWYU pragma private; include "System/Xml/Serialization/ClassMap.hpp"
#include "System/Xml/Serialization/zzzz__ObjectMap_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Xml/Serialization/zzzz__ClassMap_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfo_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberAnyAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberAnyElement_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberNamespaces_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.AddMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::ClassMap::*)(::System::Xml::Serialization::XmlTypeMapMember*)>(
    &::System::Xml::Serialization::ClassMap::AddMember)> {
  constexpr static std::size_t size = 0xb20;
  constexpr static std::size_t addrs = 0x438c488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "AddMember", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.RegisterFlatList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::ClassMap::*)(::System::Xml::Serialization::XmlTypeMapMemberExpandable*)>(
    &::System::Xml::Serialization::ClassMap::RegisterFlatList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x438d088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "RegisterFlatList", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Serialization::XmlTypeMapMemberAttribute* (::System::Xml::Serialization::ClassMap::*)(::StringW, ::StringW)>(&::System::Xml::Serialization::ClassMap::GetAttribute)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x438d128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.GetElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (::System::Xml::Serialization::ClassMap::*)(::StringW, ::StringW, int32_t)>(&::System::Xml::Serialization::ClassMap::GetElement)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x438d1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "GetElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.GetElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (::System::Xml::Serialization::ClassMap::*)(::StringW, ::StringW)>(&::System::Xml::Serialization::ClassMap::GetElement)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x438d5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "GetElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.BuildKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::ClassMap::*)(::StringW, ::StringW, int32_t)>(
    &::System::Xml::Serialization::ClassMap::BuildKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x438cfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "BuildKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_IsOrderDependentMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_IsOrderDependentMap)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x438d944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_IsOrderDependentMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_DefaultAnyElementMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapMemberAnyElement* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_DefaultAnyElementMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_DefaultAnyElementMember", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_DefaultAnyAttributeMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_DefaultAnyAttributeMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_DefaultAnyAttributeMember", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_NamespaceDeclarations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapMemberNamespaces* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_NamespaceDeclarations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_NamespaceDeclarations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_AttributeMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_AttributeMembers)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x4385030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_AttributeMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_ElementMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_ElementMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_ElementMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_AllMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_AllMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "get_AllMembers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_FlatLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_FlatLists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "get_FlatLists",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_ListMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_ListMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_ListMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_XmlTextCollector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapMember* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_XmlTextCollector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_XmlTextCollector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_ReturnMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapMember* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_ReturnMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438dd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_ReturnMember", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_SimpleContentBaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::ClassMap::*)()>(
    &::System::Xml::Serialization::ClassMap::get_SimpleContentBaseType)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x438dd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_SimpleContentBaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.SetCanBeSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::ClassMap::*)(bool)>(
    &::System::Xml::Serialization::ClassMap::SetCanBeSimpleType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x438df40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "SetCanBeSimpleType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap.get_HasSimpleContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::ClassMap::*)()>(&::System::Xml::Serialization::ClassMap::get_HasSimpleContent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x438df4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                               "get_HasSimpleContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ClassMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::ClassMap::*)()>(&::System::Xml::Serialization::ClassMap::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x438dfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::ClassMap::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__elements(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::ClassMap::__cordl_internal_get__elementMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementMembers;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__elementMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementMembers;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__elementMembers(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::ClassMap::__cordl_internal_get__attributeMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeMembers;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__attributeMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeMembers;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__attributeMembers(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Serialization::XmlTypeMapMemberAttribute*, ::Array<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>*>&
System::Xml::Serialization::ClassMap::__cordl_internal_get__attributeMembersArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeMembersArray;
}
constexpr ::ArrayW<::System::Xml::Serialization::XmlTypeMapMemberAttribute*, ::Array<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>*> const&
System::Xml::Serialization::ClassMap::__cordl_internal_get__attributeMembersArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeMembersArray;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__attributeMembersArray(
    ::ArrayW<::System::Xml::Serialization::XmlTypeMapMemberAttribute*, ::Array<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeMembersArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::ClassMap::__cordl_internal_get__flatLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatLists;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__flatLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatLists;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__flatLists(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flatLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::ClassMap::__cordl_internal_get__allMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMembers;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__allMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMembers;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__allMembers(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::ClassMap::__cordl_internal_get__membersWithDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____membersWithDefault;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__membersWithDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____membersWithDefault;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__membersWithDefault(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____membersWithDefault)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::ClassMap::__cordl_internal_get__listMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listMembers;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__listMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listMembers;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__listMembers(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____listMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyElement*& System::Xml::Serialization::ClassMap::__cordl_internal_get__defaultAnyElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAnyElement;
}
constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyElement* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__defaultAnyElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAnyElement;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__defaultAnyElement(::System::Xml::Serialization::XmlTypeMapMemberAnyElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultAnyElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*& System::Xml::Serialization::ClassMap::__cordl_internal_get__defaultAnyAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAnyAttribute;
}
constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__defaultAnyAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAnyAttribute;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__defaultAnyAttribute(::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultAnyAttribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlTypeMapMemberNamespaces*& System::Xml::Serialization::ClassMap::__cordl_internal_get__namespaceDeclarations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespaceDeclarations;
}
constexpr ::System::Xml::Serialization::XmlTypeMapMemberNamespaces* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__namespaceDeclarations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespaceDeclarations;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__namespaceDeclarations(::System::Xml::Serialization::XmlTypeMapMemberNamespaces* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____namespaceDeclarations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlTypeMapMember*& System::Xml::Serialization::ClassMap::__cordl_internal_get__xmlTextCollector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlTextCollector;
}
constexpr ::System::Xml::Serialization::XmlTypeMapMember* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__xmlTextCollector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlTextCollector;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__xmlTextCollector(::System::Xml::Serialization::XmlTypeMapMember* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xmlTextCollector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlTypeMapMember*& System::Xml::Serialization::ClassMap::__cordl_internal_get__returnMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnMember;
}
constexpr ::System::Xml::Serialization::XmlTypeMapMember* const& System::Xml::Serialization::ClassMap::__cordl_internal_get__returnMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnMember;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__returnMember(::System::Xml::Serialization::XmlTypeMapMember* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnMember)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Serialization::ClassMap::__cordl_internal_get__ignoreMemberNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreMemberNamespace;
}
constexpr bool const& System::Xml::Serialization::ClassMap::__cordl_internal_get__ignoreMemberNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreMemberNamespace;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__ignoreMemberNamespace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreMemberNamespace = value;
}
constexpr bool& System::Xml::Serialization::ClassMap::__cordl_internal_get__canBeSimpleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeSimpleType;
}
constexpr bool const& System::Xml::Serialization::ClassMap::__cordl_internal_get__canBeSimpleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeSimpleType;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__canBeSimpleType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canBeSimpleType = value;
}
constexpr ::System::Nullable_1<bool>& System::Xml::Serialization::ClassMap::__cordl_internal_get__isOrderDependentMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOrderDependentMap;
}
constexpr ::System::Nullable_1<bool> const& System::Xml::Serialization::ClassMap::__cordl_internal_get__isOrderDependentMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOrderDependentMap;
}
constexpr void System::Xml::Serialization::ClassMap::__cordl_internal_set__isOrderDependentMap(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOrderDependentMap = value;
}
inline void System::Xml::Serialization::ClassMap::AddMember(::System::Xml::Serialization::XmlTypeMapMember* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "AddMember", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member);
}
inline void System::Xml::Serialization::ClassMap::RegisterFlatList(::System::Xml::Serialization::XmlTypeMapMemberExpandable* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "RegisterFlatList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberAttribute* System::Xml::Serialization::ClassMap::GetAttribute(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapMemberAttribute*, false>(this, ___internal_method, name, ns);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfo* System::Xml::Serialization::ClassMap::GetElement(::StringW name, ::StringW ns, int32_t minimalOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "GetElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfo*, false>(this, ___internal_method, name, ns, minimalOrder);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfo* System::Xml::Serialization::ClassMap::GetElement(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "GetElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfo*, false>(this, ___internal_method, name, ns);
}
inline ::StringW System::Xml::Serialization::ClassMap::BuildKey(::StringW name, ::StringW ns, int32_t explicitOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "BuildKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, ns, explicitOrder);
}
inline bool System::Xml::Serialization::ClassMap::get_IsOrderDependentMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_IsOrderDependentMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberAnyElement* System::Xml::Serialization::ClassMap::get_DefaultAnyElementMember() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_DefaultAnyElementMember", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* System::Xml::Serialization::ClassMap::get_DefaultAnyAttributeMember() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_DefaultAnyAttributeMember", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberNamespaces* System::Xml::Serialization::ClassMap::get_NamespaceDeclarations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_NamespaceDeclarations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapMemberNamespaces*, false>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Xml::Serialization::ClassMap::get_AttributeMembers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_AttributeMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Xml::Serialization::ClassMap::get_ElementMembers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_ElementMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Xml::Serialization::ClassMap::get_AllMembers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "get_AllMembers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Xml::Serialization::ClassMap::get_FlatLists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "get_FlatLists",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Xml::Serialization::ClassMap::get_ListMembers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "get_ListMembers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMember* System::Xml::Serialization::ClassMap::get_XmlTextCollector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_XmlTextCollector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapMember*, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMember* System::Xml::Serialization::ClassMap::get_ReturnMember() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "get_ReturnMember",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapMember*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::ClassMap::get_SimpleContentBaseType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_SimpleContentBaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::ClassMap::SetCanBeSimpleType(bool can) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), "SetCanBeSimpleType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, can);
}
inline bool System::Xml::Serialization::ClassMap::get_HasSimpleContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(),
                                                                             "get_HasSimpleContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::ClassMap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::ClassMap*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::ClassMap* System::Xml::Serialization::ClassMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::ClassMap*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::ClassMap::ClassMap() {}
