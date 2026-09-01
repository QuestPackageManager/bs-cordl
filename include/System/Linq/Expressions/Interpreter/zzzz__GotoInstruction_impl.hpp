#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\GotoInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GotoInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GotoInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::GotoInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::GotoInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f8fc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GotoInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::GotoInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::GotoInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8fc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GotoInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::GotoInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::GotoInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8fc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GotoInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::GotoInstruction::*)(int32_t, bool, bool, bool)>(
    &::System::Linq::Expressions::Interpreter::GotoInstruction::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f8fc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GotoInstruction.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::GotoInstruction* (*)(int32_t, bool, bool, bool)>(
    &::System::Linq::Expressions::Interpreter::GotoInstruction::Create)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f8fc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(),
                                                             { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::GotoInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::GotoInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::GotoInstruction::Run)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f8fde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr bool& System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_get__hasResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResult;
}
constexpr bool const& System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_get__hasResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResult;
}
constexpr void System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_set__hasResult(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasResult = value;
}
constexpr bool& System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr bool const& System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr void System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue = value;
}
constexpr bool& System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_get__labelTargetGetsValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelTargetGetsValue;
}
constexpr bool const& System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_get__labelTargetGetsValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelTargetGetsValue;
}
constexpr void System::Linq::Expressions::Interpreter::GotoInstruction::__cordl_internal_set__labelTargetGetsValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____labelTargetGetsValue = value;
}
inline void System::Linq::Expressions::Interpreter::GotoInstruction::setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::GotoInstruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::GotoInstruction*>, "s_cache", ::System::Linq::Expressions::Interpreter::GotoInstruction*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::GotoInstruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::GotoInstruction*> System::Linq::Expressions::Interpreter::GotoInstruction::getStaticF_s_cache() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::GotoInstruction*>, "s_cache", ::System::Linq::Expressions::Interpreter::GotoInstruction*>();
}
inline ::StringW System::Linq::Expressions::Interpreter::GotoInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::GotoInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::GotoInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::GotoInstruction::_ctor(int32_t targetIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetIndex, hasResult, hasValue, labelTargetGetsValue);
}
inline ::System::Linq::Expressions::Interpreter::GotoInstruction* System::Linq::Expressions::Interpreter::GotoInstruction::Create(int32_t labelIndex, bool hasResult, bool hasValue,
                                                                                                                                  bool labelTargetGetsValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(),
                                                           { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::GotoInstruction*>(nullptr, ___internal_method, labelIndex, hasResult, hasValue, labelTargetGetsValue);
}
inline int32_t System::Linq::Expressions::Interpreter::GotoInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::GotoInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::GotoInstruction* System::Linq::Expressions::Interpreter::GotoInstruction::New_ctor(int32_t targetIndex, bool hasResult, bool hasValue,
                                                                                                                                    bool labelTargetGetsValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::GotoInstruction*>(targetIndex, hasResult, hasValue, labelTargetGetsValue));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::GotoInstruction::GotoInstruction() {}
