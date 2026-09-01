#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\CreateDelegateInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CreateDelegateInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightDelegateCreator_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CreateDelegateInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::*)(::System::Linq::Expressions::Interpreter::LightDelegateCreator*)>(
    &::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbe830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CreateDelegateInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fbe838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CreateDelegateInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbe85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CreateDelegateInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fbe864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CreateDelegateInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::Run)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5fbe8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::LightDelegateCreator*& System::Linq::Expressions::Interpreter::CreateDelegateInstruction::__cordl_internal_get__creator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creator;
}
constexpr ::System::Linq::Expressions::Interpreter::LightDelegateCreator* const& System::Linq::Expressions::Interpreter::CreateDelegateInstruction::__cordl_internal_get__creator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creator;
}
constexpr void System::Linq::Expressions::Interpreter::CreateDelegateInstruction::__cordl_internal_set__creator(::System::Linq::Expressions::Interpreter::LightDelegateCreator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creator = value;
}
inline void System::Linq::Expressions::Interpreter::CreateDelegateInstruction::_ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delegateCreator);
}
inline int32_t System::Linq::Expressions::Interpreter::CreateDelegateInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::CreateDelegateInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::CreateDelegateInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::CreateDelegateInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*
System::Linq::Expressions::Interpreter::CreateDelegateInstruction::New_ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*>(delegateCreator));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::CreateDelegateInstruction::CreateDelegateInstruction() {}
