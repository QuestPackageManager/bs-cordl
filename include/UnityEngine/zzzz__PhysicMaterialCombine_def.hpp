#pragma once
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
// Type: UnityEngine::PhysicMaterialCombine
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::PhysicMaterialCombine
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
  constexpr operator int32_t() const noexcept {
    return static_cast<__PhysicMaterialCombine_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicMaterialCombine();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PhysicMaterialCombine(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Average value: static_cast<int32_t>(0x0)
  static ::UnityEngine::PhysicMaterialCombine const Average;

  /// @brief Field Maximum value: static_cast<int32_t>(0x3)
  static ::UnityEngine::PhysicMaterialCombine const Maximum;

  /// @brief Field Minimum value: static_cast<int32_t>(0x2)
  static ::UnityEngine::PhysicMaterialCombine const Minimum;

  /// @brief Field Multiply value: static_cast<int32_t>(0x1)
  static ::UnityEngine::PhysicMaterialCombine const Multiply;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicMaterialCombine, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterialCombine, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicMaterialCombine, "UnityEngine", "PhysicMaterialCombine");
