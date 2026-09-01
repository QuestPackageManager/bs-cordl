#pragma once
// IWYU pragma private; include "System\Xml\XmlName.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlName.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (*)(::StringW, ::StringW, ::StringW, int32_t, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*,
                                                                                   ::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::XmlName::Create)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x62b5bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(),
                                         { "Create",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlName*>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlName::*)(::StringW, ::StringW, ::StringW, int32_t, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*)>(
    &::System::Xml::XmlName::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62c6168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ".ctor",
                                                                          {},
                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                            ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_LocalName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_NamespaceURI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_HashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_HashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_HashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_OwnerDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_OwnerDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_OwnerDocument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_Name)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x62b6274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_Validity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaValidity (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_Validity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ::i2c::class_of<::System::Xml::XmlName*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ::i2c::class_of<::System::Xml::XmlName*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_IsNil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_IsNil)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ::i2c::class_of<::System::Xml::XmlName*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ::i2c::class_of<::System::Xml::XmlName*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ::i2c::class_of<::System::Xml::XmlName*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_SchemaElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_SchemaElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c6598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ::i2c::class_of<::System::Xml::XmlName*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.get_SchemaAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (::System::Xml::XmlName::*)()>(&::System::Xml::XmlName::get_SchemaAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c65a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ::i2c::class_of<::System::Xml::XmlName*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlName::*)(::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::XmlName::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62c65a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ::i2c::class_of<::System::Xml::XmlName*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlName.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Xml::XmlName::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62b5928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::XmlName::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::XmlName::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::XmlName::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefix = value;
}
constexpr ::StringW& System::Xml::XmlName::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::StringW const& System::Xml::XmlName::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Xml::XmlName::__cordl_internal_set_localName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localName = value;
}
constexpr ::StringW& System::Xml::XmlName::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::XmlName::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::XmlName::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr ::StringW& System::Xml::XmlName::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Xml::XmlName::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::XmlName::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr int32_t& System::Xml::XmlName::__cordl_internal_get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr int32_t const& System::Xml::XmlName::__cordl_internal_get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr void System::Xml::XmlName::__cordl_internal_set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
constexpr ::System::Xml::XmlDocument*& System::Xml::XmlName::__cordl_internal_get_ownerDoc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerDoc;
}
constexpr ::System::Xml::XmlDocument* const& System::Xml::XmlName::__cordl_internal_get_ownerDoc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerDoc;
}
constexpr void System::Xml::XmlName::__cordl_internal_set_ownerDoc(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ownerDoc = value;
}
constexpr ::System::Xml::XmlName*& System::Xml::XmlName::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::Xml::XmlName* const& System::Xml::XmlName::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::XmlName::__cordl_internal_set_next(::System::Xml::XmlName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
inline ::System::Xml::XmlName* System::Xml::XmlName::Create(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next,
                                                            ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(),
                                       { "Create",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlName*>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(nullptr, ___internal_method, prefix, localName, ns, hashCode, ownerDoc, next, schemaInfo);
}
inline void System::Xml::XmlName::_ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { ".ctor",
                                                                                     {},
                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns, hashCode, ownerDoc, next);
}
inline ::StringW System::Xml::XmlName::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_LocalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlName::get_NamespaceURI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_NamespaceURI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlName::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XmlName::get_HashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_HashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlName::get_OwnerDocument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_OwnerDocument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlName::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaValidity System::Xml::XmlName::get_Validity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlName*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaValidity>(this, ___internal_method);
}
inline bool System::Xml::XmlName::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlName*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlName::get_IsNil() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlName*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::XmlName::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlName*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XmlName::get_SchemaType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlName*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::XmlName::get_SchemaElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlName*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::XmlName::get_SchemaAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlName*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*>(this, ___internal_method);
}
inline bool System::Xml::XmlName::Equals(::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlName*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schemaInfo);
}
inline int32_t System::Xml::XmlName::GetHashCode(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlName*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline ::System::Xml::XmlName* System::Xml::XmlName::New_ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc,
                                                              ::System::Xml::XmlName* next) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlName*>(prefix, localName, ns, hashCode, ownerDoc, next));
}
/// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr System::Xml::XmlName::operator ::System::Xml::Schema::IXmlSchemaInfo*() noexcept {
  return static_cast<::System::Xml::Schema::IXmlSchemaInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlName::i___System__Xml__Schema__IXmlSchemaInfo() noexcept {
  return static_cast<::System::Xml::Schema::IXmlSchemaInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlName::XmlName() {}
