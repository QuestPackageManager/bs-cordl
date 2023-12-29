#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryCanRunInBackground)
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
struct QueryCanRunInBackground;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground);
// Type: UnityEngine.InputSystem.LowLevel::QueryCanRunInBackground
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 9, calculated_native_size: 25, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6558))
// CS Name: ::UnityEngine.InputSystem.LowLevel::QueryCanRunInBackground
#pragma pack(push, 0)
struct CORDL_TYPE QueryCanRunInBackground {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field canRunInBackground, offset 0x8, size 0x1
  __declspec(property(get = __get_canRunInBackground, put = __set_canRunInBackground)) bool canRunInBackground;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr bool& __get_canRunInBackground();

  constexpr bool const& __get_canRunInBackground() const;

  constexpr void __set_canRunInBackground(bool value);

  /// @brief Method get_Type addr 0x2967d80 size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic addr 0x2967db0 size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create addr 0x2967de0 size 0x3c virtual false final false
  static inline ::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground Create();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "canRunInBackground", ty:
  // "bool", modifiers: "", def_value: None }]
  constexpr QueryCanRunInBackground(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, bool canRunInBackground) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryCanRunInBackground();

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
      uint8_t ___canRunInBackground_padding[0x8];
      /// @brief Field canRunInBackground, offset: 0x8, size: 0x1, def value: None
      bool ___canRunInBackground;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___canRunInBackground_padding_forAlignment[0x8];
      /// @brief Field canRunInBackground, offset: 0x8, size: 0x1, def value: None
      bool ___canRunInBackground_forAlignment;
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground, "UnityEngine.InputSystem.LowLevel", "QueryCanRunInBackground");
