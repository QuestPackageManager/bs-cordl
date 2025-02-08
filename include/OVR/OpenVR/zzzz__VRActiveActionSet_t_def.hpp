#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRActiveActionSet_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRActiveActionSet_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VRActiveActionSet_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRActiveActionSet_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VRActiveActionSet_t
struct CORDL_TYPE VRActiveActionSet_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRActiveActionSet_t();

  // Ctor Parameters [CppParam { name: "ulActionSet", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ulRestrictedToDevice", ty: "uint64_t", modifiers: "", def_value: None },
  // CppParam { name: "ulSecondaryActionSet", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "unPadding", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "nPriority", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VRActiveActionSet_t(uint64_t ulActionSet, uint64_t ulRestrictedToDevice, uint64_t ulSecondaryActionSet, uint32_t unPadding, int32_t nPriority) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9042 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field ulActionSet, offset: 0x0, size: 0x8, def value: None
  uint64_t ulActionSet;

  /// @brief Field ulRestrictedToDevice, offset: 0x8, size: 0x8, def value: None
  uint64_t ulRestrictedToDevice;

  /// @brief Field ulSecondaryActionSet, offset: 0x10, size: 0x8, def value: None
  uint64_t ulSecondaryActionSet;

  /// @brief Field unPadding, offset: 0x18, size: 0x4, def value: None
  uint32_t unPadding;

  /// @brief Field nPriority, offset: 0x1c, size: 0x4, def value: None
  int32_t nPriority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VRActiveActionSet_t, ulActionSet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRActiveActionSet_t, ulRestrictedToDevice) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRActiveActionSet_t, ulSecondaryActionSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRActiveActionSet_t, unPadding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRActiveActionSet_t, nPriority) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRActiveActionSet_t, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRActiveActionSet_t, "OVR.OpenVR", "VRActiveActionSet_t");
