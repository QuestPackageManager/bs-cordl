#pragma once
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
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::*)(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*,
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c4ac04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InterpretedFrame*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter.VisitBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::*)(::System::Linq::Expressions::BlockExpression*)>(
        &::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::VisitBlock)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2c4ac98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter.VisitCatchBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Linq::Expressions::CatchBlock* (::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::*)(::System::Linq::Expressions::CatchBlock*)>(
        &::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::VisitCatchBlock)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2c4ae30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter.VisitParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::*)(::System::Linq::Expressions::ParameterExpression*)>(
        &::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::VisitParameter)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c4afcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter.GetBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::IStrongBox* (
    ::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::*)(::System::Linq::Expressions::ParameterExpression*)>(
    &::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::GetBox)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2c4b098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), "GetBox",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_get__variables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variables;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*> const&
System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_get__variables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variables;
}
constexpr void System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_set__variables(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____variables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame*& System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_get__frame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frame;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::InterpretedFrame*> const&
System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_get__frame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frame;
}
constexpr void System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_set__frame(::System::Linq::Expressions::Interpreter::InterpretedFrame* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____frame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>*&
System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_get__shadowedVars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowedVars;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>*> const&
System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_get__shadowedVars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowedVars;
}
constexpr void System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__cordl_internal_set__shadowedVars(
    ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shadowedVars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter* System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::New_ctor(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables,
    ::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>(hoistedVariables, frame));
}
inline void System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::_ctor(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables,
    ::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InterpretedFrame*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hoistedVariables, frame);
}
template <typename T>
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::VisitLambda(::System::Linq::Expressions::Expression_1<T>* node) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::VisitBlock(::System::Linq::Expressions::BlockExpression* node) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::CatchBlock* System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::CatchBlock*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::VisitParameter(::System::Linq::Expressions::ParameterExpression* node) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Runtime::CompilerServices::IStrongBox*
System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::GetBox(::System::Linq::Expressions::ParameterExpression* variable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter*>::get(), "GetBox",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::IStrongBox*, false>(this, ___internal_method, variable);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__QuoteInstruction__ExpressionQuoter::__QuoteInstruction__ExpressionQuoter() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::QuoteInstruction::*)(
    ::System::Linq::Expressions::Expression*,
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*)>(
    &::System::Linq::Expressions::Interpreter::QuoteInstruction::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c4aaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::QuoteInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::QuoteInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4ab18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::QuoteInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::QuoteInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c4ab20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::QuoteInstruction.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::QuoteInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::QuoteInstruction::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c4ab60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_get__operand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operand;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_get__operand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operand;
}
constexpr void System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_set__operand(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____operand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_get__hoistedVariables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoistedVariables;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*> const&
System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_get__hoistedVariables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoistedVariables;
}
constexpr void System::Linq::Expressions::Interpreter::QuoteInstruction::__cordl_internal_set__hoistedVariables(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoistedVariables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Interpreter::QuoteInstruction* System::Linq::Expressions::Interpreter::QuoteInstruction::New_ctor(
    ::System::Linq::Expressions::Expression* operand,
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::QuoteInstruction*>(operand, hoistedVariables));
}
inline void System::Linq::Expressions::Interpreter::QuoteInstruction::_ctor(
    ::System::Linq::Expressions::Expression* operand,
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operand, hoistedVariables);
}
inline int32_t System::Linq::Expressions::Interpreter::QuoteInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::QuoteInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::QuoteInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::QuoteInstruction*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::QuoteInstruction::QuoteInstruction() {}
