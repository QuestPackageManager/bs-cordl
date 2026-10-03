#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/FoveatedRenderingFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FoveatedRenderingFeature)
namespace System {
struct IntPtr;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
class FoveatedRenderingFeature;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature*, "UnityEngine.XR.OpenXR.Features", "FoveatedRenderingFeature");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature
class CORDL_TYPE FoveatedRenderingFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field <isSubsampledLayoutEnabled>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isSubsampledLayoutEnabled_k__BackingField, put = setStaticF__isSubsampledLayoutEnabled_k__BackingField)) bool _isSubsampledLayoutEnabled_k__BackingField;

  /// @brief Field enableSubsampledLayout, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_enableSubsampledLayout, put = __cordl_internal_set_enableSubsampledLayout)) bool enableSubsampledLayout;

  /// @brief Method HookGetInstanceProcAddr, addr 0x6e4ab04, size 0x8, virtual true, abstract: false, final false
  inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr func);

  /// @brief Method Internal_Unity_GetUseFoveatedRenderingLegacyMode, addr 0x6e4ab88, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_Unity_GetUseFoveatedRenderingLegacyMode();

  /// @brief Method Internal_Unity_MetaSetSubsampledLayout, addr 0x6e4a95c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Internal_Unity_MetaSetSubsampledLayout(bool enableSubsampling);

  /// @brief Method Internal_Unity_SetUseFoveatedRenderingLegacyMode, addr 0x6e4aa88, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_Unity_SetUseFoveatedRenderingLegacyMode(bool value);

  /// @brief Method Internal_Unity_intercept_xrGetInstanceProcAddr, addr 0x6e4ab0c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Unity_intercept_xrGetInstanceProcAddr(::System::IntPtr func);

  static inline ::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x6e4a9d8, size 0xb0, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method TrySetSubsampledLayoutEnabled, addr 0x6e4a80c, size 0x150, virtual false, abstract: false, final false
  static inline bool TrySetSubsampledLayoutEnabled(bool enableSubsampling);

  constexpr bool const& __cordl_internal_get_enableSubsampledLayout() const;

  constexpr bool& __cordl_internal_get_enableSubsampledLayout();

  constexpr void __cordl_internal_set_enableSubsampledLayout(bool value);

  /// @brief Method .ctor, addr 0x6e4abf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__isSubsampledLayoutEnabled_k__BackingField();

  /// [CompilerGenerated]
  /// @brief Method get_isSubsampledLayoutEnabled, addr 0x6e4a76c, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_isSubsampledLayoutEnabled();

  static inline void setStaticF__isSubsampledLayoutEnabled_k__BackingField(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_isSubsampledLayoutEnabled, addr 0x6e4a7b8, size 0x54, virtual false, abstract: false, final false
  static inline void set_isSubsampledLayoutEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FoveatedRenderingFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FoveatedRenderingFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FoveatedRenderingFeature(FoveatedRenderingFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FoveatedRenderingFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FoveatedRenderingFeature(FoveatedRenderingFeature const&) = delete;

  /// @brief Field Library offset 0xffffffff size 0x8
  static constexpr ::ConstString Library{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17608 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.foveatedrendering" };

  /// [SerializeField]
  /// @brief Field enableSubsampledLayout, offset: 0x69, size: 0x1, def value: None
  bool ___enableSubsampledLayout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature, ___enableSubsampledLayout) == 0x69, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::FoveatedRenderingFeature) == 0x70, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
