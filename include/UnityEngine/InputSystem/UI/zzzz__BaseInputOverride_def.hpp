#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/BaseInputOverride.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BaseInputOverride)
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class BaseInputOverride;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::BaseInputOverride);
// Dependencies UnityEngine.EventSystems.BaseInput
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.BaseInputOverride
class CORDL_TYPE BaseInputOverride : public ::UnityEngine::EventSystems::BaseInput {
public:
  // Declarations
  /// @brief Field <compositionString>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__compositionString_k__BackingField, put = __cordl_internal_set__compositionString_k__BackingField)) ::StringW _compositionString_k__BackingField;

  __declspec(property(get = get_compositionString)) ::StringW compositionString;

  static inline ::UnityEngine::InputSystem::UI::BaseInputOverride* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__compositionString_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__compositionString_k__BackingField();

  constexpr void __cordl_internal_set__compositionString_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x45ede70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_compositionString, addr 0x45ede68, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_compositionString();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseInputOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseInputOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseInputOverride(BaseInputOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseInputOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseInputOverride(BaseInputOverride const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6778 };

  /// @brief Field <compositionString>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____compositionString_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::BaseInputOverride, ____compositionString_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::BaseInputOverride, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::BaseInputOverride);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::BaseInputOverride*, "UnityEngine.InputSystem.UI", "BaseInputOverride");
