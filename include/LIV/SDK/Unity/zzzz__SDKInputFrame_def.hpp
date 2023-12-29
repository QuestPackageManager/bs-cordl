#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKClipPlane_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPriority_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKInputFrame)
namespace LIV::SDK::Unity {
struct SDKPose;
}
namespace LIV::SDK::Unity {
struct SDKClipPlane;
}
namespace LIV::SDK::Unity {
struct SDKTransform;
}
namespace LIV::SDK::Unity {
struct FEATURES;
}
namespace LIV::SDK::Unity {
struct SDKPriority;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKInputFrame);
// Type: LIV.SDK.Unity::SDKInputFrame
// SizeInfo { instance_size: 344, native_size: 344, calculated_instance_size: 344, calculated_native_size: 360, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15223)), TypeDefinitionIndex(TypeDefinitionIndex(15205)), TypeDefinitionIndex(TypeDefinitionIndex(15224)),
// TypeDefinitionIndex(TypeDefinitionIndex(15217)), TypeDefinitionIndex(TypeDefinitionIndex(15226))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15219)) CS Name: ::LIV.SDK.Unity::SDKInputFrame
struct CORDL_TYPE SDKInputFrame {
public:
  // Declarations
  /// @brief Method get_empty addr 0x20ae3f4 size 0x144 virtual false final false
  static inline ::LIV::SDK::Unity::SDKInputFrame get_empty();

  /// @brief Method ReleaseControl addr 0x20b2920 size 0x10 virtual false final false
  inline void ReleaseControl();

  /// @brief Method ObtainControl addr 0x20b2930 size 0x14 virtual false final false
  inline void ObtainControl();

  /// @brief Method ToString addr 0x20b4344 size 0x334 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "pose", ty: "::LIV::SDK::Unity::SDKPose", modifiers: "", def_value: None }, CppParam { name: "clipPlane", ty: "::LIV::SDK::Unity::SDKClipPlane", modifiers: "",
  // def_value: None }, CppParam { name: "stageTransform", ty: "::LIV::SDK::Unity::SDKTransform", modifiers: "", def_value: None }, CppParam { name: "features", ty: "::LIV::SDK::Unity::FEATURES",
  // modifiers: "", def_value: None }, CppParam { name: "groundClipPlane", ty: "::LIV::SDK::Unity::SDKClipPlane", modifiers: "", def_value: None }, CppParam { name: "frameid", ty: "uint64_t",
  // modifiers: "", def_value: None }, CppParam { name: "referenceframe", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "::LIV::SDK::Unity::SDKPriority",
  // modifiers: "", def_value: None }]
  constexpr SDKInputFrame(::LIV::SDK::Unity::SDKPose pose, ::LIV::SDK::Unity::SDKClipPlane clipPlane, ::LIV::SDK::Unity::SDKTransform stageTransform, ::LIV::SDK::Unity::FEATURES features,
                          ::LIV::SDK::Unity::SDKClipPlane groundClipPlane, uint64_t frameid, uint64_t referenceframe, ::LIV::SDK::Unity::SDKPriority priority) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKInputFrame();

  /// @brief Field pose, offset: 0x0, size: 0x70, def value: None
  ::LIV::SDK::Unity::SDKPose pose;

  /// @brief Field clipPlane, offset: 0x70, size: 0x4c, def value: None
  ::LIV::SDK::Unity::SDKClipPlane clipPlane;

  /// @brief Field stageTransform, offset: 0xbc, size: 0x28, def value: None
  ::LIV::SDK::Unity::SDKTransform stageTransform;

  /// @brief Field features, offset: 0xe8, size: 0x8, def value: None
  ::LIV::SDK::Unity::FEATURES features;

  /// @brief Field groundClipPlane, offset: 0xf0, size: 0x4c, def value: None
  ::LIV::SDK::Unity::SDKClipPlane groundClipPlane;

  /// @brief Field frameid, offset: 0x140, size: 0x8, def value: None
  uint64_t frameid;

  /// @brief Field referenceframe, offset: 0x148, size: 0x8, def value: None
  uint64_t referenceframe;

  /// @brief Field priority, offset: 0x150, size: 0x8, def value: None
  ::LIV::SDK::Unity::SDKPriority priority;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKInputFrame, 0x158>, "Size mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKInputFrame, pose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKInputFrame, clipPlane) == 0x70, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKInputFrame, stageTransform) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKInputFrame, features) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKInputFrame, groundClipPlane) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKInputFrame, frameid) == 0x140, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKInputFrame, referenceframe) == 0x148, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKInputFrame, priority) == 0x150, "Offset mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKInputFrame, "LIV.SDK.Unity", "SDKInputFrame");
