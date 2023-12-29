#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::System::Xml::__XmlNamespaceManager__NamespaceDeclaration.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlNamespaceManager__NamespaceDeclaration::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::System::Xml::__XmlNamespaceManager__NamespaceDeclaration::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x272aef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>::get(), "Set", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::__XmlNamespaceManager__NamespaceDeclaration::Set(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>::get(), "Set", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, uri, scopeId, previousNsIndex);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "scopeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlNamespaceManager__NamespaceDeclaration::__XmlNamespaceManager__NamespaceDeclaration(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex) noexcept {
  this->prefix = prefix;
  this->uri = uri;
  this->scopeId = scopeId;
  this->previousNsIndex = previousNsIndex;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlNamespaceManager__NamespaceDeclaration::__XmlNamespaceManager__NamespaceDeclaration() {}
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272ad30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNamespaceManager::*)(::System::Xml::XmlNameTable*)>(
    &::System::Xml::XmlNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x272ad38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlNamespaceManager::*)()>(
    &::System::Xml::XmlNamespaceManager::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272af00;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.get_DefaultNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::get_DefaultNamespace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x272af08;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.PushScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::PushScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x272af78;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.PopScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::PopScope)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x272af88;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.AddNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNamespaceManager::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlNamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x272b060;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.RemoveNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNamespaceManager::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlNamespaceManager::RemoveNamespace)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x272b590;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Xml::XmlNamespaceManager::*)()>(
    &::System::Xml::XmlNamespaceManager::GetEnumerator)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x272b6cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNamespaceManager::*)(::StringW)>(&::System::Xml::XmlNamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x272b83c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.LookupNamespaceDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlNamespaceManager::*)(::StringW)>(
    &::System::Xml::XmlNamespaceManager::LookupNamespaceDecl)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x272b404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "LookupNamespaceDecl", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNamespaceManager::*)(::StringW)>(&::System::Xml::XmlNamespaceManager::LookupPrefix)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x272b888;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), 15));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlNamespaceManager::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Xml::XmlNamespaceManager::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, ::Array<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>*>&
System::Xml::XmlNamespaceManager::__get_nsdecls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsdecls;
}
constexpr ::ArrayW<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, ::Array<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>*> const&
System::Xml::XmlNamespaceManager::__get_nsdecls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsdecls;
}
constexpr void
System::Xml::XmlNamespaceManager::__set_nsdecls(::ArrayW<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, ::Array<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsdecls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlNamespaceManager::__get_lastDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDecl;
}
constexpr int32_t const& System::Xml::XmlNamespaceManager::__get_lastDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDecl;
}
constexpr void System::Xml::XmlNamespaceManager::__set_lastDecl(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastDecl = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlNamespaceManager::__get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& System::Xml::XmlNamespaceManager::__get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XmlNamespaceManager::__set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlNamespaceManager::__get_scopeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopeId;
}
constexpr int32_t const& System::Xml::XmlNamespaceManager::__get_scopeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopeId;
}
constexpr void System::Xml::XmlNamespaceManager::__set_scopeId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scopeId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& System::Xml::XmlNamespaceManager::__get_hashTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& System::Xml::XmlNamespaceManager::__get_hashTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashTable;
}
constexpr void System::Xml::XmlNamespaceManager::__set_hashTable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hashTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlNamespaceManager::__get_useHashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useHashtable;
}
constexpr bool const& System::Xml::XmlNamespaceManager::__get_useHashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useHashtable;
}
constexpr void System::Xml::XmlNamespaceManager::__set_useHashtable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useHashtable = value;
}
constexpr ::StringW& System::Xml::XmlNamespaceManager::__get_xml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xml;
}
constexpr ::StringW const& System::Xml::XmlNamespaceManager::__get_xml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xml;
}
constexpr void System::Xml::XmlNamespaceManager::__set_xml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xml)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlNamespaceManager::__get_xmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlNs;
}
constexpr ::StringW const& System::Xml::XmlNamespaceManager::__get_xmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlNs;
}
constexpr void System::Xml::XmlNamespaceManager::__set_xmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlNs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlNamespaceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlNamespaceManager*>());
}
inline void System::Xml::XmlNamespaceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlNamespaceManager::New_ctor(::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlNamespaceManager*>(nameTable));
}
inline void System::Xml::XmlNamespaceManager::_ctor(::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlNamespaceManager::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "get_NameTable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNamespaceManager::get_DefaultNamespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "get_DefaultNamespace",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::XmlNamespaceManager::PushScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "PushScope",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlNamespaceManager::PopScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "PopScope",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlNamespaceManager::AddNamespace(::StringW prefix, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "AddNamespace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, uri);
}
inline void System::Xml::XmlNamespaceManager::RemoveNamespace(::StringW prefix, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "RemoveNamespace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, uri);
}
inline ::System::Collections::IEnumerator* System::Xml::XmlNamespaceManager::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNamespaceManager::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "LookupNamespace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline int32_t System::Xml::XmlNamespaceManager::LookupNamespaceDecl(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "LookupNamespaceDecl", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlNamespaceManager::LookupPrefix(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamespaceManager*>::get(), "LookupPrefix", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uri);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNamespaceManager::XmlNamespaceManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
