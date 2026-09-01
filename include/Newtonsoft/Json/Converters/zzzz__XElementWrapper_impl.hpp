#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\XElementWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XElementWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlElement_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/Linq/zzzz__XElement_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.get_Element
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XElement* (::Newtonsoft::Json::Converters::XElementWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XElementWrapper::get_Element)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5da1d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { "get_Element", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XElementWrapper::*)(::System::Xml::Linq::XElement*)>(
    &::Newtonsoft::Json::Converters::XElementWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.SetAttributeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XElementWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XElementWrapper::SetAttributeNode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5da1dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(),
                                                                                           { "SetAttributeNode", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (::Newtonsoft::Json::Converters::XElementWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XElementWrapper::get_Attributes)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x5da1eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.HasImplicitNamespaceAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XElementWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XElementWrapper::HasImplicitNamespaceAttribute)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5da23c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { "HasImplicitNamespaceAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.AppendChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XElementWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XElementWrapper::AppendChild)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5da2890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XElementWrapper::*)()>(&::Newtonsoft::Json::Converters::XElementWrapper::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5da28b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XElementWrapper::*)(::StringW)>(&::Newtonsoft::Json::Converters::XElementWrapper::set_Value)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5da28d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XElementWrapper::*)()>(&::Newtonsoft::Json::Converters::XElementWrapper::get_LocalName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5da290c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.get_NamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XElementWrapper::*)()>(&::Newtonsoft::Json::Converters::XElementWrapper::get_NamespaceUri)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5da2930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.GetPrefixOfNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XElementWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XElementWrapper::GetPrefixOfNamespace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5da2840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { "GetPrefixOfNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XElementWrapper.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XElementWrapper::*)()>(&::Newtonsoft::Json::Converters::XElementWrapper::get_IsEmpty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5da295c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& Newtonsoft::Json::Converters::XElementWrapper::__cordl_internal_get__attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributes;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* const& Newtonsoft::Json::Converters::XElementWrapper::__cordl_internal_get__attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributes;
}
constexpr void Newtonsoft::Json::Converters::XElementWrapper::__cordl_internal_set__attributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributes = value;
}
inline ::System::Xml::Linq::XElement* Newtonsoft::Json::Converters::XElementWrapper::get_Element() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { "get_Element", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XElement*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XElementWrapper::_ctor(::System::Xml::Linq::XElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void Newtonsoft::Json::Converters::XElementWrapper::SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(),
                                                                                         { "SetAttributeNode", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Newtonsoft::Json::Converters::XElementWrapper::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Converters::XElementWrapper::HasImplicitNamespaceAttribute(::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { "HasImplicitNamespaceAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceUri);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XElementWrapper::AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, newChild);
}
inline ::StringW Newtonsoft::Json::Converters::XElementWrapper::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XElementWrapper::set_Value(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Converters::XElementWrapper::get_LocalName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XElementWrapper::get_NamespaceUri() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XElementWrapper::GetPrefixOfNamespace(::StringW namespaceUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { "GetPrefixOfNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceUri);
}
inline bool Newtonsoft::Json::Converters::XElementWrapper::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XElementWrapper*>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XElementWrapper* Newtonsoft::Json::Converters::XElementWrapper::New_ctor(::System::Xml::Linq::XElement* element) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XElementWrapper*>(element));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlElement"
constexpr Newtonsoft::Json::Converters::XElementWrapper::operator ::Newtonsoft::Json::Converters::IXmlElement*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlElement"
constexpr ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XElementWrapper::i___Newtonsoft__Json__Converters__IXmlElement() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::XElementWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XElementWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XElementWrapper::XElementWrapper() {}
