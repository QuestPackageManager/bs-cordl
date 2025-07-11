#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKPose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKPose)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPose;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKPose);
// Dependencies LIV.SDK.Unity.SDKMatrix4x4, LIV.SDK.Unity.SDKQuaternion, LIV.SDK.Unity.SDKVector3
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKPose
struct CORDL_TYPE SDKPose {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac8b1c, size 0x278, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x3ac2920, size 0x70, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKPose get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKPose();

  // Ctor Parameters [CppParam { name: "projectionMatrix", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "localPosition", ty:
  // "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "localRotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name:
  // "verticalFieldOfView", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nearClipPlane", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farClipPlane", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "unused0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unused1", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr SDKPose(::LIV::SDK::Unity::SDKMatrix4x4 projectionMatrix, ::LIV::SDK::Unity::SDKVector3 localPosition, ::LIV::SDK::Unity::SDKQuaternion localRotation, float_t verticalFieldOfView,
                    float_t nearClipPlane, float_t farClipPlane, int32_t unused0, int32_t unused1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17342 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field projectionMatrix, offset: 0x0, size: 0x40, def value: None
  ::LIV::SDK::Unity::SDKMatrix4x4 projectionMatrix;

  /// @brief Field localPosition, offset: 0x40, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 localPosition;

  /// @brief Field localRotation, offset: 0x4c, size: 0x10, def value: None
  ::LIV::SDK::Unity::SDKQuaternion localRotation;

  /// @brief Field verticalFieldOfView, offset: 0x5c, size: 0x4, def value: None
  float_t verticalFieldOfView;

  /// @brief Field nearClipPlane, offset: 0x60, size: 0x4, def value: None
  float_t nearClipPlane;

  /// @brief Field farClipPlane, offset: 0x64, size: 0x4, def value: None
  float_t farClipPlane;

  /// @brief Field unused0, offset: 0x68, size: 0x4, def value: None
  int32_t unused0;

  /// @brief Field unused1, offset: 0x6c, size: 0x4, def value: None
  int32_t unused1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKPose, projectionMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPose, localPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPose, localRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPose, verticalFieldOfView) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPose, nearClipPlane) == 0x60, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPose, farClipPlane) == 0x64, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPose, unused0) == 0x68, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPose, unused1) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKPose, 0x70>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPose, "LIV.SDK.Unity", "SDKPose");
