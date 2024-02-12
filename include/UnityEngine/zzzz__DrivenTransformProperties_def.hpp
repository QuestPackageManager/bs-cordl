#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrivenTransformProperties)
// Forward declare root types
namespace UnityEngine {
struct DrivenTransformProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DrivenTransformProperties);
// Type: UnityEngine::DrivenTransformProperties
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9023))
// CS Name: ::UnityEngine::DrivenTransformProperties
struct CORDL_TYPE DrivenTransformProperties {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DrivenTransformProperties_Unwrapped
  enum struct __DrivenTransformProperties_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0xffffffff),
    __E_AnchoredPositionX = static_cast<int32_t>(0x2),
    __E_AnchoredPositionY = static_cast<int32_t>(0x4),
    __E_AnchoredPositionZ = static_cast<int32_t>(0x8),
    __E_Rotation = static_cast<int32_t>(0x10),
    __E_ScaleX = static_cast<int32_t>(0x20),
    __E_ScaleY = static_cast<int32_t>(0x40),
    __E_ScaleZ = static_cast<int32_t>(0x80),
    __E_AnchorMinX = static_cast<int32_t>(0x100),
    __E_AnchorMinY = static_cast<int32_t>(0x200),
    __E_AnchorMaxX = static_cast<int32_t>(0x400),
    __E_AnchorMaxY = static_cast<int32_t>(0x800),
    __E_SizeDeltaX = static_cast<int32_t>(0x1000),
    __E_SizeDeltaY = static_cast<int32_t>(0x2000),
    __E_PivotX = static_cast<int32_t>(0x4000),
    __E_PivotY = static_cast<int32_t>(0x8000),
    __E_AnchoredPosition = static_cast<int32_t>(0x6),
    __E_AnchoredPosition3D = static_cast<int32_t>(0xe),
    __E_Scale = static_cast<int32_t>(0xe0),
    __E_AnchorMin = static_cast<int32_t>(0x300),
    __E_AnchorMax = static_cast<int32_t>(0xc00),
    __E_Anchors = static_cast<int32_t>(0xf00),
    __E_SizeDelta = static_cast<int32_t>(0x3000),
    __E_Pivot = static_cast<int32_t>(0xc000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DrivenTransformProperties_Unwrapped() const noexcept {
    return static_cast<__DrivenTransformProperties_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DrivenTransformProperties(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrivenTransformProperties();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::DrivenTransformProperties const None;

  /// @brief Field All value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::DrivenTransformProperties const All;

  /// @brief Field AnchoredPositionX value: static_cast<int32_t>(0x2)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPositionX;

  /// @brief Field AnchoredPositionY value: static_cast<int32_t>(0x4)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPositionY;

  /// @brief Field AnchoredPositionZ value: static_cast<int32_t>(0x8)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPositionZ;

  /// @brief Field Rotation value: static_cast<int32_t>(0x10)
  static ::UnityEngine::DrivenTransformProperties const Rotation;

  /// @brief Field ScaleX value: static_cast<int32_t>(0x20)
  static ::UnityEngine::DrivenTransformProperties const ScaleX;

  /// @brief Field ScaleY value: static_cast<int32_t>(0x40)
  static ::UnityEngine::DrivenTransformProperties const ScaleY;

  /// @brief Field ScaleZ value: static_cast<int32_t>(0x80)
  static ::UnityEngine::DrivenTransformProperties const ScaleZ;

  /// @brief Field AnchorMinX value: static_cast<int32_t>(0x100)
  static ::UnityEngine::DrivenTransformProperties const AnchorMinX;

  /// @brief Field AnchorMinY value: static_cast<int32_t>(0x200)
  static ::UnityEngine::DrivenTransformProperties const AnchorMinY;

  /// @brief Field AnchorMaxX value: static_cast<int32_t>(0x400)
  static ::UnityEngine::DrivenTransformProperties const AnchorMaxX;

  /// @brief Field AnchorMaxY value: static_cast<int32_t>(0x800)
  static ::UnityEngine::DrivenTransformProperties const AnchorMaxY;

  /// @brief Field SizeDeltaX value: static_cast<int32_t>(0x1000)
  static ::UnityEngine::DrivenTransformProperties const SizeDeltaX;

  /// @brief Field SizeDeltaY value: static_cast<int32_t>(0x2000)
  static ::UnityEngine::DrivenTransformProperties const SizeDeltaY;

  /// @brief Field PivotX value: static_cast<int32_t>(0x4000)
  static ::UnityEngine::DrivenTransformProperties const PivotX;

  /// @brief Field PivotY value: static_cast<int32_t>(0x8000)
  static ::UnityEngine::DrivenTransformProperties const PivotY;

  /// @brief Field AnchoredPosition value: static_cast<int32_t>(0x6)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPosition;

  /// @brief Field AnchoredPosition3D value: static_cast<int32_t>(0xe)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPosition3D;

  /// @brief Field Scale value: static_cast<int32_t>(0xe0)
  static ::UnityEngine::DrivenTransformProperties const Scale;

  /// @brief Field AnchorMin value: static_cast<int32_t>(0x300)
  static ::UnityEngine::DrivenTransformProperties const AnchorMin;

  /// @brief Field AnchorMax value: static_cast<int32_t>(0xc00)
  static ::UnityEngine::DrivenTransformProperties const AnchorMax;

  /// @brief Field Anchors value: static_cast<int32_t>(0xf00)
  static ::UnityEngine::DrivenTransformProperties const Anchors;

  /// @brief Field SizeDelta value: static_cast<int32_t>(0x3000)
  static ::UnityEngine::DrivenTransformProperties const SizeDelta;

  /// @brief Field Pivot value: static_cast<int32_t>(0xc000)
  static ::UnityEngine::DrivenTransformProperties const Pivot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DrivenTransformProperties, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::DrivenTransformProperties, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DrivenTransformProperties, "UnityEngine", "DrivenTransformProperties");
