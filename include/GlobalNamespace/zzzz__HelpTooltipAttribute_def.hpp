#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpTooltipAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HelpTooltipAttribute)
// Forward declare root types
namespace GlobalNamespace {
class HelpTooltipAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HelpTooltipAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HelpTooltipAttribute*, "", "HelpTooltipAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: HelpTooltipAttribute
class CORDL_TYPE HelpTooltipAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field hint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hint, put = __cordl_internal_set_hint)) ::StringW hint;

  static inline ::GlobalNamespace::HelpTooltipAttribute* New_ctor(::StringW hint);

  constexpr ::StringW const& __cordl_internal_get_hint() const;

  constexpr ::StringW& __cordl_internal_get_hint();

  constexpr void __cordl_internal_set_hint(::StringW value);

  /// @brief Method .ctor, addr 0x3309984, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW hint);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpTooltipAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpTooltipAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpTooltipAttribute(HelpTooltipAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpTooltipAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpTooltipAttribute(HelpTooltipAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23464 };

  /// @brief Field hint, offset: 0x18, size: 0x8, def value: None
  ::StringW ___hint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HelpTooltipAttribute, ___hint) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HelpTooltipAttribute) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
