#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlElementEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementEventArgs_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlElementEventArgs::*)(
    ::System::Xml::XmlElement*, int32_t, int32_t, ::System::Object*, ::StringW)>(&::System::Xml::Serialization::XmlElementEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2ec2e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_set_o(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___o)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlElement*& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_elem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elem;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlElement*> const& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_elem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elem;
}
constexpr void System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_set_elem(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_qnames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnames;
}
constexpr ::StringW const& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_qnames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnames;
}
constexpr void System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_set_qnames(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___qnames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_lineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr int32_t const& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_lineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr void System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_set_lineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNumber = value;
}
constexpr int32_t& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_linePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr int32_t const& System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_get_linePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr void System::Xml::Serialization::XmlElementEventArgs::__cordl_internal_set_linePosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePosition = value;
}
inline ::System::Xml::Serialization::XmlElementEventArgs* System::Xml::Serialization::XmlElementEventArgs::New_ctor(::System::Xml::XmlElement* elem, int32_t lineNumber, int32_t linePosition,
                                                                                                                    ::System::Object* o, ::StringW qnames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlElementEventArgs*>(elem, lineNumber, linePosition, o, qnames));
}
inline void System::Xml::Serialization::XmlElementEventArgs::_ctor(::System::Xml::XmlElement* elem, int32_t lineNumber, int32_t linePosition, ::System::Object* o, ::StringW qnames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elem, lineNumber, linePosition, o, qnames);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlElementEventArgs::XmlElementEventArgs() {}
