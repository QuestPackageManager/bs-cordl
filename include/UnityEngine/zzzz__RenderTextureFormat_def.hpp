#pragma once
// IWYU pragma private; include "UnityEngine/RenderTextureFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTextureFormat)
// Forward declare root types
namespace UnityEngine {
struct RenderTextureFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderTextureFormat);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderTextureFormat
struct CORDL_TYPE RenderTextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderTextureFormat_Unwrapped
  enum struct __RenderTextureFormat_Unwrapped : int32_t {
    __E_ARGB32 = static_cast<int32_t>(0x0),
    __E_Depth = static_cast<int32_t>(0x1),
    __E_ARGBHalf = static_cast<int32_t>(0x2),
    __E_Shadowmap = static_cast<int32_t>(0x3),
    __E_RGB565 = static_cast<int32_t>(0x4),
    __E_ARGB4444 = static_cast<int32_t>(0x5),
    __E_ARGB1555 = static_cast<int32_t>(0x6),
    __E_Default = static_cast<int32_t>(0x7),
    __E_ARGB2101010 = static_cast<int32_t>(0x8),
    __E_DefaultHDR = static_cast<int32_t>(0x9),
    __E_ARGB64 = static_cast<int32_t>(0xa),
    __E_ARGBFloat = static_cast<int32_t>(0xb),
    __E_RGFloat = static_cast<int32_t>(0xc),
    __E_RGHalf = static_cast<int32_t>(0xd),
    __E_RFloat = static_cast<int32_t>(0xe),
    __E_RHalf = static_cast<int32_t>(0xf),
    __E_R8 = static_cast<int32_t>(0x10),
    __E_ARGBInt = static_cast<int32_t>(0x11),
    __E_RGInt = static_cast<int32_t>(0x12),
    __E_RInt = static_cast<int32_t>(0x13),
    __E_BGRA32 = static_cast<int32_t>(0x14),
    __E_RGB111110Float = static_cast<int32_t>(0x16),
    __E_RG32 = static_cast<int32_t>(0x17),
    __E_RGBAUShort = static_cast<int32_t>(0x18),
    __E_RG16 = static_cast<int32_t>(0x19),
    __E_BGRA10101010_XR = static_cast<int32_t>(0x1a),
    __E_BGR101010_XR = static_cast<int32_t>(0x1b),
    __E_R16 = static_cast<int32_t>(0x1c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderTextureFormat_Unwrapped() const noexcept {
    return static_cast<__RenderTextureFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderTextureFormat(int32_t value__) noexcept;

  /// @brief Field ARGB1555 value: I32(6)
  static ::UnityEngine::RenderTextureFormat const ARGB1555;

  /// @brief Field ARGB2101010 value: I32(8)
  static ::UnityEngine::RenderTextureFormat const ARGB2101010;

  /// @brief Field ARGB32 value: I32(0)
  static ::UnityEngine::RenderTextureFormat const ARGB32;

  /// @brief Field ARGB4444 value: I32(5)
  static ::UnityEngine::RenderTextureFormat const ARGB4444;

  /// @brief Field ARGB64 value: I32(10)
  static ::UnityEngine::RenderTextureFormat const ARGB64;

  /// @brief Field ARGBFloat value: I32(11)
  static ::UnityEngine::RenderTextureFormat const ARGBFloat;

  /// @brief Field ARGBHalf value: I32(2)
  static ::UnityEngine::RenderTextureFormat const ARGBHalf;

  /// @brief Field ARGBInt value: I32(17)
  static ::UnityEngine::RenderTextureFormat const ARGBInt;

  /// @brief Field BGR101010_XR value: I32(27)
  static ::UnityEngine::RenderTextureFormat const BGR101010_XR;

  /// @brief Field BGRA10101010_XR value: I32(26)
  static ::UnityEngine::RenderTextureFormat const BGRA10101010_XR;

  /// @brief Field BGRA32 value: I32(20)
  static ::UnityEngine::RenderTextureFormat const BGRA32;

  /// @brief Field Default value: I32(7)
  static ::UnityEngine::RenderTextureFormat const Default;

  /// @brief Field DefaultHDR value: I32(9)
  static ::UnityEngine::RenderTextureFormat const DefaultHDR;

  /// @brief Field Depth value: I32(1)
  static ::UnityEngine::RenderTextureFormat const Depth;

  /// @brief Field R16 value: I32(28)
  static ::UnityEngine::RenderTextureFormat const R16;

  /// @brief Field R8 value: I32(16)
  static ::UnityEngine::RenderTextureFormat const R8;

  /// @brief Field RFloat value: I32(14)
  static ::UnityEngine::RenderTextureFormat const RFloat;

  /// @brief Field RG16 value: I32(25)
  static ::UnityEngine::RenderTextureFormat const RG16;

  /// @brief Field RG32 value: I32(23)
  static ::UnityEngine::RenderTextureFormat const RG32;

  /// @brief Field RGB111110Float value: I32(22)
  static ::UnityEngine::RenderTextureFormat const RGB111110Float;

  /// @brief Field RGB565 value: I32(4)
  static ::UnityEngine::RenderTextureFormat const RGB565;

  /// @brief Field RGBAUShort value: I32(24)
  static ::UnityEngine::RenderTextureFormat const RGBAUShort;

  /// @brief Field RGFloat value: I32(12)
  static ::UnityEngine::RenderTextureFormat const RGFloat;

  /// @brief Field RGHalf value: I32(13)
  static ::UnityEngine::RenderTextureFormat const RGHalf;

  /// @brief Field RGInt value: I32(18)
  static ::UnityEngine::RenderTextureFormat const RGInt;

  /// @brief Field RHalf value: I32(15)
  static ::UnityEngine::RenderTextureFormat const RHalf;

  /// @brief Field RInt value: I32(19)
  static ::UnityEngine::RenderTextureFormat const RInt;

  /// @brief Field Shadowmap value: I32(3)
  static ::UnityEngine::RenderTextureFormat const Shadowmap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10767 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTextureFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureFormat, "UnityEngine", "RenderTextureFormat");
