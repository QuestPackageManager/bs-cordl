#pragma once
// IWYU pragma private; include "System\Xml\XmlNodeChangedEventArgs.hpp"
#include "System/Xml/zzzz__XmlNodeChangedAction_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/zzzz__XmlNodeChangedEventArgs_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlNodeChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeChangedEventArgs::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::StringW, ::StringW,
                                                                                                        ::System::Xml::XmlNodeChangedAction)>(&::System::Xml::XmlNodeChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62bf464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeChangedEventArgs*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeChangedAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeChangedEventArgs.get_Action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeChangedAction (::System::Xml::XmlNodeChangedEventArgs::*)()>(&::System::Xml::XmlNodeChangedEventArgs::get_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c86a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeChangedEventArgs*>(), { "get_Action", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNodeChangedAction& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr ::System::Xml::XmlNodeChangedAction const& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr void System::Xml::XmlNodeChangedEventArgs::__cordl_internal_set_action(::System::Xml::XmlNodeChangedAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___action = value;
}
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void System::Xml::XmlNodeChangedEventArgs::__cordl_internal_set_node(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___node = value;
}
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_oldParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldParent;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_oldParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldParent;
}
constexpr void System::Xml::XmlNodeChangedEventArgs::__cordl_internal_set_oldParent(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oldParent = value;
}
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_newParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newParent;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_newParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newParent;
}
constexpr void System::Xml::XmlNodeChangedEventArgs::__cordl_internal_set_newParent(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newParent = value;
}
constexpr ::StringW& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_oldValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldValue;
}
constexpr ::StringW const& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_oldValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldValue;
}
constexpr void System::Xml::XmlNodeChangedEventArgs::__cordl_internal_set_oldValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oldValue = value;
}
constexpr ::StringW& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_newValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newValue;
}
constexpr ::StringW const& System::Xml::XmlNodeChangedEventArgs::__cordl_internal_get_newValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newValue;
}
constexpr void System::Xml::XmlNodeChangedEventArgs::__cordl_internal_set_newValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newValue = value;
}
inline void System::Xml::XmlNodeChangedEventArgs::_ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue, ::StringW newValue,
                                                        ::System::Xml::XmlNodeChangedAction action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeChangedEventArgs*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeChangedAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, oldParent, newParent, oldValue, newValue, action);
}
inline ::System::Xml::XmlNodeChangedAction System::Xml::XmlNodeChangedEventArgs::get_Action() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeChangedEventArgs*>(), { "get_Action", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeChangedAction>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeChangedEventArgs* System::Xml::XmlNodeChangedEventArgs::New_ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent,
                                                                                              ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlNodeChangedEventArgs*>(node, oldParent, newParent, oldValue, newValue, action));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNodeChangedEventArgs::XmlNodeChangedEventArgs() {}
