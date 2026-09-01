#pragma once
// IWYU pragma private; include "System\Xml\XmlDocumentType.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_impl.hpp"
#include "System/Xml/zzzz__XmlDocumentType_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDocumentType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentType::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::Xml::XmlDocument*)>(
    &::System::Xml::XmlDocumentType::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x62bcf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlDocumentType*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c03d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c03e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c03e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocumentType::*)(bool)>(&::System::Xml::XmlDocumentType::CloneNode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62c03f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c042c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_Entities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNamedNodeMap* (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_Entities)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62bf6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_Entities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_Notations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNamedNodeMap* (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_Notations)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62c0434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_Notations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_PublicId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_PublicId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c0490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_PublicId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_SystemId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_SystemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c0498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_SystemId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_InternalSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_InternalSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c04a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_InternalSubset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_ParseWithNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_ParseWithNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c04a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_ParseWithNamespaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentType::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlDocumentType::WriteTo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62c04b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.WriteContentTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentType::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlDocumentType::WriteContentTo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62c04d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.get_DtdSchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaInfo* (::System::Xml::XmlDocumentType::*)()>(&::System::Xml::XmlDocumentType::get_DtdSchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c04dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_DtdSchemaInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentType.set_DtdSchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentType::*)(::System::Xml::Schema::SchemaInfo*)>(&::System::Xml::XmlDocumentType::set_DtdSchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c04e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "set_DtdSchemaInfo", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::XmlDocumentType::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Xml::XmlDocumentType::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::XmlDocumentType::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::Xml::XmlDocumentType::__cordl_internal_get_publicId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicId;
}
constexpr ::StringW const& System::Xml::XmlDocumentType::__cordl_internal_get_publicId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicId;
}
constexpr void System::Xml::XmlDocumentType::__cordl_internal_set_publicId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicId = value;
}
constexpr ::StringW& System::Xml::XmlDocumentType::__cordl_internal_get_systemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemId;
}
constexpr ::StringW const& System::Xml::XmlDocumentType::__cordl_internal_get_systemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemId;
}
constexpr void System::Xml::XmlDocumentType::__cordl_internal_set_systemId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemId = value;
}
constexpr ::StringW& System::Xml::XmlDocumentType::__cordl_internal_get_internalSubset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalSubset;
}
constexpr ::StringW const& System::Xml::XmlDocumentType::__cordl_internal_get_internalSubset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalSubset;
}
constexpr void System::Xml::XmlDocumentType::__cordl_internal_set_internalSubset(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalSubset = value;
}
constexpr bool& System::Xml::XmlDocumentType::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr bool const& System::Xml::XmlDocumentType::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::XmlDocumentType::__cordl_internal_set_namespaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaces = value;
}
constexpr ::System::Xml::XmlNamedNodeMap*& System::Xml::XmlDocumentType::__cordl_internal_get_entities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entities;
}
constexpr ::System::Xml::XmlNamedNodeMap* const& System::Xml::XmlDocumentType::__cordl_internal_get_entities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entities;
}
constexpr void System::Xml::XmlDocumentType::__cordl_internal_set_entities(::System::Xml::XmlNamedNodeMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entities = value;
}
constexpr ::System::Xml::XmlNamedNodeMap*& System::Xml::XmlDocumentType::__cordl_internal_get_notations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr ::System::Xml::XmlNamedNodeMap* const& System::Xml::XmlDocumentType::__cordl_internal_get_notations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr void System::Xml::XmlDocumentType::__cordl_internal_set_notations(::System::Xml::XmlNamedNodeMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notations = value;
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::XmlDocumentType::__cordl_internal_get_schemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr ::System::Xml::Schema::SchemaInfo* const& System::Xml::XmlDocumentType::__cordl_internal_get_schemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr void System::Xml::XmlDocumentType::__cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaInfo = value;
}
inline void System::Xml::XmlDocumentType::_ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, ::System::Xml::XmlDocument* doc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlDocumentType*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, publicId, systemId, internalSubset, doc);
}
inline ::StringW System::Xml::XmlDocumentType::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocumentType::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlDocumentType::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocumentType::CloneNode(bool deep) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline bool System::Xml::XmlDocumentType::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNamedNodeMap* System::Xml::XmlDocumentType::get_Entities() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_Entities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamedNodeMap*>(this, ___internal_method);
}
inline ::System::Xml::XmlNamedNodeMap* System::Xml::XmlDocumentType::get_Notations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_Notations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamedNodeMap*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocumentType::get_PublicId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_PublicId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocumentType::get_SystemId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_SystemId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocumentType::get_InternalSubset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_InternalSubset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlDocumentType::get_ParseWithNamespaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_ParseWithNamespaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlDocumentType::WriteTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlDocumentType::WriteContentTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentType*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::XmlDocumentType::get_DtdSchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "get_DtdSchemaInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaInfo*>(this, ___internal_method);
}
inline void System::Xml::XmlDocumentType::set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentType*>(), { "set_DtdSchemaInfo", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDocumentType* System::Xml::XmlDocumentType::New_ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, ::System::Xml::XmlDocument* doc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDocumentType*>(name, publicId, systemId, internalSubset, doc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDocumentType::XmlDocumentType() {}
