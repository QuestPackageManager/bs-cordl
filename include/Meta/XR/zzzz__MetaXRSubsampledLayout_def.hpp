#pragma once
// IWYU pragma private; include "Meta/XR/MetaXRSubsampledLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRSubsampledLayout)
// Forward declare root types
namespace Meta::XR {
class MetaXRSubsampledLayout;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MetaXRSubsampledLayout);
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.MetaXRSubsampledLayout
class CORDL_TYPE MetaXRSubsampledLayout : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Method MetaSetSubsampledLayout, addr 0x5c3b8d0, size 0x7c, virtual false, abstract: false, final false
  static inline void MetaSetSubsampledLayout(bool enabled);

  static inline ::Meta::XR::MetaXRSubsampledLayout* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x5c3b8b0, size 0x20, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method .ctor, addr 0x5c3b94c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaXRSubsampledLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaXRSubsampledLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaXRSubsampledLayout(MetaXRSubsampledLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaXRSubsampledLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaXRSubsampledLayout(MetaXRSubsampledLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8542 };

  /// @brief Field extensionName offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionName{ u"XR_META_vulkan_swapchain_create_info" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.meta.openxr.feature.subsampledLayout" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MetaXRSubsampledLayout, 0x50>, "Size mismatch!");

} // namespace Meta::XR
NEED_NO_BOX(::Meta::XR::MetaXRSubsampledLayout);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MetaXRSubsampledLayout*, "Meta.XR", "MetaXRSubsampledLayout");
