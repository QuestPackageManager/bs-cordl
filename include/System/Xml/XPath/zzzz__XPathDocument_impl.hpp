#pragma once
// IWYU pragma private; include "System\Xml\XPath\XPathDocument.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathDocument_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodeRef_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XPath::XPathDocument::*)()>(&::System::Xml::XPath::XPathDocument::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathDocument*>(), { "get_NameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.get_HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XPath::XPathDocument::*)()>(&::System::Xml::XPath::XPathDocument::get_HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathDocument*>(), { "get_HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.GetXmlNamespaceNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XPath::XPathDocument::*)(::by_ref<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>)>(
    &::System::Xml::XPath::XPathDocument::GetXmlNamespaceNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62e7cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathDocument*>(), { "GetXmlNamespaceNode", {}, { ::i2c::type_of<::by_ref<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.LookupNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XPath::XPathDocument::*)(
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int32_t, ::by_ref<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>)>(&::System::Xml::XPath::XPathDocument::LookupNamespaces)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x62e7ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathDocument*>(), { "LookupNamespaces",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<::by_ref<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& System::Xml::XPath::XPathDocument::__cordl_internal_get_pageXmlNmsp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageXmlNmsp;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> const& System::Xml::XPath::XPathDocument::__cordl_internal_get_pageXmlNmsp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageXmlNmsp;
}
constexpr void System::Xml::XPath::XPathDocument::__cordl_internal_set_pageXmlNmsp(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pageXmlNmsp = value;
}
constexpr int32_t& System::Xml::XPath::XPathDocument::__cordl_internal_get_idxXmlNmsp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idxXmlNmsp;
}
constexpr int32_t const& System::Xml::XPath::XPathDocument::__cordl_internal_get_idxXmlNmsp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idxXmlNmsp;
}
constexpr void System::Xml::XPath::XPathDocument::__cordl_internal_set_idxXmlNmsp(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idxXmlNmsp = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XPath::XPathDocument::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XPath::XPathDocument::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XPath::XPathDocument::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr bool& System::Xml::XPath::XPathDocument::__cordl_internal_get_hasLineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLineInfo;
}
constexpr bool const& System::Xml::XPath::XPathDocument::__cordl_internal_get_hasLineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLineInfo;
}
constexpr void System::Xml::XPath::XPathDocument::__cordl_internal_set_hasLineInfo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasLineInfo = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*&
System::Xml::XPath::XPathDocument::__cordl_internal_get_mapNmsp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapNmsp;
}
constexpr ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* const&
System::Xml::XPath::XPathDocument::__cordl_internal_get_mapNmsp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapNmsp;
}
constexpr void System::Xml::XPath::XPathDocument::__cordl_internal_set_mapNmsp(
    ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mapNmsp = value;
}
inline ::System::Xml::XmlNameTable* System::Xml::XPath::XPathDocument::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathDocument*>(), { "get_NameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline bool System::Xml::XPath::XPathDocument::get_HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathDocument*>(), { "get_HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XPath::XPathDocument::GetXmlNamespaceNode(::by_ref<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageXmlNmsp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathDocument*>(), { "GetXmlNamespaceNode", {}, { ::i2c::type_of<::by_ref<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pageXmlNmsp);
}
inline int32_t System::Xml::XPath::XPathDocument::LookupNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageElem, int32_t idxElem,
                                                                   ::by_ref<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageNmsp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathDocument*>(), { "LookupNamespaces",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::by_ref<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pageElem, idxElem, pageNmsp);
}
// Ctor Parameters []
constexpr ::System::Xml::XPath::XPathDocument::XPathDocument() {}
