#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaCollectionNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollectionNode_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollectionNode.set_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollectionNode::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaCollectionNode::set_NamespaceURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622dcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "set_NamespaceURI", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollectionNode.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaInfo* (::System::Xml::Schema::XmlSchemaCollectionNode::*)()>(
    &::System::Xml::Schema::XmlSchemaCollectionNode::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622dccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "get_SchemaInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollectionNode.set_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollectionNode::*)(::System::Xml::Schema::SchemaInfo*)>(
    &::System::Xml::Schema::XmlSchemaCollectionNode::set_SchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622dcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "set_SchemaInfo", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollectionNode.get_Schema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaCollectionNode::*)()>(
    &::System::Xml::Schema::XmlSchemaCollectionNode::get_Schema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622dcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "get_Schema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollectionNode.set_Schema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollectionNode::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaCollectionNode::set_Schema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622dce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "set_Schema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollectionNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollectionNode::*)()>(&::System::Xml::Schema::XmlSchemaCollectionNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x622db70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_get_namespaceUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceUri;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_get_namespaceUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceUri;
}
constexpr void System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_set_namespaceUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaceUri = value;
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_get_schemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr ::System::Xml::Schema::SchemaInfo* const& System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_get_schemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr void System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaInfo = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_get_schema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_get_schema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr void System::Xml::Schema::XmlSchemaCollectionNode::__cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schema = value;
}
inline void System::Xml::Schema::XmlSchemaCollectionNode::set_NamespaceURI(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "set_NamespaceURI", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::Schema::XmlSchemaCollectionNode::get_SchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "get_SchemaInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaInfo*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaCollectionNode::set_SchemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "set_SchemaInfo", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaCollectionNode::get_Schema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "get_Schema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaCollectionNode::set_Schema(::System::Xml::Schema::XmlSchema* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { "set_Schema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaCollectionNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollectionNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaCollectionNode* System::Xml::Schema::XmlSchemaCollectionNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaCollectionNode*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaCollectionNode::XmlSchemaCollectionNode() {}
