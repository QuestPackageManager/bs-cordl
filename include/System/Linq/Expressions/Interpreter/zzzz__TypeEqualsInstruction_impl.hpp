#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\TypeEqualsInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__TypeEqualsInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbec7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbec84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fbec8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbecd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::Run)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fbecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::TypeEqualsInstruction::setStaticF_Instance(::System::Linq::Expressions::Interpreter::TypeEqualsInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*, "Instance", ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction* System::Linq::Expressions::Interpreter::TypeEqualsInstruction::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*, "Instance", ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>();
}
inline int32_t System::Linq::Expressions::Interpreter::TypeEqualsInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::TypeEqualsInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::TypeEqualsInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::TypeEqualsInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::TypeEqualsInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction* System::Linq::Expressions::Interpreter::TypeEqualsInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction::TypeEqualsInstruction() {}
