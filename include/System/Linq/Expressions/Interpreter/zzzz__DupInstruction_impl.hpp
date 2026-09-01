#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\DupInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DupInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DupInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::DupInstruction::*)()>(&::System::Linq::Expressions::Interpreter::DupInstruction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbd088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DupInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::DupInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::DupInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbd08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DupInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::DupInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::DupInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fbd094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DupInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::DupInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::DupInstruction::Run)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fbd0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::DupInstruction::setStaticF_Instance(::System::Linq::Expressions::Interpreter::DupInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::DupInstruction*, "Instance", ::System::Linq::Expressions::Interpreter::DupInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::DupInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::DupInstruction* System::Linq::Expressions::Interpreter::DupInstruction::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::DupInstruction*, "Instance", ::System::Linq::Expressions::Interpreter::DupInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::DupInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::DupInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::DupInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::DupInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::DupInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::DupInstruction* System::Linq::Expressions::Interpreter::DupInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::DupInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::DupInstruction::DupInstruction() {}
