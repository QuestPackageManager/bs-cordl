#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Utils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Utils);
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnableDynamicFFR, addr 0x48374fc, size 0x8c, virtual false, abstract: false, final false
  static inline bool EnableDynamicFFR(bool enable);

  /// @brief Method GetFoveationLevel, addr 0x4837588, size 0x78, virtual false, abstract: false, final false
  static inline int32_t GetFoveationLevel();

  /// @brief Method GetSystemHeadsetType, addr 0x48370fc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType();

  /// @brief Method IsEyeTrackingPermissionGranted, addr 0x4837170, size 0x44, virtual false, abstract: false, final false
  static inline bool IsEyeTrackingPermissionGranted();

  /// @brief Method PermissionGrantedCallback, addr 0x4837104, size 0x64, virtual false, abstract: false, final false
  static inline void PermissionGrantedCallback(::StringW permissionName);

  /// @brief Method SetColorScaleAndOffset, addr 0x48370b4, size 0x40, virtual false, abstract: false, final false
  static inline void SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset);

  /// @brief Method SetFoveationLevel, addr 0x4837470, size 0x8c, virtual false, abstract: false, final false
  static inline bool SetFoveationLevel(int32_t level);

  /// @brief Method get_eyeTrackedFoveatedRenderingEnabled, addr 0x4837344, size 0x20, virtual false, abstract: false, final false
  static inline bool get_eyeTrackedFoveatedRenderingEnabled();

  /// @brief Method get_eyeTrackedFoveatedRenderingSupported, addr 0x483733c, size 0x4, virtual false, abstract: false, final false
  static inline bool get_eyeTrackedFoveatedRenderingSupported();

  /// @brief Method get_foveatedRenderingLevel, addr 0x4837240, size 0x78, virtual false, abstract: false, final false
  static inline int32_t get_foveatedRenderingLevel();

  /// @brief Method get_useDynamicFoveatedRendering, addr 0x48371b4, size 0x4, virtual false, abstract: false, final false
  static inline bool get_useDynamicFoveatedRendering();

  /// @brief Method set_eyeTrackedFoveatedRenderingEnabled, addr 0x4837368, size 0x108, virtual false, abstract: false, final false
  static inline void set_eyeTrackedFoveatedRenderingEnabled(bool value);

  /// @brief Method set_foveatedRenderingLevel, addr 0x48372bc, size 0x7c, virtual false, abstract: false, final false
  static inline void set_foveatedRenderingLevel(int32_t value);

  /// @brief Method set_useDynamicFoveatedRendering, addr 0x48371bc, size 0x7c, virtual false, abstract: false, final false
  static inline void set_useDynamicFoveatedRendering(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17390 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Utils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::Utils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Utils*, "Unity.XR.Oculus", "Utils");
