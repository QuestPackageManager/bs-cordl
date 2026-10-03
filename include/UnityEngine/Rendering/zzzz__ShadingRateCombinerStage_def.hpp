#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadingRateCombinerStage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadingRateCombinerStage)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadingRateCombinerStage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadingRateCombinerStage);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShadingRateCombinerStage, "UnityEngine.Rendering", "ShadingRateCombinerStage");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShadingRateCombinerStage
struct CORDL_TYPE ShadingRateCombinerStage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShadingRateCombinerStage_Unwrapped
  enum struct __ShadingRateCombinerStage_Unwrapped : int32_t {
    __E_Primitive = static_cast<int32_t>(0x0),
    __E_Fragment = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShadingRateCombinerStage_Unwrapped() const noexcept {
    return static_cast<__ShadingRateCombinerStage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadingRateCombinerStage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ShadingRateCombinerStage(int32_t value__) noexcept;

  /// @brief Field Fragment value: I32(1)
  static ::UnityEngine::Rendering::ShadingRateCombinerStage const Fragment;

  /// @brief Field Primitive value: I32(0)
  static ::UnityEngine::Rendering::ShadingRateCombinerStage const Primitive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10354 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShadingRateCombinerStage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ShadingRateCombinerStage) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
