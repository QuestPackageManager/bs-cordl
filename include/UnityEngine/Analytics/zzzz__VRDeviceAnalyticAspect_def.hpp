#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/VRDeviceAnalyticAspect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VRDeviceAnalyticAspect)
// Forward declare root types
namespace UnityEngine::Analytics {
class VRDeviceAnalyticAspect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::VRDeviceAnalyticAspect);
// Dependencies UnityEngine.Analytics.VRDeviceAnalyticBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.VRDeviceAnalyticAspect
class CORDL_TYPE VRDeviceAnalyticAspect : public ::UnityEngine::Analytics::VRDeviceAnalyticBase {
public:
  // Declarations
  /// @brief Field vr_aspect_ratio, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_vr_aspect_ratio, put = __cordl_internal_set_vr_aspect_ratio)) float_t vr_aspect_ratio;

  /// @brief Method CreateVRDeviceAnalyticAspect, addr 0x6c5922c, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::VRDeviceAnalyticAspect* CreateVRDeviceAnalyticAspect();

  static inline ::UnityEngine::Analytics::VRDeviceAnalyticAspect* New_ctor();

  constexpr float_t const& __cordl_internal_get_vr_aspect_ratio() const;

  constexpr float_t& __cordl_internal_get_vr_aspect_ratio();

  constexpr void __cordl_internal_set_vr_aspect_ratio(float_t value);

  /// @brief Method .ctor, addr 0x6c59280, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRDeviceAnalyticAspect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceAnalyticAspect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRDeviceAnalyticAspect(VRDeviceAnalyticAspect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceAnalyticAspect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRDeviceAnalyticAspect(VRDeviceAnalyticAspect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22576 };

  /// @brief Field vr_aspect_ratio, offset: 0x2c, size: 0x4, def value: None
  float_t ___vr_aspect_ratio;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::VRDeviceAnalyticAspect, ___vr_aspect_ratio) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::VRDeviceAnalyticAspect, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::VRDeviceAnalyticAspect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::VRDeviceAnalyticAspect*, "UnityEngine.Analytics", "VRDeviceAnalyticAspect");
