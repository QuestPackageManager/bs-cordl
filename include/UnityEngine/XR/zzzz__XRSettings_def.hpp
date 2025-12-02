#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSettings)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::XR {
struct XRSettings_StereoRenderingMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::XR {
struct XRSettings_StereoRenderingMode;
}
namespace UnityEngine::XR {
class XRSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::XRSettings_StereoRenderingMode);
MARK_REF_PTR_T(::UnityEngine::XR::XRSettings);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRSettings/StereoRenderingMode
struct CORDL_TYPE XRSettings_StereoRenderingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XRSettings_StereoRenderingMode_Unwrapped
  enum struct __XRSettings_StereoRenderingMode_Unwrapped : int32_t {
    __E_MultiPass = static_cast<int32_t>(0x0),
    __E_SinglePass = static_cast<int32_t>(0x1),
    __E_SinglePassInstanced = static_cast<int32_t>(0x2),
    __E_SinglePassMultiview = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XRSettings_StereoRenderingMode_Unwrapped() const noexcept {
    return static_cast<__XRSettings_StereoRenderingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSettings_StereoRenderingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRSettings_StereoRenderingMode(int32_t value__) noexcept;

  /// @brief Field MultiPass value: I32(0)
  static ::UnityEngine::XR::XRSettings_StereoRenderingMode const MultiPass;

  /// @brief Field SinglePass value: I32(1)
  static ::UnityEngine::XR::XRSettings_StereoRenderingMode const SinglePass;

  /// @brief Field SinglePassInstanced value: I32(2)
  static ::UnityEngine::XR::XRSettings_StereoRenderingMode const SinglePassInstanced;

  /// @brief Field SinglePassMultiview value: I32(3)
  static ::UnityEngine::XR::XRSettings_StereoRenderingMode const SinglePassMultiview;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22813 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRSettings_StereoRenderingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRSettings_StereoRenderingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRSettings
class CORDL_TYPE XRSettings : public ::System::Object {
public:
  // Declarations
  using StereoRenderingMode = ::UnityEngine::XR::XRSettings_StereoRenderingMode;

  /// @brief Method get_deviceEyeTextureDimension, addr 0x6bfec60, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension get_deviceEyeTextureDimension();

  /// @brief Method get_enabled, addr 0x6bfea50, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method get_eyeTextureDesc, addr 0x6bfebb4, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc();

  /// @brief Method get_eyeTextureDesc_Injected, addr 0x6bfec24, size 0x3c, virtual false, abstract: false, final false
  static inline void get_eyeTextureDesc_Injected(::ByRef<::UnityEngine::RenderTextureDescriptor> ret);

  /// @brief Method get_eyeTextureHeight, addr 0x6bfeb8c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureHeight();

  /// @brief Method get_eyeTextureResolutionScale, addr 0x6bfeb04, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_eyeTextureResolutionScale();

  /// @brief Method get_eyeTextureWidth, addr 0x6bfeb64, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureWidth();

  /// @brief Method get_isDeviceActive, addr 0x6bfea78, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isDeviceActive();

  /// @brief Method get_loadedDeviceName, addr 0x6bfee10, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW get_loadedDeviceName();

  /// @brief Method get_loadedDeviceName_Injected, addr 0x6bfeed4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_loadedDeviceName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_occlusionMaskScale, addr 0x6bfedc0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_occlusionMaskScale();

  /// @brief Method get_renderViewportScale, addr 0x6bfec88, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_renderViewportScale();

  /// @brief Method get_renderViewportScaleInternal, addr 0x6bfecb0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_renderViewportScaleInternal();

  /// @brief Method get_showDeviceView, addr 0x6bfeaa0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_showDeviceView();

  /// @brief Method get_stereoRenderingMode, addr 0x6bfef38, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::XRSettings_StereoRenderingMode get_stereoRenderingMode();

  /// @brief Method get_supportedDevices, addr 0x6bfef10, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> get_supportedDevices();

  /// @brief Method get_useOcclusionMesh, addr 0x6bfede8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_useOcclusionMesh();

  /// @brief Method set_eyeTextureResolutionScale, addr 0x6bfeb2c, size 0x38, virtual false, abstract: false, final false
  static inline void set_eyeTextureResolutionScale(float_t value);

  /// @brief Method set_renderViewportScale, addr 0x6bfecd8, size 0xb0, virtual false, abstract: false, final false
  static inline void set_renderViewportScale(float_t value);

  /// @brief Method set_renderViewportScaleInternal, addr 0x6bfed88, size 0x38, virtual false, abstract: false, final false
  static inline void set_renderViewportScaleInternal(float_t value);

  /// @brief Method set_showDeviceView, addr 0x6bfeac8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_showDeviceView(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSettings(XRSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSettings(XRSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22814 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRSettings_StereoRenderingMode, "UnityEngine.XR", "XRSettings/StereoRenderingMode");
NEED_NO_BOX(::UnityEngine::XR::XRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRSettings*, "UnityEngine.XR", "XRSettings");
