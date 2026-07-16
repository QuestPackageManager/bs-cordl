#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ByRefNewInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NewInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefNewInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefNewInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ByRefNewInstruction::*)(
    ::System::Reflection::ConstructorInfo*, int32_t, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>)>(&::System::Linq::Expressions::Interpreter::ByRefNewInstruction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fb1d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefNewInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::ByRefNewInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::ByRefNewInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb1d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefNewInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::ByRefNewInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::ByRefNewInstruction::Run)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5fb1d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(),
                                                                                           { "Run", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>& System::Linq::Expressions::Interpreter::ByRefNewInstruction::__cordl_internal_get__byrefArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byrefArgs;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> const& System::Linq::Expressions::Interpreter::ByRefNewInstruction::__cordl_internal_get__byrefArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byrefArgs;
}
constexpr void System::Linq::Expressions::Interpreter::ByRefNewInstruction::__cordl_internal_set__byrefArgs(::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____byrefArgs = value;
}
inline void System::Linq::Expressions::Interpreter::ByRefNewInstruction::_ctor(::System::Reflection::ConstructorInfo* target, int32_t argumentCount,
                                                                               ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> byrefArgs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, argumentCount, byrefArgs);
}
inline ::StringW System::Linq::Expressions::Interpreter::ByRefNewInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::ByRefNewInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(),
                                                                                         { "Run", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::ByRefNewInstruction*
System::Linq::Expressions::Interpreter::ByRefNewInstruction::New_ctor(::System::Reflection::ConstructorInfo* target, int32_t argumentCount,
                                                                      ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> byrefArgs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(target, argumentCount, byrefArgs));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ByRefNewInstruction::ByRefNewInstruction() {}
