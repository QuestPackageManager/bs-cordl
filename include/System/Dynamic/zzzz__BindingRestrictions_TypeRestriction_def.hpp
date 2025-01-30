#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_TypeRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingRestrictions_TypeRestriction)
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class BindingRestrictions_TypeRestriction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BindingRestrictions_TypeRestriction);
// Dependencies System.Dynamic.BindingRestrictions
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions/TypeRestriction
class CORDL_TYPE BindingRestrictions_TypeRestriction : public ::System::Dynamic::BindingRestrictions {
public:
  // Declarations
  /// @brief Field _expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression)) ::System::Linq::Expressions::Expression* _expression;

  /// @brief Field _type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Type* _type;

  /// @brief Method Equals, addr 0x40fda10, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetExpression, addr 0x40fdb28, size 0x60, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  /// @brief Method GetHashCode, addr 0x40fdad4, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::BindingRestrictions_TypeRestriction* New_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Type* type);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__expression() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__expression();

  constexpr ::System::Type* const& __cordl_internal_get__type() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__expression(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x40fd0bc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* parameter, ::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingRestrictions_TypeRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_TypeRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingRestrictions_TypeRestriction(BindingRestrictions_TypeRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_TypeRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingRestrictions_TypeRestriction(BindingRestrictions_TypeRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14148 };

  /// @brief Field _expression, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____expression;

  /// @brief Field _type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BindingRestrictions_TypeRestriction, ____expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BindingRestrictions_TypeRestriction, ____type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BindingRestrictions_TypeRestriction, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BindingRestrictions_TypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BindingRestrictions_TypeRestriction*, "System.Dynamic", "BindingRestrictions/TypeRestriction");
