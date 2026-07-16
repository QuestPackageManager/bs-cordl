#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/QuoteInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__QuoteInstruction_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariable_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__QuoteInstruction_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__CatchBlock_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::*)(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*,
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fbab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(),
            { ".ctor",
              {},
              { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>(),
                ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter.VisitBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::*)(::System::Linq::Expressions::BlockExpression*)>(
        &::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::VisitBlock)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5fbab98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter.VisitCatchBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Linq::Expressions::CatchBlock* (::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::*)(::System::Linq::Expressions::CatchBlock*)>(
        &::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::VisitCatchBlock)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5fbad88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter.VisitParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::*)(::System::Linq::Expressions::ParameterExpression*)>(
        &::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::VisitParameter)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fbaf48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter.GetBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::CompilerServices::IStrongBox* (::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::*)(::System::Linq::Expressions::ParameterExpression*)>(
        &::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::GetBox)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5fbb028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(),
                                                                                           { "GetBox", {}, { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_get__variables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variables;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* const&
System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_get__variables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variables;
}
constexpr void System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_set__variables(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variables = value;
}
constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame*& System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_get__frame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frame;
}
constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame* const& System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_get__frame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frame;
}
constexpr void System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_set__frame(::System::Linq::Expressions::Interpreter::InterpretedFrame* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frame = value;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>*&
System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_get__shadowedVars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowedVars;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* const&
System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_get__shadowedVars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowedVars;
}
constexpr void System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::__cordl_internal_set__shadowedVars(
    ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowedVars = value;
}
inline void System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::_ctor(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables,
    ::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(),
                       { ".ctor",
                         {},
                         { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>(),
                           ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hoistedVariables, frame);
}
template <typename T>
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::VisitLambda(::System::Linq::Expressions::Expression_1<T>* node) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(), 15 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::VisitBlock(::System::Linq::Expressions::BlockExpression* node) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::CatchBlock* System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::CatchBlock*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::VisitParameter(::System::Linq::Expressions::ParameterExpression* node) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Runtime::CompilerServices::IStrongBox* System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::GetBox(::System::Linq::Expressions::ParameterExpression* variable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(),
                                                                                         { "GetBox", {}, { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::IStrongBox*>(this, ___internal_method, variable);
}
inline ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter* System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::New_ctor(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables,
    ::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*>(hoistedVariables, frame));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter::QuoteInstruction_ExpressionQuoter() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::QuoteInstruction::*)(
    ::System::Linq::Expressions::Expression*,
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*)>(
    &::System::Linq::Expressions::Interpreter::QuoteInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbaa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(),
            { ".ctor",
              {},
              { ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::QuoteInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::QuoteInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbaa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::QuoteInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::QuoteInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fbaa24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::QuoteInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::QuoteInstruction::Run)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fbaa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_get__operand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operand;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_get__operand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operand;
}
constexpr void System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_set__operand(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____operand = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_get__hoistedVariables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoistedVariables;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* const&
System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_get__hoistedVariables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoistedVariables;
}
constexpr void System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_set__hoistedVariables(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hoistedVariables = value;
}
inline void System::Linq::Expressions::Interpreter::QuoteInstruction::_ctor(
    ::System::Linq::Expressions::Expression* operand,
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(),
          { ".ctor",
            {},
            { ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operand, hoistedVariables);
}
inline int32_t System::Linq::Expressions::Interpreter::QuoteInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::QuoteInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::QuoteInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::QuoteInstruction* System::Linq::Expressions::Interpreter::QuoteInstruction::New_ctor(
    ::System::Linq::Expressions::Expression* operand,
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(operand, hoistedVariables));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::QuoteInstruction::QuoteInstruction() {}
