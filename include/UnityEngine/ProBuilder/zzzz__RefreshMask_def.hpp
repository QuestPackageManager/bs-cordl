#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/RefreshMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RefreshMask)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct RefreshMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::RefreshMask);
// Type: UnityEngine.ProBuilder::RefreshMask
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::RefreshMask
struct CORDL_TYPE RefreshMask {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RefreshMask_Unwrapped
  enum struct __RefreshMask_Unwrapped : int32_t {
    __E_UV = static_cast<int32_t>(0x1),
    __E_Colors = static_cast<int32_t>(0x2),
    __E_Normals = static_cast<int32_t>(0x4),
    __E_Tangents = static_cast<int32_t>(0x8),
    __E_Collisions = static_cast<int32_t>(0x10),
    __E_Bounds = static_cast<int32_t>(0x16),
    __E_All = static_cast<int32_t>(0x1f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RefreshMask_Unwrapped() const noexcept {
    return static_cast<__RefreshMask_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RefreshMask();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RefreshMask(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::ProBuilder::RefreshMask const All;

  /// @brief Field Bounds value: static_cast<int32_t>(0x16)
  static ::UnityEngine::ProBuilder::RefreshMask const Bounds;

  /// @brief Field Collisions value: static_cast<int32_t>(0x10)
  static ::UnityEngine::ProBuilder::RefreshMask const Collisions;

  /// @brief Field Colors value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::RefreshMask const Colors;

  /// @brief Field Normals value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ProBuilder::RefreshMask const Normals;

  /// @brief Field Tangents value: static_cast<int32_t>(0x8)
  static ::UnityEngine::ProBuilder::RefreshMask const Tangents;

  /// @brief Field UV value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::RefreshMask const UV;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::RefreshMask, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::RefreshMask, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::RefreshMask, "UnityEngine.ProBuilder", "RefreshMask");
