#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Haptics/BufferedRumble.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticCapabilities_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedRumble)
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct BufferedRumble;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::BufferedRumble);
// Dependencies UnityEngine.InputSystem.XR.Haptics.HapticCapabilities
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.Haptics.BufferedRumble
struct CORDL_TYPE BufferedRumble {
public:
  // Declarations
  __declspec(property(get = get_capabilities, put = set_capabilities)) ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities capabilities;

  __declspec(property(get = get_device, put = set_device)) ::UnityEngine::InputSystem::InputDevice* device;

  /// @brief Method EnqueueRumble, addr 0x45e89ac, size 0xa8, virtual false, abstract: false, final false
  inline void EnqueueRumble(::ArrayW<uint8_t, ::Array<uint8_t>*> samples);

  /// @brief Method .ctor, addr 0x45e8850, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method get_capabilities, addr 0x45e8824, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities();

  /// @brief Method get_device, addr 0x45e8840, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Method set_capabilities, addr 0x45e8834, size 0xc, virtual false, abstract: false, final false
  inline void set_capabilities(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities value);

  /// @brief Method set_device, addr 0x45e8848, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::InputSystem::InputDevice* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedRumble();

  // Ctor Parameters [CppParam { name: "_capabilities_k__BackingField", ty: "::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities", modifiers: "", def_value: None }, CppParam { name:
  // "_device_k__BackingField", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }]
  constexpr BufferedRumble(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities _capabilities_k__BackingField, ::UnityEngine::InputSystem::InputDevice* _device_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6751 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <capabilities>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities _capabilities_k__BackingField;

  /// @brief Field <device>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* _device_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::Haptics::BufferedRumble, _capabilities_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Haptics::BufferedRumble, _device_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::BufferedRumble, "UnityEngine.InputSystem.XR.Haptics", "BufferedRumble");
