#pragma once
// IWYU pragma private; include "OVR/OpenVR/HmdRect2_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HmdRect2_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdRect2_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdRect2_t);
// Dependencies OVR.OpenVR.HmdVector2_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.HmdRect2_t
struct CORDL_TYPE HmdRect2_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdRect2_t();

  // Ctor Parameters [CppParam { name: "vTopLeft", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }, CppParam { name: "vBottomRight", ty: "::OVR::OpenVR::HmdVector2_t", modifiers:
  // "", def_value: None }]
  constexpr HmdRect2_t(::OVR::OpenVR::HmdVector2_t vTopLeft, ::OVR::OpenVR::HmdVector2_t vBottomRight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8973 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field vTopLeft, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::HmdVector2_t vTopLeft;

  /// @brief Field vBottomRight, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::HmdVector2_t vBottomRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::HmdRect2_t, vTopLeft) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdRect2_t, vBottomRight) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdRect2_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdRect2_t, "OVR.OpenVR", "HmdRect2_t");
