#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LeaveExceptionFilterInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeaveExceptionFilterInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f90eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f90ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::Run)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::setStaticF_Instance(::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*, "Instance", ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction* System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*, "Instance",
                                           ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction* System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction::LeaveExceptionFilterInstruction() {}
