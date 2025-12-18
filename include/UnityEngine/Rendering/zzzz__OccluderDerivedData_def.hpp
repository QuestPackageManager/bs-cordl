#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderDerivedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OccluderDerivedData)
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OccluderDerivedData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OccluderDerivedData);
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderDerivedData
struct CORDL_TYPE OccluderDerivedData {
public:
  // Declarations
  /// @brief Method FromParameters, addr 0x6677150, size 0x330, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::OccluderDerivedData FromParameters(::ByRef<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderDerivedData();

  // Ctor Parameters [CppParam { name: "viewProjMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "viewOriginWorldSpace", ty: "::UnityEngine::Vector4",
  // modifiers: "", def_value: None }, CppParam { name: "radialDirWorldSpace", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "facingDirWorldSpace", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr OccluderDerivedData(::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Vector4 viewOriginWorldSpace, ::UnityEngine::Vector4 radialDirWorldSpace,
                                ::UnityEngine::Vector4 facingDirWorldSpace) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field viewProjMatrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 viewProjMatrix;

  /// @brief Field viewOriginWorldSpace, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 viewOriginWorldSpace;

  /// @brief Field radialDirWorldSpace, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Vector4 radialDirWorldSpace;

  /// @brief Field facingDirWorldSpace, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Vector4 facingDirWorldSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderDerivedData, viewProjMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDerivedData, viewOriginWorldSpace) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDerivedData, radialDirWorldSpace) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDerivedData, facingDirWorldSpace) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderDerivedData, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderDerivedData, "UnityEngine.Rendering", "OccluderDerivedData");
