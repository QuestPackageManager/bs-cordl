#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LocalVariables.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVariables)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Linq::Expressions::Interpreter {
template <typename TKey, typename TValue> class HybridReferenceDictionary_2;
}
namespace System::Linq::Expressions::Interpreter {
class InstructionList;
}
namespace System::Linq::Expressions::Interpreter {
struct LocalDefinition;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariable;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariables_VariableScope;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LocalVariables;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariables_VariableScope;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LocalVariables);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LocalVariables/VariableScope
class CORDL_TYPE LocalVariables_VariableScope : public ::System::Object {
public:
  // Declarations
  /// @brief Field ChildScopes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ChildScopes,
                      put = __cordl_internal_set_ChildScopes)) ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* ChildScopes;

  /// @brief Field Parent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Parent, put = __cordl_internal_set_Parent)) ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* Parent;

  /// @brief Field Start, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Start, put = __cordl_internal_set_Start)) int32_t Start;

  /// @brief Field Stop, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Stop, put = __cordl_internal_set_Stop)) int32_t Stop;

  /// @brief Field Variable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Variable, put = __cordl_internal_set_Variable)) ::System::Linq::Expressions::Interpreter::LocalVariable* Variable;

  static inline ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* New_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* variable, int32_t start,
                                                                                                 ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* parent);

  constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* const& __cordl_internal_get_ChildScopes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>*& __cordl_internal_get_ChildScopes();

  constexpr ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* const& __cordl_internal_get_Parent() const;

  constexpr ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*& __cordl_internal_get_Parent();

  constexpr int32_t const& __cordl_internal_get_Start() const;

  constexpr int32_t& __cordl_internal_get_Start();

  constexpr int32_t const& __cordl_internal_get_Stop() const;

  constexpr int32_t& __cordl_internal_get_Stop();

  constexpr ::System::Linq::Expressions::Interpreter::LocalVariable* const& __cordl_internal_get_Variable() const;

  constexpr ::System::Linq::Expressions::Interpreter::LocalVariable*& __cordl_internal_get_Variable();

  constexpr void __cordl_internal_set_ChildScopes(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* value);

  constexpr void __cordl_internal_set_Parent(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* value);

  constexpr void __cordl_internal_set_Start(int32_t value);

  constexpr void __cordl_internal_set_Stop(int32_t value);

  constexpr void __cordl_internal_set_Variable(::System::Linq::Expressions::Interpreter::LocalVariable* value);

  /// @brief Method .ctor, addr 0x40ecdb4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::LocalVariable* variable, int32_t start, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* parent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalVariables_VariableScope();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalVariables_VariableScope", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalVariables_VariableScope(LocalVariables_VariableScope&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalVariables_VariableScope", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalVariables_VariableScope(LocalVariables_VariableScope const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13983 };

  /// @brief Field Start, offset: 0x10, size: 0x4, def value: None
  int32_t ___Start;

  /// @brief Field Stop, offset: 0x14, size: 0x4, def value: None
  int32_t ___Stop;

  /// @brief Field Variable, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::LocalVariable* ___Variable;

  /// @brief Field Parent, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* ___Parent;

  /// @brief Field ChildScopes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* ___ChildScopes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope, ___Start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope, ___Stop) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope, ___Variable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope, ___Parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope, ___ChildScopes) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LocalVariables
class CORDL_TYPE LocalVariables : public ::System::Object {
public:
  // Declarations
  using VariableScope = ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope;

  __declspec(property(get = get_ClosureVariables)) ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                                ::System::Linq::Expressions::Interpreter::LocalVariable*>* ClosureVariables;

  __declspec(property(get = get_LocalCount)) int32_t LocalCount;

  /// @brief Field _closureVariables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__closureVariables,
                      put = __cordl_internal_set__closureVariables)) ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                                                  ::System::Linq::Expressions::Interpreter::LocalVariable*>* _closureVariables;

  /// @brief Field _localCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__localCount, put = __cordl_internal_set__localCount)) int32_t _localCount;

  /// @brief Field _maxLocalCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__maxLocalCount, put = __cordl_internal_set__maxLocalCount)) int32_t _maxLocalCount;

  /// @brief Field _variables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__variables, put = __cordl_internal_set__variables)) ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<
      ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* _variables;

  /// @brief Method AddClosureVariable, addr 0x40ed024, size 0x110, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::LocalVariable* AddClosureVariable(::System::Linq::Expressions::ParameterExpression* variable);

  /// @brief Method Box, addr 0x40ecdf8, size 0x154, virtual false, abstract: false, final false
  inline void Box(::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Interpreter::InstructionList* instructions);

  /// @brief Method DefineLocal, addr 0x40ecb5c, size 0x258, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::LocalDefinition DefineLocal(::System::Linq::Expressions::ParameterExpression* variable, int32_t start);

  static inline ::System::Linq::Expressions::Interpreter::LocalVariables* New_ctor();

  /// @brief Method TryGetLocalOrClosure, addr 0x40ecf54, size 0xc8, virtual false, abstract: false, final false
  inline bool TryGetLocalOrClosure(::System::Linq::Expressions::ParameterExpression* var, ::ByRef<::System::Linq::Expressions::Interpreter::LocalVariable*> local);

  /// @brief Method UndefineLocal, addr 0x40e77f8, size 0xd4, virtual false, abstract: false, final false
  inline void UndefineLocal(::System::Linq::Expressions::Interpreter::LocalDefinition definition, int32_t end);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* const&
  __cordl_internal_get__closureVariables() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
  __cordl_internal_get__closureVariables();

  constexpr int32_t const& __cordl_internal_get__localCount() const;

  constexpr int32_t& __cordl_internal_get__localCount();

  constexpr int32_t const& __cordl_internal_get__maxLocalCount() const;

  constexpr int32_t& __cordl_internal_get__maxLocalCount();

  constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                  ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* const&
  __cordl_internal_get__variables() const;

  constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                  ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>*&
  __cordl_internal_get__variables();

  constexpr void __cordl_internal_set__closureVariables(
      ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value);

  constexpr void __cordl_internal_set__localCount(int32_t value);

  constexpr void __cordl_internal_set__maxLocalCount(int32_t value);

  constexpr void __cordl_internal_set__variables(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                                                       ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* value);

  /// @brief Method .ctor, addr 0x40ed134, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClosureVariables, addr 0x40ed01c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* get_ClosureVariables();

  /// @brief Method get_LocalCount, addr 0x40ecf4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LocalCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalVariables();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalVariables", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalVariables(LocalVariables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalVariables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalVariables(LocalVariables const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13984 };

  /// @brief Field _variables, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>*
      ____variables;

  /// @brief Field _closureVariables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* ____closureVariables;

  /// @brief Field _localCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____localCount;

  /// @brief Field _maxLocalCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____maxLocalCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables, ____variables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables, ____closureVariables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables, ____localCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariables, ____maxLocalCount) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LocalVariables, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LocalVariables);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LocalVariables*, "System.Linq.Expressions.Interpreter", "LocalVariables");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*, "System.Linq.Expressions.Interpreter", "LocalVariables/VariableScope");
