#pragma once
// IWYU pragma private; include "System/Xml/XmlLinkedNode.hpp"
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlLinkedNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLinkedNode::*)(::System::Xml::XmlDocument*)>(&::System::Xml::XmlLinkedNode::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62b4ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLinkedNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLinkedNode.get_PreviousSibling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLinkedNode::*)()>(&::System::Xml::XmlLinkedNode::get_PreviousSibling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62bd1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlLinkedNode*>(), { ::i2c::class_of<::System::Xml::XmlLinkedNode*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLinkedNode.get_NextSibling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLinkedNode::*)()>(&::System::Xml::XmlLinkedNode::get_NextSibling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62bd22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlLinkedNode*>(), { ::i2c::class_of<::System::Xml::XmlLinkedNode*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlLinkedNode*& System::Xml::XmlLinkedNode::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::Xml::XmlLinkedNode* const& System::Xml::XmlLinkedNode::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::XmlLinkedNode::__cordl_internal_set_next(::System::Xml::XmlLinkedNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
inline void System::Xml::XmlLinkedNode::_ctor(::System::Xml::XmlDocument* doc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLinkedNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doc);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLinkedNode::get_PreviousSibling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlLinkedNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLinkedNode::get_NextSibling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlLinkedNode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlLinkedNode* System::Xml::XmlLinkedNode::New_ctor(::System::Xml::XmlDocument* doc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlLinkedNode*>(doc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlLinkedNode::XmlLinkedNode() {}
