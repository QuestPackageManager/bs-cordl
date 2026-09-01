#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\AssignLocalToClosureInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__AssignLocalToClosureInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb2c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb2c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb2c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb2c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::Run)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5fb2c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::_ctor(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction* System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::New_ctor(int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction*>(index));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction::AssignLocalToClosureInstruction() {}
