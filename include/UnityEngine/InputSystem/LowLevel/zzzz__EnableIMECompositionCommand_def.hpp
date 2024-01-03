#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnableIMECompositionCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct EnableIMECompositionCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand);
// Type: UnityEngine.InputSystem.LowLevel::EnableIMECompositionCommand
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 9, calculated_native_size: 25, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6465))
// CS Name: ::UnityEngine.InputSystem.LowLevel::EnableIMECompositionCommand
#pragma pack(push, 0)
struct CORDL_TYPE EnableIMECompositionCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field m_ImeEnabled, offset 0x8, size 0x1
  __declspec(property(get = __get_m_ImeEnabled, put = __set_m_ImeEnabled)) uint8_t m_ImeEnabled;

  __declspec(property(get = get_imeEnabled)) bool imeEnabled;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr uint8_t& __get_m_ImeEnabled();

  constexpr uint8_t const& __get_m_ImeEnabled() const;

  constexpr void __set_m_ImeEnabled(uint8_t value);

  /// @brief Method get_Type, addr 0x2ae7568, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_imeEnabled, addr 0x2ae7598, size 0x10, virtual false, abstract: false, final false
  inline bool get_imeEnabled();

  /// @brief Method get_typeStatic, addr 0x2ae75a8, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create, addr 0x2ae75d8, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand Create(bool enabled);

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "m_ImeEnabled", ty: "uint8_t",
  // modifiers: "", def_value: None }]
  constexpr EnableIMECompositionCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint8_t m_ImeEnabled) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableIMECompositionCommand();

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
      uint8_t ___m_ImeEnabled_padding[0x8];
      /// @brief Field m_ImeEnabled, offset: 0x8, size: 0x1, def value: None
      uint8_t ___m_ImeEnabled;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_ImeEnabled_padding_forAlignment[0x8];
      /// @brief Field m_ImeEnabled, offset: 0x8, size: 0x1, def value: None
      uint8_t ___m_ImeEnabled_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand, "UnityEngine.InputSystem.LowLevel", "EnableIMECompositionCommand");
