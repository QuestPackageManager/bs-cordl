#pragma once
// IWYU pragma private; include "System\Xml\IXmlNamespaceResolver.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
//  Writing Method size for method: ::System::Xml::IXmlNamespaceResolver.GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::IXmlNamespaceResolver::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::IXmlNamespaceResolver::GetNamespacesInScope)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), { ::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IXmlNamespaceResolver.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::IXmlNamespaceResolver::*)(::StringW)>(&::System::Xml::IXmlNamespaceResolver::LookupNamespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), { ::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IXmlNamespaceResolver.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::IXmlNamespaceResolver::*)(::StringW)>(&::System::Xml::IXmlNamespaceResolver::LookupPrefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), { ::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Xml::IXmlNamespaceResolver::GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::IXmlNamespaceResolver::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::IXmlNamespaceResolver::LookupPrefix(::StringW namespaceName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IXmlNamespaceResolver*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceName);
}
