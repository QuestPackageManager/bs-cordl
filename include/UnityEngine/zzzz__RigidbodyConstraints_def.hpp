#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigidbodyConstraints)
// Forward declare root types
namespace UnityEngine {
struct RigidbodyConstraints;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RigidbodyConstraints);
// Type: UnityEngine::RigidbodyConstraints
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13941))
// CS Name: ::UnityEngine::RigidbodyConstraints
struct CORDL_TYPE RigidbodyConstraints {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RigidbodyConstraints_Unwrapped
  enum struct __RigidbodyConstraints_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_FreezePositionX = static_cast<int32_t>(0x2),
    __E_FreezePositionY = static_cast<int32_t>(0x4),
    __E_FreezePositionZ = static_cast<int32_t>(0x8),
    __E_FreezeRotationX = static_cast<int32_t>(0x10),
    __E_FreezeRotationY = static_cast<int32_t>(0x20),
    __E_FreezeRotationZ = static_cast<int32_t>(0x40),
    __E_FreezePosition = static_cast<int32_t>(0xe),
    __E_FreezeRotation = static_cast<int32_t>(0x70),
    __E_FreezeAll = static_cast<int32_t>(0x7e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RigidbodyConstraints_Unwrapped() const noexcept {
    return static_cast<__RigidbodyConstraints_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RigidbodyConstraints(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RigidbodyConstraints();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::RigidbodyConstraints const None;

  /// @brief Field FreezePositionX value: static_cast<int32_t>(0x2)
  static ::UnityEngine::RigidbodyConstraints const FreezePositionX;

  /// @brief Field FreezePositionY value: static_cast<int32_t>(0x4)
  static ::UnityEngine::RigidbodyConstraints const FreezePositionY;

  /// @brief Field FreezePositionZ value: static_cast<int32_t>(0x8)
  static ::UnityEngine::RigidbodyConstraints const FreezePositionZ;

  /// @brief Field FreezeRotationX value: static_cast<int32_t>(0x10)
  static ::UnityEngine::RigidbodyConstraints const FreezeRotationX;

  /// @brief Field FreezeRotationY value: static_cast<int32_t>(0x20)
  static ::UnityEngine::RigidbodyConstraints const FreezeRotationY;

  /// @brief Field FreezeRotationZ value: static_cast<int32_t>(0x40)
  static ::UnityEngine::RigidbodyConstraints const FreezeRotationZ;

  /// @brief Field FreezePosition value: static_cast<int32_t>(0xe)
  static ::UnityEngine::RigidbodyConstraints const FreezePosition;

  /// @brief Field FreezeRotation value: static_cast<int32_t>(0x70)
  static ::UnityEngine::RigidbodyConstraints const FreezeRotation;

  /// @brief Field FreezeAll value: static_cast<int32_t>(0x7e)
  static ::UnityEngine::RigidbodyConstraints const FreezeAll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RigidbodyConstraints, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RigidbodyConstraints, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RigidbodyConstraints, "UnityEngine", "RigidbodyConstraints");
