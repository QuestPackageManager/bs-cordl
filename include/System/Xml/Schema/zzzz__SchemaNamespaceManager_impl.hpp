#pragma once
// IWYU pragma private; include "System\Xml\Schema\SchemaNamespaceManager.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaNamespaceManager_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SchemaNamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaNamespaceManager::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::SchemaNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620aff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNamespaceManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaNamespaceManager::*)(::StringW)>(&::System::Xml::Schema::SchemaNamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x620affc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNamespaceManager*>(), { ::i2c::class_of<::System::Xml::Schema::SchemaNamespaceManager*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNamespaceManager.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaNamespaceManager::*)(::StringW)>(&::System::Xml::Schema::SchemaNamespaceManager::LookupPrefix)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x620b120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNamespaceManager*>(), { ::i2c::class_of<::System::Xml::Schema::SchemaNamespaceManager*>(), 17 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaObject*& System::Xml::Schema::SchemaNamespaceManager::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::System::Xml::Schema::XmlSchemaObject* const& System::Xml::Schema::SchemaNamespaceManager::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void System::Xml::Schema::SchemaNamespaceManager::__cordl_internal_set_node(::System::Xml::Schema::XmlSchemaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___node = value;
}
inline void System::Xml::Schema::SchemaNamespaceManager::_ctor(::System::Xml::Schema::XmlSchemaObject* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNamespaceManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::StringW System::Xml::Schema::SchemaNamespaceManager::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::SchemaNamespaceManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::Schema::SchemaNamespaceManager::LookupPrefix(::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::SchemaNamespaceManager*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline ::System::Xml::Schema::SchemaNamespaceManager* System::Xml::Schema::SchemaNamespaceManager::New_ctor(::System::Xml::Schema::XmlSchemaObject* node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaNamespaceManager*>(node));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaNamespaceManager::SchemaNamespaceManager() {}
