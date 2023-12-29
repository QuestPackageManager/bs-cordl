#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKOutputFrame)
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKOutputFrame);
// Type: LIV.SDK.Unity::SDKOutputFrame
// SizeInfo { instance_size: 172, native_size: 172, calculated_instance_size: 172, calculated_native_size: 188, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15221)), TypeDefinitionIndex(TypeDefinitionIndex(15211))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15220))
// CS Name: ::LIV.SDK.Unity::SDKOutputFrame
struct CORDL_TYPE SDKOutputFrame {
public:
  // Declarations
  /// @brief Method get_empty addr 0x20af01c size 0x60 virtual false final false
  static inline ::LIV::SDK::Unity::SDKOutputFrame get_empty();

  /// @brief Method ToString addr 0x20b46dc size 0xc4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "renderingPipeline", ty: "::LIV::SDK::Unity::RENDERING_PIPELINE", modifiers: "", def_value: None }, CppParam { name: "trackedSpace", ty:
  // "::LIV::SDK::Unity::SDKTrackedSpace", modifiers: "", def_value: None }]
  constexpr SDKOutputFrame(::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline, ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKOutputFrame();

  /// @brief Field renderingPipeline, offset: 0x0, size: 0x4, def value: None
  ::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline;

  /// @brief Field trackedSpace, offset: 0x4, size: 0xa8, def value: None
  ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xac };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKOutputFrame, 0xac>, "Size mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKOutputFrame, renderingPipeline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKOutputFrame, trackedSpace) == 0x4, "Offset mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKOutputFrame, "LIV.SDK.Unity", "SDKOutputFrame");
