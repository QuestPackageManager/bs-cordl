#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ExceptionHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionHelpers_def.hpp"
#include "System/Reflection/zzzz__TargetInvocationException_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ExceptionHelpers.UnwrapAndRethrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::TargetInvocationException*)>(&::System::Linq::Expressions::Interpreter::ExceptionHelpers::UnwrapAndRethrow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faed3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ExceptionHelpers*>(),
                                                                                           { "UnwrapAndRethrow", {}, { ::i2c::type_of<::System::Reflection::TargetInvocationException*>() } })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::ExceptionHelpers::UnwrapAndRethrow(::System::Reflection::TargetInvocationException* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ExceptionHelpers*>(),
                                                                                         { "UnwrapAndRethrow", {}, { ::i2c::type_of<::System::Reflection::TargetInvocationException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ExceptionHelpers::ExceptionHelpers() {}
