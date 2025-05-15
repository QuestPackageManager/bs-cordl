#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKTrackedSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKTrackedSpace)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKTrackedSpace);
// Dependencies LIV.SDK.Unity.SDKMatrix4x4, LIV.SDK.Unity.SDKQuaternion, LIV.SDK.Unity.SDKVector3
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKTrackedSpace
struct CORDL_TYPE SDKTrackedSpace {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac8258, size 0x244, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x3ac8130, size 0x64, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKTrackedSpace get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKTrackedSpace();

  // Ctor Parameters [CppParam { name: "trackedSpaceWorldPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceWorldRotation", ty:
  // "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceLocalScale", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam {
  // name: "trackedSpaceLocalToWorldMatrix", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceWorldToLocalMatrix", ty:
  // "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }]
  constexpr SDKTrackedSpace(::LIV::SDK::Unity::SDKVector3 trackedSpaceWorldPosition, ::LIV::SDK::Unity::SDKQuaternion trackedSpaceWorldRotation, ::LIV::SDK::Unity::SDKVector3 trackedSpaceLocalScale,
                            ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceLocalToWorldMatrix, ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceWorldToLocalMatrix) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17337 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  /// @brief Field trackedSpaceWorldPosition, offset: 0x0, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 trackedSpaceWorldPosition;

  /// @brief Field trackedSpaceWorldRotation, offset: 0xc, size: 0x10, def value: None
  ::LIV::SDK::Unity::SDKQuaternion trackedSpaceWorldRotation;

  /// @brief Field trackedSpaceLocalScale, offset: 0x1c, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 trackedSpaceLocalScale;

  /// @brief Field trackedSpaceLocalToWorldMatrix, offset: 0x28, size: 0x40, def value: None
  ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceLocalToWorldMatrix;

  /// @brief Field trackedSpaceWorldToLocalMatrix, offset: 0x68, size: 0x40, def value: None
  ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceWorldToLocalMatrix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKTrackedSpace, trackedSpaceWorldPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTrackedSpace, trackedSpaceWorldRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTrackedSpace, trackedSpaceLocalScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTrackedSpace, trackedSpaceLocalToWorldMatrix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTrackedSpace, trackedSpaceWorldToLocalMatrix) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKTrackedSpace, 0xa8>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTrackedSpace, "LIV.SDK.Unity", "SDKTrackedSpace");
