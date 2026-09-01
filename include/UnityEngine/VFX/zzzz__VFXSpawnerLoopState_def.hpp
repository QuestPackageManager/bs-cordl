#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXSpawnerLoopState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXSpawnerLoopState)
// Forward declare root types
namespace UnityEngine::VFX {
struct VFXSpawnerLoopState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VFXSpawnerLoopState);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXSpawnerLoopState, "UnityEngine.VFX", "VFXSpawnerLoopState");
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXSpawnerLoopState
struct CORDL_TYPE VFXSpawnerLoopState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXSpawnerLoopState_Unwrapped
  enum struct __VFXSpawnerLoopState_Unwrapped : int32_t {
    __E_Finished = static_cast<int32_t>(0x0),
    __E_DelayingBeforeLoop = static_cast<int32_t>(0x1),
    __E_Looping = static_cast<int32_t>(0x2),
    __E_DelayingAfterLoop = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXSpawnerLoopState_Unwrapped() const noexcept {
    return static_cast<__VFXSpawnerLoopState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSpawnerLoopState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXSpawnerLoopState(int32_t value__) noexcept;

  /// @brief Field DelayingAfterLoop value: I32(3)
  static ::UnityEngine::VFX::VFXSpawnerLoopState const DelayingAfterLoop;

  /// @brief Field DelayingBeforeLoop value: I32(1)
  static ::UnityEngine::VFX::VFXSpawnerLoopState const DelayingBeforeLoop;

  /// @brief Field Finished value: I32(0)
  static ::UnityEngine::VFX::VFXSpawnerLoopState const Finished;

  /// @brief Field Looping value: I32(2)
  static ::UnityEngine::VFX::VFXSpawnerLoopState const Looping;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22405 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXSpawnerLoopState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXSpawnerLoopState) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX
