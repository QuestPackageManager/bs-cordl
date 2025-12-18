#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/VRDeviceUserAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VRDeviceUserAnalytic)
// Forward declare root types
namespace UnityEngine::Analytics {
class VRDeviceUserAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::VRDeviceUserAnalytic);
// Dependencies UnityEngine.Analytics.VRDeviceAnalyticBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.VRDeviceUserAnalytic
class CORDL_TYPE VRDeviceUserAnalytic : public ::UnityEngine::Analytics::VRDeviceAnalyticBase {
public:
  // Declarations
  /// @brief Field vr_user_presence, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_vr_user_presence, put = __cordl_internal_set_vr_user_presence)) int32_t vr_user_presence;

  /// @brief Method CreateVRDeviceUserAnalytic, addr 0x6c592dc, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::VRDeviceUserAnalytic* CreateVRDeviceUserAnalytic();

  static inline ::UnityEngine::Analytics::VRDeviceUserAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_vr_user_presence() const;

  constexpr int32_t& __cordl_internal_get_vr_user_presence();

  constexpr void __cordl_internal_set_vr_user_presence(int32_t value);

  /// @brief Method .ctor, addr 0x6c59330, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRDeviceUserAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceUserAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRDeviceUserAnalytic(VRDeviceUserAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceUserAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRDeviceUserAnalytic(VRDeviceUserAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22578 };

  /// @brief Field vr_user_presence, offset: 0x2c, size: 0x4, def value: None
  int32_t ___vr_user_presence;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::VRDeviceUserAnalytic, ___vr_user_presence) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::VRDeviceUserAnalytic, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::VRDeviceUserAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::VRDeviceUserAnalytic*, "UnityEngine.Analytics", "VRDeviceUserAnalytic");
