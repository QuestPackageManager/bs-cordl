#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendHapticImpulseCommand)
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct SendHapticImpulseCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand);
// Type: UnityEngine.InputSystem.XR.Haptics::SendHapticImpulseCommand
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6349))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::SendHapticImpulseCommand
#pragma pack(push, 0)
struct CORDL_TYPE SendHapticImpulseCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field channel, offset 0x8, size 0x4
  __declspec(property(get = __get_channel, put = __set_channel)) int32_t channel;

  /// @brief Field amplitude, offset 0xc, size 0x4
  __declspec(property(get = __get_amplitude, put = __set_amplitude)) float_t amplitude;

  /// @brief Field duration, offset 0x10, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr int32_t& __get_channel();

  constexpr int32_t const& __get_channel() const;

  constexpr void __set_channel(int32_t value);

  constexpr float_t& __get_amplitude();

  constexpr float_t const& __get_amplitude() const;

  constexpr void __set_amplitude(float_t value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  /// @brief Method get_Type addr 0x2ac99a0 size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic addr 0x2ac99d0 size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create addr 0x2ac5ce4 size 0x7c virtual false final false
  static inline ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand Create(int32_t motorChannel, float_t motorAmplitude, float_t motorDuration);

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "amplitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SendHapticImpulseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, float_t amplitude, float_t duration) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SendHapticImpulseCommand();

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
