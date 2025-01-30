#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/AttitudeState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AttitudeState)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct AttitudeState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::AttitudeState);
// Dependencies UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo, UnityEngine.Quaternion
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.AttitudeState
struct CORDL_TYPE AttitudeState {
public:
  // Declarations
  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method get_format, addr 0x460a904, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_kFormat, addr 0x460a8d4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttitudeState();

  // Ctor Parameters [CppParam { name: "attitude", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr AttitudeState(::UnityEngine::Quaternion attitude) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6919 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field attitude, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Quaternion attitude;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::AttitudeState, attitude) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::AttitudeState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::AttitudeState, "UnityEngine.InputSystem.LowLevel", "AttitudeState");
