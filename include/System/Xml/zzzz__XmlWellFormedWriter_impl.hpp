#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter.hpp"
#include "System/Xml/zzzz__ConformanceLevel_impl.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_impl.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/Xml/zzzz__XmlWriter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlException_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlWellFormedWriter_State::XmlWellFormedWriter_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_State::XmlWellFormedWriter_State() {}
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::Start{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::TopLevel{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::Document{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::Element{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::Content{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::B64Content{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::B64Attribute{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::AfterRootEle{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::Attribute{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::SpecialAttr{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::EndDocument{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::RootLevelAttr{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::RootLevelSpecAttr{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::RootLevelB64Attr{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::AfterRootLevelAttr{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::Closed{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::Error{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartContent{ static_cast<int32_t>(0x65) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartContentEle{ static_cast<int32_t>(0x66) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartContentB64{ static_cast<int32_t>(0x67) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartDoc{ static_cast<int32_t>(0x68) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartDocEle{ static_cast<int32_t>(0x6a) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::EndAttrSEle{ static_cast<int32_t>(0x6b) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::EndAttrEEle{ static_cast<int32_t>(0x6c) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::EndAttrSCont{ static_cast<int32_t>(0x6d) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::EndAttrSAttr{ static_cast<int32_t>(0x6f) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::PostB64Cont{ static_cast<int32_t>(0x70) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::PostB64Attr{ static_cast<int32_t>(0x71) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::PostB64RootAttr{ static_cast<int32_t>(0x72) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartFragEle{ static_cast<int32_t>(0x73) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartFragCont{ static_cast<int32_t>(0x74) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartFragB64{ static_cast<int32_t>(0x75) };
constexpr ::System::Xml::XmlWellFormedWriter_State System::Xml::XmlWellFormedWriter_State::StartRootLevelAttr{ static_cast<int32_t>(0x76) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlWellFormedWriter_Token::XmlWellFormedWriter_Token(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_Token::XmlWellFormedWriter_Token() {}
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::StartDocument{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::EndDocument{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::PI{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::Comment{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::Dtd{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::StartElement{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::EndElement{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::StartAttribute{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::EndAttribute{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::Text{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::CData{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::AtomicValue{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::Base64{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::RawData{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::XmlWellFormedWriter_Token System::Xml::XmlWellFormedWriter_Token::Whitespace{ static_cast<int32_t>(0xe) };
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::*)(::System::Xml::XmlWellFormedWriter*)>(
    &::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4324d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::*)(::System::Xml::XmlNamespaceScope)>(
        &::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x432ad30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x432ad68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x432ad80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWellFormedWriter*& System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::__cordl_internal_get_wfWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wfWriter;
}
constexpr ::System::Xml::XmlWellFormedWriter* const& System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::__cordl_internal_get_wfWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wfWriter;
}
constexpr void System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::__cordl_internal_set_wfWriter(::System::Xml::XmlWellFormedWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wfWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::_ctor(::System::Xml::XmlWellFormedWriter* wfWriter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, wfWriter);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>::get(),
                                                                             "System.Xml.IXmlNamespaceResolver.LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>::get(),
                                                                             "System.Xml.IXmlNamespaceResolver.LookupPrefix", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline ::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy* System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::New_ctor(::System::Xml::XmlWellFormedWriter* wfWriter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*>(wfWriter));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy::XmlWellFormedWriter_NamespaceResolverProxy() {}
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_ElementScope.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_ElementScope::*)(::StringW, ::StringW, ::StringW, int32_t)>(
    &::System::Xml::XmlWellFormedWriter_ElementScope::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4324dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_ElementScope>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_ElementScope.WriteEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_ElementScope::*)(::System::Xml::XmlRawWriter*)>(
    &::System::Xml::XmlWellFormedWriter_ElementScope::WriteEndElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4326518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_ElementScope>::get(), "WriteEndElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_ElementScope.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_ElementScope::*)(::System::Xml::XmlRawWriter*)>(
    &::System::Xml::XmlWellFormedWriter_ElementScope::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4326800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_ElementScope>::get(), "WriteFullEndElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlWellFormedWriter_ElementScope::Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri, int32_t prevNSTop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_ElementScope>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, namespaceUri, prevNSTop);
}
inline void System::Xml::XmlWellFormedWriter_ElementScope::WriteEndElement(::System::Xml::XmlRawWriter* rawWriter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_ElementScope>::get(), "WriteEndElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawWriter);
}
inline void System::Xml::XmlWellFormedWriter_ElementScope::WriteFullEndElement(::System::Xml::XmlRawWriter* rawWriter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_ElementScope>::get(), "WriteFullEndElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawWriter);
}
// Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "localName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "xmlSpace",
// ty: "::System::Xml::XmlSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlWellFormedWriter_ElementScope::XmlWellFormedWriter_ElementScope(int32_t prevNSTop, ::StringW prefix, ::StringW localName, ::StringW namespaceUri,
                                                                                            ::System::Xml::XmlSpace xmlSpace, ::StringW xmlLang) noexcept {
  this->prevNSTop = prevNSTop;
  this->prefix = prefix;
  this->localName = localName;
  this->namespaceUri = namespaceUri;
  this->xmlSpace = xmlSpace;
  this->xmlLang = xmlLang;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_ElementScope::XmlWellFormedWriter_ElementScope() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlWellFormedWriter_NamespaceKind::XmlWellFormedWriter_NamespaceKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_NamespaceKind::XmlWellFormedWriter_NamespaceKind() {}
constexpr ::System::Xml::XmlWellFormedWriter_NamespaceKind System::Xml::XmlWellFormedWriter_NamespaceKind::Written{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlWellFormedWriter_NamespaceKind System::Xml::XmlWellFormedWriter_NamespaceKind::NeedToWrite{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlWellFormedWriter_NamespaceKind System::Xml::XmlWellFormedWriter_NamespaceKind::Implied{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlWellFormedWriter_NamespaceKind System::Xml::XmlWellFormedWriter_NamespaceKind::Special{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_Namespace.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XmlWellFormedWriter_Namespace::*)(::StringW, ::StringW, ::System::Xml::XmlWellFormedWriter_NamespaceKind)>(&::System::Xml::XmlWellFormedWriter_Namespace::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4324dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_Namespace>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_NamespaceKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_Namespace.WriteDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_Namespace::*)(::System::Xml::XmlWriter*, ::System::Xml::XmlRawWriter*)>(
    &::System::Xml::XmlWellFormedWriter_Namespace::WriteDecl)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x432a3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_Namespace>::get(), "WriteDecl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlWellFormedWriter_Namespace::Set(::StringW prefix, ::StringW namespaceUri, ::System::Xml::XmlWellFormedWriter_NamespaceKind kind) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_Namespace>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_NamespaceKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, namespaceUri, kind);
}
inline void System::Xml::XmlWellFormedWriter_Namespace::WriteDecl(::System::Xml::XmlWriter* writer, ::System::Xml::XmlRawWriter* rawWriter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_Namespace>::get(), "WriteDecl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, rawWriter);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "kind", ty: "::System::Xml::XmlWellFormedWriter_NamespaceKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Xml::XmlWellFormedWriter_Namespace::XmlWellFormedWriter_Namespace(::StringW prefix, ::StringW namespaceUri, ::System::Xml::XmlWellFormedWriter_NamespaceKind kind,
                                                                                      int32_t prevNsIndex) noexcept {
  this->prefix = prefix;
  this->namespaceUri = namespaceUri;
  this->kind = kind;
  this->prevNsIndex = prevNsIndex;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_Namespace::XmlWellFormedWriter_Namespace() {}
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttrName.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttrName::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter_AttrName::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x432ada4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttrName>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttrName.IsDuplicate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter_AttrName::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter_AttrName::IsDuplicate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x432adb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttrName>::get(), "IsDuplicate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlWellFormedWriter_AttrName::Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttrName>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline bool System::Xml::XmlWellFormedWriter_AttrName::IsDuplicate(::StringW prefix, ::StringW localName, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttrName>::get(), "IsDuplicate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prefix, localName, namespaceUri);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlWellFormedWriter_AttrName::XmlWellFormedWriter_AttrName(::StringW prefix, ::StringW namespaceUri, ::StringW localName, int32_t prev) noexcept {
  this->prefix = prefix;
  this->namespaceUri = namespaceUri;
  this->localName = localName;
  this->prev = prev;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_AttrName::XmlWellFormedWriter_AttrName() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute::XmlWellFormedWriter_SpecialAttribute(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute::XmlWellFormedWriter_SpecialAttribute() {}
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute System::Xml::XmlWellFormedWriter_SpecialAttribute::No{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute System::Xml::XmlWellFormedWriter_SpecialAttribute::DefaultXmlns{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute System::Xml::XmlWellFormedWriter_SpecialAttribute::PrefixedXmlns{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute System::Xml::XmlWellFormedWriter_SpecialAttribute::XmlSpace{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute System::Xml::XmlWellFormedWriter_SpecialAttribute::XmlLang{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::AttributeValueCache_XmlWellFormedWriter_ItemType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::AttributeValueCache_XmlWellFormedWriter_ItemType() {}
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::EntityRef{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::CharEntity{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::SurrogateCharEntity{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::Whitespace{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::String{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::StringChars{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::Raw{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::RawChars{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType::ValueString{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::*)()>(
    &::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x432bd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::*)(
    ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType, ::System::Object*)>(&::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x432bd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType& System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const& System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::__cordl_internal_set_type(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Object*& System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::Object* const& System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::__cordl_internal_set_data(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::Set(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType type, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, data);
}
inline ::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item* System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>());
}
// Ctor Parameters []
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item::AttributeValueCache_XmlWellFormedWriter_Item() {}
//  Writing Method size for method: ::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x432b468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_set_buffer(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr int32_t& System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
inline void System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::_ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline ::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk* System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer,
                                                                                                                                                      int32_t index, int32_t count) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk*>(buffer, index, count));
}
// Ctor Parameters []
constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk::AttributeValueCache_XmlWellFormedWriter_BufferChunk() {}
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.get_StringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)()>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::get_StringValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x432ae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                               "get_StringValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteEntityRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteEntityRef)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x432ae54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteEntityRef",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(char16_t)>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteCharEntity)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x432b1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteCharEntity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(char16_t, char16_t)>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x432b238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteSurrogateCharEntity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteWhitespace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x432b2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteWhitespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x432b34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteChars)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x432b3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteChars", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteRaw)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x432b4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteRaw)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x432b550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteRaw",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x432b5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.Replay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(::System::Xml::XmlWriter*)>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::Replay)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x432b5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "Replay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.Trim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)()>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::Trim)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x432b914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                               "Trim", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)()>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x432bd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.StartComplexValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)()>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::StartComplexValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x432aff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                               "StartComplexValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache.AddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)(
    ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType, ::System::Object*)>(&::System::Xml::XmlWellFormedWriter_AttributeValueCache::AddItem)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x432b02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter_AttributeValueCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter_AttributeValueCache::*)()>(
    &::System::Xml::XmlWellFormedWriter_AttributeValueCache::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x432bda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Text::StringBuilder*& System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_stringValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringValue;
}
constexpr ::System::Text::StringBuilder* const& System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_stringValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringValue;
}
constexpr void System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_set_stringValue(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stringValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_singleStringValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleStringValue;
}
constexpr ::StringW const& System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_singleStringValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleStringValue;
}
constexpr void System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_set_singleStringValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___singleStringValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, ::Array<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>*>&
System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::ArrayW<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, ::Array<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>*> const&
System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_set_items(
    ::ArrayW<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, ::Array<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_firstItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstItem;
}
constexpr int32_t const& System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_firstItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstItem;
}
constexpr void System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_set_firstItem(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstItem = value;
}
constexpr int32_t& System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_lastItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastItem;
}
constexpr int32_t const& System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_get_lastItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastItem;
}
constexpr void System::Xml::XmlWellFormedWriter_AttributeValueCache::__cordl_internal_set_lastItem(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastItem = value;
}
inline ::StringW System::Xml::XmlWellFormedWriter_AttributeValueCache::get_StringValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                             "get_StringValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteEntityRef(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteEntityRef",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteCharEntity(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteCharEntity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteSurrogateCharEntity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteWhitespace(::StringW ws) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteWhitespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ws);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteString(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteChars", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteRaw(::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteRaw",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::WriteValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "WriteValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::Replay(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "Replay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::Trim() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                             "Trim", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::StartComplexValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                             "StartComplexValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::AddItem(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType type, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, data);
}
inline void System::Xml::XmlWellFormedWriter_AttributeValueCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlWellFormedWriter_AttributeValueCache* System::Xml::XmlWellFormedWriter_AttributeValueCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlWellFormedWriter_AttributeValueCache*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter_AttributeValueCache::XmlWellFormedWriter_AttributeValueCache() {}
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::XmlWriter*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::XmlWellFormedWriter::_ctor)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x43249b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_WriteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::WriteState (::System::Xml::XmlWellFormedWriter::*)()>(
    &::System::Xml::XmlWellFormedWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4324dec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4324e80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(bool)>(&::System::Xml::XmlWellFormedWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4325030;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteEndDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteEndDocument)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x432504c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x43254a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x4325950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x4326334;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x432661c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x4326830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x43273f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteCData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteCData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4328100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteComment)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4328204;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x4328308;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x43285ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(char16_t)>(&::System::Xml::XmlWellFormedWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x4328720;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(char16_t, char16_t)>(
    &::System::Xml::XmlWellFormedWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x43288c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4328a6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4328c24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlWellFormedWriter::WriteChars)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x4328d18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlWellFormedWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x4328f78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteRaw)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x43291d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlWellFormedWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x43292cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::Close)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x43294fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::Flush)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x43296e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::LookupPrefix)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x4329794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4329a10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteBinHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlWellFormedWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x4329b14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_RawWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlRawWriter* (::System::Xml::XmlWellFormedWriter::*)()>(
    &::System::Xml::XmlWellFormedWriter::get_RawWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4329c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "get_RawWriter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_SaveAttrValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::get_SaveAttrValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4328710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "get_SaveAttrValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_InBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::get_InBase64)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x43296b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "get_InBase64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.SetSpecialAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::XmlWellFormedWriter_SpecialAttribute)>(
    &::System::Xml::XmlWellFormedWriter::SetSpecialAttribute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4326ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "SetSpecialAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_SpecialAttribute>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartDocumentImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::XmlStandalone)>(
    &::System::Xml::XmlWellFormedWriter::WriteStartDocumentImpl)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x4324e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "WriteStartDocumentImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlStandalone>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.StartFragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::StartFragment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4329c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "StartFragment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.PushNamespaceImplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter::PushNamespaceImplicit)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x4325f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "PushNamespaceImplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.PushNamespaceExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter::PushNamespaceExplicit)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x4327c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "PushNamespaceExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AddNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::System::Xml::XmlWellFormedWriter_NamespaceKind)>(
    &::System::Xml::XmlWellFormedWriter::AddNamespace)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x4329d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AddNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_NamespaceKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AddToNamespaceHashtable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(int32_t)>(
    &::System::Xml::XmlWellFormedWriter::AddToNamespaceHashtable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4329fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AddToNamespaceHashtable",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.LookupNamespaceIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter::LookupNamespaceIndex)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4329c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "LookupNamespaceIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.PopNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(int32_t, int32_t)>(&::System::Xml::XmlWellFormedWriter::PopNamespaces)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4326548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "PopNamespaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.DupAttrException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlException* (*)(::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::DupAttrException)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4329eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "DupAttrException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AdvanceState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::XmlWellFormedWriter_Token)>(
    &::System::Xml::XmlWellFormedWriter::AdvanceState)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x432519c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AdvanceState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_Token>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::StartElementContent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x432a314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                               "StartElementContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.GetStateName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Xml::XmlWellFormedWriter_State)>(&::System::Xml::XmlWellFormedWriter::GetStateName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x432a0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "GetStateName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::LookupNamespace)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4325df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.LookupLocalNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(
    &::System::Xml::XmlWellFormedWriter::LookupLocalNamespace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x43270a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "LookupLocalNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.GeneratePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::GeneratePrefix)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x4326f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "GeneratePrefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.CheckNCName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::CheckNCName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4325cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "CheckNCName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.InvalidCharsException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW, int32_t)>(&::System::Xml::XmlWellFormedWriter::InvalidCharsException)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x432a518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "InvalidCharsException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.ThrowInvalidStateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(
    ::System::Xml::XmlWellFormedWriter_Token, ::System::Xml::XmlWellFormedWriter_State)>(&::System::Xml::XmlWellFormedWriter::ThrowInvalidStateTransition)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x432a150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "ThrowInvalidStateTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_Token>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_IsClosedOrErrorState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::get_IsClosedOrErrorState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4329c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                               "get_IsClosedOrErrorState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlWellFormedWriter::AddAttribute)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x4327174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AddToAttrHashTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(int32_t)>(&::System::Xml::XmlWellFormedWriter::AddToAttrHashTable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x432a630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AddToAttrHashTable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWriter*& System::Xml::XmlWellFormedWriter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlWriter* const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_writer(::System::Xml::XmlWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlRawWriter*& System::Xml::XmlWellFormedWriter::__cordl_internal_get_rawWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawWriter;
}
constexpr ::System::Xml::XmlRawWriter* const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_rawWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawWriter;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_rawWriter(::System::Xml::XmlRawWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::IXmlNamespaceResolver*& System::Xml::XmlWellFormedWriter::__cordl_internal_get_predefinedNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predefinedNamespaces;
}
constexpr ::System::Xml::IXmlNamespaceResolver* const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_predefinedNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predefinedNamespaces;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_predefinedNamespaces(::System::Xml::IXmlNamespaceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predefinedNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_Namespace, ::Array<::System::Xml::XmlWellFormedWriter_Namespace>*>& System::Xml::XmlWellFormedWriter::__cordl_internal_get_nsStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsStack;
}
constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_Namespace, ::Array<::System::Xml::XmlWellFormedWriter_Namespace>*> const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_nsStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsStack;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_nsStack(::ArrayW<::System::Xml::XmlWellFormedWriter_Namespace, ::Array<::System::Xml::XmlWellFormedWriter_Namespace>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlWellFormedWriter::__cordl_internal_get_nsTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsTop;
}
constexpr int32_t const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_nsTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsTop;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_nsTop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsTop = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& System::Xml::XmlWellFormedWriter::__cordl_internal_get_nsHashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsHashtable;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_nsHashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsHashtable;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_nsHashtable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsHashtable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlWellFormedWriter::__cordl_internal_get_useNsHashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNsHashtable;
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_useNsHashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNsHashtable;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_useNsHashtable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useNsHashtable = value;
}
constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_ElementScope, ::Array<::System::Xml::XmlWellFormedWriter_ElementScope>*>&
System::Xml::XmlWellFormedWriter::__cordl_internal_get_elemScopeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemScopeStack;
}
constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_ElementScope, ::Array<::System::Xml::XmlWellFormedWriter_ElementScope>*> const&
System::Xml::XmlWellFormedWriter::__cordl_internal_get_elemScopeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemScopeStack;
}
constexpr void
System::Xml::XmlWellFormedWriter::__cordl_internal_set_elemScopeStack(::ArrayW<::System::Xml::XmlWellFormedWriter_ElementScope, ::Array<::System::Xml::XmlWellFormedWriter_ElementScope>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elemScopeStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlWellFormedWriter::__cordl_internal_get_elemTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemTop;
}
constexpr int32_t const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_elemTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemTop;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_elemTop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elemTop = value;
}
constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_AttrName, ::Array<::System::Xml::XmlWellFormedWriter_AttrName>*>& System::Xml::XmlWellFormedWriter::__cordl_internal_get_attrStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrStack;
}
constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_AttrName, ::Array<::System::Xml::XmlWellFormedWriter_AttrName>*> const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_attrStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrStack;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_attrStack(::ArrayW<::System::Xml::XmlWellFormedWriter_AttrName, ::Array<::System::Xml::XmlWellFormedWriter_AttrName>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attrStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlWellFormedWriter::__cordl_internal_get_attrCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCount;
}
constexpr int32_t const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_attrCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCount;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_attrCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrCount = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& System::Xml::XmlWellFormedWriter::__cordl_internal_get_attrHashTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrHashTable;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_attrHashTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrHashTable;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_attrHashTable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attrHashTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute& System::Xml::XmlWellFormedWriter::__cordl_internal_get_specAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___specAttr;
}
constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_specAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___specAttr;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_specAttr(::System::Xml::XmlWellFormedWriter_SpecialAttribute value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___specAttr = value;
}
constexpr ::System::Xml::XmlWellFormedWriter_AttributeValueCache*& System::Xml::XmlWellFormedWriter::__cordl_internal_get_attrValueCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrValueCache;
}
constexpr ::System::Xml::XmlWellFormedWriter_AttributeValueCache* const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_attrValueCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrValueCache;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_attrValueCache(::System::Xml::XmlWellFormedWriter_AttributeValueCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attrValueCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlWellFormedWriter::__cordl_internal_get_curDeclPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curDeclPrefix;
}
constexpr ::StringW const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_curDeclPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curDeclPrefix;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_curDeclPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curDeclPrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>& System::Xml::XmlWellFormedWriter::__cordl_internal_get_stateTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateTable;
}
constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_stateTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateTable;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_stateTable(::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlWellFormedWriter_State& System::Xml::XmlWellFormedWriter::__cordl_internal_get_currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr ::System::Xml::XmlWellFormedWriter_State const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_currentState(::System::Xml::XmlWellFormedWriter_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentState = value;
}
constexpr bool& System::Xml::XmlWellFormedWriter::__cordl_internal_get_checkCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_checkCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_checkCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkCharacters = value;
}
constexpr bool& System::Xml::XmlWellFormedWriter::__cordl_internal_get_omitDuplNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___omitDuplNamespaces;
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_omitDuplNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___omitDuplNamespaces;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_omitDuplNamespaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___omitDuplNamespaces = value;
}
constexpr bool& System::Xml::XmlWellFormedWriter::__cordl_internal_get_writeEndDocumentOnClose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeEndDocumentOnClose;
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_writeEndDocumentOnClose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeEndDocumentOnClose;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_writeEndDocumentOnClose(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeEndDocumentOnClose = value;
}
constexpr ::System::Xml::ConformanceLevel& System::Xml::XmlWellFormedWriter::__cordl_internal_get_conformanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr ::System::Xml::ConformanceLevel const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_conformanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conformanceLevel;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___conformanceLevel = value;
}
constexpr bool& System::Xml::XmlWellFormedWriter::__cordl_internal_get_dtdWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdWritten;
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_dtdWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdWritten;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_dtdWritten(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dtdWritten = value;
}
constexpr bool& System::Xml::XmlWellFormedWriter::__cordl_internal_get_xmlDeclFollows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlDeclFollows;
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_xmlDeclFollows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlDeclFollows;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_xmlDeclFollows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlDeclFollows = value;
}
constexpr ::System::Xml::XmlCharType& System::Xml::XmlWellFormedWriter::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
constexpr ::System::Xml::SecureStringHasher*& System::Xml::XmlWellFormedWriter::__cordl_internal_get_hasher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasher;
}
constexpr ::System::Xml::SecureStringHasher* const& System::Xml::XmlWellFormedWriter::__cordl_internal_get_hasher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasher;
}
constexpr void System::Xml::XmlWellFormedWriter::__cordl_internal_set_hasher(::System::Xml::SecureStringHasher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hasher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_stateName(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "stateName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::XmlWellFormedWriter::getStaticF_stateName() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "stateName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_tokenName(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "tokenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::XmlWellFormedWriter::getStaticF_tokenName() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "tokenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_state2WriteState(::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*>, "state2WriteState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(
      std::forward<::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*>>(value));
}
inline ::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> System::Xml::XmlWellFormedWriter::getStaticF_state2WriteState() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*>, "state2WriteState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_StateTableDocument(::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>, "StateTableDocument",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(
      std::forward<::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>>(value));
}
inline ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> System::Xml::XmlWellFormedWriter::getStaticF_StateTableDocument() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>, "StateTableDocument",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_StateTableAuto(::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>, "StateTableAuto",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(
      std::forward<::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>>(value));
}
inline ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> System::Xml::XmlWellFormedWriter::getStaticF_StateTableAuto() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>, "StateTableAuto",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::_ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, settings);
}
inline ::System::Xml::WriteState System::Xml::XmlWellFormedWriter::get_WriteState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WriteState, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartDocument() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartDocument(bool standalone) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlWellFormedWriter::WriteEndDocument() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlWellFormedWriter::WriteEndElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteFullEndElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, namespaceName);
}
inline void System::Xml::XmlWellFormedWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlWellFormedWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlWellFormedWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, text);
}
inline void System::Xml::XmlWellFormedWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlWellFormedWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Xml::XmlWellFormedWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlWellFormedWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ws);
}
inline void System::Xml::XmlWellFormedWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlWellFormedWriter::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlWellFormedWriter::WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlWellFormedWriter::WriteRaw(::StringW data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void System::Xml::XmlWellFormedWriter::WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlWellFormedWriter::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlWellFormedWriter::LookupPrefix(::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ns);
}
inline void System::Xml::XmlWellFormedWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlWellFormedWriter::WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline ::System::Xml::XmlRawWriter* System::Xml::XmlWellFormedWriter::get_RawWriter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "get_RawWriter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlRawWriter*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlWellFormedWriter::get_SaveAttrValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "get_SaveAttrValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlWellFormedWriter::get_InBase64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "get_InBase64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::SetSpecialAttribute(::System::Xml::XmlWellFormedWriter_SpecialAttribute special) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "SetSpecialAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_SpecialAttribute>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, special);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartDocumentImpl(::System::Xml::XmlStandalone standalone) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "WriteStartDocumentImpl", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlStandalone>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlWellFormedWriter::StartFragment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "StartFragment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::PushNamespaceImplicit(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "PushNamespaceImplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns);
}
inline bool System::Xml::XmlWellFormedWriter::PushNamespaceExplicit(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "PushNamespaceExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlWellFormedWriter::AddNamespace(::StringW prefix, ::StringW ns, ::System::Xml::XmlWellFormedWriter_NamespaceKind kind) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AddNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_NamespaceKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns, kind);
}
inline void System::Xml::XmlWellFormedWriter::AddToNamespaceHashtable(int32_t namespaceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AddToNamespaceHashtable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, namespaceIndex);
}
inline int32_t System::Xml::XmlWellFormedWriter::LookupNamespaceIndex(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "LookupNamespaceIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlWellFormedWriter::PopNamespaces(int32_t indexFrom, int32_t indexTo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "PopNamespaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFrom, indexTo);
}
inline ::System::Xml::XmlException* System::Xml::XmlWellFormedWriter::DupAttrException(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "DupAttrException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlException*, false>(nullptr, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlWellFormedWriter::AdvanceState(::System::Xml::XmlWellFormedWriter_Token token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AdvanceState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_Token>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void System::Xml::XmlWellFormedWriter::StartElementContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "StartElementContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlWellFormedWriter::GetStateName(::System::Xml::XmlWellFormedWriter_State state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "GetStateName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_State>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, state);
}
inline ::StringW System::Xml::XmlWellFormedWriter::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlWellFormedWriter::LookupLocalNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "LookupLocalNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlWellFormedWriter::GeneratePrefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "GeneratePrefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::CheckNCName(::StringW ncname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "CheckNCName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ncname);
}
inline ::System::Exception* System::Xml::XmlWellFormedWriter::InvalidCharsException(::StringW name, int32_t badCharIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "InvalidCharsException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, name, badCharIndex);
}
inline void System::Xml::XmlWellFormedWriter::ThrowInvalidStateTransition(::System::Xml::XmlWellFormedWriter_Token token, ::System::Xml::XmlWellFormedWriter_State currentState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "ThrowInvalidStateTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_Token>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter_State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, currentState);
}
inline bool System::Xml::XmlWellFormedWriter::get_IsClosedOrErrorState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                                                             "get_IsClosedOrErrorState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::AddAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, namespaceName);
}
inline void System::Xml::XmlWellFormedWriter::AddToAttrHashTable(int32_t attributeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(), "AddToAttrHashTable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeIndex);
}
inline ::System::Xml::XmlWellFormedWriter* System::Xml::XmlWellFormedWriter::New_ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlWellFormedWriter*>(writer, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlWellFormedWriter::XmlWellFormedWriter() {}
