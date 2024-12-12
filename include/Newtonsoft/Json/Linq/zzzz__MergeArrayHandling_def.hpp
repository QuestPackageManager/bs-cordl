#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/MergeArrayHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MergeArrayHandling)
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct MergeArrayHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Linq::MergeArrayHandling);
// Dependencies
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.MergeArrayHandling
struct CORDL_TYPE MergeArrayHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MergeArrayHandling_Unwrapped
  enum struct __MergeArrayHandling_Unwrapped : int32_t {
    __E_Concat = static_cast<int32_t>(0x0),
    __E_Union = static_cast<int32_t>(0x1),
    __E_Replace = static_cast<int32_t>(0x2),
    __E_Merge = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MergeArrayHandling_Unwrapped() const noexcept {
    return static_cast<__MergeArrayHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeArrayHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MergeArrayHandling(int32_t value__) noexcept;

  /// @brief Field Concat value: I32(0)
  static ::Newtonsoft::Json::Linq::MergeArrayHandling const Concat;

  /// @brief Field Merge value: I32(3)
  static ::Newtonsoft::Json::Linq::MergeArrayHandling const Merge;

  /// @brief Field Replace value: I32(2)
  static ::Newtonsoft::Json::Linq::MergeArrayHandling const Replace;

  /// @brief Field Union value: I32(1)
  static ::Newtonsoft::Json::Linq::MergeArrayHandling const Union;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10431 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::MergeArrayHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::MergeArrayHandling, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::MergeArrayHandling, "Newtonsoft.Json.Linq", "MergeArrayHandling");
