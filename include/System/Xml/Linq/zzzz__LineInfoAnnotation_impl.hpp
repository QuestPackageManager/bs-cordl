#pragma once
// IWYU pragma private; include "System\Xml\Linq\LineInfoAnnotation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__LineInfoAnnotation_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::LineInfoAnnotation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::LineInfoAnnotation::*)(int32_t, int32_t)>(&::System::Xml::Linq::LineInfoAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a31c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::LineInfoAnnotation*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Linq::LineInfoAnnotation::__cordl_internal_get_lineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr int32_t const& System::Xml::Linq::LineInfoAnnotation::__cordl_internal_get_lineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr void System::Xml::Linq::LineInfoAnnotation::__cordl_internal_set_lineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNumber = value;
}
constexpr int32_t& System::Xml::Linq::LineInfoAnnotation::__cordl_internal_get_linePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr int32_t const& System::Xml::Linq::LineInfoAnnotation::__cordl_internal_get_linePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr void System::Xml::Linq::LineInfoAnnotation::__cordl_internal_set_linePosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePosition = value;
}
inline void System::Xml::Linq::LineInfoAnnotation::_ctor(int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::LineInfoAnnotation*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineNumber, linePosition);
}
inline ::System::Xml::Linq::LineInfoAnnotation* System::Xml::Linq::LineInfoAnnotation::New_ctor(int32_t lineNumber, int32_t linePosition) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::LineInfoAnnotation*>(lineNumber, linePosition));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::LineInfoAnnotation::LineInfoAnnotation() {}
