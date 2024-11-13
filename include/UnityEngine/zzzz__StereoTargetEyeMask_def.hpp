#pragma once
// IWYU pragma private; include "UnityEngine/StereoTargetEyeMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StereoTargetEyeMask)
// Forward declare root types
namespace UnityEngine {
struct StereoTargetEyeMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::StereoTargetEyeMask);
// Type: UnityEngine::StereoTargetEyeMask
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::StereoTargetEyeMask
struct CORDL_TYPE StereoTargetEyeMask {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StereoTargetEyeMask_Unwrapped
  enum struct __StereoTargetEyeMask_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
    __E_Both = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StereoTargetEyeMask_Unwrapped() const noexcept {
    return static_cast<__StereoTargetEyeMask_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StereoTargetEyeMask();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StereoTargetEyeMask(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Both value: static_cast<int32_t>(0x3)
  static ::UnityEngine::StereoTargetEyeMask const Both;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::StereoTargetEyeMask const Left;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::StereoTargetEyeMask const None;

  /// @brief Field Right value: static_cast<int32_t>(0x2)
  static ::UnityEngine::StereoTargetEyeMask const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10710 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::StereoTargetEyeMask, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::StereoTargetEyeMask, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StereoTargetEyeMask, "UnityEngine", "StereoTargetEyeMask");
