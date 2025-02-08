#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LabelScopeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LabelScopeInfo)
namespace System::Linq::Expressions::Interpreter {
template <typename TKey, typename TValue> class HybridReferenceDictionary_2;
}
namespace System::Linq::Expressions::Interpreter {
class LabelInfo;
}
namespace System::Linq::Expressions::Interpreter {
struct LabelScopeKind;
}
namespace System::Linq::Expressions {
class LabelTarget;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LabelScopeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LabelScopeInfo);
// Dependencies System.Linq.Expressions.Interpreter.LabelScopeKind, System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LabelScopeInfo
class CORDL_TYPE LabelScopeInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanJumpInto)) bool CanJumpInto;

  /// @brief Field Kind, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Kind, put = __cordl_internal_set_Kind)) ::System::Linq::Expressions::Interpreter::LabelScopeKind Kind;

  /// @brief Field Parent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Parent, put = __cordl_internal_set_Parent)) ::System::Linq::Expressions::Interpreter::LabelScopeInfo* Parent;

  /// @brief Field _labels, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__labels,
                      put = __cordl_internal_set__labels)) ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,
                                                                                                                                 ::System::Linq::Expressions::Interpreter::LabelInfo*>* _labels;

  /// @brief Method AddLabelInfo, addr 0x40d9be0, size 0xb0, virtual false, abstract: false, final false
  inline void AddLabelInfo(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Interpreter::LabelInfo* info);

  /// @brief Method ContainsTarget, addr 0x40d9a58, size 0x60, virtual false, abstract: false, final false
  inline bool ContainsTarget(::System::Linq::Expressions::LabelTarget* target);

  static inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo* New_ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* parent,
                                                                                   ::System::Linq::Expressions::Interpreter::LabelScopeKind kind);

  /// @brief Method TryGetLabelInfo, addr 0x40da0e4, size 0x78, virtual false, abstract: false, final false
  inline bool TryGetLabelInfo(::System::Linq::Expressions::LabelTarget* target, ::ByRef<::System::Linq::Expressions::Interpreter::LabelInfo*> info);

  constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind const& __cordl_internal_get_Kind() const;

  constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind& __cordl_internal_get_Kind();

  constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo* const& __cordl_internal_get_Parent() const;

  constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo*& __cordl_internal_get_Parent();

  constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* const&
  __cordl_internal_get__labels() const;

  constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>*&
  __cordl_internal_get__labels();

  constexpr void __cordl_internal_set_Kind(::System::Linq::Expressions::Interpreter::LabelScopeKind value);

  constexpr void __cordl_internal_set_Parent(::System::Linq::Expressions::Interpreter::LabelScopeInfo* value);

  constexpr void __cordl_internal_set__labels(
      ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* value);

  /// @brief Method .ctor, addr 0x40da0b4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* parent, ::System::Linq::Expressions::Interpreter::LabelScopeKind kind);

  /// @brief Method get_CanJumpInto, addr 0x40d9f9c, size 0x10, virtual false, abstract: false, final false
  inline bool get_CanJumpInto();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LabelScopeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LabelScopeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LabelScopeInfo(LabelScopeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LabelScopeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LabelScopeInfo(LabelScopeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13905 };

  /// @brief Field _labels, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* ____labels;

  /// @brief Field Kind, offset: 0x18, size: 0x4, def value: None
  ::System::Linq::Expressions::Interpreter::LabelScopeKind ___Kind;

  /// @brief Field Parent, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::LabelScopeInfo* ___Parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelScopeInfo, ____labels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelScopeInfo, ___Kind) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelScopeInfo, ___Parent) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LabelScopeInfo, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LabelScopeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LabelScopeInfo*, "System.Linq.Expressions.Interpreter", "LabelScopeInfo");
