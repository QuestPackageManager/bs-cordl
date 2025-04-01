#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshArrays.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshArrays)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct MeshArrays;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::MeshArrays);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.MeshArrays
struct CORDL_TYPE MeshArrays {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MeshArrays_Unwrapped
  enum struct __MeshArrays_Unwrapped : int32_t {
    __E_Position = static_cast<int32_t>(0x1),
    __E_Texture0 = static_cast<int32_t>(0x2),
    __E_Texture1 = static_cast<int32_t>(0x4),
    __E_Lightmap = static_cast<int32_t>(0x4),
    __E_Texture2 = static_cast<int32_t>(0x8),
    __E_Texture3 = static_cast<int32_t>(0x10),
    __E_Color = static_cast<int32_t>(0x20),
    __E_Normal = static_cast<int32_t>(0x40),
    __E_Tangent = static_cast<int32_t>(0x80),
    __E_All = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MeshArrays_Unwrapped() const noexcept {
    return static_cast<__MeshArrays_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshArrays();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshArrays(int32_t value__) noexcept;

  /// @brief Field All value: I32(255)
  static ::UnityEngine::ProBuilder::MeshArrays const All;

  /// @brief Field Color value: I32(32)
  static ::UnityEngine::ProBuilder::MeshArrays const Color;

  /// @brief Field Lightmap value: I32(4)
  static ::UnityEngine::ProBuilder::MeshArrays const Lightmap;

  /// @brief Field Normal value: I32(64)
  static ::UnityEngine::ProBuilder::MeshArrays const Normal;

  /// @brief Field Position value: I32(1)
  static ::UnityEngine::ProBuilder::MeshArrays const Position;

  /// @brief Field Tangent value: I32(128)
  static ::UnityEngine::ProBuilder::MeshArrays const Tangent;

  /// @brief Field Texture0 value: I32(2)
  static ::UnityEngine::ProBuilder::MeshArrays const Texture0;

  /// @brief Field Texture1 value: I32(4)
  static ::UnityEngine::ProBuilder::MeshArrays const Texture1;

  /// @brief Field Texture2 value: I32(8)
  static ::UnityEngine::ProBuilder::MeshArrays const Texture2;

  /// @brief Field Texture3 value: I32(16)
  static ::UnityEngine::ProBuilder::MeshArrays const Texture3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14282 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshArrays, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshArrays, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshArrays, "UnityEngine.ProBuilder", "MeshArrays");
