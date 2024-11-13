#pragma once
// IWYU pragma private; include "UnityEngine/CollisionPairEventFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionPairEventFlags)
// Forward declare root types
namespace UnityEngine {
struct CollisionPairEventFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CollisionPairEventFlags);
// Type: UnityEngine::CollisionPairEventFlags
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::CollisionPairEventFlags
struct CORDL_TYPE CollisionPairEventFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __CollisionPairEventFlags_Unwrapped
  enum struct __CollisionPairEventFlags_Unwrapped : uint16_t {
    __E_SolveContacts = static_cast<uint16_t>(0x1u),
    __E_ModifyContacts = static_cast<uint16_t>(0x2u),
    __E_NotifyTouchFound = static_cast<uint16_t>(0x4u),
    __E_NotifyTouchPersists = static_cast<uint16_t>(0x8u),
    __E_NotifyTouchLost = static_cast<uint16_t>(0x10u),
    __E_NotifyTouchCCD = static_cast<uint16_t>(0x20u),
    __E_NotifyThresholdForceFound = static_cast<uint16_t>(0x40u),
    __E_NotifyThresholdForcePersists = static_cast<uint16_t>(0x80u),
    __E_NotifyThresholdForceLost = static_cast<uint16_t>(0x100u),
    __E_NotifyContactPoint = static_cast<uint16_t>(0x200u),
    __E_DetectDiscreteContact = static_cast<uint16_t>(0x400u),
    __E_DetectCCDContact = static_cast<uint16_t>(0x800u),
    __E_PreSolverVelocity = static_cast<uint16_t>(0x1000u),
    __E_PostSolverVelocity = static_cast<uint16_t>(0x2000u),
    __E_ContactEventPose = static_cast<uint16_t>(0x4000u),
    __E_NextFree = static_cast<uint16_t>(0x8000u),
    __E_ContactDefault = static_cast<uint16_t>(0x401u),
    __E_TriggerDefault = static_cast<uint16_t>(0x414u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CollisionPairEventFlags_Unwrapped() const noexcept {
    return static_cast<__CollisionPairEventFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollisionPairEventFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr CollisionPairEventFlags(uint16_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  /// @brief Field ContactDefault value: static_cast<uint16_t>(0x401u)
  static ::UnityEngine::CollisionPairEventFlags const ContactDefault;

  /// @brief Field ContactEventPose value: static_cast<uint16_t>(0x4000u)
  static ::UnityEngine::CollisionPairEventFlags const ContactEventPose;

  /// @brief Field DetectCCDContact value: static_cast<uint16_t>(0x800u)
  static ::UnityEngine::CollisionPairEventFlags const DetectCCDContact;

  /// @brief Field DetectDiscreteContact value: static_cast<uint16_t>(0x400u)
  static ::UnityEngine::CollisionPairEventFlags const DetectDiscreteContact;

  /// @brief Field ModifyContacts value: static_cast<uint16_t>(0x2u)
  static ::UnityEngine::CollisionPairEventFlags const ModifyContacts;

  /// @brief Field NextFree value: static_cast<uint16_t>(0x8000u)
  static ::UnityEngine::CollisionPairEventFlags const NextFree;

  /// @brief Field NotifyContactPoint value: static_cast<uint16_t>(0x200u)
  static ::UnityEngine::CollisionPairEventFlags const NotifyContactPoint;

  /// @brief Field NotifyThresholdForceFound value: static_cast<uint16_t>(0x40u)
  static ::UnityEngine::CollisionPairEventFlags const NotifyThresholdForceFound;

  /// @brief Field NotifyThresholdForceLost value: static_cast<uint16_t>(0x100u)
  static ::UnityEngine::CollisionPairEventFlags const NotifyThresholdForceLost;

  /// @brief Field NotifyThresholdForcePersists value: static_cast<uint16_t>(0x80u)
  static ::UnityEngine::CollisionPairEventFlags const NotifyThresholdForcePersists;

  /// @brief Field NotifyTouchCCD value: static_cast<uint16_t>(0x20u)
  static ::UnityEngine::CollisionPairEventFlags const NotifyTouchCCD;

  /// @brief Field NotifyTouchFound value: static_cast<uint16_t>(0x4u)
  static ::UnityEngine::CollisionPairEventFlags const NotifyTouchFound;

  /// @brief Field NotifyTouchLost value: static_cast<uint16_t>(0x10u)
  static ::UnityEngine::CollisionPairEventFlags const NotifyTouchLost;

  /// @brief Field NotifyTouchPersists value: static_cast<uint16_t>(0x8u)
  static ::UnityEngine::CollisionPairEventFlags const NotifyTouchPersists;

  /// @brief Field PostSolverVelocity value: static_cast<uint16_t>(0x2000u)
  static ::UnityEngine::CollisionPairEventFlags const PostSolverVelocity;

  /// @brief Field PreSolverVelocity value: static_cast<uint16_t>(0x1000u)
  static ::UnityEngine::CollisionPairEventFlags const PreSolverVelocity;

  /// @brief Field SolveContacts value: static_cast<uint16_t>(0x1u)
  static ::UnityEngine::CollisionPairEventFlags const SolveContacts;

  /// @brief Field TriggerDefault value: static_cast<uint16_t>(0x414u)
  static ::UnityEngine::CollisionPairEventFlags const TriggerDefault;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15734 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CollisionPairEventFlags, 0x2>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CollisionPairEventFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CollisionPairEventFlags, "UnityEngine", "CollisionPairEventFlags");
