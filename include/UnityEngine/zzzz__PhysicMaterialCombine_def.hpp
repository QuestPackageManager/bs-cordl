#pragma once
// IWYU pragma private; include "UnityEngine/PhysicMaterialCombine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicMaterialCombine)
// Forward declare root types
namespace UnityEngine {
struct PhysicMaterialCombine;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicMaterialCombine);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicMaterialCombine
struct CORDL_TYPE PhysicMaterialCombine {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicMaterialCombine_Unwrapped
  enum struct __PhysicMaterialCombine_Unwrapped : int32_t {
    __E_Average = static_cast<int32_t>(0x0),
    __E_Minimum = static_cast<int32_t>(0x2),
    __E_Multiply = static_cast<int32_t>(0x1),
    __E_Maximum = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicMaterialCombine_Unwrapped() const noexcept {
    return static_cast<__PhysicMaterialCombine_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicMaterialCombine();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PhysicMaterialCombine(int32_t value__) noexcept;

  /// @brief Field Average value: I32(0)
  static ::UnityEngine::PhysicMaterialCombine const Average;

  /// @brief Field Maximum value: I32(3)
  static ::UnityEngine::PhysicMaterialCombine const Maximum;

  /// @brief Field Minimum value: I32(2)
  static ::UnityEngine::PhysicMaterialCombine const Minimum;

  /// @brief Field Multiply value: I32(1)
  static ::UnityEngine::PhysicMaterialCombine const Multiply;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15729 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicMaterialCombine, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicMaterialCombine, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicMaterialCombine, "UnityEngine", "PhysicMaterialCombine");
