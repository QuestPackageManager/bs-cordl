#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationLimitHinge)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimitHinge;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::RotationLimitHinge);
// Type: RootMotion.FinalIK::RotationLimitHinge
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::RotationLimitHinge*
class CORDL_TYPE RotationLimitHinge : public ::RootMotion::FinalIK::RotationLimit {
public:
  // Declarations
  /// @brief Field lastAngle, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_lastAngle, put = __cordl_internal_set_lastAngle)) float_t lastAngle;

  /// @brief Field lastRotation, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_lastRotation, put = __cordl_internal_set_lastRotation))::UnityEngine::Quaternion lastRotation;

  /// @brief Field max, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  /// @brief Field useLimits, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_useLimits, put = __cordl_internal_set_useLimits)) bool useLimits;

  /// @brief Field zeroAxisDisplayOffset, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_zeroAxisDisplayOffset, put = __cordl_internal_set_zeroAxisDisplayOffset)) float_t zeroAxisDisplayOffset;

  /// @brief Method ASThread, addr 0x1393168, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method LimitHinge, addr 0x13931c8, size 0x248, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion LimitHinge(::UnityEngine::Quaternion rotation);

  /// @brief Method LimitRotation, addr 0x13931ac, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);

  static inline ::RootMotion::FinalIK::RotationLimitHinge* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x13930e0, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x139309c, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method SupportGroup, addr 0x1393124, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr float_t const& __cordl_internal_get_lastAngle() const;

  constexpr float_t& __cordl_internal_get_lastAngle();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastRotation();

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr bool const& __cordl_internal_get_useLimits() const;

  constexpr bool& __cordl_internal_get_useLimits();

  constexpr float_t const& __cordl_internal_get_zeroAxisDisplayOffset() const;

  constexpr float_t& __cordl_internal_get_zeroAxisDisplayOffset();

  constexpr void __cordl_internal_set_lastAngle(float_t value);

  constexpr void __cordl_internal_set_lastRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  constexpr void __cordl_internal_set_useLimits(bool value);

  constexpr void __cordl_internal_set_zeroAxisDisplayOffset(float_t value);

  /// @brief Method .ctor, addr 0x1393410, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationLimitHinge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotationLimitHinge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationLimitHinge(RotationLimitHinge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationLimitHinge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationLimitHinge(RotationLimitHinge const&) = delete;

  /// @brief Field useLimits, offset: 0x38, size: 0x1, def value: None
  bool ___useLimits;

  /// @brief Field min, offset: 0x3c, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x40, size: 0x4, def value: None
  float_t ___max;

  /// @brief Field zeroAxisDisplayOffset, offset: 0x44, size: 0x4, def value: None
  float_t ___zeroAxisDisplayOffset;

  /// @brief Field lastRotation, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___lastRotation;

  /// @brief Field lastAngle, offset: 0x58, size: 0x4, def value: None
  float_t ___lastAngle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::RotationLimitHinge, 0x60>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitHinge, ___useLimits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitHinge, ___min) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitHinge, ___max) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitHinge, ___zeroAxisDisplayOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitHinge, ___lastRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitHinge, ___lastAngle) == 0x58, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitHinge);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitHinge*, "RootMotion.FinalIK", "RotationLimitHinge");
