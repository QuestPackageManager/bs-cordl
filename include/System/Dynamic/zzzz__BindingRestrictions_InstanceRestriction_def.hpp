#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_InstanceRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingRestrictions_InstanceRestriction)
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BindingRestrictions_InstanceRestriction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BindingRestrictions_InstanceRestriction);
// Dependencies System.Dynamic.BindingRestrictions
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions/InstanceRestriction
class CORDL_TYPE BindingRestrictions_InstanceRestriction : public ::System::Dynamic::BindingRestrictions {
public:
  // Declarations
  /// @brief Field _expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression)) ::System::Linq::Expressions::Expression* _expression;

  /// @brief Field _instance, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance)) ::System::Object* _instance;

  /// @brief Method Equals, addr 0x40fbf64, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetExpression, addr 0x40fc044, size 0x378, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  /// @brief Method GetHashCode, addr 0x40fbff8, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::BindingRestrictions_InstanceRestriction* New_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Object* instance);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__expression() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__expression();

  constexpr ::System::Object* const& __cordl_internal_get__instance() const;

  constexpr ::System::Object*& __cordl_internal_get__instance();

  constexpr void __cordl_internal_set__expression(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__instance(::System::Object* value);

  /// @brief Method .ctor, addr 0x40fb710, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* parameter, ::System::Object* instance);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingRestrictions_InstanceRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_InstanceRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingRestrictions_InstanceRestriction(BindingRestrictions_InstanceRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_InstanceRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingRestrictions_InstanceRestriction(BindingRestrictions_InstanceRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14151 };

  /// @brief Field _expression, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____expression;

  /// @brief Field _instance, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BindingRestrictions_InstanceRestriction, ____expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BindingRestrictions_InstanceRestriction, ____instance) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BindingRestrictions_InstanceRestriction, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BindingRestrictions_InstanceRestriction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BindingRestrictions_InstanceRestriction*, "System.Dynamic", "BindingRestrictions/InstanceRestriction");
