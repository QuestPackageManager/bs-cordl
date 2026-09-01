#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\BranchInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__OffsetInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__BranchInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchInstruction.get_Cache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> (::System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchInstruction::get_Cache)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5f8f7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(&::System::Linq::Expressions::Interpreter::BranchInstruction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f8f9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::BranchInstruction::*)(bool, bool)>(
    &::System::Linq::Expressions::Interpreter::BranchInstruction::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f8f9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f8fa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8fa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8fa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::BranchInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::BranchInstruction::Run)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8fa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr bool& System::Linq::Expressions::Interpreter::BranchInstruction::__cordl_internal_get__hasResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResult;
}
constexpr bool const& System::Linq::Expressions::Interpreter::BranchInstruction::__cordl_internal_get__hasResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResult;
}
constexpr void System::Linq::Expressions::Interpreter::BranchInstruction::__cordl_internal_set__hasResult(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasResult = value;
}
constexpr bool& System::Linq::Expressions::Interpreter::BranchInstruction::__cordl_internal_get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr bool const& System::Linq::Expressions::Interpreter::BranchInstruction::__cordl_internal_get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr void System::Linq::Expressions::Interpreter::BranchInstruction::__cordl_internal_set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue = value;
}
inline void System::Linq::Expressions::Interpreter::BranchInstruction::setStaticF_s_caches(::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>>, "s_caches", ::System::Linq::Expressions::Interpreter::BranchInstruction*>(
      std::forward<::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>>>(value));
}
inline ::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>> System::Linq::Expressions::Interpreter::BranchInstruction::getStaticF_s_caches() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>>, "s_caches",
                                           ::System::Linq::Expressions::Interpreter::BranchInstruction*>();
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::BranchInstruction::get_Cache() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::BranchInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::BranchInstruction::_ctor(bool hasResult, bool hasValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasResult, hasValue);
}
inline ::StringW System::Linq::Expressions::Interpreter::BranchInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::BranchInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::BranchInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::BranchInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::BranchInstruction* System::Linq::Expressions::Interpreter::BranchInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::BranchInstruction*>());
}
inline ::System::Linq::Expressions::Interpreter::BranchInstruction* System::Linq::Expressions::Interpreter::BranchInstruction::New_ctor(bool hasResult, bool hasValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::BranchInstruction*>(hasResult, hasValue));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::BranchInstruction::BranchInstruction() {}
