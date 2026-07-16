#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ByRefMethodInfoCallInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__MethodInfoCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefMethodInfoCallInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::*)(
    ::System::Reflection::MethodInfo*, int32_t, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>)>(&::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f8944c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f8945c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::Run)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x5f894c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*>(),
                                                                                           { "Run", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>& System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::__cordl_internal_get__byrefArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byrefArgs;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> const& System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::__cordl_internal_get__byrefArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byrefArgs;
}
constexpr void System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::__cordl_internal_set__byrefArgs(::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____byrefArgs = value;
}
inline void System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::_ctor(::System::Reflection::MethodInfo* target, int32_t argumentCount,
                                                                                          ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> byrefArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, argumentCount, byrefArgs);
}
inline int32_t System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*>(),
                                                                                         { "Run", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*
System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::New_ctor(::System::Reflection::MethodInfo* target, int32_t argumentCount,
                                                                                 ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> byrefArgs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*>(target, argumentCount, byrefArgs));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::ByRefMethodInfoCallInstruction() {}
