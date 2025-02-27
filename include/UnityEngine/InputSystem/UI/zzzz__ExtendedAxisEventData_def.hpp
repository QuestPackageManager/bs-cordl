#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/ExtendedAxisEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExtendedAxisEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class ExtendedAxisEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::ExtendedAxisEventData);
// Dependencies UnityEngine.EventSystems.AxisEventData
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.ExtendedAxisEventData
class CORDL_TYPE ExtendedAxisEventData : public ::UnityEngine::EventSystems::AxisEventData {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::UI::ExtendedAxisEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method ToString, addr 0x45fb32c, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x45fb324, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedAxisEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtendedAxisEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedAxisEventData(ExtendedAxisEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedAxisEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedAxisEventData(ExtendedAxisEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6779 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::ExtendedAxisEventData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::ExtendedAxisEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::ExtendedAxisEventData*, "UnityEngine.InputSystem.UI", "ExtendedAxisEventData");
