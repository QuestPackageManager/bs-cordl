#pragma once
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
// Type: Newtonsoft.Json.Linq::MergeArrayHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11972))
// CS Name: ::Newtonsoft.Json.Linq::MergeArrayHandling
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MergeArrayHandling(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeArrayHandling();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Concat value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Linq::MergeArrayHandling const Concat;

  /// @brief Field Union value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Linq::MergeArrayHandling const Union;

  /// @brief Field Replace value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Linq::MergeArrayHandling const Replace;

  /// @brief Field Merge value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::Linq::MergeArrayHandling const Merge;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::MergeArrayHandling, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::MergeArrayHandling, "Newtonsoft.Json.Linq", "MergeArrayHandling");
