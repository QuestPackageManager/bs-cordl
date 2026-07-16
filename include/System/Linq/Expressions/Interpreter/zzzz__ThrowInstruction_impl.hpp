#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ThrowInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ThrowInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ThrowInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ThrowInstruction::*)(bool, bool)>(
    &::System::Linq::Expressions::Interpreter::ThrowInstruction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f8ba64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ThrowInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::ThrowInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::ThrowInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f8ba70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ThrowInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::ThrowInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::ThrowInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8bab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ThrowInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::ThrowInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::ThrowInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8babc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ThrowInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::ThrowInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::ThrowInstruction::Run)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f8bac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ThrowInstruction.WrapThrownObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Object*)>(&::System::Linq::Expressions::Interpreter::ThrowInstruction::WrapThrownObject)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f8bb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), { "WrapThrownObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Linq::Expressions::Interpreter::ThrowInstruction::__cordl_internal_get__hasResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResult;
}
constexpr bool const& System::Linq::Expressions::Interpreter::ThrowInstruction::__cordl_internal_get__hasResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResult;
}
constexpr void System::Linq::Expressions::Interpreter::ThrowInstruction::__cordl_internal_set__hasResult(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasResult = value;
}
constexpr bool& System::Linq::Expressions::Interpreter::ThrowInstruction::__cordl_internal_get__rethrow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rethrow;
}
constexpr bool const& System::Linq::Expressions::Interpreter::ThrowInstruction::__cordl_internal_get__rethrow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rethrow;
}
constexpr void System::Linq::Expressions::Interpreter::ThrowInstruction::__cordl_internal_set__rethrow(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rethrow = value;
}
inline void System::Linq::Expressions::Interpreter::ThrowInstruction::setStaticF_Throw(::System::Linq::Expressions::Interpreter::ThrowInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::ThrowInstruction*, "Throw", ::System::Linq::Expressions::Interpreter::ThrowInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* System::Linq::Expressions::Interpreter::ThrowInstruction::getStaticF_Throw() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::ThrowInstruction*, "Throw", ::System::Linq::Expressions::Interpreter::ThrowInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::ThrowInstruction::setStaticF_VoidThrow(::System::Linq::Expressions::Interpreter::ThrowInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::ThrowInstruction*, "VoidThrow", ::System::Linq::Expressions::Interpreter::ThrowInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* System::Linq::Expressions::Interpreter::ThrowInstruction::getStaticF_VoidThrow() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::ThrowInstruction*, "VoidThrow", ::System::Linq::Expressions::Interpreter::ThrowInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::ThrowInstruction::setStaticF_Rethrow(::System::Linq::Expressions::Interpreter::ThrowInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::ThrowInstruction*, "Rethrow", ::System::Linq::Expressions::Interpreter::ThrowInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* System::Linq::Expressions::Interpreter::ThrowInstruction::getStaticF_Rethrow() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::ThrowInstruction*, "Rethrow", ::System::Linq::Expressions::Interpreter::ThrowInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::ThrowInstruction::setStaticF_VoidRethrow(::System::Linq::Expressions::Interpreter::ThrowInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::ThrowInstruction*, "VoidRethrow", ::System::Linq::Expressions::Interpreter::ThrowInstruction*>(
      std::forward<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* System::Linq::Expressions::Interpreter::ThrowInstruction::getStaticF_VoidRethrow() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::ThrowInstruction*, "VoidRethrow", ::System::Linq::Expressions::Interpreter::ThrowInstruction*>();
}
inline void System::Linq::Expressions::Interpreter::ThrowInstruction::_ctor(bool hasResult, bool isRethrow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasResult, isRethrow);
}
inline ::StringW System::Linq::Expressions::Interpreter::ThrowInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::ThrowInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::ThrowInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::ThrowInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Exception* System::Linq::Expressions::Interpreter::ThrowInstruction::WrapThrownObject(::System::Object* thrown) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(), { "WrapThrownObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, thrown);
}
inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* System::Linq::Expressions::Interpreter::ThrowInstruction::New_ctor(bool hasResult, bool isRethrow) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::ThrowInstruction*>(hasResult, isRethrow));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ThrowInstruction::ThrowInstruction() {}
