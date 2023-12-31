#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryDimensionsCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryDimensionsCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand);
// Type: UnityEngine.InputSystem.LowLevel::QueryDimensionsCommand
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6473))
// CS Name: ::UnityEngine.InputSystem.LowLevel::QueryDimensionsCommand
#pragma pack(push, 0)
struct CORDL_TYPE QueryDimensionsCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field outDimensions, offset 0x8, size 0x8
  __declspec(property(get = __get_outDimensions, put = __set_outDimensions))::UnityEngine::Vector2 outDimensions;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr ::UnityEngine::Vector2& __get_outDimensions();

  constexpr ::UnityEngine::Vector2 const& __get_outDimensions() const;

  constexpr void __set_outDimensions(::UnityEngine::Vector2 value);

  /// @brief Method get_Type, addr 0x2ae7b64, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x2ae7b94, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create, addr 0x2ae7bc4, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand Create();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "outDimensions", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr QueryDimensionsCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, ::UnityEngine::Vector2 outDimensions) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryDimensionsCommand();

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
      uint8_t ___outDimensions_padding[0x8];
      /// @brief Field outDimensions, offset: 0x8, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___outDimensions;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___outDimensions_padding_forAlignment[0x8];
      /// @brief Field outDimensions, offset: 0x8, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___outDimensions_forAlignment;
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand, "UnityEngine.InputSystem.LowLevel", "QueryDimensionsCommand");
