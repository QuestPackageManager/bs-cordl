#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeChangedEventArgs.hpp"
#include "System/Xml/zzzz__XmlNodeChangedAction_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/zzzz__XmlNodeChangedEventArgs_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlNodeChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeChangedEventArgs::*)(
    ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::StringW, ::StringW, ::System::Xml::XmlNodeChangedAction)>(&::System::Xml::XmlNodeChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4349da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeChangedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeChangedAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeChangedEventArgs.get_Action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeChangedAction (::System::Xml::XmlNodeChangedEventArgs::*)()>(
    &::System::Xml::XmlNodeChangedEventArgs::get_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4349e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeChangedEventArgs*>::get(), "get_Action",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___node)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oldParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oldValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlNodeChangedEventArgs::_ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue, ::StringW newValue,
                                                        ::System::Xml::XmlNodeChangedAction action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeChangedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeChangedAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, oldParent, newParent, oldValue, newValue, action);
}
inline ::System::Xml::XmlNodeChangedAction System::Xml::XmlNodeChangedEventArgs::get_Action() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeChangedEventArgs*>::get(), "get_Action",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeChangedAction, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeChangedEventArgs* System::Xml::XmlNodeChangedEventArgs::New_ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent,
                                                                                              ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlNodeChangedEventArgs*>(node, oldParent, newParent, oldValue, newValue, action));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNodeChangedEventArgs::XmlNodeChangedEventArgs() {}
