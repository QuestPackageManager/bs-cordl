#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UseWindowsGamingInputCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct UseWindowsGamingInputCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::UseWindowsGamingInputCommand);
// Type: UnityEngine.InputSystem.LowLevel::UseWindowsGamingInputCommand
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 9, calculated_native_size: 25, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6490))
// CS Name: ::UnityEngine.InputSystem.LowLevel::UseWindowsGamingInputCommand
#pragma pack(push, 0)
struct CORDL_TYPE UseWindowsGamingInputCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field enable, offset 0x8, size 0x1
  __declspec(property(get = __get_enable, put = __set_enable)) uint8_t enable;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr uint8_t& __get_enable();

  constexpr uint8_t const& __get_enable() const;

  constexpr void __set_enable(uint8_t value);

  /// @brief Method get_Type, addr 0x2ae8540, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x2ae8570, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create, addr 0x2ae85a0, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::UseWindowsGamingInputCommand Create(bool enable);

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "enable", ty: "uint8_t",
  // modifiers: "", def_value: None }]
  constexpr UseWindowsGamingInputCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint8_t enable) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UseWindowsGamingInputCommand();

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
      uint8_t ___enable_padding[0x8];
      /// @brief Field enable, offset: 0x8, size: 0x1, def value: None
      uint8_t ___enable;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___enable_padding_forAlignment[0x8];
      /// @brief Field enable, offset: 0x8, size: 0x1, def value: None
      uint8_t ___enable_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x9) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::UseWindowsGamingInputCommand, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::UseWindowsGamingInputCommand, "UnityEngine.InputSystem.LowLevel", "UseWindowsGamingInputCommand");
