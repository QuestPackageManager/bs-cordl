#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapsModeLegacy)
// Forward declare root types
namespace UnityEngine {
struct LightmapsModeLegacy;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightmapsModeLegacy);
// Type: UnityEngine::LightmapsModeLegacy
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8824))
// CS Name: ::UnityEngine::LightmapsModeLegacy
struct CORDL_TYPE LightmapsModeLegacy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightmapsModeLegacy_Unwrapped
  enum struct __LightmapsModeLegacy_Unwrapped : int32_t {
    __E_Single = static_cast<int32_t>(0x0),
    __E_Dual = static_cast<int32_t>(0x1),
    __E_Directional = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightmapsModeLegacy_Unwrapped() const noexcept {
    return static_cast<__LightmapsModeLegacy_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightmapsModeLegacy(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapsModeLegacy();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Single value: static_cast<int32_t>(0x0)
  static ::UnityEngine::LightmapsModeLegacy const Single;

  /// @brief Field Dual value: static_cast<int32_t>(0x1)
  static ::UnityEngine::LightmapsModeLegacy const Dual;

  /// @brief Field Directional value: static_cast<int32_t>(0x2)
  static ::UnityEngine::LightmapsModeLegacy const Directional;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightmapsModeLegacy, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::LightmapsModeLegacy, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightmapsModeLegacy, "UnityEngine", "LightmapsModeLegacy");
