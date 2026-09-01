#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\TryFaultHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__TryFaultHandler_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryFaultHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::TryFaultHandler::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::System::Linq::Expressions::Interpreter::TryFaultHandler::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa1244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryFaultHandler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_TryStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryStartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_TryStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryStartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_set_TryStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TryStartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_TryEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryEndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_TryEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryEndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_set_TryEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TryEndIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_FinallyStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyStartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_FinallyStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyStartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_set_FinallyStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FinallyStartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_FinallyEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyEndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_FinallyEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyEndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_set_FinallyEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FinallyEndIndex = value;
}
inline void System::Linq::Expressions::Interpreter::TryFaultHandler::_ctor(int32_t tryStart, int32_t tryEnd, int32_t finallyStart, int32_t finallyEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryFaultHandler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tryStart, tryEnd, finallyStart, finallyEnd);
}
inline ::System::Linq::Expressions::Interpreter::TryFaultHandler* System::Linq::Expressions::Interpreter::TryFaultHandler::New_ctor(int32_t tryStart, int32_t tryEnd, int32_t finallyStart,
                                                                                                                                    int32_t finallyEnd) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::TryFaultHandler*>(tryStart, tryEnd, finallyStart, finallyEnd));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::TryFaultHandler::TryFaultHandler() {}
