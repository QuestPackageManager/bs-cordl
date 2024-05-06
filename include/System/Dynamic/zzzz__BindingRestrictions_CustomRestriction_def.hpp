#pragma once
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
namespace System::Dynamic {
class __BindingRestrictions__CustomRestriction;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::__BindingRestrictions__CustomRestriction);
// Type: ::CustomRestriction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::BindingRestrictions::CustomRestriction*
class CORDL_TYPE __BindingRestrictions__CustomRestriction : public ::System::Dynamic::BindingRestrictions {
public:
  // Declarations
  /// @brief Field _expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression))::System::Linq::Expressions::Expression* _expression;

  /// @brief Method Equals, addr 0x2c4ccc0, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetExpression, addr 0x2c4cd60, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  /// @brief Method GetHashCode, addr 0x2c4cd30, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Dynamic::__BindingRestrictions__CustomRestriction* New_ctor(::System::Linq::Expressions::Expression* expression);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__expression();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__expression() const;

  constexpr void __cordl_internal_set__expression(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x2c4c7b0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindingRestrictions__CustomRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__CustomRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindingRestrictions__CustomRestriction(__BindingRestrictions__CustomRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__CustomRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindingRestrictions__CustomRestriction(__BindingRestrictions__CustomRestriction const&) = delete;

  /// @brief Field _expression, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____expression;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__BindingRestrictions__CustomRestriction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__CustomRestriction, ____expression) == 0x10, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::__BindingRestrictions__CustomRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__BindingRestrictions__CustomRestriction*, "System.Dynamic", "BindingRestrictions/CustomRestriction");
