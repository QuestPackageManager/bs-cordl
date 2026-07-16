#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollection_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLock_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollectionEnumerator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollectionNode_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollection::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::Schema::XmlSchemaCollection::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6227bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaCollection::*)()>(&::System::Xml::Schema::XmlSchemaCollection::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6227ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::Schema::XmlSchemaCollection::*)()>(&::System::Xml::Schema::XmlSchemaCollection::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6227cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "get_NameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollection::*)(::System::Xml::XmlResolver*)>(
    &::System::Xml::Schema::XmlSchemaCollection::set_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6227cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaCollection::*)(::StringW)>(
    &::System::Xml::Schema::XmlSchemaCollection::get_Item)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6227cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Xml::Schema::XmlSchemaCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6227d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaCollectionEnumerator* (::System::Xml::Schema::XmlSchemaCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6227e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollection::*)(::System::Array*, int32_t)>(
    &::System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6227ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                             { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6228150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6228158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.System_Collections_ICollection_get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x622815c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "System.Collections.ICollection.get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.GetSchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaInfo* (::System::Xml::Schema::XmlSchemaCollection::*)(::StringW)>(
    &::System::Xml::Schema::XmlSchemaCollection::GetSchemaInfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6223164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "GetSchemaInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.GetSchemaNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaNames* (::System::Xml::Schema::XmlSchemaCollection::*)(::System::Xml::XmlNameTable*)>(
    &::System::Xml::Schema::XmlSchemaCollection::GetSchemaNames)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x622817c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "GetSchemaNames", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (
    ::System::Xml::Schema::XmlSchemaCollection::*)(::StringW, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::XmlSchema*, bool)>(&::System::Xml::Schema::XmlSchemaCollection::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62218a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
            { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (
    ::System::Xml::Schema::XmlSchemaCollection::*)(::StringW, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::XmlSchema*, bool, ::System::Xml::XmlResolver*)>(
    &::System::Xml::Schema::XmlSchemaCollection::Add)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6228220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                             { "Add",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollection::*)(::StringW, ::System::Xml::Schema::XmlSchemaCollectionNode*)>(
    &::System::Xml::Schema::XmlSchemaCollection::Add)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x622835c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                             { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollectionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.get_EventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ValidationEventHandler* (::System::Xml::Schema::XmlSchemaCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaCollection::get_EventHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622849c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "get_EventHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCollection.set_EventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCollection::*)(::System::Xml::Schema::ValidationEventHandler*)>(
    &::System::Xml::Schema::XmlSchemaCollection::set_EventHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62284a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                                                           { "set_EventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr void System::Xml::Schema::XmlSchemaCollection::__cordl_internal_set_collection(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collection = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::XmlSchemaCollection::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr ::System::Xml::Schema::SchemaNames*& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_schemaNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr ::System::Xml::Schema::SchemaNames* const& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_schemaNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr void System::Xml::Schema::XmlSchemaCollection::__cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaNames = value;
}
constexpr ::System::Threading::ReaderWriterLock*& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_wLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wLock;
}
constexpr ::System::Threading::ReaderWriterLock* const& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_wLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wLock;
}
constexpr void System::Xml::Schema::XmlSchemaCollection::__cordl_internal_set_wLock(::System::Threading::ReaderWriterLock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wLock = value;
}
constexpr int32_t& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr void System::Xml::Schema::XmlSchemaCollection::__cordl_internal_set_timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeout = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_isThreadSafe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isThreadSafe;
}
constexpr bool const& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_isThreadSafe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isThreadSafe;
}
constexpr void System::Xml::Schema::XmlSchemaCollection::__cordl_internal_set_isThreadSafe(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isThreadSafe = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_validationEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandler;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_validationEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandler;
}
constexpr void System::Xml::Schema::XmlSchemaCollection::__cordl_internal_set_validationEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationEventHandler = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::Schema::XmlSchemaCollection::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::Schema::XmlSchemaCollection::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolver = value;
}
inline void System::Xml::Schema::XmlSchemaCollection::_ctor(::System::Xml::XmlNameTable* nametable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nametable);
}
inline int32_t System::Xml::Schema::XmlSchemaCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::Schema::XmlSchemaCollection::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "get_NameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaCollection::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaCollection::get_Item(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, ns);
}
inline ::System::Collections::IEnumerator* System::Xml::Schema::XmlSchemaCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaCollectionEnumerator* System::Xml::Schema::XmlSchemaCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaCollectionEnumerator*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline bool System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "System.Collections.ICollection.get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::Schema::XmlSchemaCollection::GetSchemaInfo(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "GetSchemaInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaInfo*>(this, ___internal_method, ns);
}
inline ::System::Xml::Schema::SchemaNames* System::Xml::Schema::XmlSchemaCollection::GetSchemaNames(::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "GetSchemaNames", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaNames*>(this, ___internal_method, nt);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaCollection::Add(::StringW ns, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::System::Xml::Schema::XmlSchema* schema,
                                                                                       bool compile) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
          { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, ns, schemaInfo, schema, compile);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaCollection::Add(::StringW ns, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::System::Xml::Schema::XmlSchema* schema,
                                                                                       bool compile, ::System::Xml::XmlResolver* resolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                           { "Add",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, ns, schemaInfo, schema, compile, resolver);
}
inline void System::Xml::Schema::XmlSchemaCollection::Add(::StringW ns, ::System::Xml::Schema::XmlSchemaCollectionNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                           { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollectionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ns, node);
}
inline ::System::Xml::Schema::ValidationEventHandler* System::Xml::Schema::XmlSchemaCollection::get_EventHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(), { "get_EventHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ValidationEventHandler*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaCollection::set_EventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                                                         { "set_EventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaCollection* System::Xml::Schema::XmlSchemaCollection::New_ctor(::System::Xml::XmlNameTable* nametable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaCollection*>(nametable));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Xml::Schema::XmlSchemaCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Xml::Schema::XmlSchemaCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Xml::Schema::XmlSchemaCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Xml::Schema::XmlSchemaCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaCollection::XmlSchemaCollection() {}
