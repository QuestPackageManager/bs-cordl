#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\RethrowException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RethrowException_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RethrowException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::RethrowException::*)()>(&::System::Linq::Expressions::Interpreter::RethrowException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fa1250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RethrowException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::RethrowException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RethrowException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::RethrowException* System::Linq::Expressions::Interpreter::RethrowException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::RethrowException*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::RethrowException::RethrowException() {}
