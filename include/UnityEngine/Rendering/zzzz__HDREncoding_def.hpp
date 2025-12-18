#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDREncoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDREncoding)
// Forward declare root types
namespace UnityEngine::Rendering {
struct HDREncoding;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::HDREncoding);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.HDREncoding
struct CORDL_TYPE HDREncoding {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HDREncoding_Unwrapped
  enum struct __HDREncoding_Unwrapped : int32_t {
    __E_Linear = static_cast<int32_t>(0x3),
    __E_PQ = static_cast<int32_t>(0x2),
    __E_Gamma22 = static_cast<int32_t>(0x4),
    __E_sRGB = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HDREncoding_Unwrapped() const noexcept {
    return static_cast<__HDREncoding_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDREncoding();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HDREncoding(int32_t value__) noexcept;

  /// @brief Field Gamma22 value: I32(4)
  static ::UnityEngine::Rendering::HDREncoding const Gamma22;

  /// @brief Field Linear value: I32(3)
  static ::UnityEngine::Rendering::HDREncoding const Linear;

  /// @brief Field PQ value: I32(2)
  static ::UnityEngine::Rendering::HDREncoding const PQ;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12140 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field sRGB value: I32(0)
  static ::UnityEngine::Rendering::HDREncoding const sRGB;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::HDREncoding, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HDREncoding, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDREncoding, "UnityEngine.Rendering", "HDREncoding");
