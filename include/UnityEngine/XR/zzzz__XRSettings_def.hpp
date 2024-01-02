#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSettings)
// Forward declare root types
namespace UnityEngine::XR {
class XRSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRSettings);
// Type: UnityEngine.XR::XRSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16122))
// CS Name: ::UnityEngine.XR::XRSettings*
class CORDL_TYPE XRSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_showDeviceView, addr 0x2eb1ce4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_showDeviceView();

  /// @brief Method set_showDeviceView, addr 0x2eb1d0c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_showDeviceView(bool value);

  /// @brief Method set_eyeTextureResolutionScale, addr 0x2eb1d48, size 0x38, virtual false, abstract: false, final false
  static inline void set_eyeTextureResolutionScale(float_t value);

  /// @brief Method get_eyeTextureWidth, addr 0x2eb1d80, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureWidth();

  /// @brief Method get_eyeTextureHeight, addr 0x2eb1da8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureHeight();

  /// @brief Method get_renderViewportScale, addr 0x2eb1dd0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_renderViewportScale();

  /// @brief Method set_renderViewportScale, addr 0x2eb1e20, size 0xb4, virtual false, abstract: false, final false
  static inline void set_renderViewportScale(float_t value);

  /// @brief Method get_renderViewportScaleInternal, addr 0x2eb1df8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_renderViewportScaleInternal();

  /// @brief Method set_renderViewportScaleInternal, addr 0x2eb1ed4, size 0x38, virtual false, abstract: false, final false
  static inline void set_renderViewportScaleInternal(float_t value);

  /// @brief Method get_loadedDeviceName, addr 0x2eb1f0c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_loadedDeviceName();

  // Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSettings(XRSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSettings(XRSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRSettings*, "UnityEngine.XR", "XRSettings");
