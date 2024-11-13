#pragma once
// IWYU pragma private; include "UnityEngine/CollisionPairFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionPairFlags)
// Forward declare root types
namespace UnityEngine {
struct CollisionPairFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CollisionPairFlags);
// Type: UnityEngine::CollisionPairFlags
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::CollisionPairFlags
struct CORDL_TYPE CollisionPairFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __CollisionPairFlags_Unwrapped
  enum struct __CollisionPairFlags_Unwrapped : uint16_t {
    __E_RemovedShape = static_cast<uint16_t>(0x1u),
    __E_RemovedOtherShape = static_cast<uint16_t>(0x2u),
    __E_ActorPairHasFirstTouch = static_cast<uint16_t>(0x4u),
    __E_ActorPairLostTouch = static_cast<uint16_t>(0x8u),
    __E_InternalHasImpulses = static_cast<uint16_t>(0x10u),
    __E_InternalContactsAreFlipped = static_cast<uint16_t>(0x20u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CollisionPairFlags_Unwrapped() const noexcept {
    return static_cast<__CollisionPairFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollisionPairFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr CollisionPairFlags(uint16_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  /// @brief Field ActorPairHasFirstTouch value: static_cast<uint16_t>(0x4u)
  static ::UnityEngine::CollisionPairFlags const ActorPairHasFirstTouch;

  /// @brief Field ActorPairLostTouch value: static_cast<uint16_t>(0x8u)
  static ::UnityEngine::CollisionPairFlags const ActorPairLostTouch;

  /// @brief Field InternalContactsAreFlipped value: static_cast<uint16_t>(0x20u)
  static ::UnityEngine::CollisionPairFlags const InternalContactsAreFlipped;

  /// @brief Field InternalHasImpulses value: static_cast<uint16_t>(0x10u)
  static ::UnityEngine::CollisionPairFlags const InternalHasImpulses;

  /// @brief Field RemovedOtherShape value: static_cast<uint16_t>(0x2u)
  static ::UnityEngine::CollisionPairFlags const RemovedOtherShape;

  /// @brief Field RemovedShape value: static_cast<uint16_t>(0x1u)
  static ::UnityEngine::CollisionPairFlags const RemovedShape;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15733 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CollisionPairFlags, 0x2>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CollisionPairFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CollisionPairFlags, "UnityEngine", "CollisionPairFlags");
