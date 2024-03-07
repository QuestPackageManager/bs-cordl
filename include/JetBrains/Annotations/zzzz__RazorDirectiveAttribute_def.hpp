#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RazorDirectiveAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorDirectiveAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorDirectiveAttribute);
// Type: JetBrains.Annotations::RazorDirectiveAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::RazorDirectiveAttribute*
class CORDL_TYPE RazorDirectiveAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Directive, put = set_Directive))::StringW Directive;

  /// @brief Field <Directive>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Directive_k__BackingField, put = __cordl_internal_set__Directive_k__BackingField))::StringW _Directive_k__BackingField;

  static inline ::JetBrains::Annotations::RazorDirectiveAttribute* New_ctor(::StringW directive);

  constexpr ::StringW const& __cordl_internal_get__Directive_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Directive_k__BackingField();

  constexpr void __cordl_internal_set__Directive_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3022994, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW directive);

  /// @brief Method get_Directive, addr 0x30229bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Directive();

  /// @brief Method set_Directive, addr 0x30229c4, size 0x8, virtual false, abstract: false, final false
  inline void set_Directive(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorDirectiveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RazorDirectiveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorDirectiveAttribute(RazorDirectiveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorDirectiveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorDirectiveAttribute(RazorDirectiveAttribute const&) = delete;

  /// @brief Field <Directive>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Directive_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorDirectiveAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::RazorDirectiveAttribute, ____Directive_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorDirectiveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorDirectiveAttribute*, "JetBrains.Annotations", "RazorDirectiveAttribute");
