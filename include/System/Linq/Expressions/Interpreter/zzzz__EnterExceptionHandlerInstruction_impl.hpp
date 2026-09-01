#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EnterExceptionHandlerInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterExceptionHandlerInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)(bool)>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f90fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::Run)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr bool& System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::__cordl_internal_get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr bool const& System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::__cordl_internal_get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr void System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::__cordl_internal_set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue = value;
}
inline void System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::setStaticF_Void(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "Void", ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::getStaticF_Void() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "Void",
                                           ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::setStaticF_NonVoid(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "NonVoid",
                                    ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::getStaticF_NonVoid() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "NonVoid",
                                           ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::_ctor(bool hasValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasValue);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::New_ctor(bool hasValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(hasValue));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::EnterExceptionHandlerInstruction() {}
