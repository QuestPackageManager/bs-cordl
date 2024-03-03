#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Video3DLayout)
// Forward declare root types
namespace UnityEngine::Video {
struct Video3DLayout;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::Video3DLayout);
// Type: UnityEngine.Video::Video3DLayout
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: true
// CS Name: ::UnityEngine.Video::Video3DLayout
struct CORDL_TYPE Video3DLayout {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Video3DLayout_Unwrapped
  enum struct __Video3DLayout_Unwrapped : int32_t {
    __E_No3D = static_cast<int32_t>(0x0),
    __E_SideBySide3D = static_cast<int32_t>(0x1),
    __E_OverUnder3D = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Video3DLayout_Unwrapped() const noexcept {
    return static_cast<__Video3DLayout_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Video3DLayout();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Video3DLayout(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field No3D value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Video::Video3DLayout const No3D;

  /// @brief Field OverUnder3D value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Video::Video3DLayout const OverUnder3D;

  /// @brief Field SideBySide3D value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Video::Video3DLayout const SideBySide3D;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::Video3DLayout, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Video::Video3DLayout, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::Video3DLayout, "UnityEngine.Video", "Video3DLayout");
