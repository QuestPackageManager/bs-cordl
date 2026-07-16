#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidSensorCapabilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AndroidSensorCapabilities)
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorCapabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorCapabilities");
// Dependencies UnityEngine.InputSystem.Android.LowLevel.AndroidSensorType
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidSensorCapabilities
struct CORDL_TYPE AndroidSensorCapabilities {
public:
  // Declarations
  /// @brief Method FromJson, addr 0x65a7740, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities FromJson(::StringW json);

  /// @brief Method ToJson, addr 0x65a76dc, size 0x64, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToString, addr 0x65a77d8, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidSensorCapabilities();

  // Ctor Parameters [CppParam { name: "sensorType", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType", modifiers: "", def_value: None }]
  constexpr AndroidSensorCapabilities(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType sensorType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8921 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field sensorType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType sensorType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, sensorType) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities) == 0x4, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
