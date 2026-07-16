#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XContainerWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/Linq/zzzz__XContainer_def.hpp"
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XContainerWrapper.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XContainer* (::Newtonsoft::Json::Converters::XContainerWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XContainerWrapper::get_Container)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d9f7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { "get_Container", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XContainerWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XContainerWrapper::*)(::System::Xml::Linq::XContainer*)>(
    &::Newtonsoft::Json::Converters::XContainerWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9e270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XContainerWrapper.get_ChildNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (::Newtonsoft::Json::Converters::XContainerWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XContainerWrapper::get_ChildNodes)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5d9e3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XContainerWrapper.get_HasChildNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XContainerWrapper::*)()>(&::Newtonsoft::Json::Converters::XContainerWrapper::get_HasChildNodes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d9e814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XContainerWrapper.get_ParentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XContainerWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XContainerWrapper::get_ParentNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d9f848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XContainerWrapper.WrapNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (*)(::System::Xml::Linq::XObject*)>(&::Newtonsoft::Json::Converters::XContainerWrapper::WrapNode)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5d9f278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { "WrapNode", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XContainerWrapper.AppendChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XContainerWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XContainerWrapper::AppendChild)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d9f080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& Newtonsoft::Json::Converters::XContainerWrapper::__cordl_internal_get__childNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childNodes;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* const& Newtonsoft::Json::Converters::XContainerWrapper::__cordl_internal_get__childNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childNodes;
}
constexpr void Newtonsoft::Json::Converters::XContainerWrapper::__cordl_internal_set__childNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childNodes = value;
}
inline ::System::Xml::Linq::XContainer* Newtonsoft::Json::Converters::XContainerWrapper::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XContainer*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XContainerWrapper::_ctor(::System::Xml::Linq::XContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Newtonsoft::Json::Converters::XContainerWrapper::get_ChildNodes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Converters::XContainerWrapper::get_HasChildNodes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XContainerWrapper::get_ParentNode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XContainerWrapper::WrapNode(::System::Xml::Linq::XObject* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), { "WrapNode", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(nullptr, ___internal_method, node);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XContainerWrapper::AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XContainerWrapper*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, newChild);
}
inline ::Newtonsoft::Json::Converters::XContainerWrapper* Newtonsoft::Json::Converters::XContainerWrapper::New_ctor(::System::Xml::Linq::XContainer* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XContainerWrapper*>(container));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XContainerWrapper::XContainerWrapper() {}
