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
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::XR {
struct __XRSettings__StereoRenderingMode;
}
// Forward declare root types
namespace UnityEngine::XR {
struct __XRSettings__StereoRenderingMode;
}
namespace UnityEngine::XR {
class XRSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::__XRSettings__StereoRenderingMode);
MARK_REF_PTR_T(::UnityEngine::XR::XRSettings);
// Type: ::StereoRenderingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::XRSettings::StereoRenderingMode
struct CORDL_TYPE __XRSettings__StereoRenderingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRSettings__StereoRenderingMode_Unwrapped
  enum struct ____XRSettings__StereoRenderingMode_Unwrapped : int32_t {
    __E_MultiPass = static_cast<int32_t>(0x0),
    __E_SinglePass = static_cast<int32_t>(0x1),
    __E_SinglePassInstanced = static_cast<int32_t>(0x2),
    __E_SinglePassMultiview = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRSettings__StereoRenderingMode_Unwrapped() const noexcept {
    return static_cast<____XRSettings__StereoRenderingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRSettings__StereoRenderingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRSettings__StereoRenderingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MultiPass value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::__XRSettings__StereoRenderingMode const MultiPass;

  /// @brief Field SinglePass value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::__XRSettings__StereoRenderingMode const SinglePass;

  /// @brief Field SinglePassInstanced value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::__XRSettings__StereoRenderingMode const SinglePassInstanced;

  /// @brief Field SinglePassMultiview value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::__XRSettings__StereoRenderingMode const SinglePassMultiview;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRSettings__StereoRenderingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRSettings__StereoRenderingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
// Type: UnityEngine.XR::XRSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: false
// CS Name: ::UnityEngine.XR::XRSettings*
class CORDL_TYPE XRSettings : public ::System::Object {
public:
  // Declarations
  using StereoRenderingMode = ::UnityEngine::XR::__XRSettings__StereoRenderingMode;

  /// @brief Method get_deviceEyeTextureDimension, addr 0x3631e94, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension get_deviceEyeTextureDimension();

  /// @brief Method get_enabled, addr 0x3631d30, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method get_eyeTextureHeight, addr 0x3631e6c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureHeight();

  /// @brief Method get_eyeTextureResolutionScale, addr 0x3631de4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_eyeTextureResolutionScale();

  /// @brief Method get_eyeTextureWidth, addr 0x3631e44, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureWidth();

  /// @brief Method get_isDeviceActive, addr 0x3631d58, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isDeviceActive();

  /// @brief Method get_loadedDeviceName, addr 0x3632048, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_loadedDeviceName();

  /// @brief Method get_occlusionMaskScale, addr 0x3631ff8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_occlusionMaskScale();

  /// @brief Method get_renderViewportScale, addr 0x3631ebc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_renderViewportScale();

  /// @brief Method get_renderViewportScaleInternal, addr 0x3631ee4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_renderViewportScaleInternal();

  /// @brief Method get_showDeviceView, addr 0x3631d80, size 0x28, virtual false, abstract: false, final false
  static inline bool get_showDeviceView();

  /// @brief Method get_stereoRenderingMode, addr 0x3632070, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::__XRSettings__StereoRenderingMode get_stereoRenderingMode();

  /// @brief Method get_useOcclusionMesh, addr 0x3632020, size 0x28, virtual false, abstract: false, final false
  static inline bool get_useOcclusionMesh();

  /// @brief Method set_eyeTextureResolutionScale, addr 0x3631e0c, size 0x38, virtual false, abstract: false, final false
  static inline void set_eyeTextureResolutionScale(float_t value);

  /// @brief Method set_renderViewportScale, addr 0x3631f0c, size 0xb4, virtual false, abstract: false, final false
  static inline void set_renderViewportScale(float_t value);

  /// @brief Method set_renderViewportScaleInternal, addr 0x3631fc0, size 0x38, virtual false, abstract: false, final false
  static inline void set_renderViewportScaleInternal(float_t value);

  /// @brief Method set_showDeviceView, addr 0x3631da8, size 0x3c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRSettings__StereoRenderingMode, "UnityEngine.XR", "XRSettings/StereoRenderingMode");
NEED_NO_BOX(::UnityEngine::XR::XRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRSettings*, "UnityEngine.XR", "XRSettings");
