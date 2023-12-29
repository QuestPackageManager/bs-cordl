#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__DomNameTable_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
//  Writing Method size for method: ::System::Xml::DomNameTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DomNameTable::*)(::System::Xml::XmlDocument*)>(&::System::Xml::DomNameTable::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2704400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlName* (::System::Xml::DomNameTable::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::DomNameTable::GetName)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x27044a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable*>::get(), "GetName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.AddName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlName* (::System::Xml::DomNameTable::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::DomNameTable::AddName)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x27045fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable*>::get(), "AddName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.Grow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DomNameTable::*)()>(&::System::Xml::DomNameTable::Grow)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2704860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable*>::get(), "Grow",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::XmlName*, ::Array<::System::Xml::XmlName*>*>& System::Xml::DomNameTable::__get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::ArrayW<::System::Xml::XmlName*, ::Array<::System::Xml::XmlName*>*> const& System::Xml::DomNameTable::__get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void System::Xml::DomNameTable::__set_entries(::ArrayW<::System::Xml::XmlName*, ::Array<::System::Xml::XmlName*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::DomNameTable::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Xml::DomNameTable::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Xml::DomNameTable::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& System::Xml::DomNameTable::__get_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mask;
}
constexpr int32_t const& System::Xml::DomNameTable::__get_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mask;
}
constexpr void System::Xml::DomNameTable::__set_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mask = value;
}
constexpr ::System::Xml::XmlDocument*& System::Xml::DomNameTable::__get_ownerDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerDocument;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& System::Xml::DomNameTable::__get_ownerDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerDocument;
}
constexpr void System::Xml::DomNameTable::__set_ownerDocument(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ownerDocument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::DomNameTable::__get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& System::Xml::DomNameTable::__get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::DomNameTable::__set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::DomNameTable* System::Xml::DomNameTable::New_ctor(::System::Xml::XmlDocument* document) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::DomNameTable*>(document));
}
inline void System::Xml::DomNameTable::_ctor(::System::Xml::XmlDocument* document) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, document);
}
inline ::System::Xml::XmlName* System::Xml::DomNameTable::GetName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable*>::get(), "GetName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*, false>(this, ___internal_method, prefix, localName, ns, schemaInfo);
}
inline ::System::Xml::XmlName* System::Xml::DomNameTable::AddName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable*>::get(), "AddName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*, false>(this, ___internal_method, prefix, localName, ns, schemaInfo);
}
inline void System::Xml::DomNameTable::Grow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable*>::get(), "Grow",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::DomNameTable::DomNameTable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
