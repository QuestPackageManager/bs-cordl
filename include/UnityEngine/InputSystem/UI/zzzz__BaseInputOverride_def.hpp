#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\UI\BaseInputOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BaseInputOverride)
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class BaseInputOverride;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::UI::BaseInputOverride*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::UI::BaseInputOverride*, "UnityEngine.InputSystem.UI", "BaseInputOverride");
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

  /// @brief Method .ctor, addr 0x6592150, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_compositionString, addr 0x6592148, size 0x8, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8857 };

  /// @brief Field <compositionString>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____compositionString_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::BaseInputOverride, ____compositionString_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::UI::BaseInputOverride) == 0x28, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
