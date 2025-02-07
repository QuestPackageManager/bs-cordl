#pragma once
// IWYU pragma private; include "UnityEngine/SkinQuality.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinQuality)
// Forward declare root types
namespace UnityEngine {
struct SkinQuality;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SkinQuality);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SkinQuality
struct CORDL_TYPE SkinQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SkinQuality_Unwrapped
  enum struct __SkinQuality_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Bone1 = static_cast<int32_t>(0x1),
    __E_Bone2 = static_cast<int32_t>(0x2),
    __E_Bone4 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SkinQuality_Unwrapped() const noexcept {
    return static_cast<__SkinQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SkinQuality(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::SkinQuality const Auto;

  /// @brief Field Bone1 value: I32(1)
  static ::UnityEngine::SkinQuality const Bone1;

  /// @brief Field Bone2 value: I32(2)
  static ::UnityEngine::SkinQuality const Bone2;

  /// @brief Field Bone4 value: I32(4)
  static ::UnityEngine::SkinQuality const Bone4;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10758 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SkinQuality, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SkinQuality, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinQuality, "UnityEngine", "SkinQuality");
