#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LabelInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LabelInfo)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Linq::Expressions::Interpreter {
class BranchLabel;
}
namespace System::Linq::Expressions::Interpreter {
class LabelInfo___c;
}
namespace System::Linq::Expressions::Interpreter {
class LabelScopeInfo;
}
namespace System::Linq::Expressions::Interpreter {
class LightCompiler;
}
namespace System::Linq::Expressions {
class LabelTarget;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LabelInfo;
}
namespace System::Linq::Expressions::Interpreter {
class LabelInfo___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LabelInfo);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LabelInfo___c);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LabelInfo/<>c
class CORDL_TYPE LabelInfo___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Linq::Expressions::Interpreter::LabelInfo___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0,
                      put = setStaticF___9__9_0)) ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* __9__9_0;

  static inline ::System::Linq::Expressions::Interpreter::LabelInfo___c* New_ctor();

  /// @brief Method <ValidateJump>b__9_0, addr 0x40da09c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo* _ValidateJump_b__9_0(::System::Linq::Expressions::Interpreter::LabelScopeInfo* b);

  /// @brief Method .ctor, addr 0x40da094, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::LabelInfo___c* getStaticF___9();

  static inline ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* getStaticF___9__9_0();

  static inline void setStaticF___9(::System::Linq::Expressions::Interpreter::LabelInfo___c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LabelInfo___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LabelInfo___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LabelInfo___c(LabelInfo___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LabelInfo___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LabelInfo___c(LabelInfo___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LabelInfo___c, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LabelInfo
class CORDL_TYPE LabelInfo : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Linq::Expressions::Interpreter::LabelInfo___c;

  __declspec(property(get = get_HasDefinitions)) bool HasDefinitions;

  __declspec(property(get = get_HasMultipleDefinitions)) bool HasMultipleDefinitions;

  /// @brief Field _acrossBlockJump, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__acrossBlockJump, put = __cordl_internal_set__acrossBlockJump)) bool _acrossBlockJump;

  /// @brief Field _definitions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__definitions, put = __cordl_internal_set__definitions)) ::System::Object* _definitions;

  /// @brief Field _label, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__label, put = __cordl_internal_set__label)) ::System::Linq::Expressions::Interpreter::BranchLabel* _label;

  /// @brief Field _node, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node)) ::System::Linq::Expressions::LabelTarget* _node;

  /// @brief Field _references, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__references,
                      put = __cordl_internal_set__references)) ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* _references;

  /// @brief Method AddDefinition, addr 0x40d9ab8, size 0x128, virtual false, abstract: false, final false
  inline void AddDefinition(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope);

  /// @brief Method CommonNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T CommonNode(T first, T second, ::System::Func_2<T, T>* parent);

  /// @brief Method Define, addr 0x40d9854, size 0x204, virtual false, abstract: false, final false
  inline void Define(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block);

  /// @brief Method DefinedIn, addr 0x40d9d0c, size 0xc0, virtual false, abstract: false, final false
  inline bool DefinedIn(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope);

  /// @brief Method EnsureLabel, addr 0x40d94bc, size 0x30, virtual false, abstract: false, final false
  inline void EnsureLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler);

  /// @brief Method FirstDefinition, addr 0x40d9dcc, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo* FirstDefinition();

  /// @brief Method GetLabel, addr 0x40d94a4, size 0x18, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::BranchLabel* GetLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler);

  static inline ::System::Linq::Expressions::Interpreter::LabelInfo* New_ctor(::System::Linq::Expressions::LabelTarget* node);

  /// @brief Method Reference, addr 0x40d94ec, size 0xbc, virtual false, abstract: false, final false
  inline void Reference(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block);

  /// @brief Method ValidateFinish, addr 0x40d9fac, size 0x8c, virtual false, abstract: false, final false
  inline void ValidateFinish();

  /// @brief Method ValidateJump, addr 0x40d95b8, size 0x29c, virtual false, abstract: false, final false
  inline void ValidateJump(::System::Linq::Expressions::Interpreter::LabelScopeInfo* reference);

  constexpr bool const& __cordl_internal_get__acrossBlockJump() const;

  constexpr bool& __cordl_internal_get__acrossBlockJump();

  constexpr ::System::Object* const& __cordl_internal_get__definitions() const;

  constexpr ::System::Object*& __cordl_internal_get__definitions();

  constexpr ::System::Linq::Expressions::Interpreter::BranchLabel* const& __cordl_internal_get__label() const;

  constexpr ::System::Linq::Expressions::Interpreter::BranchLabel*& __cordl_internal_get__label();

  constexpr ::System::Linq::Expressions::LabelTarget* const& __cordl_internal_get__node() const;

  constexpr ::System::Linq::Expressions::LabelTarget*& __cordl_internal_get__node();

  constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* const& __cordl_internal_get__references() const;

  constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*& __cordl_internal_get__references();

  constexpr void __cordl_internal_set__acrossBlockJump(bool value);

  constexpr void __cordl_internal_set__definitions(::System::Object* value);

  constexpr void __cordl_internal_set__label(::System::Linq::Expressions::Interpreter::BranchLabel* value);

  constexpr void __cordl_internal_set__node(::System::Linq::Expressions::LabelTarget* value);

  constexpr void __cordl_internal_set__references(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* value);

  /// @brief Method .ctor, addr 0x40d941c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::LabelTarget* node);

  /// @brief Method get_HasDefinitions, addr 0x40d95a8, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasDefinitions();

  /// @brief Method get_HasMultipleDefinitions, addr 0x40d9c90, size 0x7c, virtual false, abstract: false, final false
  inline bool get_HasMultipleDefinitions();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LabelInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LabelInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LabelInfo(LabelInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LabelInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LabelInfo(LabelInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13903 };

  /// @brief Field _node, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::LabelTarget* ____node;

  /// @brief Field _label, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::BranchLabel* ____label;

  /// @brief Field _definitions, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____definitions;

  /// @brief Field _references, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* ____references;

  /// @brief Field _acrossBlockJump, offset: 0x30, size: 0x1, def value: None
  bool ____acrossBlockJump;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelInfo, ____node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelInfo, ____label) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelInfo, ____definitions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelInfo, ____references) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelInfo, ____acrossBlockJump) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LabelInfo, 0x38>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LabelInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LabelInfo*, "System.Linq.Expressions.Interpreter", "LabelInfo");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LabelInfo___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LabelInfo___c*, "System.Linq.Expressions.Interpreter", "LabelInfo/<>c");
