#pragma once
// IWYU pragma private; include "UnityEngine/SimulationStage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationStage)
// Forward declare root types
namespace UnityEngine {
struct SimulationStage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SimulationStage);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SimulationStage
struct CORDL_TYPE SimulationStage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __SimulationStage_Unwrapped
  enum struct __SimulationStage_Unwrapped : uint16_t {
    __E_None = static_cast<uint16_t>(0x0u),
    __E_PrepareSimulation = static_cast<uint16_t>(0x1u),
    __E_RunSimulation = static_cast<uint16_t>(0x2u),
    __E_PublishSimulationResults = static_cast<uint16_t>(0x4u),
    __E_All = static_cast<uint16_t>(0x7u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SimulationStage_Unwrapped() const noexcept {
    return static_cast<__SimulationStage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SimulationStage();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr SimulationStage(uint16_t value__) noexcept;

  /// @brief Field All value: U16(7)
  static ::UnityEngine::SimulationStage const All;

  /// @brief Field None value: U16(0)
  static ::UnityEngine::SimulationStage const None;

  /// @brief Field PrepareSimulation value: U16(1)
  static ::UnityEngine::SimulationStage const PrepareSimulation;

  /// @brief Field PublishSimulationResults value: U16(4)
  static ::UnityEngine::SimulationStage const PublishSimulationResults;

  /// @brief Field RunSimulation value: U16(2)
  static ::UnityEngine::SimulationStage const RunSimulation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18608 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SimulationStage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SimulationStage, 0x2>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SimulationStage, "UnityEngine", "SimulationStage");
