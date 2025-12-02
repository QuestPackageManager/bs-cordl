#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsMaterialCombine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsMaterialCombine)
// Forward declare root types
namespace UnityEngine {
struct PhysicsMaterialCombine;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsMaterialCombine);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicsMaterialCombine
struct CORDL_TYPE PhysicsMaterialCombine {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsMaterialCombine_Unwrapped
  enum struct __PhysicsMaterialCombine_Unwrapped : int32_t {
    __E_Average = static_cast<int32_t>(0x0),
    __E_Multiply = static_cast<int32_t>(0x1),
    __E_Minimum = static_cast<int32_t>(0x2),
    __E_Maximum = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsMaterialCombine_Unwrapped() const noexcept {
    return static_cast<__PhysicsMaterialCombine_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsMaterialCombine();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PhysicsMaterialCombine(int32_t value__) noexcept;

  /// @brief Field Average value: I32(0)
  static ::UnityEngine::PhysicsMaterialCombine const Average;

  /// @brief Field Maximum value: I32(3)
  static ::UnityEngine::PhysicsMaterialCombine const Maximum;

  /// @brief Field Minimum value: I32(2)
  static ::UnityEngine::PhysicsMaterialCombine const Minimum;

  /// @brief Field Multiply value: I32(1)
  static ::UnityEngine::PhysicsMaterialCombine const Multiply;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18622 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicsMaterialCombine, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicsMaterialCombine, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsMaterialCombine, "UnityEngine", "PhysicsMaterialCombine");
