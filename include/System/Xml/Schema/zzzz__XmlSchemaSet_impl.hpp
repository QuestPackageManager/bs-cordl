#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__SortedList_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29b2894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::XmlNameTable*)>(
    &::System::Xml::Schema::XmlSchemaSet::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x29b28f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.InternalValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Object*, ::System::Xml::Schema::ValidationEventArgs*)>(
    &::System::Xml::Schema::XmlSchemaSet::InternalValidationCallback)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x29b2b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(), "InternalValidationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventArgs*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::SortedList*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemas;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemas;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_schemas(::System::Collections::SortedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_internalEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalEventHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_internalEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalEventHandler;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_internalEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internalEventHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_eventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_eventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandler;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaLocations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaLocations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaLocations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaLocations;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_schemaLocations(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaLocations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_chameleonSchemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonSchemas;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_chameleonSchemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonSchemas;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_chameleonSchemas(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chameleonSchemas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_targetNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespaces;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_targetNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespaces;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_targetNamespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_compileAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compileAll;
}
constexpr bool const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_compileAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compileAll;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_compileAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compileAll = value;
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_cachedCompiledInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedCompiledInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_cachedCompiledInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedCompiledInfo;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_cachedCompiledInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachedCompiledInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlReaderSettings*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_readerSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerSettings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReaderSettings*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_readerSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerSettings;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_readerSettings(::System::Xml::XmlReaderSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readerSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_compilationSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compilationSettings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaCompilationSettings*> const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_compilationSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compilationSettings;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_compilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___compilationSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaSet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaSet*>());
}
inline void System::Xml::Schema::XmlSchemaSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaSet::New_ctor(::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaSet*>(nameTable));
}
inline void System::Xml::Schema::XmlSchemaSet::_ctor(::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable);
}
inline void System::Xml::Schema::XmlSchemaSet::InternalValidationCallback(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(), "InternalValidationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSet::XmlSchemaSet() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
