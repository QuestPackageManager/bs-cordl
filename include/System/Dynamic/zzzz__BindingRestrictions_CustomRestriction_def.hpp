#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_CustomRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingRestrictions_CustomRestriction)
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BindingRestrictions_CustomRestriction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BindingRestrictions_CustomRestriction);
// Dependencies System.Dynamic.BindingRestrictions
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions/CustomRestriction
class CORDL_TYPE BindingRestrictions_CustomRestriction : public ::System::Dynamic::BindingRestrictions {
public:
  // Declarations
  /// @brief Field _expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression)) ::System::Linq::Expressions::Expression* _expression;

  /// @brief Method Equals, addr 0x40fa704, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetExpression, addr 0x40fa7a4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  /// @brief Method GetHashCode, addr 0x40fa774, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::BindingRestrictions_CustomRestriction* New_ctor(::System::Linq::Expressions::Expression* expression);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__expression() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__expression();

  constexpr void __cordl_internal_set__expression(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x40fa1f4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingRestrictions_CustomRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_CustomRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingRestrictions_CustomRestriction(BindingRestrictions_CustomRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_CustomRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingRestrictions_CustomRestriction(BindingRestrictions_CustomRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14144 };

  /// @brief Field _expression, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____expression;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BindingRestrictions_CustomRestriction, ____expression) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BindingRestrictions_CustomRestriction, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BindingRestrictions_CustomRestriction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BindingRestrictions_CustomRestriction*, "System.Dynamic", "BindingRestrictions/CustomRestriction");
