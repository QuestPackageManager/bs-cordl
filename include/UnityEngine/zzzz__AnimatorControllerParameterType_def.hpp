#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorControllerParameterType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorControllerParameterType)
// Forward declare root types
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorControllerParameterType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AnimatorControllerParameterType
struct CORDL_TYPE AnimatorControllerParameterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimatorControllerParameterType_Unwrapped
  enum struct __AnimatorControllerParameterType_Unwrapped : int32_t {
    __E_Float = static_cast<int32_t>(0x1),
    __E_Int = static_cast<int32_t>(0x3),
    __E_Bool = static_cast<int32_t>(0x4),
    __E_Trigger = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimatorControllerParameterType_Unwrapped() const noexcept {
    return static_cast<__AnimatorControllerParameterType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorControllerParameterType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimatorControllerParameterType(int32_t value__) noexcept;

  /// @brief Field Bool value: I32(4)
  static ::UnityEngine::AnimatorControllerParameterType const Bool;

  /// @brief Field Float value: I32(1)
  static ::UnityEngine::AnimatorControllerParameterType const Float;

  /// @brief Field Int value: I32(3)
  static ::UnityEngine::AnimatorControllerParameterType const Int;

  /// @brief Field Trigger value: I32(9)
  static ::UnityEngine::AnimatorControllerParameterType const Trigger;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16858 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimatorControllerParameterType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorControllerParameterType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorControllerParameterType, "UnityEngine", "AnimatorControllerParameterType");
