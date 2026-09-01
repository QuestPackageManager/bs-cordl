#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NegateCheckedInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_NegateCheckedInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_NegateCheckedInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_NegateCheckedInt64_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb6c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb6c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb6c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb6cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::Create)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5fb6ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), { "Create", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::NegateCheckedInstruction::setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16", ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::NegateCheckedInstruction::getStaticF_s_Int16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16", ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::NegateCheckedInstruction::setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32", ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::NegateCheckedInstruction::getStaticF_s_Int32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32", ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::NegateCheckedInstruction::setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64", ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::NegateCheckedInstruction::getStaticF_s_Int64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64", ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>();
}
inline int32_t System::Linq::Expressions::Interpreter::NegateCheckedInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NegateCheckedInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::NegateCheckedInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::NegateCheckedInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::NegateCheckedInstruction::Create(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>(), { "Create", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, type);
}
inline ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction* System::Linq::Expressions::Interpreter::NegateCheckedInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction::NegateCheckedInstruction() {}
