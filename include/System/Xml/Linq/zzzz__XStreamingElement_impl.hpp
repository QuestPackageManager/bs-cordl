#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XStreamingElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/Linq/zzzz__XName_def.hpp"
constexpr ::System::Xml::Linq::XName*& System::Xml::Linq::XStreamingElement::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XName*> const& System::Xml::Linq::XStreamingElement::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name;
}
constexpr void System::Xml::Linq::XStreamingElement::__set_name(::System::Xml::Linq::XName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Linq::XStreamingElement::__get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___content;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Linq::XStreamingElement::__get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___content;
}
constexpr void System::Xml::Linq::XStreamingElement::__set_content(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XStreamingElement::XStreamingElement() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
