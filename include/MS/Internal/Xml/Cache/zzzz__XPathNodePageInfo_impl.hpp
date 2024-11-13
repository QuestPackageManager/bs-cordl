#pragma once
// IWYU pragma private; include "MS/Internal/Xml/Cache/XPathNodePageInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodePageInfo_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_PageNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(
    &::MS::Internal::Xml::Cache::XPathNodePageInfo::get_PageNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42a86ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                               "get_PageNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_NodeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(
    &::MS::Internal::Xml::Cache::XPathNodePageInfo::get_NodeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42a86b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                               "get_NodeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_NextPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> (
    ::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(&::MS::Internal::Xml::Cache::XPathNodePageInfo::get_NextPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42a86bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                               "get_NextPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_get__pageNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageNext;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_get__pageNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageNext;
}
constexpr void MS::Internal::Xml::Cache::XPathNodePageInfo::__cordl_internal_set__pageNext(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pageNext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t MS::Internal::Xml::Cache::XPathNodePageInfo::get_PageNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                             "get_PageNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t MS::Internal::Xml::Cache::XPathNodePageInfo::get_NodeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                             "get_NodeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> MS::Internal::Xml::Cache::XPathNodePageInfo::get_NextPage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                             "get_NextPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::Cache::XPathNodePageInfo::XPathNodePageInfo() {}
