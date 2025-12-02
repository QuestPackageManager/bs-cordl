#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/VRDeviceActiveControllersAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VRDeviceActiveControllersAnalytic)
// Forward declare root types
namespace UnityEngine::Analytics {
class VRDeviceActiveControllersAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic);
// Dependencies UnityEngine.Analytics.VRDeviceAnalyticBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.VRDeviceActiveControllersAnalytic
class CORDL_TYPE VRDeviceActiveControllersAnalytic : public ::UnityEngine::Analytics::VRDeviceAnalyticBase {
public:
  // Declarations
  /// @brief Field vr_active_controllers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_vr_active_controllers, put = __cordl_internal_set_vr_active_controllers)) ::ArrayW<::StringW, ::Array<::StringW>*> vr_active_controllers;

  /// @brief Method CreateVRDeviceActiveControllersAnalytic, addr 0x6bf04b0, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic* CreateVRDeviceActiveControllersAnalytic();

  static inline ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_vr_active_controllers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_vr_active_controllers();

  constexpr void __cordl_internal_set_vr_active_controllers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x6bf0504, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRDeviceActiveControllersAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceActiveControllersAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRDeviceActiveControllersAnalytic(VRDeviceActiveControllersAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceActiveControllersAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRDeviceActiveControllersAnalytic(VRDeviceActiveControllersAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22552 };

  /// @brief Field vr_active_controllers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___vr_active_controllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic, ___vr_active_controllers) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*, "UnityEngine.Analytics", "VRDeviceActiveControllersAnalytic");
