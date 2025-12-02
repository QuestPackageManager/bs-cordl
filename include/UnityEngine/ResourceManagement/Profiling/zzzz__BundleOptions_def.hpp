#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/BundleOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BundleOptions)
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
struct BundleOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Profiling::BundleOptions);
// Dependencies
namespace UnityEngine::ResourceManagement::Profiling {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Profiling.BundleOptions
struct CORDL_TYPE BundleOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int16_t;

  /// @brief Nested struct __BundleOptions_Unwrapped
  enum struct __BundleOptions_Unwrapped : int16_t {
    __E_None = static_cast<int16_t>(0x0),
    __E_CachingEnabled = static_cast<int16_t>(0x1),
    __E_CheckSumEnabled = static_cast<int16_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BundleOptions_Unwrapped() const noexcept {
    return static_cast<__BundleOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int16_t() const noexcept {
    return static_cast<int16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BundleOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr BundleOptions(int16_t value__) noexcept;

  /// @brief Field CachingEnabled value: I16(1)
  static ::UnityEngine::ResourceManagement::Profiling::BundleOptions const CachingEnabled;

  /// @brief Field CheckSumEnabled value: I16(2)
  static ::UnityEngine::ResourceManagement::Profiling::BundleOptions const CheckSumEnabled;

  /// @brief Field None value: I16(0)
  static ::UnityEngine::ResourceManagement::Profiling::BundleOptions const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18755 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  int16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::BundleOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Profiling::BundleOptions, 0x2>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Profiling
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::BundleOptions, "UnityEngine.ResourceManagement.Profiling", "BundleOptions");
