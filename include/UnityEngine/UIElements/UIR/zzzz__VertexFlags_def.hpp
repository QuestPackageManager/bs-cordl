#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/VertexFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexFlags)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::VertexFlags);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.VertexFlags
struct CORDL_TYPE VertexFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VertexFlags_Unwrapped
  enum struct __VertexFlags_Unwrapped : int32_t {
    __E_IsSolid = static_cast<int32_t>(0x0),
    __E_IsText = static_cast<int32_t>(0x1),
    __E_IsTextured = static_cast<int32_t>(0x2),
    __E_IsDynamic = static_cast<int32_t>(0x3),
    __E_IsSvgGradients = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VertexFlags_Unwrapped() const noexcept {
    return static_cast<__VertexFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VertexFlags(int32_t value__) noexcept;

  /// @brief Field IsDynamic value: I32(3)
  static ::UnityEngine::UIElements::UIR::VertexFlags const IsDynamic;

  /// @brief Field IsSolid value: I32(0)
  static ::UnityEngine::UIElements::UIR::VertexFlags const IsSolid;

  /// @brief Field IsSvgGradients value: I32(4)
  static ::UnityEngine::UIElements::UIR::VertexFlags const IsSvgGradients;

  /// @brief Field IsText value: I32(1)
  static ::UnityEngine::UIElements::UIR::VertexFlags const IsText;

  /// @brief Field IsTextured value: I32(2)
  static ::UnityEngine::UIElements::UIR::VertexFlags const IsTextured;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5382 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::VertexFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VertexFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VertexFlags, "UnityEngine.UIElements.UIR", "VertexFlags");
