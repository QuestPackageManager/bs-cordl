#pragma once
// IWYU pragma private; include "System/Data/XmlToDatasetMap.hpp"
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XmlToDatasetMap_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__XmlToDatasetMap_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdentety._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap_XmlNodeIdentety::*)(::StringW, ::StringW)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdentety::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x41b6c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdentety.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::XmlToDatasetMap_XmlNodeIdentety::*)()>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdentety::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x41b7644;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdentety.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlToDatasetMap_XmlNodeIdentety::*)(::System::Object*)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdentety::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x41b7664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>::get(), 0));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_get_LocalName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalName;
}
constexpr ::StringW const& System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_get_LocalName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalName;
}
constexpr void System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_set_LocalName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LocalName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_get_NamespaceURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NamespaceURI;
}
constexpr ::StringW const& System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_get_NamespaceURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NamespaceURI;
}
constexpr void System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_set_NamespaceURI(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NamespaceURI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::XmlToDatasetMap_XmlNodeIdentety::_ctor(::StringW localName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localName, namespaceURI);
}
inline int32_t System::Data::XmlToDatasetMap_XmlNodeIdentety::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Data::XmlToDatasetMap_XmlNodeIdentety::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline ::System::Data::XmlToDatasetMap_XmlNodeIdentety* System::Data::XmlToDatasetMap_XmlNodeIdentety::New_ctor(::StringW localName, ::StringW namespaceURI) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(localName, namespaceURI));
}
// Ctor Parameters []
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdentety::XmlToDatasetMap_XmlNodeIdentety() {}
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(int32_t)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x41b7700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(::System::Xml::XmlNode*)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x41b7798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(::System::Xml::XmlReader*)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x41b7810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x41b7880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(::StringW)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x41b78e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdentety*& System::Data::XmlToDatasetMap_XmlNodeIdHashtable::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdentety* const& System::Data::XmlToDatasetMap_XmlNodeIdHashtable::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void System::Data::XmlToDatasetMap_XmlNodeIdHashtable::__cordl_internal_set__id(::System::Data::XmlToDatasetMap_XmlNodeIdentety* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::XmlToDatasetMap_XmlNodeIdHashtable::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item(::System::Xml::XmlNode* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, node);
}
inline ::System::Object* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item(::System::Xml::XmlReader* dataReader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, dataReader);
}
inline ::System::Object* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item(::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, table);
}
inline ::System::Object* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get(), "get_Item",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name);
}
inline ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(capacity));
}
// Ctor Parameters []
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::XmlToDatasetMap_XmlNodeIdHashtable() {}
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_TableSchemaInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap_TableSchemaInfo::*)(::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap_TableSchemaInfo::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x41b795c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_TableSchemaInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_get_TableSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TableSchema;
}
constexpr ::System::Data::DataTable* const& System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_get_TableSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TableSchema;
}
constexpr void System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_set_TableSchema(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TableSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*& System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_get_ColumnsSchemaMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ColumnsSchemaMap;
}
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* const& System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_get_ColumnsSchemaMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ColumnsSchemaMap;
}
constexpr void System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_set_ColumnsSchemaMap(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ColumnsSchemaMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::XmlToDatasetMap_TableSchemaInfo::_ctor(::System::Data::DataTable* tableSchema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap_TableSchemaInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableSchema);
}
inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* System::Data::XmlToDatasetMap_TableSchemaInfo::New_ctor(::System::Data::DataTable* tableSchema) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlToDatasetMap_TableSchemaInfo*>(tableSchema));
}
// Ctor Parameters []
constexpr ::System::Data::XmlToDatasetMap_TableSchemaInfo::XmlToDatasetMap_TableSchemaInfo() {}
//  Writing Method size for method: ::System::Data::XmlToDatasetMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Data::DataSet*, ::System::Xml::XmlNameTable*)>(
    &::System::Data::XmlToDatasetMap::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x41b1090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataSet*)>(
    &::System::Data::XmlToDatasetMap::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x41b2780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*)>(
    &::System::Data::XmlToDatasetMap::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x41b105c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x41b27b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.IsMappedColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::DataColumn*)>(&::System::Data::XmlToDatasetMap::IsMappedColumn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x41b21c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "IsMappedColumn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.AddTableSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::XmlToDatasetMap_TableSchemaInfo* (
    ::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*)>(&::System::Data::XmlToDatasetMap::AddTableSchema)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x41b6af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "AddTableSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.AddTableSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::XmlToDatasetMap_TableSchemaInfo* (
    ::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*)>(&::System::Data::XmlToDatasetMap::AddTableSchema)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x41b6c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "AddTableSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.AddColumnSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlToDatasetMap::*)(
    ::System::Data::DataColumn*, ::System::Xml::XmlNameTable*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*)>(&::System::Data::XmlToDatasetMap::AddColumnSchema)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x41b6dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "AddColumnSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.AddColumnSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlToDatasetMap::*)(
    ::System::Xml::XmlNameTable*, ::System::Data::DataColumn*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*)>(&::System::Data::XmlToDatasetMap::AddColumnSchema)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x41b704c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "AddColumnSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.BuildIdentityMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Data::DataSet*, ::System::Xml::XmlNameTable*)>(
    &::System::Data::XmlToDatasetMap::BuildIdentityMap)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x41b4b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "BuildIdentityMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.BuildIdentityMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataSet*)>(
    &::System::Data::XmlToDatasetMap::BuildIdentityMap)> {
  constexpr static std::size_t size = 0xb3c;
  constexpr static std::size_t addrs = 0x41b5150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "BuildIdentityMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.BuildIdentityMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*)>(
    &::System::Data::XmlToDatasetMap::BuildIdentityMap)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x41b5c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "BuildIdentityMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.BuildIdentityMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap::BuildIdentityMap)> {
  constexpr static std::size_t size = 0xb08;
  constexpr static std::size_t addrs = 0x41b5ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "BuildIdentityMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetSelfAndDescendants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap::GetSelfAndDescendants)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x41b71f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetSelfAndDescendants", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetColumnSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNode*, bool)>(
    &::System::Data::XmlToDatasetMap::GetColumnSchema)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x41b0b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetColumnSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetColumnSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*, ::System::Xml::XmlReader*, bool)>(
    &::System::Data::XmlToDatasetMap::GetColumnSchema)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x41b40e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetColumnSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetSchemaForNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNode*, bool)>(
    &::System::Data::XmlToDatasetMap::GetSchemaForNode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x41b10c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetSchemaForNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetTableForNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlReader*, bool)>(
    &::System::Data::XmlToDatasetMap::GetTableForNode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x41b3128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetTableForNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.HandleSpecialColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlToDatasetMap::*)(
    ::System::Data::DataColumn*, ::System::Xml::XmlNameTable*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*)>(&::System::Data::XmlToDatasetMap::HandleSpecialColumn)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x41b6ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "HandleSpecialColumn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*& System::Data::XmlToDatasetMap::__cordl_internal_get__tableSchemaMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableSchemaMap;
}
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* const& System::Data::XmlToDatasetMap::__cordl_internal_get__tableSchemaMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableSchemaMap;
}
constexpr void System::Data::XmlToDatasetMap::__cordl_internal_set__tableSchemaMap(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableSchemaMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::XmlToDatasetMap_TableSchemaInfo*& System::Data::XmlToDatasetMap::__cordl_internal_get__lastTableSchemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTableSchemaInfo;
}
constexpr ::System::Data::XmlToDatasetMap_TableSchemaInfo* const& System::Data::XmlToDatasetMap::__cordl_internal_get__lastTableSchemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTableSchemaInfo;
}
constexpr void System::Data::XmlToDatasetMap::__cordl_internal_set__lastTableSchemaInfo(::System::Data::XmlToDatasetMap_TableSchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastTableSchemaInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::XmlToDatasetMap::_ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSet, nameTable);
}
inline void System::Data::XmlToDatasetMap::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable, dataSet);
}
inline void System::Data::XmlToDatasetMap::_ctor(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataTable, nameTable);
}
inline void System::Data::XmlToDatasetMap::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable, dataTable);
}
inline bool System::Data::XmlToDatasetMap::IsMappedColumn(::System::Data::DataColumn* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "IsMappedColumn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* System::Data::XmlToDatasetMap::AddTableSchema(::System::Data::DataTable* table, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "AddTableSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlToDatasetMap_TableSchemaInfo*, false>(this, ___internal_method, table, nameTable);
}
inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* System::Data::XmlToDatasetMap::AddTableSchema(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "AddTableSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlToDatasetMap_TableSchemaInfo*, false>(this, ___internal_method, nameTable, table);
}
inline bool System::Data::XmlToDatasetMap::AddColumnSchema(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "AddColumnSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, col, nameTable, columns);
}
inline bool System::Data::XmlToDatasetMap::AddColumnSchema(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataColumn* col, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "AddColumnSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nameTable, col, columns);
}
inline void System::Data::XmlToDatasetMap::BuildIdentityMap(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "BuildIdentityMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSet, nameTable);
}
inline void System::Data::XmlToDatasetMap::BuildIdentityMap(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "BuildIdentityMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable, dataSet);
}
inline void System::Data::XmlToDatasetMap::BuildIdentityMap(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "BuildIdentityMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataTable, nameTable);
}
inline void System::Data::XmlToDatasetMap::BuildIdentityMap(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "BuildIdentityMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable, dataTable);
}
inline ::System::Collections::ArrayList* System::Data::XmlToDatasetMap::GetSelfAndDescendants(::System::Data::DataTable* dt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetSelfAndDescendants", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method, dt);
}
inline ::System::Object* System::Data::XmlToDatasetMap::GetColumnSchema(::System::Xml::XmlNode* node, bool fIgnoreNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetColumnSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, node, fIgnoreNamespace);
}
inline ::System::Object* System::Data::XmlToDatasetMap::GetColumnSchema(::System::Data::DataTable* table, ::System::Xml::XmlReader* dataReader, bool fIgnoreNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetColumnSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, table, dataReader, fIgnoreNamespace);
}
inline ::System::Object* System::Data::XmlToDatasetMap::GetSchemaForNode(::System::Xml::XmlNode* node, bool fIgnoreNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetSchemaForNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, node, fIgnoreNamespace);
}
inline ::System::Data::DataTable* System::Data::XmlToDatasetMap::GetTableForNode(::System::Xml::XmlReader* node, bool fIgnoreNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "GetTableForNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, node, fIgnoreNamespace);
}
inline void System::Data::XmlToDatasetMap::HandleSpecialColumn(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlToDatasetMap*>::get(), "HandleSpecialColumn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, col, nameTable, columns);
}
inline ::System::Data::XmlToDatasetMap* System::Data::XmlToDatasetMap::New_ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlToDatasetMap*>(dataSet, nameTable));
}
inline ::System::Data::XmlToDatasetMap* System::Data::XmlToDatasetMap::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlToDatasetMap*>(nameTable, dataSet));
}
inline ::System::Data::XmlToDatasetMap* System::Data::XmlToDatasetMap::New_ctor(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlToDatasetMap*>(dataTable, nameTable));
}
inline ::System::Data::XmlToDatasetMap* System::Data::XmlToDatasetMap::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlToDatasetMap*>(nameTable, dataTable));
}
// Ctor Parameters []
constexpr ::System::Data::XmlToDatasetMap::XmlToDatasetMap() {}
