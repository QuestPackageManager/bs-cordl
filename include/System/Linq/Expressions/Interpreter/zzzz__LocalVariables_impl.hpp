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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::*)(
    ::System::Linq::Expressions::Interpreter::LocalVariable*, int32_t, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*)>(
    &::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fae690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalVariable*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>() } })));
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
  this->___Variable = value;
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
  this->___Parent = value;
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
  this->___ChildScopes = value;
}
inline void System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* variable, int32_t start,
                                                                                        ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* parent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalVariable*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variable, start, parent);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*
System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::New_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* variable, int32_t start,
                                                                               ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* parent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>(variable, start, parent));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope::LocalVariables_VariableScope() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.DefineLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LocalDefinition (::System::Linq::Expressions::Interpreter::LocalVariables::*)(
    ::System::Linq::Expressions::ParameterExpression*, int32_t)>(&::System::Linq::Expressions::Interpreter::LocalVariables::DefineLocal)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5fae444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                                                             { "DefineLocal", {}, { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.UndefineLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::Interpreter::LocalDefinition, int32_t)>(
    &::System::Linq::Expressions::Interpreter::LocalVariables::UndefineLocal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5fa9178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                                                             { "UndefineLocal", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariables::*)(
    ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::InstructionList*)>(&::System::Linq::Expressions::Interpreter::LocalVariables::Box)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5fae6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                            { "Box", {}, { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.get_LocalCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LocalVariables::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalVariables::get_LocalCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fae7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(), { "get_LocalCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.TryGetLocalOrClosure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::ParameterExpression*,
                                                                                                                          ::by_ref<::System::Linq::Expressions::Interpreter::LocalVariable*>)>(
    &::System::Linq::Expressions::Interpreter::LocalVariables::TryGetLocalOrClosure)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5fae804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                            { "TryGetLocalOrClosure",
                              {},
                              { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(), ::i2c::type_of<::by_ref<::System::Linq::Expressions::Interpreter::LocalVariable*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.get_ClosureVariables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* (
        ::System::Linq::Expressions::Interpreter::LocalVariables::*)()>(&::System::Linq::Expressions::Interpreter::LocalVariables::get_ClosureVariables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fae8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(), { "get_ClosureVariables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables.AddClosureVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LocalVariable* (
    ::System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LocalVariables::AddClosureVariable)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5fae8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                                                                                           { "AddClosureVariable", {}, { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariables._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariables::*)()>(&::System::Linq::Expressions::Interpreter::LocalVariables::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5faea34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(), { ".ctor", {}, {} })));
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
  this->____variables = value;
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
  this->____closureVariables = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                                                           { "DefineLocal", {}, { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LocalDefinition>(this, ___internal_method, variable, start);
}
inline void System::Linq::Expressions::Interpreter::LocalVariables::UndefineLocal(::System::Linq::Expressions::Interpreter::LocalDefinition definition, int32_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                                                           { "UndefineLocal", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, definition, end);
}
inline void System::Linq::Expressions::Interpreter::LocalVariables::Box(::System::Linq::Expressions::ParameterExpression* variable,
                                                                        ::System::Linq::Expressions::Interpreter::InstructionList* instructions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                          { "Box", {}, { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variable, instructions);
}
inline int32_t System::Linq::Expressions::Interpreter::LocalVariables::get_LocalCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(), { "get_LocalCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::LocalVariables::TryGetLocalOrClosure(::System::Linq::Expressions::ParameterExpression* var,
                                                                                         ::by_ref<::System::Linq::Expressions::Interpreter::LocalVariable*> local) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                          { "TryGetLocalOrClosure",
                            {},
                            { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(), ::i2c::type_of<::by_ref<::System::Linq::Expressions::Interpreter::LocalVariable*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, var, local);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*
System::Linq::Expressions::Interpreter::LocalVariables::get_ClosureVariables() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(), { "get_ClosureVariables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariable* System::Linq::Expressions::Interpreter::LocalVariables::AddClosureVariable(::System::Linq::Expressions::ParameterExpression* variable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(),
                                                                                         { "AddClosureVariable", {}, { ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LocalVariable*>(this, ___internal_method, variable);
}
inline void System::Linq::Expressions::Interpreter::LocalVariables::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalVariables*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariables* System::Linq::Expressions::Interpreter::LocalVariables::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LocalVariables*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables::LocalVariables() {}
