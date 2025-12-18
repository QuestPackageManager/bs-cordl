#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IndexFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexFormat)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IndexFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::IndexFormat);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.IndexFormat
struct CORDL_TYPE IndexFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IndexFormat_Unwrapped
  enum struct __IndexFormat_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x0),
    __E_Common = static_cast<int32_t>(0x1),
    __E_Both = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IndexFormat_Unwrapped() const noexcept {
    return static_cast<__IndexFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndexFormat(int32_t value__) noexcept;

  /// @brief Field Both value: I32(2)
  static ::UnityEngine::ProBuilder::IndexFormat const Both;

  /// @brief Field Common value: I32(1)
  static ::UnityEngine::ProBuilder::IndexFormat const Common;

  /// @brief Field Local value: I32(0)
  static ::UnityEngine::ProBuilder::IndexFormat const Local;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::IndexFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::IndexFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IndexFormat, "UnityEngine.ProBuilder", "IndexFormat");
