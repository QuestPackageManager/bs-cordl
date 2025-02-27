#pragma once
// IWYU pragma private; include "UnityEngine/CollisionPairHeaderFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionPairHeaderFlags)
// Forward declare root types
namespace UnityEngine {
struct CollisionPairHeaderFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CollisionPairHeaderFlags);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CollisionPairHeaderFlags
struct CORDL_TYPE CollisionPairHeaderFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __CollisionPairHeaderFlags_Unwrapped
  enum struct __CollisionPairHeaderFlags_Unwrapped : uint16_t {
    __E_RemovedActor = static_cast<uint16_t>(0x1u),
    __E_RemovedOtherActor = static_cast<uint16_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CollisionPairHeaderFlags_Unwrapped() const noexcept {
    return static_cast<__CollisionPairHeaderFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollisionPairHeaderFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr CollisionPairHeaderFlags(uint16_t value__) noexcept;

  /// @brief Field RemovedActor value: U16(1)
  static ::UnityEngine::CollisionPairHeaderFlags const RemovedActor;

  /// @brief Field RemovedOtherActor value: U16(2)
  static ::UnityEngine::CollisionPairHeaderFlags const RemovedOtherActor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15776 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CollisionPairHeaderFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CollisionPairHeaderFlags, 0x2>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CollisionPairHeaderFlags, "UnityEngine", "CollisionPairHeaderFlags");
