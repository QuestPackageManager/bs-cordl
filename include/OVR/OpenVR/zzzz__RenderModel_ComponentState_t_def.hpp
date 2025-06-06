#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_ComponentState_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderModel_ComponentState_t)
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_ComponentState_t);
// Dependencies OVR.OpenVR.HmdMatrix34_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.RenderModel_ComponentState_t
struct CORDL_TYPE RenderModel_ComponentState_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderModel_ComponentState_t();

  // Ctor Parameters [CppParam { name: "mTrackingToComponentRenderModel", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "mTrackingToComponentLocal", ty:
  // "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "uProperties", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RenderModel_ComponentState_t(::OVR::OpenVR::HmdMatrix34_t mTrackingToComponentRenderModel, ::OVR::OpenVR::HmdMatrix34_t mTrackingToComponentLocal, uint32_t uProperties) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9029 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x64 };

  /// @brief Field mTrackingToComponentRenderModel, offset: 0x0, size: 0x30, def value: None
  ::OVR::OpenVR::HmdMatrix34_t mTrackingToComponentRenderModel;

  /// @brief Field mTrackingToComponentLocal, offset: 0x30, size: 0x30, def value: None
  ::OVR::OpenVR::HmdMatrix34_t mTrackingToComponentLocal;

  /// @brief Field uProperties, offset: 0x60, size: 0x4, def value: None
  uint32_t uProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::RenderModel_ComponentState_t, mTrackingToComponentRenderModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_ComponentState_t, mTrackingToComponentLocal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_ComponentState_t, uProperties) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_ComponentState_t, 0x64>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_ComponentState_t, "OVR.OpenVR", "RenderModel_ComponentState_t");
