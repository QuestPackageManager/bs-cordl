#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LeaveExceptionHandlerInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeaveExceptionHandlerInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)(int32_t, bool)>(
    &::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f91074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f91080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f910c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f910cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* (*)(int32_t, bool)>(
    &::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::Create)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f910d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::Run)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f911e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr bool& System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::__cordl_internal_get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr bool const& System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::__cordl_internal_get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr void System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::__cordl_internal_set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue = value;
}
inline void System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>, "s_cache",
                                    ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*> System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::getStaticF_s_cache() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>, "s_cache",
                                           ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::_ctor(int32_t labelIndex, bool hasValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, labelIndex, hasValue);
}
inline ::StringW System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::Create(int32_t labelIndex, bool hasValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(nullptr, ___internal_method, labelIndex, hasValue);
}
inline int32_t System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::New_ctor(int32_t labelIndex,
                                                                                                                                                                      bool hasValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>(labelIndex, hasValue));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::LeaveExceptionHandlerInstruction() {}
