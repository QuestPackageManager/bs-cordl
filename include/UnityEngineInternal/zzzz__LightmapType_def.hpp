#pragma once
// IWYU pragma private; include "UnityEngineInternal/LightmapType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapType)
// Forward declare root types
namespace UnityEngineInternal {
struct LightmapType;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::LightmapType);
// Type: UnityEngineInternal::LightmapType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngineInternal {
// Is value type: true
// CS Name: ::UnityEngineInternal::LightmapType
struct CORDL_TYPE LightmapType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightmapType_Unwrapped
  enum struct __LightmapType_Unwrapped : int32_t {
    __E_NoLightmap = static_cast<int32_t>(0xffffffff),
    __E_StaticLightmap = static_cast<int32_t>(0x0),
    __E_DynamicLightmap = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightmapType_Unwrapped() const noexcept {
    return static_cast<__LightmapType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightmapType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DynamicLightmap value: static_cast<int32_t>(0x1)
  static ::UnityEngineInternal::LightmapType const DynamicLightmap;

  /// @brief Field NoLightmap value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngineInternal::LightmapType const NoLightmap;

  /// @brief Field StaticLightmap value: static_cast<int32_t>(0x0)
  static ::UnityEngineInternal::LightmapType const StaticLightmap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10508 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::LightmapType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngineInternal::LightmapType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngineInternal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::LightmapType, "UnityEngineInternal", "LightmapType");
