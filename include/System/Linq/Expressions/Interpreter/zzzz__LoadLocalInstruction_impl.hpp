#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LoadLocalInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LoadLocalInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::LoadLocalInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb20d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb20d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb20e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::LoadLocalInstruction::Run)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fb2124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction.BoxIfIndexMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::LoadLocalInstruction::BoxIfIndexMatches)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fb21ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), { "BoxIfIndexMatches", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LoadLocalInstruction::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::LoadLocalInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LoadLocalInstruction::BoxIfIndexMatches(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(), { "BoxIfIndexMatches", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::LoadLocalInstruction* System::Linq::Expressions::Interpreter::LoadLocalInstruction::New_ctor(int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(index));
}
/// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr System::Linq::Expressions::Interpreter::LoadLocalInstruction::operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction*
System::Linq::Expressions::Interpreter::LoadLocalInstruction::i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LoadLocalInstruction::LoadLocalInstruction() {}
