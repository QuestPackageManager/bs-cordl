#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EnterTryFaultInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterTryFaultInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__TryFaultHandler_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f90620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction.get_ProducedContinuations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_ProducedContinuations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction.get_Handler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::TryFaultHandler* (::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9066c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), { "get_Handler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction.SetTryHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)(::System::Linq::Expressions::Interpreter::TryFaultHandler*)>(
    &::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::SetTryHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(),
                                                                                           { "SetTryHandler", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::TryFaultHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::Run)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5f9067c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::TryFaultHandler*& System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::__cordl_internal_get__tryHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tryHandler;
}
constexpr ::System::Linq::Expressions::Interpreter::TryFaultHandler* const& System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::__cordl_internal_get__tryHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tryHandler;
}
constexpr void System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::__cordl_internal_set__tryHandler(::System::Linq::Expressions::Interpreter::TryFaultHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tryHandler = value;
}
inline void System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::_ctor(int32_t targetIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetIndex);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_ProducedContinuations() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::TryFaultHandler* System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_Handler() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), { "get_Handler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::TryFaultHandler*>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::SetTryHandler(::System::Linq::Expressions::Interpreter::TryFaultHandler* tryHandler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(),
                                                                                         { "SetTryHandler", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::TryFaultHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tryHandler);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::New_ctor(int32_t targetIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(targetIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::EnterTryFaultInstruction() {}
