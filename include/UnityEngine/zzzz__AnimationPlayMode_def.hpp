#pragma once
// IWYU pragma private; include "UnityEngine/AnimationPlayMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationPlayMode)
// Forward declare root types
namespace UnityEngine {
struct AnimationPlayMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimationPlayMode);
// Type: UnityEngine::AnimationPlayMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::AnimationPlayMode
struct CORDL_TYPE AnimationPlayMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimationPlayMode_Unwrapped
  enum struct __AnimationPlayMode_Unwrapped : int32_t {
    __E_Stop = static_cast<int32_t>(0x0),
    __E_Queue = static_cast<int32_t>(0x1),
    __E_Mix = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimationPlayMode_Unwrapped() const noexcept {
    return static_cast<__AnimationPlayMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimationPlayMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Mix value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AnimationPlayMode const Mix;

  /// @brief Field Queue value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AnimationPlayMode const Queue;

  /// @brief Field Stop value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AnimationPlayMode const Stop;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationPlayMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimationPlayMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationPlayMode, "UnityEngine", "AnimationPlayMode");
