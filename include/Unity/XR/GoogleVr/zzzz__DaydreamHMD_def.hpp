#pragma once
// IWYU pragma private; include "Unity/XR/GoogleVr/DaydreamHMD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(DaydreamHMD)
// Forward declare root types
namespace Unity::XR::GoogleVr {
class DaydreamHMD;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::GoogleVr::DaydreamHMD);
// Dependencies UnityEngine.InputSystem.XR.XRHMD
namespace Unity::XR::GoogleVr {
// Is value type: false
// CS Name: Unity.XR.GoogleVr.DaydreamHMD
class CORDL_TYPE DaydreamHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  static inline ::Unity::XR::GoogleVr::DaydreamHMD* New_ctor();

  /// @brief Method .ctor, addr 0x453c87c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DaydreamHMD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DaydreamHMD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DaydreamHMD(DaydreamHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DaydreamHMD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DaydreamHMD(DaydreamHMD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6528 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::GoogleVr::DaydreamHMD, 0x1c0>, "Size mismatch!");

} // namespace Unity::XR::GoogleVr
NEED_NO_BOX(::Unity::XR::GoogleVr::DaydreamHMD);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::GoogleVr::DaydreamHMD*, "Unity.XR.GoogleVr", "DaydreamHMD");
