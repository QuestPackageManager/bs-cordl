#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEventCallState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityEventCallState)
// Forward declare root types
namespace UnityEngine::Events {
struct UnityEventCallState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Events::UnityEventCallState);
// Dependencies
namespace UnityEngine::Events {
// Is value type: true
// CS Name: UnityEngine.Events.UnityEventCallState
struct CORDL_TYPE UnityEventCallState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityEventCallState_Unwrapped
  enum struct __UnityEventCallState_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_EditorAndRuntime = static_cast<int32_t>(0x1),
    __E_RuntimeOnly = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityEventCallState_Unwrapped() const noexcept {
    return static_cast<__UnityEventCallState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEventCallState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityEventCallState(int32_t value__) noexcept;

  /// @brief Field EditorAndRuntime value: I32(1)
  static ::UnityEngine::Events::UnityEventCallState const EditorAndRuntime;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::Events::UnityEventCallState const Off;

  /// @brief Field RuntimeOnly value: I32(2)
  static ::UnityEngine::Events::UnityEventCallState const RuntimeOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10984 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Events::UnityEventCallState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityEventCallState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEventCallState, "UnityEngine.Events", "UnityEventCallState");
