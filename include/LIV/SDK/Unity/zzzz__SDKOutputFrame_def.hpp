#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKOutputFrame.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKOutputFrame)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKOutputFrame);
// Dependencies LIV.SDK.Unity.RENDERING_PIPELINE, LIV.SDK.Unity.SDKTrackedSpace
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKOutputFrame
struct CORDL_TYPE SDKOutputFrame {
public:
  // Declarations
  /// @brief Method ToString, addr 0x56a16cc, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x569c090, size 0x60, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKOutputFrame get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKOutputFrame();

  // Ctor Parameters [CppParam { name: "renderingPipeline", ty: "::LIV::SDK::Unity::RENDERING_PIPELINE", modifiers: "", def_value: None }, CppParam { name: "trackedSpace", ty:
  // "::LIV::SDK::Unity::SDKTrackedSpace", modifiers: "", def_value: None }]
  constexpr SDKOutputFrame(::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline, ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21286 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xac };

  /// @brief Field renderingPipeline, offset: 0x0, size: 0x4, def value: None
  ::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline;

  /// @brief Field trackedSpace, offset: 0x4, size: 0xa8, def value: None
  ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKOutputFrame, renderingPipeline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKOutputFrame, trackedSpace) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKOutputFrame, 0xac>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKOutputFrame, "LIV.SDK.Unity", "SDKOutputFrame");
