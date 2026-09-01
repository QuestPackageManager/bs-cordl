#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaObjectTable.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType::XmlSchemaObjectTable_EnumeratorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType::XmlSchemaObjectTable_EnumeratorType() {}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType::Keys{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType::Values{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType::DictionaryEntry{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry::*)(
    ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6232824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry::_ctor(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, value);
}
// Ctor Parameters [CppParam { name: "qname", ty: "::System::Xml::XmlQualifiedName*", modifiers: "", def_value: Some("{}") }, CppParam { name: "xso", ty: "::System::Xml::Schema::XmlSchemaObject*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry::XmlSchemaObjectTable_XmlSchemaObjectEntry(::System::Xml::XmlQualifiedName* qname,
                                                                                                                      ::System::Xml::Schema::XmlSchemaObject* xso) noexcept {
  this->qname = qname;
  this->xso = xso;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry::XmlSchemaObjectTable_XmlSchemaObjectEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::*)(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*, int32_t)>(&::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6232e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(),
                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6232f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6232f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6232fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::*)(::System::Array*, int32_t)>(
    &::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::CopyTo)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x623306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(),
                                                                                           { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x623318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*&
System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const&
System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::__cordl_internal_set_entries(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entries = value;
}
constexpr int32_t& System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
inline void System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries,
                                                                              int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(),
                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entries, size);
}
inline int32_t System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::IEnumerator* System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*
System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*>(entries, size));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection::XmlSchemaObjectTable_ValuesCollection() {}
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::*)(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*, int32_t, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType)>(
    &::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62331f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6233208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::*)()>(&::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62333a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::*)()>(&::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6233444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*&
System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const&
System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void
System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entries = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_enumType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumType;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType const& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_enumType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumType;
}
constexpr void System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_set_enumType(::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumType = value;
}
constexpr int32_t& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr void System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_set_currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentIndex = value;
}
constexpr int32_t& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_currentKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKey;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_currentKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKey;
}
constexpr void System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_set_currentKey(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentKey = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObject*& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_currentValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentValue;
}
constexpr ::System::Xml::Schema::XmlSchemaObject* const& System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_get_currentValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentValue;
}
constexpr void System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::__cordl_internal_set_currentValue(::System::Xml::Schema::XmlSchemaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentValue = value;
}
inline void System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries,
                                                                           int32_t size, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entries, size, enumType);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*
System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size,
                                                                  ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*>(entries, size, enumType));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator::XmlSchemaObjectTable_XSOEnumerator() {}
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::*)(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*, int32_t, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType)>(
    &::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6232f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::DictionaryEntry (::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6233454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(), { "get_Entry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Key)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6233578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Value)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6233698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries,
                                                                                     int32_t size, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entries, size, enumType);
}
inline ::System::Collections::DictionaryEntry System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Entry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*
System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries,
                                                                            int32_t size, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*>(entries, size, enumType));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::i___System__Collections__IDictionaryEnumerator() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::XmlSchemaObjectTable_XSODictionaryEnumerator() {}
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(&::System::Xml::Schema::XmlSchemaObjectTable::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6232648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6232728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(),
                                                             { "Add", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::Insert)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x623282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(),
                                                             { "Insert", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::Replace)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x62329f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(),
                                                             { "Replace", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(&::System::Xml::Schema::XmlSchemaObjectTable::Clear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6232b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaObjectTable::Remove)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6232ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "Remove", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.FindIndexByValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::FindIndexByValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x623294c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "FindIndexByValue", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(&::System::Xml::Schema::XmlSchemaObjectTable::get_Count)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6232c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::Contains)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6232ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "Contains", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::get_Item)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6232d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "get_Item", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable::get_Values)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6232de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6232e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>*&
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* const&
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_set_table(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___table = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*& System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const&
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entries = value;
}
inline void System::Xml::Schema::XmlSchemaObjectTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Add(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(),
                                                           { "Add", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Insert(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(),
                                                           { "Insert", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Replace(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(),
                                                           { "Replace", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Remove(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "Remove", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline int32_t System::Xml::Schema::XmlSchemaObjectTable::FindIndexByValue(::System::Xml::Schema::XmlSchemaObject* xso) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "FindIndexByValue", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, xso);
}
inline int32_t System::Xml::Schema::XmlSchemaObjectTable::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaObjectTable::Contains(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "Contains", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XmlSchemaObjectTable::get_Item(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "get_Item", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*>(this, ___internal_method, name);
}
inline ::System::Collections::ICollection* System::Xml::Schema::XmlSchemaObjectTable::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Xml::Schema::XmlSchemaObjectTable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaObjectTable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaObjectTable*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectTable() {}
