#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LoadLocalFromClosureBoxedInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LoadLocalFromClosureBoxedInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb2568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb2570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb2578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::Run)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fb25bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::_ctor(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction* System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::New_ctor(int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction*>(index));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction::LoadLocalFromClosureBoxedInstruction() {}
