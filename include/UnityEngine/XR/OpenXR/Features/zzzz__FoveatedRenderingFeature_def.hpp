#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/FoveatedRenderingFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FoveatedRenderingFeature)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
class FoveatedRenderingFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature);
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature
class CORDL_TYPE FoveatedRenderingFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Method HookGetInstanceProcAddr, addr 0x67c2ff0, size 0x8, virtual true, abstract: false, final false
  inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr func);

  /// @brief Method Internal_Unity_GetUseFoveatedRenderingLegacyMode, addr 0x67c3074, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_Unity_GetUseFoveatedRenderingLegacyMode();

  /// @brief Method Internal_Unity_SetUseFoveatedRenderingLegacyMode, addr 0x67c2f6c, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_Unity_SetUseFoveatedRenderingLegacyMode(bool value);

  /// @brief Method Internal_Unity_intercept_xrGetInstanceProcAddr, addr 0x67c2ff8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Unity_intercept_xrGetInstanceProcAddr(::System::IntPtr func);

  static inline ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x67c2ec8, size 0xa4, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method .ctor, addr 0x67c30e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FoveatedRenderingFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FoveatedRenderingFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FoveatedRenderingFeature(FoveatedRenderingFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FoveatedRenderingFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FoveatedRenderingFeature(FoveatedRenderingFeature const&) = delete;

  /// @brief Field Library offset 0xffffffff size 0x8
  static constexpr ::ConstString Library{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18503 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.foveatedrendering" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*, "UnityEngine.XR.OpenXR.Features", "FoveatedRenderingFeature");
