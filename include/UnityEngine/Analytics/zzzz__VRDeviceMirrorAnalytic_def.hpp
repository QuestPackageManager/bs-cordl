#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/VRDeviceMirrorAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_def.hpp"
CORDL_MODULE_EXPORT(VRDeviceMirrorAnalytic)
// Forward declare root types
namespace UnityEngine::Analytics {
class VRDeviceMirrorAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::VRDeviceMirrorAnalytic);
// Dependencies UnityEngine.Analytics.VRDeviceAnalyticBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.VRDeviceMirrorAnalytic
class CORDL_TYPE VRDeviceMirrorAnalytic : public ::UnityEngine::Analytics::VRDeviceAnalyticBase {
public:
  // Declarations
  /// @brief Field vr_device_mirror_mode, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_vr_device_mirror_mode, put = __cordl_internal_set_vr_device_mirror_mode)) bool vr_device_mirror_mode;

  /// @brief Method CreateVRDeviceMirrorAnalytic, addr 0x6c59284, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::VRDeviceMirrorAnalytic* CreateVRDeviceMirrorAnalytic();

  static inline ::UnityEngine::Analytics::VRDeviceMirrorAnalytic* New_ctor();

  constexpr bool const& __cordl_internal_get_vr_device_mirror_mode() const;

  constexpr bool& __cordl_internal_get_vr_device_mirror_mode();

  constexpr void __cordl_internal_set_vr_device_mirror_mode(bool value);

  /// @brief Method .ctor, addr 0x6c592d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRDeviceMirrorAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceMirrorAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRDeviceMirrorAnalytic(VRDeviceMirrorAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceMirrorAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRDeviceMirrorAnalytic(VRDeviceMirrorAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22577 };

  /// @brief Field vr_device_mirror_mode, offset: 0x2c, size: 0x1, def value: None
  bool ___vr_device_mirror_mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::VRDeviceMirrorAnalytic, ___vr_device_mirror_mode) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::VRDeviceMirrorAnalytic, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::VRDeviceMirrorAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::VRDeviceMirrorAnalytic*, "UnityEngine.Analytics", "VRDeviceMirrorAnalytic");
