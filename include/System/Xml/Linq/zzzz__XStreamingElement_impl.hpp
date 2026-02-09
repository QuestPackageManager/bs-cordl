#pragma once
// IWYU pragma private; include "System/Xml/Linq/XStreamingElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XStreamingElement_def.hpp"
#include "System/Xml/Linq/zzzz__XName_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr ::System::Xml::Linq::XName*& System::Xml::Linq::XStreamingElement::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::System::Xml::Linq::XName* const& System::Xml::Linq::XStreamingElement::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void System::Xml::Linq::XStreamingElement::__cordl_internal_set_name(::System::Xml::Linq::XName*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Linq::XStreamingElement::__cordl_internal_get_content()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content;
}
constexpr ::System::Object* const& System::Xml::Linq::XStreamingElement::__cordl_internal_get_content() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content;
}
constexpr void System::Xml::Linq::XStreamingElement::__cordl_internal_set_content(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XStreamingElement::XStreamingElement()   {
}
