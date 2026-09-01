#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EnterTryCatchFinallyInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterTryCatchFinallyInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__TryCatchFinallyHandler_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.SetTryHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)(
    ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*)>(&::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::SetTryHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8ff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(),
                                                             { "SetTryHandler", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.get_Handler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* (
    ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)()>(&::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8ff30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), { "get_Handler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.get_ProducedContinuations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_ProducedContinuations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8ff38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)(int32_t, bool)>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f8ff40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.CreateTryFinally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* (*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::CreateTryFinally)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f8ff4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), { "CreateTryFinally", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.CreateTryCatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* (*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::CreateTryCatch)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f8ffa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), { "CreateTryCatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::Run)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5f8fff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f904f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f9056c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), 3 }));
    return ___internal_method;
  }
};
constexpr bool& System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_get__hasFinally() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasFinally;
}
constexpr bool const& System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_get__hasFinally() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasFinally;
}
constexpr void System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_set__hasFinally(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasFinally = value;
}
constexpr ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*& System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_get__tryHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tryHandler;
}
constexpr ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* const& System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_get__tryHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tryHandler;
}
constexpr void System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_set__tryHandler(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tryHandler = value;
}
inline void System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::SetTryHandler(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* tryHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(),
                                                           { "SetTryHandler", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tryHandler);
}
inline ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_Handler() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), { "get_Handler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_ProducedContinuations() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::_ctor(int32_t targetIndex, bool hasFinally) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetIndex, hasFinally);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::CreateTryFinally(int32_t labelIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), { "CreateTryFinally", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(nullptr, ___internal_method, labelIndex);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::CreateTryCatch() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), { "CreateTryCatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(nullptr, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::New_ctor(int32_t targetIndex,
                                                                                                                                                                    bool hasFinally) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(targetIndex, hasFinally));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::EnterTryCatchFinallyInstruction() {}
