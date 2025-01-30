#pragma once
// IWYU pragma private; include "UnityEngine/TooltipAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TooltipAttribute)
// Forward declare root types
namespace UnityEngine {
class TooltipAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TooltipAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TooltipAttribute
class CORDL_TYPE TooltipAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field tooltip, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tooltip, put = __cordl_internal_set_tooltip)) ::StringW tooltip;

  static inline ::UnityEngine::TooltipAttribute* New_ctor(::StringW tooltip);

  constexpr ::StringW const& __cordl_internal_get_tooltip() const;

  constexpr ::StringW& __cordl_internal_get_tooltip();

  constexpr void __cordl_internal_set_tooltip(::StringW value);

  /// @brief Method .ctor, addr 0x48a77ac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW tooltip);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TooltipAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TooltipAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TooltipAttribute(TooltipAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TooltipAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TooltipAttribute(TooltipAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10838 };

  /// @brief Field tooltip, offset: 0x10, size: 0x8, def value: None
  ::StringW ___tooltip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TooltipAttribute, ___tooltip) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TooltipAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TooltipAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TooltipAttribute*, "UnityEngine", "TooltipAttribute");
