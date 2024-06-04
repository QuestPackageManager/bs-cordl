#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/QuerySamplingFrequencyCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuerySamplingFrequencyCommand)
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
struct QuerySamplingFrequencyCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand);
// Type: UnityEngine.InputSystem.LowLevel::QuerySamplingFrequencyCommand
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::QuerySamplingFrequencyCommand
#pragma pack(push, 0)
struct CORDL_TYPE QuerySamplingFrequencyCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCommand, put = __cordl_internal_set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field frequency, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_frequency, put = __cordl_internal_set_frequency)) float_t frequency;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Method Create, addr 0x317b340, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand Create();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand();

  constexpr float_t const& __cordl_internal_get_frequency() const;

  constexpr float_t& __cordl_internal_get_frequency();

  constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr void __cordl_internal_set_frequency(float_t value);

  /// @brief Method get_Type, addr 0x317b2e0, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x317b310, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr QuerySamplingFrequencyCommand();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "frequency", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr QuerySamplingFrequencyCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, float_t frequency) noexcept;

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
      uint8_t ___frequency_padding[0x8];
      /// @brief Field frequency, offset: 0x8, size: 0x4, def value: None
      float_t ___frequency;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___frequency_padding_forAlignment[0x8];
      /// @brief Field frequency, offset: 0x8, size: 0x4, def value: None
      float_t ___frequency_forAlignment;
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand, "UnityEngine.InputSystem.LowLevel", "QuerySamplingFrequencyCommand");
