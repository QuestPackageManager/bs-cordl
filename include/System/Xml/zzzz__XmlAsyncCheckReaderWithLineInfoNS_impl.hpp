#pragma once
// IWYU pragma private; include "System\Xml\XmlAsyncCheckReaderWithLineInfoNS.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithLineInfo_impl.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithLineInfoNS_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61b399c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x61b4e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(),
                                                             { "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::*)(::StringW)>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x61b4edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(),
                                                                                           { "System.Xml.IXmlNamespaceResolver.LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::*)(::StringW)>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x61b4f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(),
                                                                                           { "System.Xml.IXmlNamespaceResolver.LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IXmlNamespaceResolver*& System::Xml::XmlAsyncCheckReaderWithLineInfoNS::__cordl_internal_get_readerAsIXmlNamespaceResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAsIXmlNamespaceResolver;
}
constexpr ::System::Xml::IXmlNamespaceResolver* const& System::Xml::XmlAsyncCheckReaderWithLineInfoNS::__cordl_internal_get_readerAsIXmlNamespaceResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAsIXmlNamespaceResolver;
}
constexpr void System::Xml::XmlAsyncCheckReaderWithLineInfoNS::__cordl_internal_set_readerAsIXmlNamespaceResolver(::System::Xml::IXmlNamespaceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readerAsIXmlNamespaceResolver = value;
}
inline void System::Xml::XmlAsyncCheckReaderWithLineInfoNS::_ctor(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(),
                                                           { "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(),
                                                                                         { "System.Xml.IXmlNamespaceResolver.LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(),
                                                                                         { "System.Xml.IXmlNamespaceResolver.LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceName);
}
inline ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS* System::Xml::XmlAsyncCheckReaderWithLineInfoNS::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(reader));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlAsyncCheckReaderWithLineInfoNS::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlAsyncCheckReaderWithLineInfoNS::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::XmlAsyncCheckReaderWithLineInfoNS() {}
