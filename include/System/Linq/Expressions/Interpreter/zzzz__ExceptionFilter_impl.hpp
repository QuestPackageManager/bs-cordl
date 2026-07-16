#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExceptionFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionFilter_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ExceptionFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ExceptionFilter::*)(int32_t, int32_t, int32_t)>(
    &::System::Linq::Expressions::Interpreter::ExceptionFilter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ExceptionFilter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_LabelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LabelIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_LabelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LabelIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_set_LabelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LabelIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_StartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_StartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_set_StartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_EndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_EndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_set_EndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndIndex = value;
}
inline void System::Linq::Expressions::Interpreter::ExceptionFilter::_ctor(int32_t labelIndex, int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ExceptionFilter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, labelIndex, start, end);
}
inline ::System::Linq::Expressions::Interpreter::ExceptionFilter* System::Linq::Expressions::Interpreter::ExceptionFilter::New_ctor(int32_t labelIndex, int32_t start, int32_t end) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::ExceptionFilter*>(labelIndex, start, end));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ExceptionFilter::ExceptionFilter() {}
