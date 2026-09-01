#pragma once
// IWYU pragma private; include "MS\Internal\Xml\Cache\XPathNodePageInfo.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodePageInfo_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_PageNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(&::MS::Internal::Xml::Cache::XPathNodePageInfo::get_PageNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x627b5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodePageInfo*>(), { "get_PageNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_NodeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(&::MS::Internal::Xml::Cache::XPathNodePageInfo::get_NodeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x627b5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodePageInfo*>(), { "get_NodeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_NextPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::MS::Internal::Xml::Cache::XPathNode> (::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(
    &::MS::Internal::Xml::Cache::XPathNodePageInfo::get_NextPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x627b5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodePageInfo*>(), { "get_NextPage", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_get__pageNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageNum;
}
constexpr int32_t const& MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_get__pageNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageNum;
}
constexpr void MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_set__pageNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageNum = value;
}
constexpr int32_t& MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_get__nodeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeCount;
}
constexpr int32_t const& MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_get__nodeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeCount;
}
constexpr void MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_set__nodeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeCount = value;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_get__pageNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageNext;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> const& MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_get__pageNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageNext;
}
constexpr void MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_set__pageNext(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageNext = value;
}
inline int32_t MS::Internal::Xml::Cache::XPathNodePageInfo::get_PageNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodePageInfo*>(), { "get_PageNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t MS::Internal::Xml::Cache::XPathNodePageInfo::get_NodeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodePageInfo*>(), { "get_NodeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> MS::Internal::Xml::Cache::XPathNodePageInfo::get_NextPage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodePageInfo*>(), { "get_NextPage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::Cache::XPathNodePageInfo::XPathNodePageInfo() {}
