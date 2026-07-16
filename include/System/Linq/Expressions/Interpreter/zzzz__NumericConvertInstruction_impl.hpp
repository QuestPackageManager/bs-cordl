#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NumericConvertInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/zzzz__TypeCode_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_Checked_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_ToUnderlying_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_Unchecked_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NumericConvertInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::NumericConvertInstruction::*)(::System::TypeCode, ::System::TypeCode, bool)>(
    &::System::Linq::Expressions::Interpreter::NumericConvertInstruction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fb418c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NumericConvertInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NumericConvertInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::NumericConvertInstruction::Run)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5fb4198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                                                           { "Run", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NumericConvertInstruction.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Linq::Expressions::Interpreter::NumericConvertInstruction::*)(::System::Object*)>(
    &::System::Linq::Expressions::Interpreter::NumericConvertInstruction::Convert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NumericConvertInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::NumericConvertInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NumericConvertInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb4304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NumericConvertInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NumericConvertInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NumericConvertInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb4348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NumericConvertInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NumericConvertInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NumericConvertInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb4350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NumericConvertInstruction.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::NumericConvertInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NumericConvertInstruction::ToString)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5fb4358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::TypeCode& System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_get__from() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____from;
}
constexpr ::System::TypeCode const& System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_get__from() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____from;
}
constexpr void System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_set__from(::System::TypeCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____from = value;
}
constexpr ::System::TypeCode& System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_get__to() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____to;
}
constexpr ::System::TypeCode const& System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_get__to() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____to;
}
constexpr void System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_set__to(::System::TypeCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____to = value;
}
constexpr bool& System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_get__isLiftedToNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLiftedToNull;
}
constexpr bool const& System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_get__isLiftedToNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLiftedToNull;
}
constexpr void System::Linq::Expressions::Interpreter::NumericConvertInstruction::__cordl_internal_set__isLiftedToNull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLiftedToNull = value;
}
inline void System::Linq::Expressions::Interpreter::NumericConvertInstruction::_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, isLiftedToNull);
}
inline int32_t System::Linq::Expressions::Interpreter::NumericConvertInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(),
                                                                                         { "Run", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Object* System::Linq::Expressions::Interpreter::NumericConvertInstruction::Convert(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::StringW System::Linq::Expressions::Interpreter::NumericConvertInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NumericConvertInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NumericConvertInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::NumericConvertInstruction::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::NumericConvertInstruction* System::Linq::Expressions::Interpreter::NumericConvertInstruction::New_ctor(::System::TypeCode from, ::System::TypeCode to,
                                                                                                                                                        bool isLiftedToNull) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::NumericConvertInstruction*>(from, to, isLiftedToNull));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::NumericConvertInstruction::NumericConvertInstruction() {}
