#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\GreaterThanOrEqualInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualChar_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f963c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f963c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f963d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::*)(::System::Object*)>(
    &::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f96414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::Create)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x5f9641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::__cordl_internal_get__nullValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullValue;
}
constexpr ::System::Object* const& System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::__cordl_internal_get__nullValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullValue;
}
constexpr void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::__cordl_internal_set__nullValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nullValue = value;
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_SByte(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_SByte", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_SByte() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_SByte", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_Int16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_Char(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Char", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_Char() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Char", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_Int32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_Int64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_Byte(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Byte", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_Byte() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Byte", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt16", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_UInt16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt16", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt32", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_UInt32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt32", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt64", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_UInt64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt64", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_Single(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Single", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_Single() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Single", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_Double(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Double", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_Double() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Double", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullSByte(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullSByte", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullSByte() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullSByte", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullInt16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullInt16", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullInt16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullInt16", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullChar(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullChar", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullChar() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullChar", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullInt32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullInt32", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullInt32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullInt32", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullInt64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullInt64", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullInt64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullInt64", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullByte(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullByte", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullByte() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullByte", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullUInt16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullUInt16", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullUInt16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullUInt16", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullUInt32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullUInt32", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullUInt32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullUInt32", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullUInt64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullUInt64", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullUInt64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullUInt64", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullSingle(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullSingle", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullSingle() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullSingle", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::setStaticF_s_liftedToNullDouble(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullDouble", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::getStaticF_s_liftedToNullDouble() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_liftedToNullDouble", ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>();
}
inline int32_t System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::_ctor(::System::Object* nullValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nullValue);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::Create(::System::Type* type, bool liftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, type, liftedToNull);
}
inline ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction* System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::New_ctor(::System::Object* nullValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction*>(nullValue));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualInstruction() {}
