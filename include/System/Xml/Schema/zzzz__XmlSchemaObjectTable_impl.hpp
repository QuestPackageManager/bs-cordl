#pragma once
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
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType::__XmlSchemaObjectTable__EnumeratorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType::__XmlSchemaObjectTable__EnumeratorType() {}
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType::Keys{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType::Values{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType::DictionaryEntry{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry::*)(
    ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d17b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry::_ctor(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
// Ctor Parameters [CppParam { name: "qname", ty: "::System::Xml::XmlQualifiedName*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "xso", ty:
// "::System::Xml::Schema::XmlSchemaObject*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry::__XmlSchemaObjectTable__XmlSchemaObjectEntry(::System::Xml::XmlQualifiedName* qname,
                                                                                                                            ::System::Xml::Schema::XmlSchemaObject* xso) noexcept {
  this->qname = qname;
  this->xso = xso;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry::__XmlSchemaObjectTable__XmlSchemaObjectEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::*)(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*, int32_t)>(&::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d180b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d181d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "get_Count",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d181d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "get_SyncRoot",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d1827c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "get_IsSynchronized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::*)(::System::Array*, int32_t)>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::CopyTo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d18320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d18450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*&
System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*> const&
System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::__cordl_internal_set_entries(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
inline ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*
System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries,
                                                                        int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>(entries, size));
}
inline void System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries,
                                                                                 int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entries, size);
}
inline int32_t System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "get_SyncRoot",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "get_IsSynchronized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::IEnumerator* System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection*>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__ValuesCollection::__XmlSchemaObjectTable__ValuesCollection() {}
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::*)(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*, int32_t, ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType)>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d184d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d18518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d186d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d18770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*&
System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*> const&
System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_set_entries(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_enumType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumType;
}
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType const& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_enumType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumType;
}
constexpr void System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_set_enumType(::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumType = value;
}
constexpr int32_t& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr int32_t const& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr void System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_set_currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentIndex = value;
}
constexpr int32_t& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_currentKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKey;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_currentKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKey;
}
constexpr void System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_set_currentKey(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObject*& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_currentValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObject*> const& System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_get_currentValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentValue;
}
constexpr void System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__cordl_internal_set_currentValue(::System::Xml::Schema::XmlSchemaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*
System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries, int32_t size,
                                                                     ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>(entries, size, enumType));
}
inline void System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries,
                                                                              int32_t size, ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entries, size, enumType);
}
inline ::System::Object* System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__XSOEnumerator::__XmlSchemaObjectTable__XSOEnumerator() {}
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::*)(
    ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*, int32_t, ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType)>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d1818c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2d18780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>::get(), "get_Entry",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::get_Key)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d188d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>::get(), "get_Key",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::*)()>(
    &::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::get_Value)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d18a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>::get(), "get_Value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::i___System__Collections__IDictionaryEnumerator() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
inline ::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*
System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::New_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries,
                                                                               int32_t size, ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>(entries, size, enumType));
}
inline void
System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::_ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* entries,
                                                                            int32_t size, ::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType enumType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XmlSchemaObjectTable__EnumeratorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entries, size, enumType);
}
inline ::System::Collections::DictionaryEntry System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::get_Entry() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>::get(), "get_Entry",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>::get(), "get_Key",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator*>::get(), "get_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XmlSchemaObjectTable__XSODictionaryEnumerator::__XmlSchemaObjectTable__XSODictionaryEnumerator() {}
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(&::System::Xml::Schema::XmlSchemaObjectTable::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d1797c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::XmlSchemaObjectTable::Add)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2d17a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)(
    ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::XmlSchemaObjectTable::Insert)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d17b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)(
    ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::XmlSchemaObjectTable::Replace)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2d17cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(&::System::Xml::Schema::XmlSchemaObjectTable::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d17d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::Remove)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d17e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.FindIndexByValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::FindIndexByValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d17c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "FindIndexByValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d17f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaObjectTable::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d17f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaObjectTable::get_Item)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d17fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable::get_Values)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d18020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(),
                                                                               "get_Values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectTable.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Xml::Schema::XmlSchemaObjectTable::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectTable::GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d180e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>*&
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>*> const&
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_set_table(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*& System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>*> const&
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void
System::Xml::Schema::XmlSchemaObjectTable::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::System::Xml::Schema::__XmlSchemaObjectTable__XmlSchemaObjectEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaObjectTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaObjectTable*>());
}
inline void System::Xml::Schema::XmlSchemaObjectTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Add(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Insert(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Replace(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaObjectTable::Remove(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline int32_t System::Xml::Schema::XmlSchemaObjectTable::FindIndexByValue(::System::Xml::Schema::XmlSchemaObject* xso) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "FindIndexByValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, xso);
}
inline int32_t System::Xml::Schema::XmlSchemaObjectTable::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaObjectTable::Contains(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XmlSchemaObjectTable::get_Item(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*, false>(this, ___internal_method, name);
}
inline ::System::Collections::ICollection* System::Xml::Schema::XmlSchemaObjectTable::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(), "get_Values",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Xml::Schema::XmlSchemaObjectTable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectTable*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectTable() {}
