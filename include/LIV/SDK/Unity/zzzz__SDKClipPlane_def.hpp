#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKClipPlane.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKClipPlane)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKClipPlane;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKClipPlane);
// Dependencies LIV.SDK.Unity.SDKMatrix4x4
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKClipPlane
struct CORDL_TYPE SDKClipPlane {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac858c, size 0x1dc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x3ac7a18, size 0x34, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKClipPlane get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKClipPlane();

  // Ctor Parameters [CppParam { name: "transform", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tesselation", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SDKClipPlane(::LIV::SDK::Unity::SDKMatrix4x4 transform, int32_t width, int32_t height, float_t tesselation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17340 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4c };

  /// @brief Field transform, offset: 0x0, size: 0x40, def value: None
  ::LIV::SDK::Unity::SDKMatrix4x4 transform;

  /// @brief Field width, offset: 0x40, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x44, size: 0x4, def value: None
  int32_t height;

  /// @brief Field tesselation, offset: 0x48, size: 0x4, def value: None
  float_t tesselation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKClipPlane, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKClipPlane, width) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKClipPlane, height) == 0x44, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKClipPlane, tesselation) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKClipPlane, 0x4c>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKClipPlane, "LIV.SDK.Unity", "SDKClipPlane");
