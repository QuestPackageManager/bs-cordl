#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuSeparator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DropdownMenuSeparator)
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuSeparator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenuSeparator);
// Dependencies UnityEngine.UIElements.DropdownMenuItem
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DropdownMenuSeparator
class CORDL_TYPE DropdownMenuSeparator : public ::UnityEngine::UIElements::DropdownMenuItem {
public:
  // Declarations
  /// @brief Field <subMenuPath>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__subMenuPath_k__BackingField, put = __cordl_internal_set__subMenuPath_k__BackingField)) ::StringW _subMenuPath_k__BackingField;

  static inline ::UnityEngine::UIElements::DropdownMenuSeparator* New_ctor(::StringW subMenuPath);

  constexpr ::StringW const& __cordl_internal_get__subMenuPath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__subMenuPath_k__BackingField();

  constexpr void __cordl_internal_set__subMenuPath_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4a219b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW subMenuPath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenuSeparator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenuSeparator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownMenuSeparator(DropdownMenuSeparator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenuSeparator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownMenuSeparator(DropdownMenuSeparator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5771 };

  /// @brief Field <subMenuPath>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____subMenuPath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuSeparator, ____subMenuPath_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenuSeparator, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenuSeparator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuSeparator*, "UnityEngine.UIElements", "DropdownMenuSeparator");
