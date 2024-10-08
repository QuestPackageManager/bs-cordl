#pragma once
// IWYU pragma private; include "UnityEngine/CollisionFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionFlags)
// Forward declare root types
namespace UnityEngine {
struct CollisionFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CollisionFlags);
// Type: UnityEngine::CollisionFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::CollisionFlags
struct CORDL_TYPE CollisionFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CollisionFlags_Unwrapped
  enum struct __CollisionFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Sides = static_cast<int32_t>(0x1),
    __E_Above = static_cast<int32_t>(0x2),
    __E_Below = static_cast<int32_t>(0x4),
    __E_CollidedSides = static_cast<int32_t>(0x1),
    __E_CollidedAbove = static_cast<int32_t>(0x2),
    __E_CollidedBelow = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CollisionFlags_Unwrapped() const noexcept {
    return static_cast<__CollisionFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollisionFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CollisionFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Above value: static_cast<int32_t>(0x2)
  static ::UnityEngine::CollisionFlags const Above;

  /// @brief Field Below value: static_cast<int32_t>(0x4)
  static ::UnityEngine::CollisionFlags const Below;

  /// @brief Field CollidedAbove value: static_cast<int32_t>(0x2)
  static ::UnityEngine::CollisionFlags const CollidedAbove;

  /// @brief Field CollidedBelow value: static_cast<int32_t>(0x4)
  static ::UnityEngine::CollisionFlags const CollidedBelow;

  /// @brief Field CollidedSides value: static_cast<int32_t>(0x1)
  static ::UnityEngine::CollisionFlags const CollidedSides;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::CollisionFlags const None;

  /// @brief Field Sides value: static_cast<int32_t>(0x1)
  static ::UnityEngine::CollisionFlags const Sides;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15679 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CollisionFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CollisionFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CollisionFlags, "UnityEngine", "CollisionFlags");
