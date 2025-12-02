#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeIdAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ColorSchemeIdAttribute)
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeIdAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeIdAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemeIdAttribute
class CORDL_TYPE ColorSchemeIdAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field emptyExplanation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_emptyExplanation, put = __cordl_internal_set_emptyExplanation)) ::StringW emptyExplanation;

  /// @brief Field emptyIsAllowed, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_emptyIsAllowed, put = __cordl_internal_set_emptyIsAllowed)) bool emptyIsAllowed;

  static inline ::GlobalNamespace::ColorSchemeIdAttribute* New_ctor(::StringW emptyExplanation);

  constexpr ::StringW const& __cordl_internal_get_emptyExplanation() const;

  constexpr ::StringW& __cordl_internal_get_emptyExplanation();

  constexpr bool const& __cordl_internal_get_emptyIsAllowed() const;

  constexpr bool& __cordl_internal_get_emptyIsAllowed();

  constexpr void __cordl_internal_set_emptyExplanation(::StringW value);

  constexpr void __cordl_internal_set_emptyIsAllowed(bool value);

  /// @brief Method .ctor, addr 0x35d1390, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW emptyExplanation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeIdAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeIdAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeIdAttribute(ColorSchemeIdAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeIdAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeIdAttribute(ColorSchemeIdAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22738 };

  /// @brief Field emptyIsAllowed, offset: 0x15, size: 0x1, def value: None
  bool ___emptyIsAllowed;

  /// @brief Field emptyExplanation, offset: 0x18, size: 0x8, def value: None
  ::StringW ___emptyExplanation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSchemeIdAttribute, ___emptyIsAllowed) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeIdAttribute, ___emptyExplanation) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeIdAttribute, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeIdAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeIdAttribute*, "", "ColorSchemeIdAttribute");
