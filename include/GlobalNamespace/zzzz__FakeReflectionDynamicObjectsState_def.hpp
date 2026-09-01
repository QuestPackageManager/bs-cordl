#pragma once
// IWYU pragma private; include "GlobalNamespace\FakeReflectionDynamicObjectsState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FakeReflectionDynamicObjectsState)
// Forward declare root types
namespace GlobalNamespace {
struct FakeReflectionDynamicObjectsState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FakeReflectionDynamicObjectsState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FakeReflectionDynamicObjectsState, "", "FakeReflectionDynamicObjectsState");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: FakeReflectionDynamicObjectsState
struct CORDL_TYPE FakeReflectionDynamicObjectsState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FakeReflectionDynamicObjectsState_Unwrapped
  enum struct __FakeReflectionDynamicObjectsState_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_Enabled = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FakeReflectionDynamicObjectsState_Unwrapped() const noexcept {
    return static_cast<__FakeReflectionDynamicObjectsState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FakeReflectionDynamicObjectsState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FakeReflectionDynamicObjectsState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(0)
  static ::GlobalNamespace::FakeReflectionDynamicObjectsState const Disabled;

  /// @brief Field Enabled value: I32(1)
  static ::GlobalNamespace::FakeReflectionDynamicObjectsState const Enabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6534 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FakeReflectionDynamicObjectsState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FakeReflectionDynamicObjectsState) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
