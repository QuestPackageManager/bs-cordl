#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_EqualsClass_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetHashCodeClass_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetValueOrDefault1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetValueOrDefault_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_HasValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_ToStringClass_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb9574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb9584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb95c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::StringW, int32_t, ::System::Reflection::MethodInfo*)>(
    &::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::Create)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5fb95cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(),
                                                             { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction.CreateGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)()>(
    &::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::CreateGetValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fb9978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), { "CreateGetValue", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::setStaticF_s_hasValue(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_hasValue", ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::getStaticF_s_hasValue() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_hasValue",
                                           ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::setStaticF_s_value(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_value", ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::getStaticF_s_value() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_value",
                                           ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::setStaticF_s_equals(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_equals", ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::getStaticF_s_equals() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_equals",
                                           ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::setStaticF_s_getHashCode(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_getHashCode",
                                    ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::getStaticF_s_getHashCode() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_getHashCode",
                                           ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::setStaticF_s_getValueOrDefault1(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_getValueOrDefault1",
                                    ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::getStaticF_s_getValueOrDefault1() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_getValueOrDefault1",
                                           ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::setStaticF_s_toString(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_toString", ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::getStaticF_s_toString() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "s_toString",
                                           ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>();
}
inline int32_t System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::Create(::StringW method, int32_t argCount,
                                                                                                                                            ::System::Reflection::MethodInfo* mi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(),
                                                           { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, method, argCount, mi);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::CreateGetValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>(), { "CreateGetValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::NullableMethodCallInstruction() {}
