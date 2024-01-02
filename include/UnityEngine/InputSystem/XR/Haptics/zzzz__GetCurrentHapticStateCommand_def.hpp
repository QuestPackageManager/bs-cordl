#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetCurrentHapticStateCommand)
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticState;
}
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
struct GetCurrentHapticStateCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand);
// Type: UnityEngine.InputSystem.XR.Haptics::GetCurrentHapticStateCommand
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6344))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::GetCurrentHapticStateCommand
#pragma pack(push, 0)
struct CORDL_TYPE GetCurrentHapticStateCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field samplesQueued, offset 0x8, size 0x4
  __declspec(property(get = __get_samplesQueued, put = __set_samplesQueued)) uint32_t samplesQueued;

  /// @brief Field samplesAvailable, offset 0xc, size 0x4
  __declspec(property(get = __get_samplesAvailable, put = __set_samplesAvailable)) uint32_t samplesAvailable;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  __declspec(property(get = get_currentState))::UnityEngine::InputSystem::XR::Haptics::HapticState currentState;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr uint32_t& __get_samplesQueued();

  constexpr uint32_t const& __get_samplesQueued() const;

  constexpr void __set_samplesQueued(uint32_t value);

  constexpr uint32_t& __get_samplesAvailable();

  constexpr uint32_t const& __get_samplesAvailable() const;

  constexpr void __set_samplesAvailable(uint32_t value);

  /// @brief Method get_Type, addr 0x2ac97ec, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x2ac981c, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method get_currentState, addr 0x2ac984c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::Haptics::HapticState get_currentState();

  /// @brief Method Create, addr 0x2ac9854, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand Create();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "samplesQueued", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "samplesAvailable", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GetCurrentHapticStateCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t samplesQueued, uint32_t samplesAvailable) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetCurrentHapticStateCommand();

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
      uint8_t ___samplesQueued_padding[0x8];
      /// @brief Field samplesQueued, offset: 0x8, size: 0x4, def value: None
      uint32_t ___samplesQueued;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___samplesQueued_padding_forAlignment[0x8];
      /// @brief Field samplesQueued, offset: 0x8, size: 0x4, def value: None
      uint32_t ___samplesQueued_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___samplesAvailable_padding[0xc];
      /// @brief Field samplesAvailable, offset: 0xc, size: 0x4, def value: None
      uint32_t ___samplesAvailable;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___samplesAvailable_padding_forAlignment[0xc];
      /// @brief Field samplesAvailable, offset: 0xc, size: 0x4, def value: None
      uint32_t ___samplesAvailable_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand, "UnityEngine.InputSystem.XR.Haptics", "GetCurrentHapticStateCommand");
