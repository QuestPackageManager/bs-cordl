#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_TouchPadMove_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_TouchPadMove_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_TouchPadMove_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_TouchPadMove_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_TouchPadMove_t
struct CORDL_TYPE VREvent_TouchPadMove_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_TouchPadMove_t();

  // Ctor Parameters [CppParam { name: "bFingerDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flSecondsFingerDown", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "fValueXFirst", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueYFirst", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueXRaw", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueYRaw", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VREvent_TouchPadMove_t(bool bFingerDown, float_t flSecondsFingerDown, float_t fValueXFirst, float_t fValueYFirst, float_t fValueXRaw, float_t fValueYRaw) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8985 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field bFingerDown, offset: 0x0, size: 0x1, def value: None
  bool bFingerDown;

  /// @brief Field flSecondsFingerDown, offset: 0x4, size: 0x4, def value: None
  float_t flSecondsFingerDown;

  /// @brief Field fValueXFirst, offset: 0x8, size: 0x4, def value: None
  float_t fValueXFirst;

  /// @brief Field fValueYFirst, offset: 0xc, size: 0x4, def value: None
  float_t fValueYFirst;

  /// @brief Field fValueXRaw, offset: 0x10, size: 0x4, def value: None
  float_t fValueXRaw;

  /// @brief Field fValueYRaw, offset: 0x14, size: 0x4, def value: None
  float_t fValueYRaw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_TouchPadMove_t, bFingerDown) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_TouchPadMove_t, flSecondsFingerDown) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_TouchPadMove_t, fValueXFirst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_TouchPadMove_t, fValueYFirst) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_TouchPadMove_t, fValueXRaw) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_TouchPadMove_t, fValueYRaw) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_TouchPadMove_t, 0x18>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_TouchPadMove_t, "OVR.OpenVR", "VREvent_TouchPadMove_t");
