#pragma once
// IWYU pragma private; include "System/Xml/XmlNamespaceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager_NamespaceDeclaration.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamespaceManager_NamespaceDeclaration::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::System::Xml::XmlNamespaceManager_NamespaceDeclaration::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62e0378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager_NamespaceDeclaration>(),
                                                             { "Set", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlNamespaceManager_NamespaceDeclaration::Set(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager_NamespaceDeclaration>(),
                                                           { "Set", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefix, uri, scopeId, previousNsIndex);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "scopeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNamespaceManager_NamespaceDeclaration::XmlNamespaceManager_NamespaceDeclaration(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex) noexcept {
  this->prefix = prefix;
  this->uri = uri;
  this->scopeId = scopeId;
  this->previousNsIndex = previousNsIndex;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNamespaceManager_NamespaceDeclaration::XmlNamespaceManager_NamespaceDeclaration() {}
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62e01bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamespaceManager::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::XmlNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x62e01c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e0384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.get_DefaultNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::get_DefaultNamespace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62e038c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.PushScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::PushScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62e03c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.PopScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::PopScope)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x62e03d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.AddNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamespaceManager::*)(::StringW, ::StringW)>(&::System::Xml::XmlNamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x62e04c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.RemoveNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamespaceManager::*)(::StringW, ::StringW)>(&::System::Xml::XmlNamespaceManager::RemoveNamespace)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x62e0a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Xml::XmlNamespaceManager::*)()>(&::System::Xml::XmlNamespaceManager::GetEnumerator)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x62e0b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (::System::Xml::XmlNamespaceManager::*)(::System::Xml::XmlNamespaceScope)>(
    &::System::Xml::XmlNamespaceManager::GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x62e0d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNamespaceManager::*)(::StringW)>(&::System::Xml::XmlNamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x62e0efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.LookupNamespaceDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNamespaceManager::*)(::StringW)>(&::System::Xml::XmlNamespaceManager::LookupNamespaceDecl)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x62e08a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { "LookupNamespaceDecl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamespaceManager.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNamespaceManager::*)(::StringW)>(&::System::Xml::XmlNamespaceManager::LookupPrefix)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x62e0f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 17 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::XmlNamespaceManager_NamespaceDeclaration>& System::Xml::XmlNamespaceManager::__cordl_internal_get_nsdecls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsdecls;
}
constexpr ::ArrayW<::System::Xml::XmlNamespaceManager_NamespaceDeclaration> const& System::Xml::XmlNamespaceManager::__cordl_internal_get_nsdecls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsdecls;
}
constexpr void System::Xml::XmlNamespaceManager::__cordl_internal_set_nsdecls(::ArrayW<::System::Xml::XmlNamespaceManager_NamespaceDeclaration> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsdecls = value;
}
constexpr int32_t& System::Xml::XmlNamespaceManager::__cordl_internal_get_lastDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDecl;
}
constexpr int32_t const& System::Xml::XmlNamespaceManager::__cordl_internal_get_lastDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDecl;
}
constexpr void System::Xml::XmlNamespaceManager::__cordl_internal_set_lastDecl(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastDecl = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlNamespaceManager::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XmlNamespaceManager::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XmlNamespaceManager::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr int32_t& System::Xml::XmlNamespaceManager::__cordl_internal_get_scopeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopeId;
}
constexpr int32_t const& System::Xml::XmlNamespaceManager::__cordl_internal_get_scopeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopeId;
}
constexpr void System::Xml::XmlNamespaceManager::__cordl_internal_set_scopeId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scopeId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& System::Xml::XmlNamespaceManager::__cordl_internal_get_hashTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashTable;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& System::Xml::XmlNamespaceManager::__cordl_internal_get_hashTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashTable;
}
constexpr void System::Xml::XmlNamespaceManager::__cordl_internal_set_hashTable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashTable = value;
}
constexpr bool& System::Xml::XmlNamespaceManager::__cordl_internal_get_useHashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useHashtable;
}
constexpr bool const& System::Xml::XmlNamespaceManager::__cordl_internal_get_useHashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useHashtable;
}
constexpr void System::Xml::XmlNamespaceManager::__cordl_internal_set_useHashtable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useHashtable = value;
}
constexpr ::StringW& System::Xml::XmlNamespaceManager::__cordl_internal_get_xml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xml;
}
constexpr ::StringW const& System::Xml::XmlNamespaceManager::__cordl_internal_get_xml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xml;
}
constexpr void System::Xml::XmlNamespaceManager::__cordl_internal_set_xml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xml = value;
}
constexpr ::StringW& System::Xml::XmlNamespaceManager::__cordl_internal_get_xmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlNs;
}
constexpr ::StringW const& System::Xml::XmlNamespaceManager::__cordl_internal_get_xmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlNs;
}
constexpr void System::Xml::XmlNamespaceManager::__cordl_internal_set_xmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlNs = value;
}
inline void System::Xml::XmlNamespaceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlNamespaceManager::_ctor(::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlNamespaceManager::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNamespaceManager::get_DefaultNamespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlNamespaceManager::PushScope() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlNamespaceManager::PopScope() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlNamespaceManager::AddNamespace(::StringW prefix, ::StringW uri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, uri);
}
inline void System::Xml::XmlNamespaceManager::RemoveNamespace(::StringW prefix, ::StringW uri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, uri);
}
inline ::System::Collections::IEnumerator* System::Xml::XmlNamespaceManager::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Xml::XmlNamespaceManager::GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XmlNamespaceManager::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline int32_t System::Xml::XmlNamespaceManager::LookupNamespaceDecl(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), { "LookupNamespaceDecl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlNamespaceManager::LookupPrefix(::StringW uri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamespaceManager*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uri);
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlNamespaceManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlNamespaceManager*>());
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlNamespaceManager::New_ctor(::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlNamespaceManager*>(nameTable));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlNamespaceManager::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlNamespaceManager::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Xml::XmlNamespaceManager::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Xml::XmlNamespaceManager::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNamespaceManager::XmlNamespaceManager() {}
