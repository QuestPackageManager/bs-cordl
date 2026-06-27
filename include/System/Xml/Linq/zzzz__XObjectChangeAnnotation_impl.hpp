#pragma once
// IWYU pragma private; include "System/Xml/Linq/XObjectChangeAnnotation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XObjectChangeAnnotation_def.hpp"
#include "System/Xml/Linq/zzzz__XObjectChangeEventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*& System::Xml::Linq::XObjectChangeAnnotation::__cordl_internal_get_changing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changing;
}
constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* const& System::Xml::Linq::XObjectChangeAnnotation::__cordl_internal_get_changing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changing;
}
constexpr void System::Xml::Linq::XObjectChangeAnnotation::__cordl_internal_set_changing(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___changing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*& System::Xml::Linq::XObjectChangeAnnotation::__cordl_internal_get_changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changed;
}
constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* const& System::Xml::Linq::XObjectChangeAnnotation::__cordl_internal_get_changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changed;
}
constexpr void System::Xml::Linq::XObjectChangeAnnotation::__cordl_internal_set_changed(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___changed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XObjectChangeAnnotation::XObjectChangeAnnotation()   {
}
