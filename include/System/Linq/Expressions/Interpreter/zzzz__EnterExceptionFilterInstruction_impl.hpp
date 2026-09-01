#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EnterExceptionFilterInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterExceptionFilterInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f90e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f90e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::Run)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::setStaticF_Instance(::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*, "Instance", ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction* System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*, "Instance",
                                           ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction* System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction::EnterExceptionFilterInstruction() {}
