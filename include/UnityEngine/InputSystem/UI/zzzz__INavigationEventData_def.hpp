#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\UI\INavigationEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INavigationEventData)
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class INavigationEventData;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::UI::INavigationEventData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::UI::INavigationEventData*, "UnityEngine.InputSystem.UI", "INavigationEventData");
// Dependencies
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.INavigationEventData
class CORDL_TYPE INavigationEventData {
public:
  // Declarations
  __declspec(property(get = get_device)) ::UnityEngine::InputSystem::InputDevice* device;

  /// @brief Method get_device, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  // Ctor Parameters [CppParam { name: "", ty: "INavigationEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INavigationEventData(INavigationEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::UI
