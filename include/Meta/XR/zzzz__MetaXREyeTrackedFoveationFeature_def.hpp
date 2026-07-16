#pragma once
// IWYU pragma private; include "Meta/XR/MetaXREyeTrackedFoveationFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXREyeTrackedFoveationFeature)
// Forward declare root types
namespace Meta::XR {
class MetaXREyeTrackedFoveationFeature;
}
// Write type traits
MARK_REF_T(::Meta::XR::MetaXREyeTrackedFoveationFeature*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MetaXREyeTrackedFoveationFeature*, "Meta.XR", "MetaXREyeTrackedFoveationFeature");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.MetaXREyeTrackedFoveationFeature
class CORDL_TYPE MetaXREyeTrackedFoveationFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field _xrSession, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__xrSession, put = setStaticF__xrSession)) uint64_t _xrSession;

  /// @brief Method MetaGetEyeTrackedFoveationSupported, addr 0x5e4d50c, size 0x90, virtual false, abstract: false, final false
  static inline void MetaGetEyeTrackedFoveationSupported(::by_ref<bool> supported);

  /// @brief Method MetaGetFoveationEyeTracked, addr 0x5e4d388, size 0x90, virtual false, abstract: false, final false
  static inline void MetaGetFoveationEyeTracked(::by_ref<bool> isEyeTracked);

  /// @brief Method MetaSetFoveationEyeTracked, addr 0x5e4d46c, size 0x84, virtual false, abstract: false, final false
  static inline void MetaSetFoveationEyeTracked(uint64_t session, bool isEyeTracked);

  static inline ::Meta::XR::MetaXREyeTrackedFoveationFeature* New_ctor();

  /// @brief Method OnSessionCreate, addr 0x5e4d31c, size 0x50, virtual true, abstract: false, final false
  inline void OnSessionCreate(uint64_t xrSession);

  /// @brief Method .ctor, addr 0x5e4d59c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline uint64_t getStaticF__xrSession();

  /// @brief Method get_eyeTrackedFoveatedRenderingEnabled, addr 0x5e4d36c, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_eyeTrackedFoveatedRenderingEnabled();

  /// @brief Method get_eyeTrackedFoveatedRenderingSupported, addr 0x5e4d4f0, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_eyeTrackedFoveatedRenderingSupported();

  static inline void setStaticF__xrSession(uint64_t value);

  /// @brief Method set_eyeTrackedFoveatedRenderingEnabled, addr 0x5e4d418, size 0x54, virtual false, abstract: false, final false
  static inline void set_eyeTrackedFoveatedRenderingEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaXREyeTrackedFoveationFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaXREyeTrackedFoveationFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaXREyeTrackedFoveationFeature(MetaXREyeTrackedFoveationFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaXREyeTrackedFoveationFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaXREyeTrackedFoveationFeature(MetaXREyeTrackedFoveationFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8531 };

  /// @brief Field extensionName offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionName{ u"XR_META_foveation_eye_tracked XR_FB_eye_tracking_social XR_META_vulkan_swapchain_create_info" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.meta.openxr.feature.eyetrackedfoveation" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MetaXREyeTrackedFoveationFeature) == 0x50, "Size mismatch!");

} // namespace Meta::XR
