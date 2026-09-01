#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlDataNode.hpp"
#include "System/Runtime/Serialization/zzzz__DataNode_1_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataNode_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataNode::*)()>(&::System::Runtime::Serialization::XmlDataNode::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6150ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataNode.get_XmlAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* (::System::Runtime::Serialization::XmlDataNode::*)()>(
    &::System::Runtime::Serialization::XmlDataNode::get_XmlAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { "get_XmlAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataNode.set_XmlAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataNode::*)(::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*)>(
    &::System::Runtime::Serialization::XmlDataNode::set_XmlAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(),
                                                             { "set_XmlAttributes", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataNode.get_XmlChildNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* (::System::Runtime::Serialization::XmlDataNode::*)()>(
    &::System::Runtime::Serialization::XmlDataNode::get_XmlChildNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { "get_XmlChildNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataNode.set_XmlChildNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataNode::*)(::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*)>(
    &::System::Runtime::Serialization::XmlDataNode::set_XmlChildNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(),
                                                             { "set_XmlChildNodes", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataNode.get_OwnerDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Runtime::Serialization::XmlDataNode::*)()>(
    &::System::Runtime::Serialization::XmlDataNode::get_OwnerDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { "get_OwnerDocument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataNode.set_OwnerDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataNode::*)(::System::Xml::XmlDocument*)>(
    &::System::Runtime::Serialization::XmlDataNode::set_OwnerDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { "set_OwnerDocument", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataNode.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataNode::*)()>(&::System::Runtime::Serialization::XmlDataNode::Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6150c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), 23 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*& System::Runtime::Serialization::XmlDataNode::__cordl_internal_get_xmlAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlAttributes;
}
constexpr ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* const& System::Runtime::Serialization::XmlDataNode::__cordl_internal_get_xmlAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlAttributes;
}
constexpr void System::Runtime::Serialization::XmlDataNode::__cordl_internal_set_xmlAttributes(::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlAttributes = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*& System::Runtime::Serialization::XmlDataNode::__cordl_internal_get_xmlChildNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlChildNodes;
}
constexpr ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* const& System::Runtime::Serialization::XmlDataNode::__cordl_internal_get_xmlChildNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlChildNodes;
}
constexpr void System::Runtime::Serialization::XmlDataNode::__cordl_internal_set_xmlChildNodes(::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlChildNodes = value;
}
constexpr ::System::Xml::XmlDocument*& System::Runtime::Serialization::XmlDataNode::__cordl_internal_get_ownerDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerDocument;
}
constexpr ::System::Xml::XmlDocument* const& System::Runtime::Serialization::XmlDataNode::__cordl_internal_get_ownerDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerDocument;
}
constexpr void System::Runtime::Serialization::XmlDataNode::__cordl_internal_set_ownerDocument(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ownerDocument = value;
}
inline void System::Runtime::Serialization::XmlDataNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* System::Runtime::Serialization::XmlDataNode::get_XmlAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { "get_XmlAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataNode::set_XmlAttributes(::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(),
                                                           { "set_XmlAttributes", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* System::Runtime::Serialization::XmlDataNode::get_XmlChildNodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { "get_XmlChildNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataNode::set_XmlChildNodes(::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(),
                                                           { "set_XmlChildNodes", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDocument* System::Runtime::Serialization::XmlDataNode::get_OwnerDocument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { "get_OwnerDocument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataNode::set_OwnerDocument(::System::Xml::XmlDocument* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), { "set_OwnerDocument", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlDataNode::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataNode*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlDataNode* System::Runtime::Serialization::XmlDataNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlDataNode*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlDataNode::XmlDataNode() {}
