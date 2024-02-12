#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderDataDirtyTypeClasses)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypeClasses;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses);
// Type: UnityEngine.UIElements.UIR::RenderDataDirtyTypeClasses
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6654))
// CS Name: ::UnityEngine.UIElements.UIR::RenderDataDirtyTypeClasses
struct CORDL_TYPE RenderDataDirtyTypeClasses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderDataDirtyTypeClasses_Unwrapped
  enum struct __RenderDataDirtyTypeClasses_Unwrapped : int32_t {
    __E_Clipping = static_cast<int32_t>(0x0),
    __E_Opacity = static_cast<int32_t>(0x1),
    __E_Color = static_cast<int32_t>(0x2),
    __E_TransformSize = static_cast<int32_t>(0x3),
    __E_Visuals = static_cast<int32_t>(0x4),
    __E_Count = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderDataDirtyTypeClasses_Unwrapped() const noexcept {
    return static_cast<__RenderDataDirtyTypeClasses_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderDataDirtyTypeClasses(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderDataDirtyTypeClasses();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Clipping value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Clipping;

  /// @brief Field Opacity value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Opacity;

  /// @brief Field Color value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Color;

  /// @brief Field TransformSize value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const TransformSize;

  /// @brief Field Visuals value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Visuals;

  /// @brief Field Count value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses, "UnityEngine.UIElements.UIR", "RenderDataDirtyTypeClasses");
