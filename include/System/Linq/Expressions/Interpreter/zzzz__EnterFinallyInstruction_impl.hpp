#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EnterFinallyInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterFinallyInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f90868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f908ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction.get_ConsumedContinuations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_ConsumedContinuations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f908b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* (*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::Create)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f908bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), { "Create", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::Run)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f909b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::EnterFinallyInstruction::setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>, "s_cache", ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*> System::Linq::Expressions::Interpreter::EnterFinallyInstruction::getStaticF_s_cache() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>, "s_cache",
                                           ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::EnterFinallyInstruction::_ctor(int32_t labelIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, labelIndex);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_ConsumedContinuations() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* System::Linq::Expressions::Interpreter::EnterFinallyInstruction::Create(int32_t labelIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), { "Create", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(nullptr, ___internal_method, labelIndex);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterFinallyInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* System::Linq::Expressions::Interpreter::EnterFinallyInstruction::New_ctor(int32_t labelIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>(labelIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::EnterFinallyInstruction() {}
