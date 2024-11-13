#pragma once
// IWYU pragma private; include "UnityEngine/SkinWeights.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinWeights)
// Forward declare root types
namespace UnityEngine {
struct SkinWeights;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SkinWeights);
// Type: UnityEngine::SkinWeights
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::SkinWeights
struct CORDL_TYPE SkinWeights {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SkinWeights_Unwrapped
  enum struct __SkinWeights_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OneBone = static_cast<int32_t>(0x1),
    __E_TwoBones = static_cast<int32_t>(0x2),
    __E_FourBones = static_cast<int32_t>(0x4),
    __E_Unlimited = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SkinWeights_Unwrapped() const noexcept {
    return static_cast<__SkinWeights_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinWeights();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SkinWeights(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FourBones value: static_cast<int32_t>(0x4)
  static ::UnityEngine::SkinWeights const FourBones;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SkinWeights const None;

  /// @brief Field OneBone value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SkinWeights const OneBone;

  /// @brief Field TwoBones value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SkinWeights const TwoBones;

  /// @brief Field Unlimited value: static_cast<int32_t>(0xff)
  static ::UnityEngine::SkinWeights const Unlimited;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10719 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SkinWeights, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SkinWeights, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinWeights, "UnityEngine", "SkinWeights");
