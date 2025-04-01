#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Haptics/HapticCapabilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticCapabilities)
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities);
// Dependencies
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.Haptics.HapticCapabilities
struct CORDL_TYPE HapticCapabilities {
public:
  // Declarations
  __declspec(property(get = get_frequencyHz, put = set_frequencyHz)) uint32_t frequencyHz;

  __declspec(property(get = get_maxBufferSize, put = set_maxBufferSize)) uint32_t maxBufferSize;

  __declspec(property(get = get_numChannels, put = set_numChannels)) uint32_t numChannels;

  /// @brief Method .ctor, addr 0x45e4104, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t numChannels, uint32_t frequencyHz, uint32_t maxBufferSize);

  /// @brief Method get_frequencyHz, addr 0x45e4120, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_frequencyHz();

  /// @brief Method get_maxBufferSize, addr 0x45e4130, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_maxBufferSize();

  /// @brief Method get_numChannels, addr 0x45e4110, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_numChannels();

  /// @brief Method set_frequencyHz, addr 0x45e4128, size 0x8, virtual false, abstract: false, final false
  inline void set_frequencyHz(uint32_t value);

  /// @brief Method set_maxBufferSize, addr 0x45e4138, size 0x8, virtual false, abstract: false, final false
  inline void set_maxBufferSize(uint32_t value);

  /// @brief Method set_numChannels, addr 0x45e4118, size 0x8, virtual false, abstract: false, final false
  inline void set_numChannels(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticCapabilities();

  // Ctor Parameters [CppParam { name: "_numChannels_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_frequencyHz_k__BackingField", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_maxBufferSize_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr HapticCapabilities(uint32_t _numChannels_k__BackingField, uint32_t _frequencyHz_k__BackingField, uint32_t _maxBufferSize_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6754 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field <numChannels>k__BackingField, offset: 0x0, size: 0x4, def value: None
  uint32_t _numChannels_k__BackingField;

  /// @brief Field <frequencyHz>k__BackingField, offset: 0x4, size: 0x4, def value: None
  uint32_t _frequencyHz_k__BackingField;

  /// @brief Field <maxBufferSize>k__BackingField, offset: 0x8, size: 0x4, def value: None
  uint32_t _maxBufferSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, _numChannels_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, _frequencyHz_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, _maxBufferSize_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, "UnityEngine.InputSystem.XR.Haptics", "HapticCapabilities");
