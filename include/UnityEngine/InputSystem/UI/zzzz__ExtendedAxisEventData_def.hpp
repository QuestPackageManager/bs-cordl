#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\UI\ExtendedAxisEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ExtendedAxisEventData)
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
class ExtendedAxisEventData;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::UI::ExtendedAxisEventData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::UI::ExtendedAxisEventData*, "UnityEngine.InputSystem.UI", "ExtendedAxisEventData");
// Dependencies UnityEngine.EventSystems.AxisEventData
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.ExtendedAxisEventData
class CORDL_TYPE ExtendedAxisEventData : public ::UnityEngine::EventSystems::AxisEventData {
public:
  // Declarations
  /// @brief Field <device>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__device_k__BackingField, put = __cordl_internal_set__device_k__BackingField)) ::UnityEngine::InputSystem::InputDevice* _device_k__BackingField;

  __declspec(property(get = get_device, put = set_device)) ::UnityEngine::InputSystem::InputDevice* device;

  /// @brief Convert operator to "::UnityEngine::InputSystem::UI::INavigationEventData"
  constexpr operator ::UnityEngine::InputSystem::UI::INavigationEventData*() noexcept;

  static inline ::UnityEngine::InputSystem::UI::ExtendedAxisEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method ToString, addr 0x659216c, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::InputSystem::InputDevice* const& __cordl_internal_get__device_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::InputDevice*& __cordl_internal_get__device_k__BackingField();

  constexpr void __cordl_internal_set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice* value);

  /// @brief Method .ctor, addr 0x6592164, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method get_device, addr 0x6592154, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Convert to "::UnityEngine::InputSystem::UI::INavigationEventData"
  constexpr ::UnityEngine::InputSystem::UI::INavigationEventData* i___UnityEngine__InputSystem__UI__INavigationEventData() noexcept;

  /// @brief Method set_device, addr 0x659215c, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::InputSystem::InputDevice* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8858 };

  /// @brief Field <device>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* ____device_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedAxisEventData, ____device_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::UI::ExtendedAxisEventData) == 0x38, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
