#pragma once
// IWYU pragma private; include "UnityEngine/DrivenTransformProperties.hpp"
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
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.DrivenTransformProperties
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrivenTransformProperties();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DrivenTransformProperties(int32_t value__) noexcept;

  /// @brief Field All value: I32(-1)
  static ::UnityEngine::DrivenTransformProperties const All;

  /// @brief Field AnchorMax value: I32(3072)
  static ::UnityEngine::DrivenTransformProperties const AnchorMax;

  /// @brief Field AnchorMaxX value: I32(1024)
  static ::UnityEngine::DrivenTransformProperties const AnchorMaxX;

  /// @brief Field AnchorMaxY value: I32(2048)
  static ::UnityEngine::DrivenTransformProperties const AnchorMaxY;

  /// @brief Field AnchorMin value: I32(768)
  static ::UnityEngine::DrivenTransformProperties const AnchorMin;

  /// @brief Field AnchorMinX value: I32(256)
  static ::UnityEngine::DrivenTransformProperties const AnchorMinX;

  /// @brief Field AnchorMinY value: I32(512)
  static ::UnityEngine::DrivenTransformProperties const AnchorMinY;

  /// @brief Field AnchoredPosition value: I32(6)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPosition;

  /// @brief Field AnchoredPosition3D value: I32(14)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPosition3D;

  /// @brief Field AnchoredPositionX value: I32(2)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPositionX;

  /// @brief Field AnchoredPositionY value: I32(4)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPositionY;

  /// @brief Field AnchoredPositionZ value: I32(8)
  static ::UnityEngine::DrivenTransformProperties const AnchoredPositionZ;

  /// @brief Field Anchors value: I32(3840)
  static ::UnityEngine::DrivenTransformProperties const Anchors;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::DrivenTransformProperties const None;

  /// @brief Field Pivot value: I32(49152)
  static ::UnityEngine::DrivenTransformProperties const Pivot;

  /// @brief Field PivotX value: I32(16384)
  static ::UnityEngine::DrivenTransformProperties const PivotX;

  /// @brief Field PivotY value: I32(32768)
  static ::UnityEngine::DrivenTransformProperties const PivotY;

  /// @brief Field Rotation value: I32(16)
  static ::UnityEngine::DrivenTransformProperties const Rotation;

  /// @brief Field Scale value: I32(224)
  static ::UnityEngine::DrivenTransformProperties const Scale;

  /// @brief Field ScaleX value: I32(32)
  static ::UnityEngine::DrivenTransformProperties const ScaleX;

  /// @brief Field ScaleY value: I32(64)
  static ::UnityEngine::DrivenTransformProperties const ScaleY;

  /// @brief Field ScaleZ value: I32(128)
  static ::UnityEngine::DrivenTransformProperties const ScaleZ;

  /// @brief Field SizeDelta value: I32(12288)
  static ::UnityEngine::DrivenTransformProperties const SizeDelta;

  /// @brief Field SizeDeltaX value: I32(4096)
  static ::UnityEngine::DrivenTransformProperties const SizeDeltaX;

  /// @brief Field SizeDeltaY value: I32(8192)
  static ::UnityEngine::DrivenTransformProperties const SizeDeltaY;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10391 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DrivenTransformProperties, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::DrivenTransformProperties, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DrivenTransformProperties, "UnityEngine", "DrivenTransformProperties");
