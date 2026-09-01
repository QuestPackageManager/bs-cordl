#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\XmlElementWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlElementWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlElement_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlElementWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlElementWrapper::*)(::System::Xml::XmlElement*)>(
    &::Newtonsoft::Json::Converters::XmlElementWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d9f1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlElementWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlElementWrapper.SetAttributeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlElementWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XmlElementWrapper::SetAttributeNode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d9f430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlElementWrapper*>(),
                                                                                           { "SetAttributeNode", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlElementWrapper.GetPrefixOfNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlElementWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlElementWrapper::GetPrefixOfNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d9f528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlElementWrapper*>(), { "GetPrefixOfNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlElementWrapper.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlElementWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlElementWrapper::get_IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d9f548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlElementWrapper*>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlElement*& Newtonsoft::Json::Converters::XmlElementWrapper::__cordl_internal_get__element() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____element;
}
constexpr ::System::Xml::XmlElement* const& Newtonsoft::Json::Converters::XmlElementWrapper::__cordl_internal_get__element() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____element;
}
constexpr void Newtonsoft::Json::Converters::XmlElementWrapper::__cordl_internal_set__element(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____element = value;
}
inline void Newtonsoft::Json::Converters::XmlElementWrapper::_ctor(::System::Xml::XmlElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlElementWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void Newtonsoft::Json::Converters::XmlElementWrapper::SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlElementWrapper*>(),
                                                                                         { "SetAttributeNode", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline ::StringW Newtonsoft::Json::Converters::XmlElementWrapper::GetPrefixOfNamespace(::StringW namespaceUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlElementWrapper*>(), { "GetPrefixOfNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceUri);
}
inline bool Newtonsoft::Json::Converters::XmlElementWrapper::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlElementWrapper*>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XmlElementWrapper* Newtonsoft::Json::Converters::XmlElementWrapper::New_ctor(::System::Xml::XmlElement* element) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XmlElementWrapper*>(element));
}
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
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XmlElementWrapper::XmlElementWrapper() {}
