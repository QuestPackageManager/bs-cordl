#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\StringSwitchInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__StringSwitchInstruction_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__StrongBox_1_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::StringSwitchInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::StringSwitchInstruction::*)(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*,
                                                                                                                                   ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*)>(
    &::System::Linq::Expressions::Interpreter::StringSwitchInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f914c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(), ::i2c::type_of<::System::Runtime::CompilerServices::StrongBox_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::StringSwitchInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::StringSwitchInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::StringSwitchInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f914c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::StringSwitchInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::StringSwitchInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::StringSwitchInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9150c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::StringSwitchInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::StringSwitchInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::StringSwitchInstruction::Run)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f91514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& System::Linq::Expressions::Interpreter::StringSwitchInstruction::__cordl_internal_get__cases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cases;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& System::Linq::Expressions::Interpreter::StringSwitchInstruction::__cordl_internal_get__cases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cases;
}
constexpr void System::Linq::Expressions::Interpreter::StringSwitchInstruction::__cordl_internal_set__cases(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cases = value;
}
constexpr ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*& System::Linq::Expressions::Interpreter::StringSwitchInstruction::__cordl_internal_get__nullCase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullCase;
}
constexpr ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* const& System::Linq::Expressions::Interpreter::StringSwitchInstruction::__cordl_internal_get__nullCase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullCase;
}
constexpr void System::Linq::Expressions::Interpreter::StringSwitchInstruction::__cordl_internal_set__nullCase(::System::Runtime::CompilerServices::StrongBox_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nullCase = value;
}
inline void System::Linq::Expressions::Interpreter::StringSwitchInstruction::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* cases,
                                                                                   ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* nullCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(), ::i2c::type_of<::System::Runtime::CompilerServices::StrongBox_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cases, nullCase);
}
inline ::StringW System::Linq::Expressions::Interpreter::StringSwitchInstruction::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::StringSwitchInstruction::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::StringSwitchInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::StringSwitchInstruction*
System::Linq::Expressions::Interpreter::StringSwitchInstruction::New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* cases,
                                                                          ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* nullCase) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::StringSwitchInstruction*>(cases, nullCase));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::StringSwitchInstruction::StringSwitchInstruction() {}
