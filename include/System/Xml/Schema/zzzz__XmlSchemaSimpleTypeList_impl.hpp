#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleTypeList.set_ItemType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleTypeList::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::XmlSchemaSimpleTypeList::set_ItemType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x274b0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeList*>::get(), "set_ItemType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleTypeList.get_BaseItemType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::Schema::XmlSchemaSimpleTypeList::*)()>(
    &::System::Xml::Schema::XmlSchemaSimpleTypeList::get_BaseItemType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x274b0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeList*>::get(),
                                                                               "get_BaseItemType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleTypeList.set_BaseItemType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleTypeList::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::XmlSchemaSimpleTypeList::set_BaseItemType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x274b0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeList*>::get(), "set_BaseItemType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleTypeList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleTypeList::*)()>(&::System::Xml::Schema::XmlSchemaSimpleTypeList::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x274b0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeList*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaSimpleTypeList::__get_itemTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemTypeName;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& System::Xml::Schema::XmlSchemaSimpleTypeList::__get_itemTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemTypeName;
}
constexpr void System::Xml::Schema::XmlSchemaSimpleTypeList::__set_itemTypeName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& System::Xml::Schema::XmlSchemaSimpleTypeList::__get_itemType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& System::Xml::Schema::XmlSchemaSimpleTypeList::__get_itemType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemType;
}
constexpr void System::Xml::Schema::XmlSchemaSimpleTypeList::__set_itemType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& System::Xml::Schema::XmlSchemaSimpleTypeList::__get_baseItemType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseItemType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& System::Xml::Schema::XmlSchemaSimpleTypeList::__get_baseItemType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseItemType;
}
constexpr void System::Xml::Schema::XmlSchemaSimpleTypeList::__set_baseItemType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseItemType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XmlSchemaSimpleTypeList::set_ItemType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeList*>::get(), "set_ItemType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XmlSchemaSimpleTypeList::get_BaseItemType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeList*>::get(),
                                                                             "get_BaseItemType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSimpleTypeList::set_BaseItemType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeList*>::get(), "set_BaseItemType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaSimpleTypeList* System::Xml::Schema::XmlSchemaSimpleTypeList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaSimpleTypeList*>());
}
inline void System::Xml::Schema::XmlSchemaSimpleTypeList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeList*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeList::XmlSchemaSimpleTypeList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
