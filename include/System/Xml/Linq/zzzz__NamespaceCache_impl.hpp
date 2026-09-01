#pragma once
// IWYU pragma private; include "System\Xml\Linq\NamespaceCache.hpp"
#include "System/Xml/Linq/zzzz__NamespaceCache_def.hpp"
#include "System/Xml/Linq/zzzz__XNamespace_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::NamespaceCache.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XNamespace* (::System::Xml::Linq::NamespaceCache::*)(::StringW)>(&::System::Xml::Linq::NamespaceCache::Get)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61a7800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::NamespaceCache>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::Xml::Linq::XNamespace* System::Xml::Linq::NamespaceCache::Get(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::NamespaceCache>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNamespace*>(*this, ___internal_method, namespaceName);
}
// Ctor Parameters [CppParam { name: "_ns", ty: "::System::Xml::Linq::XNamespace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_namespaceName", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Xml::Linq::NamespaceCache::NamespaceCache(::System::Xml::Linq::XNamespace* _ns, ::StringW _namespaceName) noexcept {
  this->_ns = _ns;
  this->_namespaceName = _namespaceName;
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::NamespaceCache::NamespaceCache() {}
