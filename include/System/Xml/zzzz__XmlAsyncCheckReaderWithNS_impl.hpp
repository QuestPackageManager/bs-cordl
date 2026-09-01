#pragma once
// IWYU pragma private; include "System\Xml\XmlAsyncCheckReaderWithNS.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReader_impl.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithNS_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithNS._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReaderWithNS::*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlAsyncCheckReaderWithNS::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61b3ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithNS*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithNS.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XmlAsyncCheckReaderWithNS::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x61b4a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithNS*>(),
                                                             { "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithNS.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReaderWithNS::*)(::StringW)>(
    &::System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x61b4ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithNS*>(), { "System.Xml.IXmlNamespaceResolver.LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithNS.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReaderWithNS::*)(::StringW)>(
    &::System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x61b4b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithNS*>(), { "System.Xml.IXmlNamespaceResolver.LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IXmlNamespaceResolver*& System::Xml::XmlAsyncCheckReaderWithNS::__cordl_internal_get_readerAsIXmlNamespaceResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAsIXmlNamespaceResolver;
}
constexpr ::System::Xml::IXmlNamespaceResolver* const& System::Xml::XmlAsyncCheckReaderWithNS::__cordl_internal_get_readerAsIXmlNamespaceResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAsIXmlNamespaceResolver;
}
constexpr void System::Xml::XmlAsyncCheckReaderWithNS::__cordl_internal_set_readerAsIXmlNamespaceResolver(::System::Xml::IXmlNamespaceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readerAsIXmlNamespaceResolver = value;
}
inline void System::Xml::XmlAsyncCheckReaderWithNS::_ctor(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithNS*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithNS*>(),
                                                           { "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithNS*>(), { "System.Xml.IXmlNamespaceResolver.LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithNS*>(), { "System.Xml.IXmlNamespaceResolver.LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceName);
}
inline ::System::Xml::XmlAsyncCheckReaderWithNS* System::Xml::XmlAsyncCheckReaderWithNS::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAsyncCheckReaderWithNS*>(reader));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlAsyncCheckReaderWithNS::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlAsyncCheckReaderWithNS::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAsyncCheckReaderWithNS::XmlAsyncCheckReaderWithNS() {}
