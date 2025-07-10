#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKPriority.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKPriority)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPriority;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKPriority);
// Dependencies
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKPriority
struct CORDL_TYPE SDKPriority {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac7568, size 0x26c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x3ac755c, size 0xc, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKPriority get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKPriority();

  // Ctor Parameters [CppParam { name: "pose", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "clipPlane", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "stage",
  // ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "resolution", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "feature", ty: "int8_t", modifiers: "", def_value:
  // None }, CppParam { name: "nearFarAdjustment", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "groundPlane", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name:
  // "reserved2", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr SDKPriority(int8_t pose, int8_t clipPlane, int8_t stage, int8_t resolution, int8_t feature, int8_t nearFarAdjustment, int8_t groundPlane, int8_t reserved2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17333 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field pose, offset: 0x0, size: 0x1, def value: None
  int8_t pose;

  /// @brief Field clipPlane, offset: 0x1, size: 0x1, def value: None
  int8_t clipPlane;

  /// @brief Field stage, offset: 0x2, size: 0x1, def value: None
  int8_t stage;

  /// @brief Field resolution, offset: 0x3, size: 0x1, def value: None
  int8_t resolution;

  /// @brief Field feature, offset: 0x4, size: 0x1, def value: None
  int8_t feature;

  /// @brief Field nearFarAdjustment, offset: 0x5, size: 0x1, def value: None
  int8_t nearFarAdjustment;

  /// @brief Field groundPlane, offset: 0x6, size: 0x1, def value: None
  int8_t groundPlane;

  /// @brief Field reserved2, offset: 0x7, size: 0x1, def value: None
  int8_t reserved2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKPriority, pose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPriority, clipPlane) == 0x1, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPriority, stage) == 0x2, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPriority, resolution) == 0x3, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPriority, feature) == 0x4, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPriority, nearFarAdjustment) == 0x5, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPriority, groundPlane) == 0x6, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPriority, reserved2) == 0x7, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKPriority, 0x8>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPriority, "LIV.SDK.Unity", "SDKPriority");
