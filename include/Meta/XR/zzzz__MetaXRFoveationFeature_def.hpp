#pragma once
// IWYU pragma private; include "Meta/XR/MetaXRFoveationFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRFoveationFeature)
namespace GlobalNamespace {
struct OVRManager_FoveatedRenderingLevel;
}
// Forward declare root types
namespace Meta::XR {
class MetaXRFoveationFeature;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MetaXRFoveationFeature);
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.MetaXRFoveationFeature
class CORDL_TYPE MetaXRFoveationFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field _foveatedRenderingLevel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__foveatedRenderingLevel, put = setStaticF__foveatedRenderingLevel)) uint32_t _foveatedRenderingLevel;

  /// @brief Field _useDynamicFoveation, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__useDynamicFoveation, put = setStaticF__useDynamicFoveation)) uint32_t _useDynamicFoveation;

  /// @brief Field _xrSession, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__xrSession, put = setStaticF__xrSession)) uint64_t _xrSession;

  /// @brief Method FBGetFoveationDynamic, addr 0x5c3b674, size 0x7c, virtual false, abstract: false, final false
  static inline void FBGetFoveationDynamic(::ByRef<uint32_t> dynamic);

  /// @brief Method FBGetFoveationLevel, addr 0x5c3b468, size 0x7c, virtual false, abstract: false, final false
  static inline void FBGetFoveationLevel(::ByRef<uint32_t> level);

  /// @brief Method FBSetFoveationLevel, addr 0x5c3b54c, size 0xa4, virtual false, abstract: false, final false
  static inline void FBSetFoveationLevel(uint64_t session, uint32_t level, float_t verticalOffset, uint32_t dynamic);

  static inline ::Meta::XR::MetaXRFoveationFeature* New_ctor();

  /// @brief Method OnSessionCreate, addr 0x5c3b3fc, size 0x50, virtual true, abstract: false, final false
  inline void OnSessionCreate(uint64_t xrSession);

  /// @brief Method .ctor, addr 0x5c3b6f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline uint32_t getStaticF__foveatedRenderingLevel();

  static inline uint32_t getStaticF__useDynamicFoveation();

  static inline uint64_t getStaticF__xrSession();

  /// @brief Method get_foveatedRenderingLevel, addr 0x5c3b44c, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_FoveatedRenderingLevel get_foveatedRenderingLevel();

  /// @brief Method get_useDynamicFoveatedRendering, addr 0x5c3b5f0, size 0x24, virtual false, abstract: false, final false
  static inline bool get_useDynamicFoveatedRendering();

  static inline void setStaticF__foveatedRenderingLevel(uint32_t value);

  static inline void setStaticF__useDynamicFoveation(uint32_t value);

  static inline void setStaticF__xrSession(uint64_t value);

  /// @brief Method set_foveatedRenderingLevel, addr 0x5c3b4e4, size 0x68, virtual false, abstract: false, final false
  static inline void set_foveatedRenderingLevel(::GlobalNamespace::OVRManager_FoveatedRenderingLevel value);

  /// @brief Method set_useDynamicFoveatedRendering, addr 0x5c3b614, size 0x60, virtual false, abstract: false, final false
  static inline void set_useDynamicFoveatedRendering(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaXRFoveationFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaXRFoveationFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaXRFoveationFeature(MetaXRFoveationFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaXRFoveationFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaXRFoveationFeature(MetaXRFoveationFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8540 };

  /// @brief Field extensionList offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionList{ u"XR_FB_foveation XR_FB_foveation_configuration XR_FB_foveation_vulkan " };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.meta.openxr.feature.foveation" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MetaXRFoveationFeature, 0x50>, "Size mismatch!");

} // namespace Meta::XR
NEED_NO_BOX(::Meta::XR::MetaXRFoveationFeature);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MetaXRFoveationFeature*, "Meta.XR", "MetaXRFoveationFeature");
