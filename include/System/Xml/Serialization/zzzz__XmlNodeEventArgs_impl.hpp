#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlNodeEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlNodeEventArgs_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlNodeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Serialization::XmlNodeEventArgs::*)(::System::Xml::XmlNode*, int32_t, int32_t, ::System::Object*)>(&::System::Xml::Serialization::XmlNodeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4367a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlNodeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr ::System::Object* const& System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_set_o(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___o)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNode*& System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_get_xmlNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlNode;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_get_xmlNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlNode;
}
constexpr void System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_set_xmlNode(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_get_lineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr int32_t const& System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_get_lineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr void System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_set_lineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNumber = value;
}
constexpr int32_t& System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_get_linePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr int32_t const& System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_get_linePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr void System::Xml::Serialization::XmlNodeEventArgs::__cordl_internal_set_linePosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePosition = value;
}
inline void System::Xml::Serialization::XmlNodeEventArgs::_ctor(::System::Xml::XmlNode* xmlNode, int32_t lineNumber, int32_t linePosition, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlNodeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlNode, lineNumber, linePosition, o);
}
inline ::System::Xml::Serialization::XmlNodeEventArgs* System::Xml::Serialization::XmlNodeEventArgs::New_ctor(::System::Xml::XmlNode* xmlNode, int32_t lineNumber, int32_t linePosition,
                                                                                                              ::System::Object* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlNodeEventArgs*>(xmlNode, lineNumber, linePosition, o));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlNodeEventArgs::XmlNodeEventArgs() {}
