#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Haptics/SendHapticImpulseCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendHapticImpulseCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct SendHapticImpulseCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand);
// Dependencies UnityEngine.InputSystem.LowLevel.InputDeviceCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand
#pragma pack(push, 0)
struct CORDL_TYPE SendHapticImpulseCommand {
public:
  // Declarations
  /// @brief Field amplitude, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_amplitude, put = __cordl_internal_set_amplitude)) float_t amplitude;

  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCommand, put = __cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field channel, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_channel, put = __cordl_internal_set_channel)) int32_t channel;

  /// @brief Field duration, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Method Create, addr 0x63d143c, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand Create(int32_t motorChannel, float_t motorAmplitude, float_t motorDuration);

  constexpr float_t const& __cordl_internal_get_amplitude() const;

  constexpr float_t& __cordl_internal_get_amplitude();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand();

  constexpr int32_t const& __cordl_internal_get_channel() const;

  constexpr int32_t& __cordl_internal_get_channel();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set_amplitude(float_t value);

  constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr void __cordl_internal_set_channel(int32_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method get_Type, addr 0x63d5d4c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x63d5d58, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SendHapticImpulseCommand();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "amplitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SendHapticImpulseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, float_t amplitude, float_t duration) noexcept;

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
      uint8_t ___channel_padding[0x8];
      /// @brief Field channel, offset: 0x8, size: 0x4, def value: None
      int32_t ___channel;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___channel_padding_forAlignment[0x8];
      /// @brief Field channel, offset: 0x8, size: 0x4, def value: None
      int32_t ___channel_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___amplitude_padding[0xc];
      /// @brief Field amplitude, offset: 0xc, size: 0x4, def value: None
      float_t ___amplitude;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___amplitude_padding_forAlignment[0xc];
      /// @brief Field amplitude, offset: 0xc, size: 0x4, def value: None
      float_t ___amplitude_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___duration_padding[0x10];
      /// @brief Field duration, offset: 0x10, size: 0x4, def value: None
      float_t ___duration;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___duration_padding_forAlignment[0x10];
      /// @brief Field duration, offset: 0x10, size: 0x4, def value: None
      float_t ___duration_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8818 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand, 0x14>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand, "UnityEngine.InputSystem.XR.Haptics", "SendHapticImpulseCommand");
