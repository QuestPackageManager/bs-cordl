#pragma once
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlElementWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlElement_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlElementWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::XmlElementWrapper::*)(::System::Xml::XmlElement*)>(
    &::Newtonsoft::Json::Converters::XmlElementWrapper::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27aa6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlElementWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlElementWrapper.SetAttributeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::XmlElementWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XmlElementWrapper::SetAttributeNode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x27aa98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlElementWrapper*>::get(), "SetAttributeNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Converters::IXmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlElementWrapper.GetPrefixOfNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlElementWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlElementWrapper::GetPrefixOfNamespace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27aaa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlElementWrapper*>::get(), "GetPrefixOfNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlElementWrapper.get_IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Converters::XmlElementWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XmlElementWrapper::get_IsEmpty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27aaa98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlElementWrapper*>::get(),
                                                                               "get_IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlElement"
constexpr Newtonsoft::Json::Converters::XmlElementWrapper::operator ::Newtonsoft::Json::Converters::IXmlElement*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlElement"
constexpr ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XmlElementWrapper::i___Newtonsoft__Json__Converters__IXmlElement() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::XmlElementWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlElementWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
constexpr ::System::Xml::XmlElement*& Newtonsoft::Json::Converters::XmlElementWrapper::__cordl_internal_get__element() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____element;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlElement*> const& Newtonsoft::Json::Converters::XmlElementWrapper::__cordl_internal_get__element() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____element;
}
constexpr void Newtonsoft::Json::Converters::XmlElementWrapper::__cordl_internal_set__element(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____element)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Converters::XmlElementWrapper* Newtonsoft::Json::Converters::XmlElementWrapper::New_ctor(::System::Xml::XmlElement* element) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Converters::XmlElementWrapper*>(element));
}
inline void Newtonsoft::Json::Converters::XmlElementWrapper::_ctor(::System::Xml::XmlElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlElementWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void Newtonsoft::Json::Converters::XmlElementWrapper::SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlElementWrapper*>::get(), "SetAttributeNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Converters::IXmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline ::StringW Newtonsoft::Json::Converters::XmlElementWrapper::GetPrefixOfNamespace(::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlElementWrapper*>::get(), "GetPrefixOfNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceUri);
}
inline bool Newtonsoft::Json::Converters::XmlElementWrapper::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlElementWrapper*>::get(),
                                                                             "get_IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XmlElementWrapper::XmlElementWrapper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
