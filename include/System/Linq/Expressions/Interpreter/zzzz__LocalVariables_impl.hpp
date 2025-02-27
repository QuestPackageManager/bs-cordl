#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LocalVariables.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__HybridReferenceDictionary_2_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariable_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::*)(
    ::System::Linq::Expressions::Interpreter::LocalVariable*, int32_t, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*)>(
    &::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x40f8a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Start;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Start;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_set_Start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Start = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_Stop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Stop;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_Stop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Stop;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_set_Stop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Stop = value;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariable*& System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_Variable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Variable;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariable* const& System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_Variable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Variable;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_set_Variable(::System::Linq::Expressions::Interpreter::LocalVariable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Variable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*& System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parent;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* const& System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parent;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_set_Parent(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>*&
System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_ChildScopes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChildScopes;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* const&
System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_get_ChildScopes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChildScopes;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::__cordl_internal_set_ChildScopes(
    ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ChildScopes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* variable, int32_t start,
                                                                                        ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, variable, start, parent);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*
System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::New_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* variable, int32_t start,
                                                                               ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* parent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>(variable, start, parent));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::LocalVariables_VariableScope() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.DefineLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LocalDefinition (
    ::System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::ParameterExpression*, int32_t)>(&::System::Linq::Expressions::Interpreter::LocalVariables::DefineLocal)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x40f87e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "DefineLocal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.UndefineLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariables::*)(
    ::System::Linq::Expressions::Interpreter::LocalDefinition, int32_t)>(&::System::Linq::Expressions::Interpreter::LocalVariables::UndefineLocal)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x40f3480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "UndefineLocal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalDefinition>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.Box
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariables::*)(
    ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::InstructionList*)>(&::System::Linq::Expressions::Interpreter::LocalVariables::Box)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x40f8a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "Box", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InstructionList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.get_LocalCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LocalVariables::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalVariables::get_LocalCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f8bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(),
                                                                               "get_LocalCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.TryGetLocalOrClosure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LocalVariables::*)(
    ::System::Linq::Expressions::ParameterExpression*, ::ByRef<::System::Linq::Expressions::Interpreter::LocalVariable*>)>(
    &::System::Linq::Expressions::Interpreter::LocalVariables::TryGetLocalOrClosure)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x40f8bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "TryGetLocalOrClosure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Linq::Expressions::Interpreter::LocalVariable*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.get_ClosureVariables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* (
        ::System::Linq::Expressions::Interpreter::LocalVariables::*)()>(&::System::Linq::Expressions::Interpreter::LocalVariables::get_ClosureVariables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f8ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(),
                                                                               "get_ClosureVariables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.AddClosureVariable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LocalVariable* (
    ::System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LocalVariables::AddClosureVariable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x40f8cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "AddClosureVariable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariables::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalVariables::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x40f8dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>*&
System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_get__variables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variables;
}
constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* const&
System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_get__variables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variables;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_set__variables(
    ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____variables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_get__closureVariables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closureVariables;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* const&
System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_get__closureVariables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closureVariables;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_set__closureVariables(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closureVariables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_get__localCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localCount;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_get__localCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localCount;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_set__localCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localCount = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_get__maxLocalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLocalCount;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_get__maxLocalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLocalCount;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariables::__cordl_internal_set__maxLocalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxLocalCount = value;
}
inline ::System::Linq::Expressions::Interpreter::LocalDefinition System::Linq::Expressions::Interpreter::LocalVariables::DefineLocal(::System::Linq::Expressions::ParameterExpression* variable,
                                                                                                                                     int32_t start) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "DefineLocal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LocalDefinition, false>(this, ___internal_method, variable, start);
}
inline void System::Linq::Expressions::Interpreter::LocalVariables::UndefineLocal(::System::Linq::Expressions::Interpreter::LocalDefinition definition, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "UndefineLocal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalDefinition>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, definition, end);
}
inline void System::Linq::Expressions::Interpreter::LocalVariables::Box(::System::Linq::Expressions::ParameterExpression* variable,
                                                                        ::System::Linq::Expressions::Interpreter::InstructionList* instructions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "Box", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InstructionList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, variable, instructions);
}
inline int32_t System::Linq::Expressions::Interpreter::LocalVariables::get_LocalCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(),
                                                                             "get_LocalCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::LocalVariables::TryGetLocalOrClosure(::System::Linq::Expressions::ParameterExpression* var,
                                                                                         ::ByRef<::System::Linq::Expressions::Interpreter::LocalVariable*> local) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "TryGetLocalOrClosure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Linq::Expressions::Interpreter::LocalVariable*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, var, local);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*
System::Linq::Expressions::Interpreter::LocalVariables::get_ClosureVariables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(),
                                                                             "get_ClosureVariables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*,
                                             false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariable* System::Linq::Expressions::Interpreter::LocalVariables::AddClosureVariable(::System::Linq::Expressions::ParameterExpression* variable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(), "AddClosureVariable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LocalVariable*, false>(this, ___internal_method, variable);
}
inline void System::Linq::Expressions::Interpreter::LocalVariables::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariables* System::Linq::Expressions::Interpreter::LocalVariables::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LocalVariables*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables::LocalVariables() {}
