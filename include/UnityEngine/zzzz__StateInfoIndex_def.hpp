#pragma once
// IWYU pragma private; include "UnityEngine/StateInfoIndex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateInfoIndex)
// Forward declare root types
namespace UnityEngine {
struct StateInfoIndex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::StateInfoIndex);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.StateInfoIndex
struct CORDL_TYPE StateInfoIndex {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StateInfoIndex_Unwrapped
  enum struct __StateInfoIndex_Unwrapped : int32_t {
    __E_CurrentState = static_cast<int32_t>(0x0),
    __E_NextState = static_cast<int32_t>(0x1),
    __E_ExitState = static_cast<int32_t>(0x2),
    __E_InterruptedState = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StateInfoIndex_Unwrapped() const noexcept {
    return static_cast<__StateInfoIndex_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StateInfoIndex();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StateInfoIndex(int32_t value__) noexcept;

  /// @brief Field CurrentState value: I32(0)
  static ::UnityEngine::StateInfoIndex const CurrentState;

  /// @brief Field ExitState value: I32(2)
  static ::UnityEngine::StateInfoIndex const ExitState;

  /// @brief Field InterruptedState value: I32(3)
  static ::UnityEngine::StateInfoIndex const InterruptedState;

  /// @brief Field NextState value: I32(1)
  static ::UnityEngine::StateInfoIndex const NextState;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16863 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::StateInfoIndex, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::StateInfoIndex, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StateInfoIndex, "UnityEngine", "StateInfoIndex");
