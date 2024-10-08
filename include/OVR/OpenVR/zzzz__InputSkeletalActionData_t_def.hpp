#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputSkeletalActionData_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSkeletalActionData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputSkeletalActionData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputSkeletalActionData_t);
// Type: OVR.OpenVR::InputSkeletalActionData_t
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::InputSkeletalActionData_t
struct CORDL_TYPE InputSkeletalActionData_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSkeletalActionData_t();

  // Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "boneCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputSkeletalActionData_t(bool bActive, uint64_t activeOrigin, uint32_t boneCount) noexcept;

  /// @brief Field bActive, offset: 0x0, size: 0x1, def value: None
  bool bActive;

  /// @brief Field activeOrigin, offset: 0x8, size: 0x8, def value: None
  uint64_t activeOrigin;

  /// @brief Field boneCount, offset: 0x10, size: 0x4, def value: None
  uint32_t boneCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9006 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputSkeletalActionData_t, 0x18>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputSkeletalActionData_t, bActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputSkeletalActionData_t, activeOrigin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputSkeletalActionData_t, boneCount) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputSkeletalActionData_t, "OVR.OpenVR", "InputSkeletalActionData_t");
