#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/BranchFalseInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__OffsetInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__BranchFalseInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchFalseInstruction.get_Cache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> (::System::Linq::Expressions::Interpreter::BranchFalseInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchFalseInstruction::get_Cache)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f89bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchFalseInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::BranchFalseInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchFalseInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f89c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchFalseInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::BranchFalseInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchFalseInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchFalseInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::BranchFalseInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::BranchFalseInstruction::Run)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f89cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchFalseInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::BranchFalseInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchFalseInstruction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f89d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::BranchFalseInstruction::setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_cache", ::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::BranchFalseInstruction::getStaticF_s_cache() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_cache", ::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>();
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::BranchFalseInstruction::get_Cache() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::BranchFalseInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::BranchFalseInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::BranchFalseInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void System::Linq::Expressions::Interpreter::BranchFalseInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::BranchFalseInstruction* System::Linq::Expressions::Interpreter::BranchFalseInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::BranchFalseInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::BranchFalseInstruction::BranchFalseInstruction() {}
