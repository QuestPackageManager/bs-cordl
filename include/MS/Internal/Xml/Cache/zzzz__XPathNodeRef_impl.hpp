#pragma once
// IWYU pragma private; include "MS\Internal\Xml\Cache\XPathNodeRef.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_impl.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodeRef_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodeRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::Cache::XPathNodeRef::*)(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int32_t)>(
    &::MS::Internal::Xml::Cache::XPathNodeRef::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x627b55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodeRef.get_Page
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::MS::Internal::Xml::Cache::XPathNode> (::MS::Internal::Xml::Cache::XPathNodeRef::*)()>(
    &::MS::Internal::Xml::Cache::XPathNodeRef::get_Page)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x627b568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(), { "get_Page", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodeRef.get_Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathNodeRef::*)()>(&::MS::Internal::Xml::Cache::XPathNodeRef::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x627b570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(), { "get_Index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodeRef.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathNodeRef::*)()>(&::MS::Internal::Xml::Cache::XPathNodeRef::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x627b578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(), 2 }));
    return ___internal_method;
  }
};
inline void MS::Internal::Xml::Cache::XPathNodeRef::_ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> page, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, page, idx);
}
inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> MS::Internal::Xml::Cache::XPathNodeRef::get_Page() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(), { "get_Page", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(*this, ___internal_method);
}
inline int32_t MS::Internal::Xml::Cache::XPathNodeRef::get_Index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(), { "get_Index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MS::Internal::Xml::Cache::XPathNodeRef::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathNodeRef>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_page", ty: "::ArrayW<::MS::Internal::Xml::Cache::XPathNode>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_idx", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::MS::Internal::Xml::Cache::XPathNodeRef::XPathNodeRef(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> _page, int32_t _idx) noexcept {
  this->_page = _page;
  this->_idx = _idx;
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::Cache::XPathNodeRef::XPathNodeRef() {}
