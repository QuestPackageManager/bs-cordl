#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AttitudeState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct AttitudeState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::AttitudeState);
// Type: UnityEngine.InputSystem.LowLevel::AttitudeState
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6511))
// CS Name: ::UnityEngine.InputSystem.LowLevel::AttitudeState
struct CORDL_TYPE AttitudeState {
public:
  // Declarations
  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method get_kFormat addr 0x2ae8c9c size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat();

  /// @brief Method get_format addr 0x2ae8ccc size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  // Ctor Parameters [CppParam { name: "attitude", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr AttitudeState(::UnityEngine::Quaternion attitude) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttitudeState();

  /// @brief Field attitude, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Quaternion attitude;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::AttitudeState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::AttitudeState, "UnityEngine.InputSystem.LowLevel", "AttitudeState");
