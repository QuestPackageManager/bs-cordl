#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckReaderWithLineInfoNS.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_impl.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithLineInfo_impl.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithLineInfoNS_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x430d410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x430e54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::*)(::StringW)>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x430e5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>::get(),
                                                                               "System.Xml.IXmlNamespaceResolver.LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::*)(::StringW)>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x430e6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readerAsIXmlNamespaceResolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlAsyncCheckReaderWithLineInfoNS::_ctor(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlAsyncCheckReaderWithLineInfoNS::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS* System::Xml::XmlAsyncCheckReaderWithLineInfoNS::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*>(reader));
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
