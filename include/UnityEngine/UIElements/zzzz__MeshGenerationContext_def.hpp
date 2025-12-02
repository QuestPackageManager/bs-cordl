#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationContext)
// Forward declare root types
namespace UnityEngine::UIElements {
struct MeshGenerationContext_MeshFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::MeshGenerationContext_MeshFlags);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshGenerationContext/MeshFlags
struct CORDL_TYPE MeshGenerationContext_MeshFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MeshGenerationContext_MeshFlags_Unwrapped
  enum struct __MeshGenerationContext_MeshFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SkipDynamicAtlas = static_cast<int32_t>(0x2),
    __E_IsUsingVectorImageGradients = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MeshGenerationContext_MeshFlags_Unwrapped() const noexcept {
    return static_cast<__MeshGenerationContext_MeshFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationContext_MeshFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshGenerationContext_MeshFlags(int32_t value__) noexcept;

  /// @brief Field IsUsingVectorImageGradients value: I32(4)
  static ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags const IsUsingVectorImageGradients;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags const None;

  /// @brief Field SkipDynamicAtlas value: I32(2)
  static ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags const SkipDynamicAtlas;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationContext_MeshFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationContext_MeshFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContext_MeshFlags, "UnityEngine.UIElements", "MeshGenerationContext/MeshFlags");
