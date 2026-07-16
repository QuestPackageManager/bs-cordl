#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/ExtendedSubmitCancelEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
CORDL_MODULE_EXPORT(ExtendedSubmitCancelEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::InputSystem::UI {
class INavigationEventData;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class ExtendedSubmitCancelEventData;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*, "UnityEngine.InputSystem.UI", "ExtendedSubmitCancelEventData");
// Dependencies UnityEngine.EventSystems.BaseEventData
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.ExtendedSubmitCancelEventData
class CORDL_TYPE ExtendedSubmitCancelEventData : public ::UnityEngine::EventSystems::BaseEventData {
public:
  // Declarations
  /// @brief Field <device>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__device_k__BackingField, put = __cordl_internal_set__device_k__BackingField)) ::UnityEngine::InputSystem::InputDevice* _device_k__BackingField;

  __declspec(property(get = get_device, put = set_device)) ::UnityEngine::InputSystem::InputDevice* device;

  /// @brief Convert operator to "::UnityEngine::InputSystem::UI::INavigationEventData"
  constexpr operator ::UnityEngine::InputSystem::UI::INavigationEventData*() noexcept;

  static inline ::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  constexpr ::UnityEngine::InputSystem::InputDevice* const& __cordl_internal_get__device_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::InputDevice*& __cordl_internal_get__device_k__BackingField();

  constexpr void __cordl_internal_set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice* value);

  /// @brief Method .ctor, addr 0x658d6d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method get_device, addr 0x658d6c0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Convert to "::UnityEngine::InputSystem::UI::INavigationEventData"
  constexpr ::UnityEngine::InputSystem::UI::INavigationEventData* i___UnityEngine__InputSystem__UI__INavigationEventData() noexcept;

  /// @brief Method set_device, addr 0x658d6c8, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::InputSystem::InputDevice* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedSubmitCancelEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtendedSubmitCancelEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedSubmitCancelEventData(ExtendedSubmitCancelEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedSubmitCancelEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedSubmitCancelEventData(ExtendedSubmitCancelEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8833 };

  /// @brief Field <device>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* ____device_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData, ____device_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData) == 0x28, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
