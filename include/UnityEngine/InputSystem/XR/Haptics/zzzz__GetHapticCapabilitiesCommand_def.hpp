#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Haptics/GetHapticCapabilitiesCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetHapticCapabilitiesCommand)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct GetHapticCapabilitiesCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand);
// Dependencies UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo, UnityEngine.InputSystem.LowLevel.InputDeviceCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand
#pragma pack(push, 0)
struct CORDL_TYPE GetHapticCapabilitiesCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCommand, put = __cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  __declspec(property(get = get_capabilities)) ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities capabilities;

  /// @brief Field frequencyHz, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_frequencyHz, put = __cordl_internal_set_frequencyHz)) uint32_t frequencyHz;

  /// @brief Field maxBufferSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBufferSize, put = __cordl_internal_set_maxBufferSize)) uint32_t maxBufferSize;

  /// @brief Field numChannels, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_numChannels, put = __cordl_internal_set_numChannels)) uint32_t numChannels;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Method Create, addr 0x45ea548, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand Create();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand();

  constexpr uint32_t const& __cordl_internal_get_frequencyHz() const;

  constexpr uint32_t& __cordl_internal_get_frequencyHz();

  constexpr uint32_t const& __cordl_internal_get_maxBufferSize() const;

  constexpr uint32_t& __cordl_internal_get_maxBufferSize();

  constexpr uint32_t const& __cordl_internal_get_numChannels() const;

  constexpr uint32_t& __cordl_internal_get_numChannels();

  constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr void __cordl_internal_set_frequencyHz(uint32_t value);

  constexpr void __cordl_internal_set_maxBufferSize(uint32_t value);

  constexpr void __cordl_internal_set_numChannels(uint32_t value);

  /// @brief Method get_Type, addr 0x45ea8d8, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_capabilities, addr 0x45ea5a4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities();

  /// @brief Method get_typeStatic, addr 0x45ea908, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetHapticCapabilitiesCommand();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "numChannels", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "frequencyHz", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxBufferSize", ty: "uint32_t", modifiers: "", def_value:
  // None }]
  constexpr GetHapticCapabilitiesCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t numChannels, uint32_t frequencyHz, uint32_t maxBufferSize) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___baseCommand_padding[0x0];
      /// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ___baseCommand;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___baseCommand_padding_forAlignment[0x0];
      /// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ___baseCommand_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___numChannels_padding[0x8];
      /// @brief Field numChannels, offset: 0x8, size: 0x4, def value: None
      uint32_t ___numChannels;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___numChannels_padding_forAlignment[0x8];
      /// @brief Field numChannels, offset: 0x8, size: 0x4, def value: None
      uint32_t ___numChannels_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___frequencyHz_padding[0xc];
      /// @brief Field frequencyHz, offset: 0xc, size: 0x4, def value: None
      uint32_t ___frequencyHz;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___frequencyHz_padding_forAlignment[0xc];
      /// @brief Field frequencyHz, offset: 0xc, size: 0x4, def value: None
      uint32_t ___frequencyHz_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___maxBufferSize_padding[0x10];
      /// @brief Field maxBufferSize, offset: 0x10, size: 0x4, def value: None
      uint32_t ___maxBufferSize;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___maxBufferSize_padding_forAlignment[0x10];
      /// @brief Field maxBufferSize, offset: 0x10, size: 0x4, def value: None
      uint32_t ___maxBufferSize_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6753 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand, 0x14>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand, "UnityEngine.InputSystem.XR.Haptics", "GetHapticCapabilitiesCommand");
