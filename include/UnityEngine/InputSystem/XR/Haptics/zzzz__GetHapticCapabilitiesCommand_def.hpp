#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetHapticCapabilitiesCommand)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
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
// Type: UnityEngine.InputSystem.XR.Haptics::GetHapticCapabilitiesCommand
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6432))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::GetHapticCapabilitiesCommand
#pragma pack(push, 0)
struct CORDL_TYPE GetHapticCapabilitiesCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field numChannels, offset 0x8, size 0x4
  __declspec(property(get = __get_numChannels, put = __set_numChannels)) uint32_t numChannels;

  /// @brief Field frequencyHz, offset 0xc, size 0x4
  __declspec(property(get = __get_frequencyHz, put = __set_frequencyHz)) uint32_t frequencyHz;

  /// @brief Field maxBufferSize, offset 0x10, size 0x4
  __declspec(property(get = __get_maxBufferSize, put = __set_maxBufferSize)) uint32_t maxBufferSize;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  __declspec(property(get = get_capabilities))::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities capabilities;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr uint32_t& __get_numChannels();

  constexpr uint32_t const& __get_numChannels() const;

  constexpr void __set_numChannels(uint32_t value);

  constexpr uint32_t& __get_frequencyHz();

  constexpr uint32_t const& __get_frequencyHz() const;

  constexpr void __set_frequencyHz(uint32_t value);

  constexpr uint32_t& __get_maxBufferSize();

  constexpr uint32_t const& __get_maxBufferSize() const;

  constexpr void __set_maxBufferSize(uint32_t value);

  /// @brief Method get_Type addr 0x294ab98 size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic addr 0x294abc8 size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method get_capabilities addr 0x294a864 size 0xc virtual false final false
  inline ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities();

  /// @brief Method Create addr 0x294a808 size 0x5c virtual false final false
  static inline ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand Create();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "numChannels", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "frequencyHz", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxBufferSize", ty: "uint32_t", modifiers: "", def_value:
  // None }]
  constexpr GetHapticCapabilitiesCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t numChannels, uint32_t frequencyHz, uint32_t maxBufferSize) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetHapticCapabilitiesCommand();

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
