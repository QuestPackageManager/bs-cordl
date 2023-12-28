#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Capture_def.hpp"
constexpr ::System::Text::RegularExpressions::Group*& System::Text::RegularExpressions::CaptureCollection::__get__group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Group*> const& System::Text::RegularExpressions::CaptureCollection::__get__group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr void System::Text::RegularExpressions::CaptureCollection::__set__group(::System::Text::RegularExpressions::Group* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____group)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::RegularExpressions::CaptureCollection::__get__capcount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr int32_t const& System::Text::RegularExpressions::CaptureCollection::__get__capcount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr void System::Text::RegularExpressions::CaptureCollection::__set__capcount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capcount = value;
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*>& System::Text::RegularExpressions::CaptureCollection::__get__captures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captures;
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> const&
System::Text::RegularExpressions::CaptureCollection::__get__captures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captures;
}
constexpr void
System::Text::RegularExpressions::CaptureCollection::__set__captures(::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____captures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::CaptureCollection::CaptureCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
