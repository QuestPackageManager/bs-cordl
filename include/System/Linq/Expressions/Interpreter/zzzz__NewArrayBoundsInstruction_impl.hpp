#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NewArrayBoundsInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NewArrayBoundsInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)(::System::Type*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f87d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f87d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f87d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f87d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::Run)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f87d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_get__elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementType;
}
constexpr ::System::Type* const& System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_get__elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementType;
}
constexpr void System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_set__elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementType = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_get__rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rank;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_get__rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rank;
}
constexpr void System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_set__rank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rank = value;
}
inline void System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::_ctor(::System::Type* elementType, int32_t rank) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementType, rank);
}
inline int32_t System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction* System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::New_ctor(::System::Type* elementType, int32_t rank) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(elementType, rank));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::NewArrayBoundsInstruction() {}
