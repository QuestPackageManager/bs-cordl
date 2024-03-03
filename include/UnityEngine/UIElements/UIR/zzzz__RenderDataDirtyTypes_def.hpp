#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderDataDirtyTypes)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderDataDirtyTypes);
// Type: UnityEngine.UIElements.UIR::RenderDataDirtyTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.UIR::RenderDataDirtyTypes
struct CORDL_TYPE RenderDataDirtyTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderDataDirtyTypes_Unwrapped
  enum struct __RenderDataDirtyTypes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Transform = static_cast<int32_t>(0x1),
    __E_ClipRectSize = static_cast<int32_t>(0x2),
    __E_Clipping = static_cast<int32_t>(0x4),
    __E_ClippingHierarchy = static_cast<int32_t>(0x8),
    __E_Visuals = static_cast<int32_t>(0x10),
    __E_VisualsHierarchy = static_cast<int32_t>(0x20),
    __E_Opacity = static_cast<int32_t>(0x40),
    __E_OpacityHierarchy = static_cast<int32_t>(0x80),
    __E_Color = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderDataDirtyTypes_Unwrapped() const noexcept {
    return static_cast<__RenderDataDirtyTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderDataDirtyTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderDataDirtyTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ClipRectSize value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const ClipRectSize;

  /// @brief Field Clipping value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Clipping;

  /// @brief Field ClippingHierarchy value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const ClippingHierarchy;

  /// @brief Field Color value: static_cast<int32_t>(0x100)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Color;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const None;

  /// @brief Field Opacity value: static_cast<int32_t>(0x40)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Opacity;

  /// @brief Field OpacityHierarchy value: static_cast<int32_t>(0x80)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const OpacityHierarchy;

  /// @brief Field Transform value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Transform;

  /// @brief Field Visuals value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Visuals;

  /// @brief Field VisualsHierarchy value: static_cast<int32_t>(0x20)
  static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const VisualsHierarchy;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderDataDirtyTypes, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderDataDirtyTypes, "UnityEngine.UIElements.UIR", "RenderDataDirtyTypes");
