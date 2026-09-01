#pragma once
// IWYU pragma private; include "UnityEngine\Analytics\VRDeviceAnalyticBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
CORDL_MODULE_EXPORT(VRDeviceAnalyticBase)
// Forward declare root types
namespace UnityEngine::Analytics {
class VRDeviceAnalyticBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::Analytics::VRDeviceAnalyticBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::VRDeviceAnalyticBase*, "UnityEngine.Analytics", "VRDeviceAnalyticBase");
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.VRDeviceAnalyticBase
class CORDL_TYPE VRDeviceAnalyticBase : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  static inline ::UnityEngine::Analytics::VRDeviceAnalyticBase* New_ctor();

  /// @brief Method .ctor, addr 0x6e24a74, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRDeviceAnalyticBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceAnalyticBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRDeviceAnalyticBase(VRDeviceAnalyticBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRDeviceAnalyticBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRDeviceAnalyticBase(VRDeviceAnalyticBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22994 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Analytics::VRDeviceAnalyticBase) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Analytics
