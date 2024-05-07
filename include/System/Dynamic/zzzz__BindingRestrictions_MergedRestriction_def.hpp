#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_MergedRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
CORDL_MODULE_EXPORT(BindingRestrictions_MergedRestriction)
namespace System::Dynamic {
class BindingRestrictions;
}
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Dynamic {
class __BindingRestrictions__MergedRestriction;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::__BindingRestrictions__MergedRestriction);
// Type: ::MergedRestriction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::BindingRestrictions::MergedRestriction*
class CORDL_TYPE __BindingRestrictions__MergedRestriction : public ::System::Dynamic::BindingRestrictions {
public:
  // Declarations
  /// @brief Field Left, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Left, put = __cordl_internal_set_Left))::System::Dynamic::BindingRestrictions* Left;

  /// @brief Field Right, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Right, put = __cordl_internal_set_Right))::System::Dynamic::BindingRestrictions* Right;

  /// @brief Method GetExpression, addr 0x2c4cb70, size 0x150, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  static inline ::System::Dynamic::__BindingRestrictions__MergedRestriction* New_ctor(::System::Dynamic::BindingRestrictions* left, ::System::Dynamic::BindingRestrictions* right);

  constexpr ::System::Dynamic::BindingRestrictions*& __cordl_internal_get_Left();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::BindingRestrictions*> const& __cordl_internal_get_Left() const;

  constexpr ::System::Dynamic::BindingRestrictions*& __cordl_internal_get_Right();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::BindingRestrictions*> const& __cordl_internal_get_Right() const;

  constexpr void __cordl_internal_set_Left(::System::Dynamic::BindingRestrictions* value);

  constexpr void __cordl_internal_set_Right(::System::Dynamic::BindingRestrictions* value);

  /// @brief Method .ctor, addr 0x2c4c2d4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Dynamic::BindingRestrictions* left, ::System::Dynamic::BindingRestrictions* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindingRestrictions__MergedRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__MergedRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindingRestrictions__MergedRestriction(__BindingRestrictions__MergedRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__MergedRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindingRestrictions__MergedRestriction(__BindingRestrictions__MergedRestriction const&) = delete;

  /// @brief Field Left, offset: 0x10, size: 0x8, def value: None
  ::System::Dynamic::BindingRestrictions* ___Left;

  /// @brief Field Right, offset: 0x18, size: 0x8, def value: None
  ::System::Dynamic::BindingRestrictions* ___Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__BindingRestrictions__MergedRestriction, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__MergedRestriction, ___Left) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__MergedRestriction, ___Right) == 0x18, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::__BindingRestrictions__MergedRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__BindingRestrictions__MergedRestriction*, "System.Dynamic", "BindingRestrictions/MergedRestriction");
