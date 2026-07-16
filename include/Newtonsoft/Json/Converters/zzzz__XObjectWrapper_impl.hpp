#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XObjectWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XObjectWrapper::*)(::System::Xml::Linq::XObject*)>(
    &::Newtonsoft::Json::Converters::XObjectWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9e0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.get_WrappedNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&::Newtonsoft::Json::Converters::XObjectWrapper::get_WrappedNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9f88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { "get_WrappedNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::Newtonsoft::Json::Converters::XObjectWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XObjectWrapper::get_NodeType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9f894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&::Newtonsoft::Json::Converters::XObjectWrapper::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9f8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.get_ChildNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (::Newtonsoft::Json::Converters::XObjectWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XObjectWrapper::get_ChildNodes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d9f8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (::Newtonsoft::Json::Converters::XObjectWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XObjectWrapper::get_Attributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d9f910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.get_ParentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XObjectWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XObjectWrapper::get_ParentNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9f96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&::Newtonsoft::Json::Converters::XObjectWrapper::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9f974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XObjectWrapper::*)(::StringW)>(&::Newtonsoft::Json::Converters::XObjectWrapper::set_Value)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d9f97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.AppendChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XObjectWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XObjectWrapper::AppendChild)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d9f9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XObjectWrapper.get_NamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&::Newtonsoft::Json::Converters::XObjectWrapper::get_NamespaceUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9f9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Linq::XObject*& Newtonsoft::Json::Converters::XObjectWrapper::__cordl_internal_get__xmlObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlObject;
}
constexpr ::System::Xml::Linq::XObject* const& Newtonsoft::Json::Converters::XObjectWrapper::__cordl_internal_get__xmlObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlObject;
}
constexpr void Newtonsoft::Json::Converters::XObjectWrapper::__cordl_internal_set__xmlObject(::System::Xml::Linq::XObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlObject = value;
}
inline void Newtonsoft::Json::Converters::XObjectWrapper::_ctor(::System::Xml::Linq::XObject* xmlObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlObject);
}
inline ::System::Object* Newtonsoft::Json::Converters::XObjectWrapper::get_WrappedNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), { "get_WrappedNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType Newtonsoft::Json::Converters::XObjectWrapper::get_NodeType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XObjectWrapper::get_LocalName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Newtonsoft::Json::Converters::XObjectWrapper::get_ChildNodes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Newtonsoft::Json::Converters::XObjectWrapper::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XObjectWrapper::get_ParentNode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XObjectWrapper::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XObjectWrapper::set_Value(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XObjectWrapper::AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, newChild);
}
inline ::StringW Newtonsoft::Json::Converters::XObjectWrapper::get_NamespaceUri() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XObjectWrapper*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XObjectWrapper* Newtonsoft::Json::Converters::XObjectWrapper::New_ctor(::System::Xml::Linq::XObject* xmlObject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XObjectWrapper*>(xmlObject));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::XObjectWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XObjectWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XObjectWrapper::XObjectWrapper() {}
